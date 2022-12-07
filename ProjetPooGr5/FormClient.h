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
	/// Description résumée de FormClient
	/// </summary>
	public ref class FormClient : public System::Windows::Forms::Form
	{
	public:
		FormClient(void)
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
		~FormClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;

	private: NS_Comp_Svc::CLservice^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_Id_date_premiere_commande;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_id_adresse_facturation;

	private: System::Windows::Forms::TextBox^ txt_id_date_naissance;





	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_id_adresses_livraison;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ id_client;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_id_client_mod;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_colonne_a_changer;

	private: System::Windows::Forms::Label^ label11;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormClient::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_Id_date_premiere_commande = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_id_adresse_facturation = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_date_naissance = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_id_adresses_livraison = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->id_client = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_id_client_mod = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_colonne_a_changer = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
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
			this->button1->Location = System::Drawing::Point(1066, 551);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormClient::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1125, 196);
			this->dataGridView1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Pink;
			this->button2->Location = System::Drawing::Point(997, 228);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"afficher client";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormClient::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Pink;
			this->button3->Location = System::Drawing::Point(20, 228);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Inserer client";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormClient::button3_Click);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(20, 280);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(237, 22);
			this->txt_nom->TabIndex = 4;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &FormClient::txt_nom_TextChanged);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(16, 328);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(237, 22);
			this->txt_prenom->TabIndex = 5;
			this->txt_prenom->TextChanged += gcnew System::EventHandler(this, &FormClient::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 260);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nom";
			this->label1->Click += gcnew System::EventHandler(this, &FormClient::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 308);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Prenom";
			this->label2->Click += gcnew System::EventHandler(this, &FormClient::label2_Click);
			// 
			// txt_Id_date_premiere_commande
			// 
			this->txt_Id_date_premiere_commande->Location = System::Drawing::Point(16, 376);
			this->txt_Id_date_premiere_commande->Margin = System::Windows::Forms::Padding(4);
			this->txt_Id_date_premiere_commande->Name = L"txt_Id_date_premiere_commande";
			this->txt_Id_date_premiere_commande->Size = System::Drawing::Size(237, 22);
			this->txt_Id_date_premiere_commande->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 356);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"date_premiere_commande";
			this->label3->Click += gcnew System::EventHandler(this, &FormClient::label3_Click);
			// 
			// txt_id_adresse_facturation
			// 
			this->txt_id_adresse_facturation->Location = System::Drawing::Point(16, 472);
			this->txt_id_adresse_facturation->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_adresse_facturation->Name = L"txt_id_adresse_facturation";
			this->txt_id_adresse_facturation->Size = System::Drawing::Size(237, 22);
			this->txt_id_adresse_facturation->TabIndex = 10;
			// 
			// txt_id_date_naissance
			// 
			this->txt_id_date_naissance->Location = System::Drawing::Point(16, 424);
			this->txt_id_date_naissance->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_date_naissance->Name = L"txt_id_date_naissance";
			this->txt_id_date_naissance->Size = System::Drawing::Size(237, 22);
			this->txt_id_date_naissance->TabIndex = 11;
			this->txt_id_date_naissance->TextChanged += gcnew System::EventHandler(this, &FormClient::textBox2_TextChanged_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 452);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"ID_adresses_facturation";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 404);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"date_naissance";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 500);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"ID_adresses_livraison";
			this->label6->Click += gcnew System::EventHandler(this, &FormClient::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(55, 500);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 17);
			this->label7->TabIndex = 15;
			// 
			// txt_id_adresses_livraison
			// 
			this->txt_id_adresses_livraison->Location = System::Drawing::Point(16, 520);
			this->txt_id_adresses_livraison->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_adresses_livraison->Name = L"txt_id_adresses_livraison";
			this->txt_id_adresses_livraison->Size = System::Drawing::Size(237, 22);
			this->txt_id_adresses_livraison->TabIndex = 16;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Pink;
			this->button4->Location = System::Drawing::Point(385, 228);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 28);
			this->button4->TabIndex = 17;
			this->button4->Text = L"supprimer client";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormClient::button4_Click);
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(386, 280);
			this->id_client->Margin = System::Windows::Forms::Padding(4);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(167, 22);
			this->id_client->TabIndex = 18;
			this->id_client->TextChanged += gcnew System::EventHandler(this, &FormClient::id_client_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(386, 260);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"id client";
			this->label8->Click += gcnew System::EventHandler(this, &FormClient::label8_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Pink;
			this->button5->Location = System::Drawing::Point(706, 228);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(168, 28);
			this->button5->TabIndex = 20;
			this->button5->Text = L"modifier client";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormClient::button5_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(702, 260);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 17);
			this->label9->TabIndex = 21;
			this->label9->Text = L"id client";
			// 
			// txt_id_client_mod
			// 
			this->txt_id_client_mod->Location = System::Drawing::Point(706, 280);
			this->txt_id_client_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_client_mod->Name = L"txt_id_client_mod";
			this->txt_id_client_mod->Size = System::Drawing::Size(167, 22);
			this->txt_id_client_mod->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(702, 308);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(134, 17);
			this->label10->TabIndex = 23;
			this->label10->Text = L"colonne_à_changer";
			this->label10->Click += gcnew System::EventHandler(this, &FormClient::label10_Click);
			// 
			// txt_colonne_a_changer
			// 
			this->txt_colonne_a_changer->Location = System::Drawing::Point(706, 328);
			this->txt_colonne_a_changer->Margin = System::Windows::Forms::Padding(4);
			this->txt_colonne_a_changer->Name = L"txt_colonne_a_changer";
			this->txt_colonne_a_changer->Size = System::Drawing::Size(167, 22);
			this->txt_colonne_a_changer->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(702, 356);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(93, 17);
			this->label11->TabIndex = 25;
			this->label11->Text = L"nouvel valeur";
			// 
			// txt_nouvel_valeur
			// 
			this->txt_nouvel_valeur->Location = System::Drawing::Point(706, 376);
			this->txt_nouvel_valeur->Margin = System::Windows::Forms::Padding(4);
			this->txt_nouvel_valeur->Name = L"txt_nouvel_valeur";
			this->txt_nouvel_valeur->Size = System::Drawing::Size(167, 22);
			this->txt_nouvel_valeur->TabIndex = 26;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Pink;
			this->button6->Location = System::Drawing::Point(997, 280);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 28);
			this->button6->TabIndex = 27;
			this->button6->Text = L"afficher table client";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &FormClient::button6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(389, 356);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 186);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// FormClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1192, 603);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->txt_nouvel_valeur);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txt_colonne_a_changer);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_id_client_mod);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button5);
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
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"FormClient";
			this->Text = L"FormClient";
			this->Load += gcnew System::EventHandler(this, &FormClient::FormClient_Load);
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
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservice();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservice();
		this->oSvc->ajouterUnclient(this->txt_nom->Text, this->txt_prenom->Text, this->txt_Id_date_premiere_commande->Text, this->txt_id_adresse_facturation->Text, this->txt_id_date_naissance->Text, this->txt_id_adresses_livraison->Text);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservice();
		this->oSvc->supprimerUnclient(this->id_client->Text);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservice();
		this->oDs = this->oSvc->selectionnertableclient("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
		
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservice();
		this->oSvc->modifierUnclient(this->txt_id_client_mod->Text, this->txt_colonne_a_changer->Text, this->txt_nouvel_valeur->Text);


	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void id_client_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FormClient_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
