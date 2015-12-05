#include <iostream>

template < int ilosc, class typ >
class tab_typ													//szablon klasy
{
public:
    typ zmienna[ ilosc ];
    int zmienna_ilosci;
    void uzupelnij( int ktora )
    {
        std::cin >> zmienna[ ktora ];
    }
    void pokaz( int ktora )
    {
        std::cout << zmienna[ ktora ] << std::endl;
    }
    int wielkosc()
    {
        return ilosc;
    }
    void ilosc_elementow()
    {
        zmienna_ilosci = ilosc;
    }
    typ wyswietl(typ swiatecznie[ ilosc ])					//szablon funkcji
    {
    	std::cout << std::endl << swiatecznie << std::endl;
	}
};
