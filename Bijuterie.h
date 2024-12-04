#pragma once
#include <iostream>
#include <cstring>
class Bijuterie {
	//nu are atribute si toate metodele sunt pur virtuale
	//definiti destructorul pur virtual, cei 3 get-eri, metoda “afisare” si operatorul<<
protected:

	virtual void afisare(std::ostream& out) const = 0; // va fi folosita pentru operatorul <<

public:

	virtual ~Bijuterie() = 0;
	//virtual Bijuterie & operator=(const Bijuterie& bijuterie);
	virtual float getPret() const = 0;
	virtual char* getBrand() const = 0;
	virtual int getGreutate() const = 0;
	friend std::ostream& operator<<(std::ostream& out, const Bijuterie* const& Bijuterie);
};
