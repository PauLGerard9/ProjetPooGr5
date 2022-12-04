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
void NS_Comp_Svc::CLservice::ajouterUnclient(System::String^ num_client)
{
	System::String^ sql;

	this->oMapp->set_num_client(num_client);
	
	sql = this->oMapp->Insert_client();

	this->oCad->actionRows(sql);
}
