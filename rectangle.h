/********
 * Fichier: rectangle.h
 * Auteurs: Nicolas Garant
 * Date: 04 janvier 2024 (creation)
 * Description: Declaration de la classe rectangle
 ********/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "coordonnee.h"
#include "forme.h"

using namespace std;

class Rectangle: public Forme {
    public:
    Rectangle(int l=1, int h=1);
    ~Rectangle();
    

    protected:
    int largeur;
    int hauteur;

};

#endif