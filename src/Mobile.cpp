#include "Mobile.h"

Mobile::Mobile()
{
    //ctor
}

Mobile::~Mobile()
{
    //dtor
}

int Mobile::getPortee() const{ return portee; }

void Mobile::setPortee(int pPortee){ portee=pPortee;  }

int Mobile::getVue() const{ return vue; }

void Mobile::setVue(int pVue){ vue=pVue;  }
