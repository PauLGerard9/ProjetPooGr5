#pragma once
#include "tools.h"



class CLpersonnel {
private:
	int id_personnel;
	int id_human;
	string nom;
	string prenom;
	int id_superieur;
	string date_recrutement;
	string ville;
	string rue;
	string numero;

public:
	void set_id_personnel(int id_personnel);
	void set_id_human(int id_human);
	void set_nom(string nom);
	void set_prenom(string prenom);
	void set_id_superieur(int id_superieur);
	void set_date_recrutement(string date_recrutement);
	void set_ville(string ville);
	void set_rue(string rue);
	void set_numero(string numero);

	int get_id_personnel();
	int get_id_human();
	string get_nom();
	string get_prenom();
	int get_id_superieur();
	string get_date_recrutement();
	string get_ville();
	string get_rue();
	string get_numero();

	void creer_personnel();
	void supprimer_personnel();
	void modifier_personnel();
	void afficher_personnel();

};



