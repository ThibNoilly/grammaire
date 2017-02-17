#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include "plus.h"
#include "Mult.h"
#include "entier.h"
#include "ferme.h"
#include "ouvre.h"

class Lexer
{
public:
    Lexer();
    Symbole prochSymbole();
};

#endif // LEXER_H
