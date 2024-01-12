#include "vecteur.h"

template <typename T> inline Vecteur<T>::Vecteur()
{
    tab = new T[1];
    capacite = 1;
    taille=1;
}

template <typename T> Vecteur<T>::~Vecteur()
{
    delete[] tab;
}

template <typename T> int Vecteur<T>::inserer(T valeur)
{
    try {
        // regarde si taille == capacite
        if (taille == capacite){
            doubler();
        }
        
        // insere la valeur 
        tab[taille] = valeur;
        
        // augemente la taille
        taille ++;
    }

    catch(T valeur) 
    {
        // retourne un code d'erreur 1
        return 1;
    }

    // Sans erreur, retourne 0
    return 0;
}

template <typename T> int Vecteur<T>::inserer(T valeur, int index)
{
    try {
        if (index == capacite) {
            inserer(valeur);
        }
        else {
            tab[index] = valeur;
        }
    }

    catch (T valeur)
    {
        // retourne un code d'erreur 1
        return 1;
    }

    // Sans erreur, retourne 0
    return 0;
}

template <typename T> int Vecteur<T>::doubler()
{
    try {
        // tableau temporaire avec double capacite
        T* temp = new T[2 * capacite];

        // copie des elements dans le nouveau tableau
        for (int i = 0; i < capacite; i++)
        {
            temp[i] = tab[i];
        }

        // supprime le tableau
        delete[] tab;

        // double la capacite APRES avoir copie les valeurs
        capacite *=2;

        // remets les valeurs originales
        tab = temp;
    }

    catch (T valeur)
    {
        // retourne un code d'erreur 1
        return 1;
    }

    // Sans erreur, retourne 0
    return 0;
}
