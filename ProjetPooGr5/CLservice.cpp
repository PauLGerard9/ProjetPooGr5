#include "CLservice.h"


NS_Comp_Svc::CLservice::CLservice(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapp = gcnew NS_Comp_Mappage::CLmap();
}
System::Data::DataSet^ NS_Comp_Svc::CLservice::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservice::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMapp->setNom(nom);
	this->oMapp->setPrenom(prenom);
	sql = this->oMapp->Insert_humain();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservice::ajouterUnclient(System::String^ Id_date_premiere_commande, System::String^ id_adresse_facturation, System::String^ id_date_naissance, System::String^ id_adresses_livraison)
{
	System::String^ sql;

	this->oMapp->set_id_date_premiere_commande(Id_date_premiere_commande);
	this->oMapp->set_id_adresse_facturation(id_adresse_facturation);
	this->oMapp->set_id_date_naissance(id_date_naissance);
	this->oMapp->set_id_adresses_livraison(id_adresses_livraison);
	//this->oMapp->set_id_humain(id_humain);
	
	sql = this->oMapp->Insert_client();

	this->oCad->actionRows(sql);
}
