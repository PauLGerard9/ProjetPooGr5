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
		
		System::Data::DataSet^ selectionnerTousLeStock(System::String^);
		System::Data::DataSet^ selectionnerTousLePersonnel(System::String^);
	
		void supprimerUnclient(System::String^ id_client);

	};
}
