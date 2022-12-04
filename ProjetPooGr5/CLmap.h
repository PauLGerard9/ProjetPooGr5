#pragma once



namespace NS_Comp_Mappage
{
	ref class CLmap{
		private:
		System::String^ sSql;
		System::String^ num_client;
		System::String^ nom;
		System::String^ prenom;
	public:
		System::String^ Select(void);
		System::String^ Insert_humain(void);
		System::String^ Insert_client(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void set_num_client(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		System::String^ getnum_client(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
	};
}

