#pragma once
#include "tools.h"

class CLArticle
{
private:
	string reference_article;
    	string nom_article;
    	int quantite_en_stock;
    	int prix;
    	int seuil_reaprovisionnement;
    	double tva;

public:
	string set_reference_article(string reference_article);
	string set_nom_article(string nom_article);
	int set_quantite_en_stock(int quantite_en_stock);
	int set_prix_ht(int prix_ht);
	int set_seuil_reaprovisionnement(int seuil_reaprovisionnement);
	double set_tva(double tva);
	
	string get_reference_article();
	string get_nom_article();
	int get_quantite_en_stock();
	int get_prix_ht();
	int get_seuil_reaprovisionnement();
	double get_tva();
	
	void creer_article();
	void supprimer_article();
	void modifier_article();
	void afficher_article();
};
