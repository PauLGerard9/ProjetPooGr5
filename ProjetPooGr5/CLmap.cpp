#include "CLmap.h"

System::String^ NS_Comp_Mappage::CLmap::Select(void)
{
	return "SELECT num_client,Nom, prenom FROM client LEFT JOIN humain ON Client.Id_humain = Humain.Id_humain; ";
}
System::String^ NS_Comp_Mappage::CLmap::Selecttableclient(void)
{
	return "SELECT * FROM Client;";
}


System::String^ NS_Comp_Mappage::CLmap::SelectPersonnel(void)
{
	return "SELECT * FROM Humain INNER JOIN Personnel ON Humain.Id_humain = Personnel.Id_humain;";
}
System::String^ NS_Comp_Mappage::CLmap::SelectPanierMoyen(void)
{
	return "SELECT AVG(Montant) as 'Prix du panier moyen' FROM Paiements; ";
}

System::String^ NS_Comp_Mappage::CLmap::SelectStock(void)
{
	return "SELECT * FROM Article ;";
}

System::String^ NS_Comp_Mappage::CLmap::SelectCommande(void)
{
	return "SELECT * FROM Commande ;";
}
System::String^ NS_Comp_Mappage::CLmap::SelectReapro(void)
{
	return "SELECT * FROM Article WHERE Quantité_en_stock < Seuil_réaprovisionement; ";
}
System::String^ NS_Comp_Mappage::CLmap::PlusVendu(void)
{
	return "SELECT TOP 10 Quantité, Référence_article FROM Articles_commandés ORDER BY Quantité DESC";
}
System::String^ NS_Comp_Mappage::CLmap::SelectMoinsVendu(void)
{
	return "SELECT TOP 10 Quantité, Référence_article FROM Articles_commandés ORDER BY Quantité ASC";
}

System::String^ NS_Comp_Mappage::CLmap::MontantClient(void)
{
	return "SELECT SUM(Montant) as 'Chiffre d''affaire sur un mois précis' FROM Paiements LEFT JOIN Date_ ON Paiements.Id_date_paiement = Date_.id_date WHERE MONTH(Date_.Date_) = '" + this->id_client + "' AND YEAR(Date_.Date_) = 2011; ";
}
System::String^ NS_Comp_Mappage::CLmap::SelectValeurCommercial(void)
{
	return "SELECT SUM(Prix_HT*Quantité_en_stock*Taxes.Taux_TVA) FROM Article LEFT JOIN Taxes ON Article.Id_TVA = Taxes.Id_TVA";
}

System::String^ NS_Comp_Mappage::CLmap::SelectValeurAchat(void)
{
	return "SELECT SUM(Prix_HT*Quantité_en_stock) FROM Article ";
}

System::String^ NS_Comp_Mappage::CLmap::SelectChiffreAffaire(void)
{
	return "SELECT SUM(Montant) as 'Chiffre d''affaire sur un mois précis' FROM Paiements LEFT JOIN Date_ ON Paiements.Id_date_paiement = Date_.id_date WHERE MONTH(Date_.Date_) = '" + this->id_client + "' AND YEAR(Date_.Date_) = 2011; ";
}
System::String^ NS_Comp_Mappage::CLmap::SelectVariation(void)
{
	return "SELECT TVA1, (0.20*TVA1) AS TVA2, (TVA1*(0.20*TVA1)) AS TVA3 FROM (SELECT SUM(Quantité_en_stock * (achat + marge - remise - demarqueInconnue)) AS TVA1 FROM (SELECT Référence_article, Nom_article, Prix_HT, (Prix_HT - (0.10 * Prix_HT)) AS achat, (0.10 * (Prix_HT - (0.10 * Prix_HT))) AS marge, (0.1 * (Prix_HT - (0.10 * Prix_HT))) AS remise, Taux_TVA, Quantité_en_stock, demarqueInconnue FROM Article INNER JOIN Taxes ON Article.Id_TVA = Taxes.Id_TVA, (SELECT(0.01 * (SUM(Montant))) AS demarqueInconnue FROM Paiements) AS demarqueInconnue) AS stock) AS TVA1";
}




System::String^ NS_Comp_Mappage::CLmap::Insert_humain(void)
{
	return "INSERT INTO humain (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');INSERT INTO DATE_ (date_) VALUES ('" + this->id_date_naissance + "'),('" + this->id_date_premiere_commande + "');INSERT INTO Client ([Id_date_naissance],[Id_date_premiere_commande],[ID_adresses_facturation], [id_humain],[ID_adresses_livraison]) VALUES((SELECT TOP 1 percent id_date FROM date_ WHERE date_ = '" + this->id_date_naissance + "'),(SELECT TOP 1 percent id_date FROM date_ WHERE date_ = '" + this->id_date_premiere_commande + "'),'" + this->id_adresse_facturation + "', (SELECT TOP 1 percent id_humain FROM humain WHERE nom = '" + this->nom + "' and prenom = '" + this->prenom + "'),'" + this->id_adresses_livraison + "');";
}

System::String^ NS_Comp_Mappage::CLmap::Insert_personnel(void)
{
	return "INSERT INTO humain (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "'); INSERT INTO Personnel( Id_date, ID_superieur, ID_adresses,ID_humain) VALUES( '" + this->txt_Id_date_embauche + "', '" + this->txt_id_supérieur + "', '" + this->txt_id_adresse + "', (SELECT TOP 1 percent id_humain FROM humain WHERE nom = '" + this->nom + "' and prenom = '" + this->prenom + "')); ";
}



