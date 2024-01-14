/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : Nicolas Garant
 * Date : 11 janvier 2024
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "couche.h"

// TODO
/*class couche
    stocke pointeur forme
    vecteur pour stocker pointeur de formes
    ajout pointeur forme->return bool success
    rm form-> return bool success
    get forme dans couche->if error return null vector default return vector
    get aire couche int, translate couche int x int y->return bool success
    reset couche, change state : init active inactive->return success
    print couche init : lors créée et reset aire = 0 active : changement d'état
    couche doit être active pour être modifiée inactive : changement d'état
    aucune modifications -> échec si demande



*/

Couche::Couche()
{
}

Couche::~Couche()
{
}

bool Couche::ajout(Forme *val)
{
    if (etat != 'A')
    {
        return false;
    }

    v.inserer(val); // TODO arranger pour que le retour de vecteur soit

    return true;
}

Forme *Couche::retirer(int index)
{
    Forme *ptr;
    ptr = v.retrait(index);
    if (etat != 'A' || v.retrait(index) == nullptr) //Si ptr est null renvoie null ou si couche n'est pas active
    {
        return nullptr;
    }
    return ptr;
}

Forme *Couche::getForme(int index)
{
    Forme *ptr;
    ptr = v.getValeur(index);
    if (ptr == nullptr)  //Si ptr est null renvoie null
    {
        return nullptr;
    }
    return ptr;
}

double Couche::aireTotale()
{
    double aireTot = 0;

    if (etat == 'I') //Si la couche est initialisé alors aire = 0
    {
        return 0;
    }

    for (int i = 0; i < v.getTaille(); i++) //Défile tous les éléments du vecteur
    {
        aireTot += v.getValeur(i)->aire();
    }

    return aireTot;
}

bool Couche::ChangementEtat(char e)
{

    if (e != 'N' || e != 'A')  //Vérifie si c'est un état possible
    { // Seul erreur possible
        etat = e;
    }

    return false;
}

bool Couche::translater(int deltaX, int deltaY) // TODO catch erreurs
{
    if (etat != 'A')
    {
        return false;
    }

    for (int i = 0; i < v.getTaille(); i++) //Défile tous les éléments du vecteur
    {
        v.getValeur(i)->translater(deltaX, deltaY);
    }
    return true;
}

void Couche::afficher(ostream &s)
{

    for (int i = 0; i < v.getTaille(); i++) //Défile tous les éléments du vecteur
    {
        v.getValeur(i)->afficher(s);
    }
}

void Couche::viderCouche()
{
    v.vider();
    etat = 'I';
}