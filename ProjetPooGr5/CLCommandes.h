#pragma once
#include "tools.h"

class CLCommandes{
  private:

          string reference_commande;
          int num_client;
          string date_commande;
          string date_livraison;
          string date_payement;
          float remise;

  public:

        string set_reference_commande(string reference_commande);
        string get_reference_commande();
        int set_num_client(int num_client);
        int get_num_client();
        string set_date_commande(string date_commande);
        string get_date_commande();
        string set_date_livraison(string date_livraison);
        string get_date_livraison();
        string set_date_payement_final(string date_payemement_final);
        string get_date_payement_final();
        float set_remise(float remise);
        float get_remise();

          void creer_commande();
          void supprimer_commande();
          void modifier_commande();
          void afficher_commande();

};