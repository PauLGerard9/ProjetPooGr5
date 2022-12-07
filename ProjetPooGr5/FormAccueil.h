#pragma once
#include "FormPersonnel.h"
#include "FormCommande.h"
#include "FormClient.h"
#include "FormStock.h"
#include "FormStatistique.h"
#include "FormRequetePerso.h"

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
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;


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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button5->Location = System::Drawing::Point(875, 347);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 37);
			this->button5->TabIndex = 22;
			this->button5->Text = L"statistiques";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormAccueil::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button4->Location = System::Drawing::Point(884, 141);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 36);
			this->button4->TabIndex = 21;
			this->button4->Text = L"commandes";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormAccueil::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label9->Location = System::Drawing::Point(800, 283);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(276, 26);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Gestion des statistiques";
			this->label9->Click += gcnew System::EventHandler(this, &FormAccueil::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label8->Location = System::Drawing::Point(420, 98);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(217, 26);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Gestion des stocks";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label7->Location = System::Drawing::Point(800, 98);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(277, 26);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Gestion des commandes";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(247, 26);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Gestion du personnel";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(13, 283);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 26);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Gestion des clients";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 22.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(291, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(536, 46);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Accueil de notre application";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button3->Location = System::Drawing::Point(45, 143);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 34);
			this->button3->TabIndex = 14;
			this->button3->Text = L"personnel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormAccueil::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button2->Location = System::Drawing::Point(483, 143);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 34);
			this->button2->TabIndex = 13;
			this->button2->Text = L"stocks";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormAccueil::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button1->Location = System::Drawing::Point(51, 347);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 37);
			this->button1->TabIndex = 12;
			this->button1->Text = L"clients";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormAccueil::button1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button6->Location = System::Drawing::Point(440, 347);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(182, 37);
			this->button6->TabIndex = 23;
			this->button6->Text = L"requete personnalisé";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &FormAccueil::button6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label4->Location = System::Drawing::Point(401, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(249, 26);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Requete personnalisé";
			this->label4->Click += gcnew System::EventHandler(this, &FormAccueil::label4_Click);
			// 
			// FormAccueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1144, 531);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
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
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	FormRequetePerso^ maForm1 = gcnew FormRequetePerso();
	maForm1->Show();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
