#include "cercle.h"

Cercle::Cercle(int rayon1)
{

    rayon = rayon1;

}

Cercle::~Cercle()
{
}

double Cercle::aire()
{
    return 3.1416 * rayon * rayon; // pi r^2
}

void Cercle::afficher(ostream & s)
{
    s << "Cercle (x=" << centre.x << "), y=" << centre.y << ", r=" << rayon <<", aire=" << aire() << ")" << std::endl;
}