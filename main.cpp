#include <iostream>
#include "include\position.h"
#include "include/Element.h"
#include "include/Monde.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
Monde m;
    Position pos = Position(3,3);
    cout << pos.getX() << "  " << pos.getY() <<"  " << pos.PosOk(pos.getX(),pos.getY()) << "    " << pos.PosOk();
    return 0;
}
