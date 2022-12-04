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
	sql = this->oMapp->Insert();

	this->oCad->actionRows(sql);
}
