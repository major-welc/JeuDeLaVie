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


string Element::Getnom() const{ return nom; }
void Element::Setnom(string _nom) { nom = _nom; }
Position Element::Getpos() const{ return pos; }
void Element::Setpos(Position _pos) { pos = _pos; }
