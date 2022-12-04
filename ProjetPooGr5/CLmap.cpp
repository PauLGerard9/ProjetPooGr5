#include "CLmap.h"

System::String^ NS_Comp_Mappage::CLmap::Select(void)
{
	return "SELECT Nom, prenom FROM client LEFT JOIN humain ON Client.Id_humain = Humain.Id_humain; ";
}
System::String^ NS_Comp_Mappage::CLmap::Insert_humain(void)
{
	return "INSERT INTO humain (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');";
}

System::String^ NS_Comp_Mappage::CLmap::Insert_client(void)
{
	return "INSERT INTO Client (num_client) VALUES('" + this->num_client + "');";
}


System::String^ NS_Comp_Mappage::CLmap::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLmap::Update(void)
{
	return "";
}
void NS_Comp_Mappage::CLmap::set_num_client(System::String^ num_client)
{
	this->num_client = num_client;
}
void NS_Comp_Mappage::CLmap::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmap::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
System::String^ NS_Comp_Mappage::CLmap::getnum_client(void) { return this->num_client; }
System::String^ NS_Comp_Mappage::CLmap::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmap::getPrenom(void) { return this->prenom; }