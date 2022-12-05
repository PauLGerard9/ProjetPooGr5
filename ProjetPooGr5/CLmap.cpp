#include "CLmap.h"

System::String^ NS_Comp_Mappage::CLmap::Select(void)
{
	return "SELECT Nom, prenom FROM client LEFT JOIN humain ON Client.Id_humain = Humain.Id_humain; ";
}
System::String^ NS_Comp_Mappage::CLmap::SelectPersonnel(void)
{
	return "SELECT * FROM Humain INNER JOIN Personnel ON Humain.Id_humain = Personnel.Id_humain;";
}


System::String^ NS_Comp_Mappage::CLmap::Insert_humain(void)
{
	return "INSERT INTO humain (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');";
}

System::String^ NS_Comp_Mappage::CLmap::Insert_client(void)
{
	return "INSERT INTO Client ([Id_date_naissance],[Id_date_premiere_commande],[ID_adresses_facturation], [id_humain],[ID_adresses_livraison]) VALUES('" + this->id_date_naissance + "','"+ this->id_date_premiere_commande +"','"+ this->id_adresse_facturation +"', (SELECT max(id_humain)FROM humain) ,'"	+ this->id_adresses_livraison+ "');";
}


System::String^ NS_Comp_Mappage::CLmap::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLmap::Update(void)
{
	return "";
}
void NS_Comp_Mappage::CLmap::set_num_client(System::String^ num_client){this->num_client = num_client;}
void NS_Comp_Mappage::CLmap::setNom(System::String^ nom){this->nom = nom;}
void NS_Comp_Mappage::CLmap::setPrenom(System::String^ prenom){this->prenom = prenom;}
void NS_Comp_Mappage::CLmap::set_id_date_premiere_commande(System::String^ Id_date_premiere_commande){this->id_date_premiere_commande = Id_date_premiere_commande;}
void NS_Comp_Mappage::CLmap::set_id_adresse_facturation(System::String^ id_adresse_facturation){this->id_adresse_facturation = id_adresse_facturation;}
void NS_Comp_Mappage::CLmap::set_id_date_naissance(System::String^ id_date_naissance){this->id_date_naissance = id_date_naissance;}
void NS_Comp_Mappage::CLmap::set_id_adresses_livraison(System::String^ id_adresses_livraison){this->id_adresses_livraison = id_adresses_livraison;}
void NS_Comp_Mappage::CLmap::set_id_humain(System::String^ id_humain) {this->id_humain = id_humain;}


System::String^ NS_Comp_Mappage::CLmap::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmap::getPrenom(void) { return this->prenom; }

System::String^ NS_Comp_Mappage::CLmap::getid_date_naissance(void) { return this->id_date_naissance;}
System::String^ NS_Comp_Mappage::CLmap::getid_date_premiere_commande(void) { return this->id_date_premiere_commande;}
System::String^ NS_Comp_Mappage::CLmap::getid_adresse_facturation(void) { return this->id_adresse_facturation; }
System::String^ NS_Comp_Mappage::CLmap::getid_adresses_livraison(void) { return this->id_adresses_livraison;}
System::String^ NS_Comp_Mappage::CLmap::getid_humain(void) { return this->id_humain;}
