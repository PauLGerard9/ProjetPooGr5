#pragma once
#include "tools.h"

class CLPaiements
{
private:
    int id_paiement;
    int montant_ht;
    string mode_de_paiement;
    string date_de_paiement;
    string reference_commande;

public:
    int set_id_paiement(int id_paiement);
    int set_montant_ht(int montant_ht);
    string set_mode_de_paiement(string mode_de_paiement);
    string set_date_de_paiement(string date_de_paiement);
    string set_reference_comande(string reference_commande);
    
    int get_id_paiement();
    int get_montant_ht();
    string get_mode_de_paiement();
    string get_date_de_paiement();
    string get_reference_comande();
};
