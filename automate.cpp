#include "automate.h"
#include <iostream>

Automate::Automate()
{

}

Automate::prochSymbole()
{

}

Automate::lireSymbole()
{

}

Automate::decalage(Symbole * s, Etat * e)
{
	symbolstack.push_back(s);
	statestack.push_back(e);
}

Automate::reduction(int n, Symbole * s)
{
	for (int i=0;i<n;i++)
	{
		delete(statestack.back());
		statestack.pop_back();
	}

}
