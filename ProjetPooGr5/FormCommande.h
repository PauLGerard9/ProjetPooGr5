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
	private: System::Windows::Forms::TextBox^ txt_num_client;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_id_date_livraison;
	private: System::Windows::Forms::TextBox^ txt_id_date_paiement_final;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_Id_date_commande;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_id_remise;

	private: System::Windows::Forms::TextBox^ txt_ref_commande;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ id_client;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ txt_nouvel_valeur;
	private: System::Windows::Forms::TextBox^ txt_colonne_a_modifier;
	private: System::Windows::Forms::TextBox^ txt_mod_ref_commande;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCommande::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_num_client = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_id_date_livraison = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_date_paiement_final = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_Id_date_commande = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_id_remise = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_commande = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->id_client = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->txt_nouvel_valeur = (gcnew System::Windows::Forms::TextBox());
			this->txt_colonne_a_modifier = (gcnew System::Windows::Forms::TextBox());
			this->txt_mod_ref_commande = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Pink;
			this->button1->Location = System::Drawing::Point(1077, 570);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormCommande::button1_Click);
			// 
			// txt_num_client
			// 
			this->txt_num_client->Location = System::Drawing::Point(13, 537);
			this->txt_num_client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_num_client->Name = L"txt_num_client";
			this->txt_num_client->Size = System::Drawing::Size(237, 22);
			this->txt_num_client->TabIndex = 48;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(53, 516);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 17);
			this->label7->TabIndex = 47;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 516);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 17);
			this->label6->TabIndex = 46;
			this->label6->Text = L"num_client";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 420);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 17);
			this->label5->TabIndex = 45;
			this->label5->Text = L"Id_date_livraison";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 470);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 17);
			this->label4->TabIndex = 44;
			this->label4->Text = L"ID_date_paiement_final";
			// 
			// txt_id_date_livraison
			// 
			this->txt_id_date_livraison->Location = System::Drawing::Point(13, 441);
			this->txt_id_date_livraison->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_id_date_livraison->Name = L"txt_id_date_livraison";
			this->txt_id_date_livraison->Size = System::Drawing::Size(237, 22);
			this->txt_id_date_livraison->TabIndex = 43;
			// 
			// txt_id_date_paiement_final
			// 
			this->txt_id_date_paiement_final->Location = System::Drawing::Point(13, 489);
			this->txt_id_date_paiement_final->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_id_date_paiement_final->Name = L"txt_id_date_paiement_final";
			this->txt_id_date_paiement_final->Size = System::Drawing::Size(237, 22);
			this->txt_id_date_paiement_final->TabIndex = 42;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 374);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 17);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Id_date_commande";
			// 
			// txt_Id_date_commande
			// 
			this->txt_Id_date_commande->Location = System::Drawing::Point(13, 393);
			this->txt_Id_date_commande->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_Id_date_commande->Name = L"txt_Id_date_commande";
			this->txt_Id_date_commande->Size = System::Drawing::Size(237, 22);
			this->txt_Id_date_commande->TabIndex = 40;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 324);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 17);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Id remise";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 278);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 17);
			this->label1->TabIndex = 38;
			this->label1->Text = L"ref_commande";
			// 
			// txt_id_remise
			// 
			this->txt_id_remise->Location = System::Drawing::Point(13, 345);
			this->txt_id_remise->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_id_remise->Name = L"txt_id_remise";
			this->txt_id_remise->Size = System::Drawing::Size(237, 22);
			this->txt_id_remise->TabIndex = 37;
			// 
			// txt_ref_commande
			// 
			this->txt_ref_commande->Location = System::Drawing::Point(19, 297);
			this->txt_ref_commande->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_ref_commande->Name = L"txt_ref_commande";
			this->txt_ref_commande->Size = System::Drawing::Size(237, 22);
			this->txt_ref_commande->TabIndex = 36;
			this->txt_ref_commande->TextChanged += gcnew System::EventHandler(this, &FormCommande::txt_ref_commande_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Pink;
			this->button2->Location = System::Drawing::Point(19, 246);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 28);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Inserer commande";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormCommande::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Pink;
			this->button3->Location = System::Drawing::Point(994, 246);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 28);
			this->button3->TabIndex = 34;
			this->button3->Text = L"afficher commande";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormCommande::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 14);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1125, 196);
			this->dataGridView1->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(381, 278);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 17);
			this->label8->TabIndex = 51;
			this->label8->Text = L"id commande";
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(381, 299);
			this->id_client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(167, 22);
			this->id_client->TabIndex = 50;
			this->id_client->TextChanged += gcnew System::EventHandler(this, &FormCommande::id_client_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Pink;
			this->button4->Location = System::Drawing::Point(380, 246);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 28);
			this->button4->TabIndex = 49;
			this->button4->Text = L"supprimer Commande";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormCommande::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Pink;
			this->button5->Location = System::Drawing::Point(703, 246);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(168, 28);
			this->button5->TabIndex = 52;
			this->button5->Text = L"modifier Commande";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormCommande::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Pink;
			this->button6->Location = System::Drawing::Point(994, 281);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(193, 28);
			this->button6->TabIndex = 53;
			this->button6->Text = L"afficher table Commande";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// txt_nouvel_valeur
			// 
			this->txt_nouvel_valeur->Location = System::Drawing::Point(703, 397);
			this->txt_nouvel_valeur->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_nouvel_valeur->Name = L"txt_nouvel_valeur";
			this->txt_nouvel_valeur->Size = System::Drawing::Size(167, 22);
			this->txt_nouvel_valeur->TabIndex = 54;
			// 
			// txt_colonne_a_modifier
			// 
			this->txt_colonne_a_modifier->Location = System::Drawing::Point(703, 349);
			this->txt_colonne_a_modifier->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_colonne_a_modifier->Name = L"txt_colonne_a_modifier";
			this->txt_colonne_a_modifier->Size = System::Drawing::Size(167, 22);
			this->txt_colonne_a_modifier->TabIndex = 55;
			// 
			// txt_mod_ref_commande
			// 
			this->txt_mod_ref_commande->Location = System::Drawing::Point(703, 301);
			this->txt_mod_ref_commande->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_mod_ref_commande->Name = L"txt_mod_ref_commande";
			this->txt_mod_ref_commande->Size = System::Drawing::Size(167, 22);
			this->txt_mod_ref_commande->TabIndex = 56;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(699, 377);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 17);
			this->label9->TabIndex = 57;
			this->label9->Text = L"nouvel valeur";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(699, 329);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(124, 17);
			this->label10->TabIndex = 58;
			this->label10->Text = L"colonne a modifier";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(699, 281);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(98, 17);
			this->label11->TabIndex = 59;
			this->label11->Text = L"ref commande";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(381, 349);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 186);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 60;
			this->pictureBox1->TabStop = false;
			// 
			// FormCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1243, 645);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_mod_ref_commande);
			this->Controls->Add(this->txt_colonne_a_modifier);
			this->Controls->Add(this->txt_nouvel_valeur);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->id_client);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->txt_num_client);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_id_date_livraison);
			this->Controls->Add(this->txt_id_date_paiement_final);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_Id_date_commande);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_id_remise);
			this->Controls->Add(this->txt_ref_commande);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"FormCommande";
			this->Text = L"FormCommande";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oSvc = gcnew NS_Comp_Svc::CLservice();
		this->oSvc->ajouterUneCommande(this->txt_ref_commande->Text, this->txt_id_remise->Text, this->txt_Id_date_commande->Text, this->txt_id_date_livraison->Text, this->txt_id_date_paiement_final->Text, this->txt_num_client->Text);

	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
	this->oSvc->supprimerUneCommande(this->id_client->Text);

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
   this->oSvc = gcnew NS_Comp_Svc::CLservice();
   this->oSvc->modifierUneCommande(this->txt_mod_ref_commande->Text, this->txt_colonne_a_modifier->Text, this->txt_nouvel_valeur->Text);
	   }

private: System::Void id_client_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void txt_ref_commande_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
