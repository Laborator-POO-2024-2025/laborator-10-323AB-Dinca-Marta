#include "Inel.h"

void Inel::afisare(std::ostream& out) const
{
	out << "Pretul inelului este: " << pret << '\n';
	out << "Grutatea este: " << greutate << '\n';
	out << "Brandul  este: ";

	if (brand!= nullptr)
	{
		out << brand<< '\n';
	}
	else
	{
		out << "N/A\n";
	}
}

Inel::Inel()
{
    greutate = 0;
    pret = 0;
    brand = nullptr;
}

Inel::Inel(const char* brand, const int& greutate, const float& pret)
{
    this->greutate = greutate;
    this->pret = pret;
	if (brand!= nullptr)
	{
		this->brand = new char[strlen(brand) + 1];
		strcpy(this->brand, brand);
	}
	else
	{
		this->brand = nullptr;
	}
}

Inel::Inel(const Inel& other)
{
	this->greutate = other.greutate;
	this->pret = other.pret;
	if (other.brand != nullptr)
	{
		this->brand = new char[strlen(other.brand) + 1];
		strcpy(this->brand, other.brand);
	}
	else
	{
		this->brand = nullptr;
	}
}

Inel::~Inel()
{
	if (brand != nullptr)
	{
		delete[] brand;
	}
}

float Inel::getPret() const
{
    return pret;
}

char* Inel::getBrand() const
{
    return brand;
}

int Inel::getGreutate() const
{
    return greutate;
}

Inel& Inel::operator=(const Inel& other)
{
	if(this->brand != nullptr)
	{
		delete[] this->brand;
	}

	this->pret = other.pret;
	this->greutate = other.greutate;

	if (other.brand != nullptr)
	{
		this->brand = new char[strlen(other.brand) + 1];
		strcpy(this->brand, other.brand);
	}
	else
	{
		this->brand = nullptr;
	}

	return *this;
}
