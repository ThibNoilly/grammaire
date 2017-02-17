#include "lexer.h"

Lexer::Lexer()
{

}

Lexer::prochSymbole()
{
    char next;
    cin >> next;

    switch(next)
    {
    case '+':
        return new Plus();
    case '*':
        return new Mult();
    case '(':
        return new Ouvre();
    case ')':
        return new Ferme();
    }
}
