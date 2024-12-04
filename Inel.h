#pragma once
#include "Bijuterie.h"
class Inel : public Bijuterie {
	char* brand;
	int greutate;
	float pret;

	//Constructori (3 sau 2 daca folositi parametrii impliciti) + Destructor
	//Operator=
	//restul metodelor conform interfetei + ce alte metode considerati ca aveti nevoie
	
protected:

	void afisare(std::ostream& out) const override;

public:

	Inel();
	Inel(const char* brand, const int& greutate, const float& pret);
	Inel(const Inel& other);
	~Inel() override;

	float getPret() const override;
	char* getBrand() const override;
	int getGreutate() const override;
	Inel& operator=(const Inel& other);

};