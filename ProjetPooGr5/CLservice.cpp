#include "CLservice.h"

using namespace System::Windows::Forms;

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
System::Data::DataSet^ NS_Comp_Svc::CLservice::selectionnerMontantClient(System::String^ dataTableName, System::String^ id_client)
{
	System::String^ sql;
	this->oMapp->setid_client(id_client);
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

System::Data::DataSet^ NS_Comp_Svc::CLservice::ChiffreAffaire(System::String^ dataTableName, System::String^ id_client)
{
	
	System::String^ sql;

	this->oMapp->setid_client(id_client);

	sql = this->oMapp->SelectChiffreAffaire();

	this->oCad->actionRows(sql);
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

void NS_Comp_Svc::CLservice::ajouterUnpersonnel(System::String^ nom, System::String^ prenom, System::String^ txt_Id_date_embauche, System::String^ txt_id_supérieur, System::String^ txt_id_adresse)
{
	System::String^ sql;

	this->oMapp->setNom(nom);
	this->oMapp->setPrenom(prenom);
	this->oMapp->set_txt_Id_date_embauche(txt_Id_date_embauche);
	this->oMapp->set_txt_id_supérieur(txt_id_supérieur);
	this->oMapp->set_txt_id_adresse(txt_id_adresse);

	if (nom == "" || prenom==""  || txt_id_adresse=="" ||txt_id_supérieur=="" ||txt_id_adresse =="" )
	{
		MessageBox::Show("Merci de remplir les champs manquants", "un ou plusieurs champs vide", MessageBoxButtons::OK);
		return;
	}
	if ((nom->Contains(" ")))
	{
		MessageBox::Show("Merci de ne pas mettre d'espace dans les textBox", "un ou plusieurs champs contenant des espaces", MessageBoxButtons::OK);
		return;
	}
	sql = this->oMapp->Insert_personnel();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservice::ajouterUnstock(System::String^ txt_ref_article, System::String^ txt_nom_article, System::String^ quantite, System::String^ txt_prix_ht, System::String^ txt_seuil_reapro, System::String^ txt_id_tva)
{
	    
	System::String^ sql;

	this->oMapp->setNom(txt_ref_article);
	this->oMapp->setPrenom(txt_nom_article);
	this->oMapp->set_txt_id_supérieur(quantite);
	this->oMapp->set_txt_Id_date_embauche(txt_prix_ht);
	this->oMapp->set_txt_id_supérieur(txt_seuil_reapro);
	this->oMapp->set_txt_id_adresse(txt_id_tva);

	
	sql = this->oMapp->Insert_article();

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

void NS_Comp_Svc::CLservice::modifierUnpersonnel(System::String^ id_client, System::String^ txt_colonne_a_changer, System::String^ txt_nouvel_valeur)
{
	System::String^ sql;

	this->oMapp->setid_client(id_client);
	this->oMapp->set_colonne_a_changer(txt_colonne_a_changer);
	this->oMapp->set_txt_nouvel_valeur(txt_nouvel_valeur);

	sql = this->oMapp->Update_personnel();

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