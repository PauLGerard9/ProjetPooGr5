#pragma once
#include "FormPersonnel.h"
#include "FormCommande.h"
#include "FormClient.h"
#include "FormStock.h"
#include "FormStatistique.h"

namespace ProjetPooGr5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormAccueil
	/// </summary>
	public ref class FormAccueil : public System::Windows::Forms::Form
	{
	public:
		FormAccueil(void)
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
		~FormAccueil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button5;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(917, 143);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 23);
			this->button5->TabIndex = 22;
			this->button5->Text = L"statistiques";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FormAccueil::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(692, 143);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 23);
			this->button4->TabIndex = 21;
			this->button4->Text = L"commandes";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormAccueil::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(881, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(159, 17);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Gestion des statistiques";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(456, 98);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Gestion des stocks";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(659, 98);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(164, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Gestion des commandes";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Gestion du personnel";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(235, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 17);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Gestion des clients";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(12, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(324, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Accueil de notre application";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(45, 143);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"personnel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormAccueil::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(476, 143);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"stocks";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormAccueil::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(260, 143);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"clients";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormAccueil::button1_Click);
			// 
			// FormAccueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1099, 493);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"FormAccueil";
			this->Text = L"FormAccueil";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		FormPersonnel^ maForm1 = gcnew FormPersonnel();
		maForm1->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	FormClient^ maForm1 = gcnew FormClient();
	maForm1->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	FormStock^ maForm1 = gcnew FormStock();
	maForm1->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	FormCommande^ maForm1 = gcnew FormCommande();
	maForm1->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	FormStatistique^ maForm1 = gcnew FormStatistique();
	maForm1->Show();
}
};
}
