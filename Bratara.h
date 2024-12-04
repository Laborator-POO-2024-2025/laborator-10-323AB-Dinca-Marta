#pragma once
#include "Bijuterie.h"
class Bratara : public Bijuterie {
	char* brand;
	int greutate;
	float pret;
protected:

	void afisare(std::ostream& out) const override;

public:

	Bratara();
	Bratara(const char* brand, const int& greutate, const float& pret);
	Bratara(const Bratara& other);
	~Bratara() override;

	float getPret() const override;
	char* getBrand() const override;
	int getGreutate() const override;
	Bratara& operator=(const Bratara& other);
	//ca mai sus
};
