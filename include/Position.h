#ifndef POSITION_H
#define POSITION_H


class Position
{
    public:
        Position();
        Position(int _x, int _y);
        Position(const Position& _pos);
        virtual ~Position();

        int getX()const;
        int getY()const;

        bool PosOk(int _x, int _y);
        bool PosOk();

        //inline ostream & operator << (ostream &o, const Position & p );

    protected:
        int x; // abscisse
        int y; // ordonnée
    private:
};

#endif // POSITION_H
