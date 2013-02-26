#include "..\include\Element.h"
#include <string>
using namespace std;

Element::Element()
{
    //ctor
}

Element::~Element()
{
    //dtor
}


string Element::getNom() const{ return nom; }

void Element::setNom(string _nom) { nom = _nom; }

Position Element::getPos() const{ return pos; }

void Element::setPos(Position _pos) { pos = _pos; }

