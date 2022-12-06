#pragma once
#include "CLmap.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservice
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmap^ oMapp;
	public:
		CLservice(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnclient(System::String^ nom, System::String^ prenom, System::String^ Id_date_premiere_commande, System::String^ id_adresse_facturation, System::String^ id_date_naissance, System::String^ id_adresses_livraison);
		System::Data::DataSet^ selectionnerMontantClient(System::String^);
		System::Data::DataSet^ selectionnerTousLeStock(System::String^);
		System::Data::DataSet^ selectionnerTousLePersonnel(System::String^);
		System::Data::DataSet^ selectionnerToutCommande(System::String^);
		System::Data::DataSet^ selectionnertableclient(System::String^);
		System::Data::DataSet^ panierMoyen(System::String^);
		System::Data::DataSet^ seuilReapro(System::String^);
		System::Data::DataSet^ ArticlePlusVendu(System::String^);
		System::Data::DataSet^ ArticleMoinsVendu(System::String^);
		System::Data::DataSet^ ValeurCommercial(System::String^);
		System::Data::DataSet^ ValeurAchat(System::String^);
		System::Data::DataSet^ ChiffreAffaire(System::String^);
		System::Data::DataSet^ Variation(System::String^);

		void ajouterUnpersonnel(System::String^ nom, System::String^ prenom, System::String^ txt_Id_date_embauche, System::String^ txt_id_sup�rieur, System::String^ txt_id_adresse);

		void supprimerUnclient(System::String^ id_client);
		void supprimerUnPersonnel(System::String^ id_client);
		void supprimerUnStock(System::String^ id_client);
		void supprimerUneCommande(System::String^ id_client);

		void modifierUnclient(System::String^ id_client, System::String^ txt_colonne_a_changer, System::String^ txt_nouvel_valeur);
		void modifierUnpersonnel(System::String^ id_client, System::String^ txt_colonne_a_changer, System::String^ txt_nouvel_valeur);


		
	};
}
