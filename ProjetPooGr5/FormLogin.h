#pragma once
#include "FormStatistique.h"
namespace ProjetPooGr5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormLogin
	/// </summary>
	public ref class FormLogin : public System::Windows::Forms::Form
	{
	public:
		FormLogin(void)
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
		~FormLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TBemail;
	private: System::Windows::Forms::Label^ Label3;
	private: System::Windows::Forms::TextBox^ TBPassword;
	private: System::Windows::Forms::Button^ btnok;
	private: System::Windows::Forms::Button^ btncancel;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBemail = (gcnew System::Windows::Forms::TextBox());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->TBPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnok = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(93, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &FormLogin::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(93, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// TBemail
			// 
			this->TBemail->Location = System::Drawing::Point(295, 193);
			this->TBemail->Name = L"TBemail";
			this->TBemail->Size = System::Drawing::Size(565, 32);
			this->TBemail->TabIndex = 2;
			this->TBemail->TextChanged += gcnew System::EventHandler(this, &FormLogin::TBemail_TextChanged);
			// 
			// Label3
			// 
			this->Label3->AutoSize = true;
			this->Label3->Location = System::Drawing::Point(93, 297);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(108, 26);
			this->Label3->TabIndex = 3;
			this->Label3->Text = L"Password";
			// 
			// TBPassword
			// 
			this->TBPassword->Location = System::Drawing::Point(295, 306);
			this->TBPassword->Name = L"TBPassword";
			this->TBPassword->PasswordChar = '*';
			this->TBPassword->Size = System::Drawing::Size(565, 32);
			this->TBPassword->TabIndex = 4;
			// 
			// btnok
			// 
			this->btnok->Location = System::Drawing::Point(321, 410);
			this->btnok->Name = L"btnok";
			this->btnok->Size = System::Drawing::Size(134, 41);
			this->btnok->TabIndex = 5;
			this->btnok->Text = L"OK";
			this->btnok->UseVisualStyleBackColor = true;
			this->btnok->Click += gcnew System::EventHandler(this, &FormLogin::btnok_Click);
			// 
			// btncancel
			// 
			this->btncancel->Location = System::Drawing::Point(656, 410);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(125, 41);
			this->btncancel->TabIndex = 6;
			this->btncancel->Text = L"Cancel";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &FormLogin::btncancel_Click);
			// 
			// FormLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(987, 494);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnok);
			this->Controls->Add(this->TBPassword);
			this->Controls->Add(this->Label3);
			this->Controls->Add(this->TBemail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"FormLogin";
			this->Text = L"Form Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnok_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->TBemail->Text;
	String^ password = this->TBPassword->Text;

	if (email->Length == 0 || password->Length == 0)
	{
		MessageBox::Show("Merci de remplir les champs email et mot de passe", "email ou mdp vide", MessageBoxButtons::OK);
			return;
	}

	if (email == "123@gmail.com" && password == "mdp123")
	{
		this->Close();
		FormStatistique^ maForm1 = gcnew FormStatistique();
		maForm1->Show();
	}
}
private: System::Void TBemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
