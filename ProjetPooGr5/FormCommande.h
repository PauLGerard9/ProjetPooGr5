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
	/// Description résumée de FormCommande
	/// </summary>
	public ref class FormCommande : public System::Windows::Forms::Form
	{
	public:
		FormCommande(void)
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
		~FormCommande()
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ id_client;
	private: System::Windows::Forms::Button^ button4;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->id_client = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1077, 570);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormCommande::button1_Click);
			// 
			// txt_id_adresses_livraison
			// 
			this->txt_id_adresses_livraison->Location = System::Drawing::Point(110, 508);
			this->txt_id_adresses_livraison->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_adresses_livraison->Name = L"txt_id_adresses_livraison";
			this->txt_id_adresses_livraison->Size = System::Drawing::Size(237, 22);
			this->txt_id_adresses_livraison->TabIndex = 48;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(149, 488);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 17);
			this->label7->TabIndex = 47;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(106, 488);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 17);
			this->label6->TabIndex = 46;
			this->label6->Text = L"ID_adresses_livraison";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(106, 392);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 17);
			this->label5->TabIndex = 45;
			this->label5->Text = L"Id_date_naissance";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(106, 440);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 17);
			this->label4->TabIndex = 44;
			this->label4->Text = L"ID_adresses_facturation";
			// 
			// txt_id_date_naissance
			// 
			this->txt_id_date_naissance->Location = System::Drawing::Point(110, 412);
			this->txt_id_date_naissance->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_date_naissance->Name = L"txt_id_date_naissance";
			this->txt_id_date_naissance->Size = System::Drawing::Size(237, 22);
			this->txt_id_date_naissance->TabIndex = 43;
			// 
			// txt_id_adresse_facturation
			// 
			this->txt_id_adresse_facturation->Location = System::Drawing::Point(110, 460);
			this->txt_id_adresse_facturation->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_adresse_facturation->Name = L"txt_id_adresse_facturation";
			this->txt_id_adresse_facturation->Size = System::Drawing::Size(237, 22);
			this->txt_id_adresse_facturation->TabIndex = 42;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(106, 344);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 17);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Id_date_premiere_commande";
			// 
			// txt_Id_date_premiere_commande
			// 
			this->txt_Id_date_premiere_commande->Location = System::Drawing::Point(110, 364);
			this->txt_Id_date_premiere_commande->Margin = System::Windows::Forms::Padding(4);
			this->txt_Id_date_premiere_commande->Name = L"txt_Id_date_premiere_commande";
			this->txt_Id_date_premiere_commande->Size = System::Drawing::Size(237, 22);
			this->txt_Id_date_premiere_commande->TabIndex = 40;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(110, 296);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Prenom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(110, 248);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Nom";
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(110, 316);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(237, 22);
			this->txt_prenom->TabIndex = 37;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(114, 268);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(237, 22);
			this->txt_nom->TabIndex = 36;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(114, 216);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 28);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Inserer commande";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(948, 231);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 28);
			this->button3->TabIndex = 34;
			this->button3->Text = L"afficher commande";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormCommande::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1125, 196);
			this->dataGridView1->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(444, 249);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 17);
			this->label8->TabIndex = 51;
			this->label8->Text = L"id Personnel";
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(444, 269);
			this->id_client->Margin = System::Windows::Forms::Padding(4);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(167, 22);
			this->id_client->TabIndex = 50;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(448, 217);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 28);
			this->button4->TabIndex = 49;
			this->button4->Text = L"supprimer Commande";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// FormCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1242, 645);
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
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"FormCommande";
			this->Text = L"FormCommande";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oSvc = gcnew NS_Comp_Svc::CLservice();
		this->oDs = this->oSvc->selectionnerToutCommande("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
};
}
