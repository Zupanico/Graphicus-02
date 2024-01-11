/********
 * Fichier: cercle.h
 * Auteurs: Louis Dumas
 * Date: 10 janvier 2024 (creation)
 * Description: Declaration de la classe cercle
 ********/
#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"

class Cercle : public Forme {
public:
    Cercle(int rayon);
    ~Cercle();

    double aire()  override;
    void afficher(ostream & s)  override;

protected:
    int rayon;
    Coordonnee centre;
};

#endif