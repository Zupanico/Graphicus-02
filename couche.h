/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/


#ifndef COUCHE_H
#define COUCHE_H

#include "forme.h"
#include "vecteur.h"
#include <iostream>
#include "vecteur.cpp"

class Couche
{
public:
    Couche();
    ~Couche();

    //Manipulation du vecteur
    bool ajout(Forme* val);
    Forme* retirer(int index);

    //Receveur d'info
    Forme* getForme(int index);
    double aireTotale();


    //Manipulation de la couche
    bool ChangementEtat(char nEtat);
    bool translater(int deltaX, int deltaY);

    //Affichage
    void afficher(ostream & s);

    //Vider
    void viderCouche();

protected:
    char etat = 'A'; //I = Initialisé, A = Active et N = non active
    Vecteur<Forme*> v;
};

#endif
