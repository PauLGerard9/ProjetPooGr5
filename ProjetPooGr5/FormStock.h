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
	/// Description résumée de FormStock
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
		/// Nettoyage des ressources utilisées.
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
	private: System::Windows::Forms::TextBox^ txt_id_tva;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_prix_ht;
	private: System::Windows::Forms::TextBox^ txt_seuil_reapro;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_quantité;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_nom_article;

	private: System::Windows::Forms::TextBox^ txt_ref_article;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ id_client;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ colonne_a_changer;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_id_article;
	private: System::Windows::Forms::TextBox^ txt_colonne_a_changer;
	private: System::Windows::Forms::TextBox^ txt_nouvel_valeur;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormStock::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_id_tva = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_prix_ht = (gcnew System::Windows::Forms::TextBox());
			this->txt_seuil_reapro = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_quantité = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_nom_article = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_article = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->id_client = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->colonne_a_changer = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_id_article = (gcnew System::Windows::Forms::TextBox());
			this->txt_colonne_a_changer = (gcnew System::Windows::Forms::TextBox());
			this->txt_nouvel_valeur = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Pink;
			this->button1->Location = System::Drawing::Point(1160, 549);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormStock::button1_Click);
			// 
			// txt_id_tva
			// 
			this->txt_id_tva->Location = System::Drawing::Point(17, 549);
			this->txt_id_tva->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_id_tva->Name = L"txt_id_tva";
			this->txt_id_tva->Size = System::Drawing::Size(237, 22);
			this->txt_id_tva->TabIndex = 32;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(55, 528);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 17);
			this->label7->TabIndex = 31;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 528);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 17);
			this->label6->TabIndex = 30;
			this->label6->Text = L"ID_TVA";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 432);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 17);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Prix_HT";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 480);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 17);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Seuil réaprovisionement";
			// 
			// txt_prix_ht
			// 
			this->txt_prix_ht->Location = System::Drawing::Point(17, 453);
			this->txt_prix_ht->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_prix_ht->Name = L"txt_prix_ht";
			this->txt_prix_ht->Size = System::Drawing::Size(237, 22);
			this->txt_prix_ht->TabIndex = 27;
			// 
			// txt_seuil_reapro
			// 
			this->txt_seuil_reapro->Location = System::Drawing::Point(17, 501);
			this->txt_seuil_reapro->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_seuil_reapro->Name = L"txt_seuil_reapro";
			this->txt_seuil_reapro->Size = System::Drawing::Size(237, 22);
			this->txt_seuil_reapro->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 384);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 17);
			this->label3->TabIndex = 25;
			this->label3->Text = L"quantité";
			// 
			// txt_quantité
			// 
			this->txt_quantité->Location = System::Drawing::Point(17, 405);
			this->txt_quantité->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_quantité->Name = L"txt_quantité";
			this->txt_quantité->Size = System::Drawing::Size(237, 22);
			this->txt_quantité->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 336);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 17);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Nom article";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 288);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 17);
			this->label1->TabIndex = 22;
			this->label1->Text = L"reference article";
			// 
			// txt_nom_article
			// 
			this->txt_nom_article->Location = System::Drawing::Point(17, 357);
			this->txt_nom_article->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_nom_article->Name = L"txt_nom_article";
			this->txt_nom_article->Size = System::Drawing::Size(237, 22);
			this->txt_nom_article->TabIndex = 21;
			// 
			// txt_ref_article
			// 
			this->txt_ref_article->Location = System::Drawing::Point(21, 309);
			this->txt_ref_article->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_ref_article->Name = L"txt_ref_article";
			this->txt_ref_article->Size = System::Drawing::Size(237, 22);
			this->txt_ref_article->TabIndex = 20;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Pink;
			this->button3->Location = System::Drawing::Point(21, 256);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 28);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Inserer stock";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormStock::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Pink;
			this->button2->Location = System::Drawing::Point(1002, 255);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 28);
			this->button2->TabIndex = 18;
			this->button2->Text = L"afficher stock";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormStock::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(21, 30);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1125, 196);
			this->dataGridView1->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(366, 288);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 17);
			this->label8->TabIndex = 38;
			this->label8->Text = L"id Stock";
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(366, 308);
			this->id_client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(167, 22);
			this->id_client->TabIndex = 37;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Pink;
			this->button4->Location = System::Drawing::Point(370, 256);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 28);
			this->button4->TabIndex = 36;
			this->button4->Text = L"supprimer Stock";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormStock::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Pink;
			this->button5->Location = System::Drawing::Point(680, 255);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(144, 28);
			this->button5->TabIndex = 39;
			this->button5->Text = L"modifier stock";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormStock::button5_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(676, 383);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 17);
			this->label9->TabIndex = 40;
			this->label9->Text = L"nouvel valeur";
			// 
			// colonne_a_changer
			// 
			this->colonne_a_changer->AutoSize = true;
			this->colonne_a_changer->Location = System::Drawing::Point(676, 336);
			this->colonne_a_changer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->colonne_a_changer->Name = L"colonne_a_changer";
			this->colonne_a_changer->Size = System::Drawing::Size(126, 17);
			this->colonne_a_changer->TabIndex = 41;
			this->colonne_a_changer->Text = L"colonne a changer";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(676, 288);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 17);
			this->label11->TabIndex = 42;
			this->label11->Text = L"Ref_article";
			this->label11->Click += gcnew System::EventHandler(this, &FormStock::label11_Click);
			// 
			// txt_id_article
			// 
			this->txt_id_article->Location = System::Drawing::Point(680, 308);
			this->txt_id_article->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_id_article->Name = L"txt_id_article";
			this->txt_id_article->Size = System::Drawing::Size(237, 22);
			this->txt_id_article->TabIndex = 43;
			// 
			// txt_colonne_a_changer
			// 
			this->txt_colonne_a_changer->Location = System::Drawing::Point(680, 356);
			this->txt_colonne_a_changer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_colonne_a_changer->Name = L"txt_colonne_a_changer";
			this->txt_colonne_a_changer->Size = System::Drawing::Size(237, 22);
			this->txt_colonne_a_changer->TabIndex = 44;
			this->txt_colonne_a_changer->TextChanged += gcnew System::EventHandler(this, &FormStock::textBox2_TextChanged);
			// 
			// txt_nouvel_valeur
			// 
			this->txt_nouvel_valeur->Location = System::Drawing::Point(680, 402);
			this->txt_nouvel_valeur->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_nouvel_valeur->Name = L"txt_nouvel_valeur";
			this->txt_nouvel_valeur->Size = System::Drawing::Size(237, 22);
			this->txt_nouvel_valeur->TabIndex = 45;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Pink;
			this->button6->Location = System::Drawing::Point(1002, 290);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 28);
			this->button6->TabIndex = 46;
			this->button6->Text = L"afficher table article";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &FormStock::button6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(366, 357);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 186);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 61;
			this->pictureBox1->TabStop = false;
			// 
			// FormStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1277, 666);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->txt_nouvel_valeur);
			this->Controls->Add(this->txt_colonne_a_changer);
			this->Controls->Add(this->txt_id_article);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->colonne_a_changer);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->id_client);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->txt_id_tva);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_prix_ht);
			this->Controls->Add(this->txt_seuil_reapro);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_quantité);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_nom_article);
			this->Controls->Add(this->txt_ref_article);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"FormStock";
			this->Text = L"FormStock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
   private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	   this->oSvc = gcnew NS_Comp_Svc::CLservice();
	   this->oSvc->ajouterUnstock(this->txt_ref_article->Text, this->txt_nom_article->Text, this->txt_quantité->Text, this->txt_prix_ht->Text, this->txt_seuil_reapro->Text, this->txt_id_tva->Text);
   }
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservice();
		this->oSvc->modifierUnstock(this->txt_id_article->Text, this->txt_colonne_a_changer->Text, this->txt_nouvel_valeur->Text);
	}
		  
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
