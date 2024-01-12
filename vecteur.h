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

    // Desctructeur
    ~Vecteur();

    // Inserer
    int inserer(T valeur);
    int inserer(T valeur, int index);
    int doubler();

    // retrait
    void
    retrait();
};

#endif