
#include "CLmap.h"

System::String^ NS_Comp_Mappage::CLmap::Select(void)
{
	return "SELECT [id], [nom], [prenom] FROM [DB_P6].[dbo].[TB_P6]";
}
System::String^ NS_Comp_Mappage::CLmap::Insert(void)
{
	return "INSERT INTO TB_P6 (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');";
}
System::String^ NS_Comp_Mappage::CLmap::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLmap::Update(void)
{
	return "";
}
void NS_Comp_Mappage::CLmap::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmap::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmap::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
int NS_Comp_Mappage::CLmap::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmap::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmap::getPrenom(void) { return this->prenom; }

