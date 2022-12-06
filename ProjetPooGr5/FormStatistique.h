#pragma once
#include "CLservice.h"
namespace ProjetPooGr5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormStatistique
	/// </summary>
	public ref class FormStatistique : public System::Windows::Forms::Form
	{
	public:
		FormStatistique(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormStatistique()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Comp_Svc::CLservice^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ id_client;







	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->id_client = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1089, 498);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormStatistique::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(26, 241);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 28);
			this->button3->TabIndex = 50;
			this->button3->Text = L"panier moyen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormStatistique::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 8);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1125, 196);
			this->dataGridView1->TabIndex = 49;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(439, 451);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 28);
			this->button2->TabIndex = 51;
			this->button2->Text = L"Valeur Commercial";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormStatistique::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(439, 338);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 28);
			this->button4->TabIndex = 52;
			this->button4->Text = L"Montant Client";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormStatistique::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(439, 241);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(144, 28);
			this->button5->TabIndex = 53;
			this->button5->Text = L"Moins Vendu";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FormStatistique::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(26, 451);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 28);
			this->button6->TabIndex = 54;
			this->button6->Text = L"Plus Vendu";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &FormStatistique::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(26, 338);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(144, 28);
			this->button7->TabIndex = 55;
			this->button7->Text = L"inf seuil réapro";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &FormStatistique::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(826, 451);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(144, 28);
			this->button8->TabIndex = 56;
			this->button8->Text = L"derniere requete";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &FormStatistique::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(826, 241);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(144, 28);
			this->button9->TabIndex = 57;
			this->button9->Text = L"Valeur Achat";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &FormStatistique::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(826, 338);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(144, 28);
			this->button10->TabIndex = 58;
			this->button10->Text = L"CA par mois";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &FormStatistique::button10_Click);
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(994, 344);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(100, 22);
			this->id_client->TabIndex = 59;
			this->id_client->Text = L"Mois";
			// 
			// FormStatistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1176, 533);
			this->Controls->Add(this->id_client);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"FormStatistique";
			this->Text = L"FormStatistique";
			this->Load += gcnew System::EventHandler(this, &FormStatistique::FormStatistique_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oDs = this->oSvc->panierMoyen("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oDs = this->oSvc->seuilReapro("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oDs = this->oSvc->ArticlePlusVendu("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oDs = this->oSvc->ArticleMoinsVendu("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oDs = this->oSvc->selectionnerMontantClient("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oDs = this->oSvc->ValeurCommercial("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oDs = this->oSvc->ValeurAchat("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oDs = this->oSvc->ChiffreAffaire("Rsl",this->id_client->Text);
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oSvc->ChiffreAffaire("Rsl",this->id_client->Text);
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oDs = this->oSvc->Variation("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void FormStatistique_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
