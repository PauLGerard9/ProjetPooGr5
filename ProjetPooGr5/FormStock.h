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
	/// Description r�sum�e de FormStock
	/// </summary>
	public ref class FormStock : public System::Windows::Forms::Form
	{
	public:
		FormStock(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~FormStock()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Svc::CLservice^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_id_adresses_livraison;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_id_date_naissance;
	private: System::Windows::Forms::TextBox^ txt_id_adresse_facturation;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_Id_date_premiere_commande;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ id_client;
	private: System::Windows::Forms::Button^ button4;
	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_id_adresses_livraison = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_id_date_naissance = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_adresse_facturation = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_Id_date_premiere_commande = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->id_client = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1130, 603);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormStock::button1_Click);
			// 
			// txt_id_adresses_livraison
			// 
			this->txt_id_adresses_livraison->Location = System::Drawing::Point(119, 525);
			this->txt_id_adresses_livraison->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_adresses_livraison->Name = L"txt_id_adresses_livraison";
			this->txt_id_adresses_livraison->Size = System::Drawing::Size(237, 22);
			this->txt_id_adresses_livraison->TabIndex = 32;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(158, 505);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 17);
			this->label7->TabIndex = 31;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(115, 505);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 17);
			this->label6->TabIndex = 30;
			this->label6->Text = L"ID_adresses_livraison";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(115, 409);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 17);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Id_date_naissance";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(115, 457);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 17);
			this->label4->TabIndex = 28;
			this->label4->Text = L"ID_adresses_facturation";
			// 
			// txt_id_date_naissance
			// 
			this->txt_id_date_naissance->Location = System::Drawing::Point(119, 429);
			this->txt_id_date_naissance->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_date_naissance->Name = L"txt_id_date_naissance";
			this->txt_id_date_naissance->Size = System::Drawing::Size(237, 22);
			this->txt_id_date_naissance->TabIndex = 27;
			// 
			// txt_id_adresse_facturation
			// 
			this->txt_id_adresse_facturation->Location = System::Drawing::Point(119, 477);
			this->txt_id_adresse_facturation->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_adresse_facturation->Name = L"txt_id_adresse_facturation";
			this->txt_id_adresse_facturation->Size = System::Drawing::Size(237, 22);
			this->txt_id_adresse_facturation->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(115, 361);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 17);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Id_date_premiere_commande";
			// 
			// txt_Id_date_premiere_commande
			// 
			this->txt_Id_date_premiere_commande->Location = System::Drawing::Point(119, 381);
			this->txt_Id_date_premiere_commande->Margin = System::Windows::Forms::Padding(4);
			this->txt_Id_date_premiere_commande->Name = L"txt_Id_date_premiere_commande";
			this->txt_Id_date_premiere_commande->Size = System::Drawing::Size(237, 22);
			this->txt_Id_date_premiere_commande->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(119, 313);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Prenom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(119, 265);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Nom";
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(119, 333);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(237, 22);
			this->txt_prenom->TabIndex = 21;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(123, 285);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(237, 22);
			this->txt_nom->TabIndex = 20;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(123, 233);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Inserer stock";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(957, 248);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 28);
			this->button2->TabIndex = 18;
			this->button2->Text = L"afficher stock";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormStock::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(22, 30);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1125, 196);
			this->dataGridView1->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(443, 266);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 17);
			this->label8->TabIndex = 38;
			this->label8->Text = L"id Stock";
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(443, 286);
			this->id_client->Margin = System::Windows::Forms::Padding(4);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(167, 22);
			this->id_client->TabIndex = 37;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(447, 234);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 28);
			this->button4->TabIndex = 36;
			this->button4->Text = L"supprimer Stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormStock::button4_Click);
			// 
			// FormStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1278, 666);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->id_client);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->txt_id_adresses_livraison);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_id_date_naissance);
			this->Controls->Add(this->txt_id_adresse_facturation);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_Id_date_premiere_commande);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"FormStock";
			this->Text = L"FormStock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oSvc = gcnew NS_Comp_Svc::CLservice();
		this->oDs = this->oSvc->selectionnerTousLeStock("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oSvc->supprimerUnStock(this->id_client->Text);
}
};
}
