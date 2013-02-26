#ifndef RESSOURCE_H
#define RESSOURCE_H

#include <Element.h>



class Ressource : public Element
{
    public:
        Ressource();
        virtual ~Ressource();
        int getQte() const;
        void setQte(pQte);
    protected:
    private:
        int qte;
};

#endif // RESSOURCE_H
