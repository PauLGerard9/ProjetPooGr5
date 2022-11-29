#pragma once
#include "tools.h"


class CLClient {
private:
	int num_client;
	string date_naissance;
	string date_premiere_commande;
	int id_humain;
	string nom;
	string ville_livraison;
	string rue_livraison;
	int numero_livraison;
	string ville_facturation;
	string rue_facturation;
	int numero_facturation;
	string prenom;

public:
	void set_num_client(int num_client);
	int get_num_client();
	void set_date_naissance(string date_naissance);
	string get_date_naissance(string date);
	void set_id_humain(int id_humain);
	int get_id_humain();
	void set_date_premiere_commande(string date_premiere_commande);
	int get_date_premiere_commande();
	void set_nom(string nom);
	string get_nom();
	void set_prenom(string prenom);
	string get_prenom();
	void set_ville_livraison(string ville_livraison);
	string get_ville_livraison();
	void set_rue_livraison(string rue_livraison);
	string get_rue_livraison();
	void set_numero_livraison(int numero_livraison);
	int get_numero_livraison();
	void set_ville_facturation(string ville_facturation);
	string get_ville_facturation();
	void set_rue_facturation(string rue_facturation);
	string get_rue_facturation();
	void set_numero_facturation(int numero_facturation);
	int get_numero_facturation();


	void creer_client();
	void supprimer_client();
	void modifier_client();
	void afficher_client();

};


