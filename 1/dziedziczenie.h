#include <iostream>
#include <string>

class Bazowa
{
	protected:
		std::string klasa = "Bazowa";

	public:		
		virtual void tekst()
		{
        	std::cout << klasa << std::endl;
    	}
};


class Pochodna : public Bazowa
{
		std::string klasa = "Pochodna";  //przeslania zmienna 'klasa' z Bazowej
		
	public:
		virtual void tekst()					//przeslania metode z klasy bazowej
		{
        	std::cout << klasa << std::endl; //wyswietli zmienna z klasy pochodej
        	std::cout << Bazowa::klasa << " wyswietlana z klasy " << klasa << std::endl;
    	}
};


