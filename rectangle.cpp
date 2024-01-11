/********
 * Fichier: rectangle.cpp
 * Auteurs: Nicolas Garant
 * Date: 04 janvier 2024 (creation)
 * Description: Implementation de la classe rectangle
 ********/

#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(int l, int h)
{
    largeur = l;
    hauteur = h;
}

Rectangle::~Rectangle()
{
}

int Rectangle::getHauteur()
{
    return hauteur;
}

int Rectangle::getLargeur()
{
    return largeur;
}

void Rectangle::setHauteur(int h)
{
    hauteur = h;
}

void Rectangle::setLargeur(int l)
{
    largeur = l;
}
