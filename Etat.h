#ifndef ETAT_H
#define ETAT_H

#include <string>
#include <iostream>

class Etat
{
public:
    Etat(string name);
    virtual ~Etat();
    void print() const;
    virtual bool transition(Automate & automate, Symbole * s) = 0;

protected:
    string name;
};

#endif // ETAT_H
