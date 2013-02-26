#ifndef MOBILE_H
#define MOBILE_H

#include <Element.h>

class Mobile : public Element
{
    public:
        Mobile();
        virtual ~Mobile();
        int getPortee() const;
        void setPortee(int pPortee);
        int getVue() const;
        void setVue(int pVue);
    protected:
    private:
        int portee;
        int vue;
};

#endif // MOBILE_H
