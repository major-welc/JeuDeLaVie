#ifndef ELEMENT_H
#define ELEMENT_H

#include "Position.h"
#include <String>
using namespace std;
class Element
{
    public:
        Element();
        virtual ~Element();
        string Getnom() const;
        void Setnom(string val) ;
        Position Getpos() const;
        void Setpos(Position val);
    protected:
    private:
        string nom;
        Position pos;
};

#endif // ELEMENT_H
