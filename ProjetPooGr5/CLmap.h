#pragma once



namespace NS_Comp_Mappage
{
	ref class CLmap{
		private:
		System::String^ sSql;
		System::String^ id_client;
		System::String^ nom;
		System::String^ prenom;
		System::String^ id_date_premiere_commande;
		System::String^ id_adresse_facturation;
		System::String^ id_date_naissance;
		System::String^ id_adresses_livraison;
		System::String^ id_humain;
		System::String^ colonne_a_changer;
		System::String^ nouvel_valeur;

	public:
		System::String^ Select(void);
		System::String^ Selecttableclient(void);
		System::String^ SelectPersonnel(void);
		System::String^ SelectStock(void);
		System::String^ SelectCommande(void);
		System::String^ SelectReapro(void);
		System::String^ SelectPanierMoyen(void);
		System::String^ Insert_humain(void);
		System::String^ Delete_client(void);
		System::String^ Update_client(void);
		System::String^ Delete_personnel(void);
		System::String^ Delete_stock(void);
		System::String^ Update(void);
		System::String^ PlusVendu(void);
		System::String^ SelectMoinsVendu(void);
		System::String^ MontantClient(void);
		System::String^ SelectValeurCommercial(void);
		System::String^ SelectValeurAchat(void);
		System::String^ SelectChiffreAffaire(void);
		System::String^ SelectVariation(void);




		void setNom(System::String^);
		void setPrenom(System::String^);
		void set_id_date_premiere_commande(System::String^ Id_date_premiere_commande);
		void set_id_adresse_facturation(System::String^ id_adresse_facturation);
		void set_id_date_naissance(System::String^ id_date_naissance);
		void set_id_adresses_livraison(System::String^ id_adresses_livraison);
		void set_id_humain(System::String^ Id_humain);
		void setid_client(System::String^ id_client);
		void set_colonne_a_changer(System::String^ id_humain);
		void set_txt_nouvel_valeur(System::String^ id_humain);
		
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getid_date_premiere_commande(void);
		System::String^ getid_adresse_facturation(void);
		System::String^ getid_date_naissance(void);
		System::String^ getid_adresses_livraison(void);
		System::String^ getid_humain(void);
		System::String^ getcolonne_a_changer(void);
		System::String^ gettxt_nouvel_valeur(void);
		System::String^ getid_client(void);

	};
}

