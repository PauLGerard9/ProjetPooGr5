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
	/// Description résumée de FormRequetePerso
	/// </summary>
	public ref class FormRequetePerso : public System::Windows::Forms::Form
	{
	public:
		FormRequetePerso(void)
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
		~FormRequetePerso()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Svc::CLservice^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_requete_perso;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txt_action_perso;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_requete_perso = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt_action_perso = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(846, 444);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 0;
			this->button1->Text = L"retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormRequetePerso::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(944, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(430, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Selection_personnalisée";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormRequetePerso::button2_Click);
			// 
			// txt_requete_perso
			// 
			this->txt_requete_perso->Location = System::Drawing::Point(211, 227);
			this->txt_requete_perso->Name = L"txt_requete_perso";
			this->txt_requete_perso->Size = System::Drawing::Size(592, 20);
			this->txt_requete_perso->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(430, 310);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"action_personnalisée";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormRequetePerso::button3_Click);

			// 
			// txt_action_perso
			// 
			this->txt_action_perso->Location = System::Drawing::Point(211, 339);
			this->txt_action_perso->Name = L"txt_action_perso";
			this->txt_action_perso->Size = System::Drawing::Size(592, 20);
			this->txt_action_perso->TabIndex = 5;
			// 
			// FormRequetePerso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(962, 517);
			this->Controls->Add(this->txt_action_perso);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->txt_requete_perso);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FormRequetePerso";
			this->Text = L"FormRequetePerso";
			this->Load += gcnew System::EventHandler(this, &FormRequetePerso::FormRequetePerso_Load);
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
		this->oSvc->selection_perso("Rsl", this->txt_requete_perso->Text);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oSvc = gcnew NS_Comp_Svc::CLservice();
		this->oSvc->action_perso(this->txt_action_perso->Text);

	}
	private: System::Void FormRequetePerso_Load(System::Object^ sender, System::EventArgs^ e) {
	   }
	};
}
