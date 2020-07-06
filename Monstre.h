#ifndef MONSTRE_H
#define MONSTRE_H

#include "Entite.h"

//  Monstre h�rite de Entit�


class Monstre : public Entite
{
    public:
        Monstre(const char*n,int pv=100,int mp=0,int xp=10);
        virtual ~Monstre();

        int xp(){return m_XP;}

        void reset();


        virtual void affichePV_MP(TTF_Font *police);
        virtual void comportement(Group &attaquant,Group &defense);
        virtual SDL_Surface *sprite()=0;
        virtual void mort();

    protected:

        int m_XP;  //  xp gagn� quand on tue le monstre ??? non implant�
};

#endif // MONSTRE_H
