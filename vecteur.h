/********
 * Fichier: vecteur.h
 * Auteurs: Nicolas Garant
 * Date: 04 janvier 2024 (creation)
 * Description: Declaration de la classe vector
 ********/

#ifndef VECTEUR_H
#define VECTEUR_H

#include "iostream"

using namespace std;
template <typename T> class Vecteur {
    // addresse du pointeur
    T* tab;

    // Capacite du vecteur
    int capacite;

    // Taille du vecteur
    int taille;

public:
    // Constructeur
    Vecteur();

    // Destructeur
    ~Vecteur();

    // Inserer
    int inserer(T valeur);
    int inserer(T valeur, int index);
    int doubler();

    // Retrait
    int retrait(int i);

    // Getteur
    T* getValeur(int i);
    int estVide();

    // Afficher
    void afficher(ostream &s) override;

    // Vider
    void vider();
};

#endif