System::String^ NS_Comp_Mappage::CLmap::Delete_client(void)
{
	return "DELETE FROM Client WHERE num_client = '"+ this->id_client +"';";
}
System::String^ NS_Comp_Mappage::CLmap::Delete_personnel(void)
{
	return "DELETE FROM Personnel WHERE ID_personnel = '" + this->id_client + "';";
}

System::String^ NS_Comp_Mappage::CLmap::Delete_stock(void)
{
	return "DELETE FROM Article WHERE Référence_article = '" + this->id_client + "';";
}

System::String^ NS_Comp_Mappage::CLmap::Delete_commande(void)
{
	return "DELETE FROM Paiements WHERE Référence_commande = '" + this->id_client + "';"+ "DELETE FROM Articles_commandés WHERE Référence_commande ='" + this->id_client +"'; "+" DELETE FROM Commande WHERE Référence_commande ='" + this->id_client+"';";
}



// DELETE FROM humain WHERE id_humain = (SELECT TOP 1 percent id_humain FROM client WHERE num_client = '"+ this->id_client +"');DELETE FROM humain WHERE id_adresses = (SELECT TOP 1 percent ID_adresses_facturation FROM client WHERE num_client = '" + this->id_client + "');DELETE FROM humain WHERE id_adresses = (SELECT TOP 1 percent ID_adresses_livraison FROM client WHERE num_client = '" + this->id_client + "');"
System::String^ NS_Comp_Mappage::CLmap::Update_client(void)
{
	return "UPDATE Client SET "+ this->colonne_a_changer+" = '"+ this->nouvel_valeur +"' WHERE num_client = '"+ this->id_client +"'; ";
}
System::String^ NS_Comp_Mappage::CLmap::Update_personnel(void)
{
	return "UPDATE Personnel SET " + this->colonne_a_changer + " = '" + this->nouvel_valeur + "' WHERE id_personnel = '" + this->id_client + "'; ";
}

void NS_Comp_Mappage::CLmap::setid_client(System::String^ id_client){this->id_client = id_client;}
void NS_Comp_Mappage::CLmap::setNom(System::String^ nom){this->nom = nom;}
void NS_Comp_Mappage::CLmap::setPrenom(System::String^ prenom){this->prenom = prenom;}
void NS_Comp_Mappage::CLmap::set_id_date_premiere_commande(System::String^ Id_date_premiere_commande){this->id_date_premiere_commande = Id_date_premiere_commande;}
void NS_Comp_Mappage::CLmap::set_id_adresse_facturation(System::String^ id_adresse_facturation){this->id_adresse_facturation = id_adresse_facturation;}
void NS_Comp_Mappage::CLmap::set_id_date_naissance(System::String^ id_date_naissance){this->id_date_naissance = id_date_naissance;}
void NS_Comp_Mappage::CLmap::set_id_adresses_livraison(System::String^ id_adresses_livraison){this->id_adresses_livraison = id_adresses_livraison;}
void NS_Comp_Mappage::CLmap::set_id_humain(System::String^ id_humain) {this->id_humain = id_humain;}
void NS_Comp_Mappage::CLmap::set_colonne_a_changer(System::String^ colonne_a_changer) { this->colonne_a_changer = colonne_a_changer; }
void NS_Comp_Mappage::CLmap::set_txt_nouvel_valeur(System::String^ nouvel_valeur) { this->nouvel_valeur = nouvel_valeur; }

void NS_Comp_Mappage::CLmap::set_txt_Id_date_embauche(System::String^ txt_Id_date_embauche) { this->txt_Id_date_embauche = txt_Id_date_embauche; }
void NS_Comp_Mappage::CLmap::set_txt_id_supérieur(System::String^ txt_id_supérieur) { this->txt_id_supérieur = txt_id_supérieur; }
void NS_Comp_Mappage::CLmap::set_txt_id_adresse(System::String^ txt_id_adresse) { this->txt_id_adresse = txt_id_adresse; }


System::String^ NS_Comp_Mappage::CLmap::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmap::getPrenom(void) { return this->prenom; }
System::String^ NS_Comp_Mappage::CLmap::getid_client(void) { return this->id_client; }

System::String^ NS_Comp_Mappage::CLmap::getid_date_naissance(void) { return this->id_date_naissance;}
System::String^ NS_Comp_Mappage::CLmap::getid_date_premiere_commande(void) { return this->id_date_premiere_commande;}
System::String^ NS_Comp_Mappage::CLmap::getid_adresse_facturation(void) { return this->id_adresse_facturation; }
System::String^ NS_Comp_Mappage::CLmap::getid_adresses_livraison(void) { return this->id_adresses_livraison;}
System::String^ NS_Comp_Mappage::CLmap::getid_humain(void) { return this->id_humain;}
System::String^ NS_Comp_Mappage::CLmap::getcolonne_a_changer(void) { return this->colonne_a_changer; }
System::String^ NS_Comp_Mappage::CLmap::gettxt_nouvel_valeur(void) { return this->nouvel_valeur; }

System::String^ NS_Comp_Mappage::CLmap::get_txt_Id_date_embauche(void) { return this->txt_Id_date_embauche; }
System::String^ NS_Comp_Mappage::CLmap::get_txt_id_supérieur(void) { return this->txt_id_supérieur; }
System::String^ NS_Comp_Mappage::CLmap::get_txt_id_adresse(void) { return this->txt_id_adresse; }
