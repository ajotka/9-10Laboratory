#include "dziedziczenie.h"

int main( )
{	

	Bazowa baz;
	Pochodna poch;
	
	std::cout << "Klasa: ";
	baz.tekst();
	std::cout << "Klasa: ";
	poch.tekst();
	
	std::cout << std::endl << "Wyswietlanie przez rzutowanie: " << std::endl;
	Bazowa * bazpoch = &poch; 	//rzutowanie w gore
	bazpoch->tekst();
	
	return 0;
}
