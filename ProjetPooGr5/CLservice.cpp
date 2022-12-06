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

System::Data::DataSet^ NS_Comp_Svc::CLservice::selectionnertableclient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->Selecttableclient();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservice::selectionnerTousLePersonnel(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->SelectPersonnel();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservice::panierMoyen(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->SelectPanierMoyen();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservice::ArticleMoinsVendu(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->SelectMoinsVendu();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservice::selectionnerTousLeStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->SelectStock();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservice::selectionnerMontantClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->MontantClient();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservice::ValeurCommercial(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->SelectValeurCommercial();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservice::ValeurAchat(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->SelectValeurAchat();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservice::ChiffreAffaire(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->SelectChiffreAffaire();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservice::Variation(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->SelectVariation();
	return this->oCad->getRows(sql, dataTableName);
}



System::Data::DataSet^ NS_Comp_Svc::CLservice::selectionnerToutCommande(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->SelectCommande();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservice::seuilReapro(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->SelectReapro();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservice::ArticlePlusVendu(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->PlusVendu();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservice::ajouterUnclient(System::String^ nom, System::String^ prenom, System::String^ Id_date_premiere_commande, System::String^ id_adresse_facturation, System::String^ id_date_naissance, System::String^ id_adresses_livraison)
{
	System::String^ sql;

	this->oMapp->setNom(nom);
	this->oMapp->setPrenom(prenom);
	this->oMapp->set_id_date_premiere_commande(Id_date_premiere_commande);
	this->oMapp->set_id_date_naissance(id_date_naissance);
	this->oMapp->set_id_adresse_facturation(id_adresse_facturation);
	this->oMapp->set_id_adresses_livraison(id_adresses_livraison);
	sql = this->oMapp->Insert_humain();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservice::supprimerUnclient(System::String^ id_client)
{
	System::String^ sql;

	this->oMapp->setid_client(id_client);
	
	sql = this->oMapp->Delete_client();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservice::modifierUnclient(System::String^ id_client, System::String^ txt_colonne_a_changer, System::String^ txt_nouvel_valeur)
{
	System::String^ sql;

	this->oMapp->setid_client(id_client);
	this->oMapp->set_colonne_a_changer(txt_colonne_a_changer);
	this->oMapp->set_txt_nouvel_valeur(txt_nouvel_valeur);
	
	sql = this->oMapp->Update_client();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservice::supprimerUnPersonnel(System::String^ id_client)
{
	System::String^ sql;

	this->oMapp->setid_client(id_client);

	sql = this->oMapp->Delete_personnel();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservice::supprimerUnStock(System::String^ id_client)
{
	System::String^ sql;

	this->oMapp->setid_client(id_client);

	sql = this->oMapp->Delete_stock();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservice::supprimerUneCommande(System::String^ id_client)
{
	System::String^ sql;

	this->oMapp->setid_client(id_client);

	sql = this->oMapp->Delete_commande();

	this->oCad->actionRows(sql);
}