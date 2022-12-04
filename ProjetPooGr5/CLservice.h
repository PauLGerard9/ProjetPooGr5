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
		void ajouterUnePersonne(System::String^, System::String^);
	};
}
