#include "etat6.h"

Etat6::Etat6(string name) : Etat(name)
{
   return;
}

Etat6::print()
{}

Etat6::transition(Automate & automate, Symbole * s)
{
    switch(*s)
    {
    case ENTIER:
    case PLUS:
        automate.decalage(s, new Etat4);
        break;
    case MULT:
        automate.decalage(s, new Etat5);
        break;
    case OUVRE:
    case FERME:
        automate.decalage(s, new Etat9);
        break;
    case EXPR:
    }
    return false;
}
