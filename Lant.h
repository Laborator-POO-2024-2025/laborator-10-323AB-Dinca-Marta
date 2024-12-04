#pragma once
#include "Bijuterie.h"
class Lant : public Bijuterie {
	char* brand;
	int greutate;
	float pret;

	//ca mai sus
protected:

	void afisare(std::ostream& out) const override;

public:

	Lant();
	Lant(const char* brand, const int& greutate, const float& pret);
	Lant(const Lant& other);
	~Lant() override;

	float getPret() const override;
	char* getBrand() const override;
	int getGreutate() const override;
	Lant& operator=(const Lant& other);


};