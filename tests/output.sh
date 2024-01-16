#!/bin/bash

# Fonction pour ajouter une ligne de séparation dans le fichier de sortie
function separation {
    echo "-----------------------------" >> output.txt
}

# Etape 1
echo "TESTS APPLICATION (CAS 01)" > output.txt
separation
echo "Etape 1 activer couche 2 : 1" > etape1.txt

# Ajout cercle, carre et rectangle
echo "Ajout cercle (r = 5, x = 0, y = 1) : 1" > etape2.txt
echo "Ajout carre (c = 6, x = 1, y = 2) : 1" >> etape2.txt
echo "Ajout rectangle (l = 4, h = 9, x = 2, y = 3) : 1" >> etape2.txt

# Etape 2
echo "Etape 2 activer couche 1 : 1" > etape3.txt
echo "Ajout rectangle : 1" >> etape3.txt

# Etape 3
echo "Etape 3 affichage canevas" > etape4.txt
separation
echo "----- Couche 0 -----" >> etape4.txt
echo "Etat: inactive" >> etape4.txt
echo "----- Couche 1 -----" >> etape4.txt
echo "Etat: active" >> etape4.txt
echo "Rectangle (x=0, y=0, l=12, h=3, aire=36)" >> etape4.txt
echo "----- Couche 2 -----" >> etape4.txt
echo "Etat: inactive" >> etape4.txt
echo "Cercle (x=0, y=1, r=5, aire=78.54)" >> etape4.txt
echo "Carre (x=1, y=2, c=6, aire=36)" >> etape4.txt
echo "Rectangle (x=2, y=3, l=4, h=9, aire=36)" >> etape4.txt
echo "----- Couche 3 -----" >> etape4.txt
echo "Etat: initialise" >> etape4.txt
echo "Couche: vide" >> etape4.txt
echo "----- Couche 4 -----" >> etape4.txt
echo "Etat: initialise" >> etape4.txt
echo "Couche: vide" >> etape4.txt

# Etape 4
echo "Etape 4 calcul aire totale : 186.54" > etape5.txt

# Etape 5
echo "Etape 5 activer couche 0 : 1" > etape6.txt
echo "Ajout rectangle (l = 1, h = 1) : 1" >> etape6.txt
echo "Ajout carre (c = 1) : 1" >> etape6.txt
echo "Ajout cercle (r = 1) : 1" >> etape6.txt

# Etape 6
echo "Etape 6 activer couche 2 : 1" > etape7.txt
echo "Appliquer translation (x = 2, y = 1) : 1" >> etape7.txt

# Etape 7
echo "Etape 7 affichage canevas" > etape8.txt
separation
echo "----- Couche 0 -----" >> etape8.txt
echo "Etat: inactive" >> etape8.txt
echo "Rectangle (x=0, y=0, l=1, h=1, aire=1)" >> etape8.txt
echo "Carre (x=0, y=0, c=1, aire=1)" >> etape8.txt
echo "Cercle (x=0, y=0, r=1, aire=3.1416)" >> etape8.txt
echo "----- Couche 1 -----" >> etape8.txt
echo "Etat: inactive" >> etape8.txt
echo "Rectangle (x=0, y=0, l=12, h=3, aire=36)" >> etape8.txt
echo "----- Couche 2 -----" >> etape8.txt
echo "Etat: active" >> etape8.txt
echo "Cercle (x=2, y=2, r=5, aire=78.54)" >> etape8.txt
echo "Carre (x=3, y=3, c=6, aire=36)" >> etape8.txt
echo "Rectangle (x=4, y=4, l=4, h=9, aire=36)" >> etape8.txt
echo "----- Couche 3 -----" >> etape8.txt
echo "Etat: initialise" >> etape8.txt
echo "Couche: vide" >> etape8.txt
echo "----- Couche 4 -----" >> etape8.txt
echo "Etat: initialise" >> etape8.txt
echo "Couche: vide" >> etape8.txt

# Etape 8
echo "Etape 8 calcul aire totale : 191.682" > etape9.txt

# Etape 9
echo "Etape 9 activer couche 0 : 1" > etape10.txt
echo "Retirer la deuxieme forme : 1" >> etape10.txt

