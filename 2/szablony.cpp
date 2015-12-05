#include "szablony.h"
#include <iostream>

int main()
{
    tab_typ < 3, char > tablica; //mozemy tu podac dowolna wielkosc tablicy i typ jej elementow
    
    tablica.ilosc_elementow();
    
    int a = 0, suma=0;

    std::cout << "Wpisz do tablicy: " << tablica.wielkosc() << " elementow." << std::endl << std::endl;
    
    while( a < tablica.zmienna_ilosci )
    {
        tablica.uzupelnij( a );
        std::cout << "TAB[" <<  a << "]= ";
        tablica.pokaz( a );
		a++;
    }
    
    tab_typ < 20, char > tekst;
    tekst.wyswietl("Wesolych Swiat!");
    
    std::cout << std::endl << "Operacja ukonczona - podano: " << a << " elementow" << std::endl;
}
