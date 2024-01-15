/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests.
 *    Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "tests.h"
// #include "vecteur.cpp"

void Tests::tests_unitaires_formes()
{
   // Construction
   Rectangle r1(1, 1, 2, 2); // Rectangle
   Carre cr1(1, 2, 2);       // Carre
   Cercle c1(1, 2, 2);       // Cercle

   // get
   // printf("%i,%i \n", r1.getAncrage().x, r1.getAncrage().y);   // affiche les points d'ancrage du rectangle en X,Y
   // printf("%i,%i \n", cr1.getAncrage().x, cr1.getAncrage().y); // affiche les points d'ancrage du carre en X,Y
   // printf("%i,%i \n", c1.getAncrage().x, c1.getAncrage().y);   // affiche les points d'ancrage du cercle en X,Y

   // afficher
   c1.afficher(cout);
   r1.afficher(cout);
   cr1.afficher(cout);
   printf("\n TRANSLATION!! \n");
   // translater
   c1.translater(3, 3);
   r1.translater(3, 3);
   cr1.translater(3, 3);
   c1.afficher(cout);
   r1.afficher(cout);
   cr1.afficher(cout);
}

void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur
   Vecteur<int> v;

   cout << v.estVide() << endl;

   for (int i = 0; i < 100; i += 2)
   {
      v.inserer(i);
   }
   v.retrait(5);
   v.afficher(cout);
   cout << "Test getValeur(10)" << v.getValeur(10) << endl
        << "Test getTaille" << v.getTaille() << endl
        << "Test getCapacite" << v.getCapacite() << endl;

   v.vider();

   cout << v.estVide() << endl;
}

void Tests::tests_unitaires_couche()
{
   /*
   Couche c;
   Rectangle *ptr = new Rectangle(2, 5);
   Carre *ptrCarre = new Carre(4);
   c.ajout(ptr);
   c.ajout(ptrCarre);
   c.ChangementEtat('N');
   // cout << c.aireTotale();
   c.viderCouche();
   c.afficher(cout);

   // cout << c.getForme(0);
   */
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl;
   Canevas c;
   c.activerCouche(2);
   Cercle *cerclePtr = new Cercle(5, 0, 1);
   Carre *carrePtr = new Carre(6, 1, 2);
   Rectangle *rectanglePtr1 = new Rectangle(4, 9, 2, 3);
   c.ajouterForme(cerclePtr);
   c.ajouterForme(carrePtr);
   c.ajouterForme(rectanglePtr1);
   c.retirerForme(1);
   c.activerCouche(1);
   Rectangle *rectanglePtr2 = new Rectangle(12,3);
   c.ajouterForme(rectanglePtr2);
   c.afficher(cout);
   cout << c.aire()<<endl;
   
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;
   // Il faut ajouter les operations realisant ce scenario de test.
}