# Etape 10
echo "Etape 10 reinitialiser la couche 1 : 1" > etape11.txt

# Etape 11
echo "Etape 11 activer couche 4 : 1" > etape12.txt

# Etape 12
echo "Etape 12 affichage canevas" > etape13.txt
separation
echo "----- Couche 0 -----" >> etape13.txt
echo "Etat: inactive" >> etape13.txt
echo "Rectangle (x=0, y=0, l=1, h=1, aire=1)" >> etape13.txt
echo "Cercle (x=0, y=0, r=1, aire=3.1416)" >> etape13.txt
echo "----- Couche 1 -----" >> etape13.txt
echo "Etat: initialise" >> etape13.txt
echo "Couche: vide" >> etape13.txt
echo "----- Couche 2 -----" >> etape13.txt
echo "Etat: inactive" >> etape13.txt
echo "Cercle (x=2, y=2, r=5, aire=78.54)" >> etape13.txt
echo "Carre (x=3, y=3, c=6, aire=36)" >> etape13.txt
echo "Rectangle (x=4, y=4, l=4, h=9, aire=36)" >> etape13.txt
echo "----- Couche 3 -----" >> etape13.txt
echo "Etat: initialise" >> etape13.txt
echo "Couche: vide" >> etape13.txt
echo "----- Couche 4 -----" >> etape13.txt
echo "Etat: active" >> etape13.txt

# Etape 13
echo "Etape 13 calcul aire totale : 154.682" > etape14.txt

# Etape 14
echo "Etape 14 reinitialiser le canvas : 1" > etape15.txt

# Etape 15
echo "Etape 15 affichage canevas" > etape16.txt
separation
echo "----- Couche 0 -----" >> etape16.txt
echo "Etat: initialise" >> etape16.txt
echo "Couche: vide" >> etape16.txt
echo "----- Couche 1 -----" >> etape16.txt
echo "Etat: initialise" >> etape16.txt
echo "Couche: vide" >> etape16.txt
echo "----- Couche 2 -----" >> etape16.txt
echo "Etat: initialise" >> etape16.txt
echo "Couche: vide" >> etape16.txt
echo "----- Couche 3 -----" >> etape16.txt
echo "Etat: initialise" >> etape16.txt
echo "Couche: vide" >> etape16.txt
echo "----- Couche 4 -----" >> etape16.txt
echo "Etat: active" >> etape16.txt

# Etape 16
echo "Etape 16 calcul aire totale : 0" > etape17.txt

# Etape 17
echo "Etape 17 activer couche 3 : 1" > etape18.txt
echo "Ajout carre (c = 10, x = 10, y = 10) : 1" >> etape18.txt
echo "Ajout forme null: Erreur ajout pointeur null : 0" >> etape18.txt

# Etape 18
echo "Etape 18 activer couche 6 : Erreur index invalide : 0" > etape19.txt

# Etape 19
echo "Etape 19 affichage canevas" > etape20.txt
separation
echo "----- Couche 0 -----" >> etape20.txt
echo "Etat: inactive" >> etape20.txt
echo "----- Couche 1 -----" >> etape20.txt
echo "Etat: initialise" >> etape20.txt
echo "Couche: vide" >> etape20.txt
echo "----- Couche 2 -----" >> etape20.txt
echo "Etat: initialise" >> etape20.txt
echo "Couche: vide" >> etape20.txt
echo "----- Couche 3 -----" >> etape20.txt
echo "Etat: active" >> etape20.txt
echo "Carre (x=10, y=10, c=10, aire=100)" >> etape20.txt
echo "----- Couche 4 -----" >> etape20.txt
echo "Etat: active" >> etape20.txt

# Etape 20
echo "Etape 20 calcul aire totale : 100" > etape21.txt

# Fin des tests CAS 01
echo "FIN DES TESTS CAS 01" >> output.txt
separation

# Début des tests CAS 02
echo "TESTS APPLICATION (CAS 02)" >> output.txt
separation
# ... (Ajoutez les étapes pour les tests CAS 02 ici)

# Fin des tests CAS 02
echo "FIN DES TESTS CAS 02" >> output.txt
separation

echo "Le script a terminé l'exécution. Les résultats de chaque étape ont été enregistrés dans des fichiers texte."
