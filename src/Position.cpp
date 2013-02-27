#include "..\include\Position.h"
#include <math.h>
#include <iostream.h>

Position::Position(){
    x=1;
    y=1;
}

Position::Position(const Position& _pos){
    x=_pos.getX();
    y=_pos.getY();
};

Position::Position(int _x, int _y){
    x=_x;
    y=_y;
}

Position::~Position(){
    //dtor
}

 int Position::getX() const{return x;};
 int Position::getY()const{return y;};



// verifie si la position est possiblement utilisable
// a completer avec la verification qu'il n'y ai rien sur cette cas
 bool Position::PosOk(int _x, int _y){
    if ( _x%2 == 0 && _y%2 == 0)return true;
    if ( _x%2 == 1 && _y%2 == 1)return true;
    return false;
};

 bool Position::PosOk(){
    if ( x%2 == 0 && y%2 == 0)return true;
    if ( x%2 == 1 && y%2 == 1)return true;
    return false;
};

/*
inline ostream & operator << (ostream &o, const Position & p ) // definition de la surcharge
{
    return p.getX() << p.getY();
};
*/
