#include "Lant.h"



void Lant::afisare(std::ostream& out) const
{
	out << "Pretul lantului este: " << pret << '\n';
	out << "Grutatea este: " << greutate << '\n';
	out << "Brandul  este: ";

	if (brand != nullptr)
	{
		out << brand << '\n';
	}
	else
	{
		out << "N/A\n";
	}
}

Lant::Lant()
{
	greutate = 0;
	pret = 0;
	brand = nullptr;
}

Lant::Lant(const char* brand, const int& greutate, const float& pret)
{
	this->greutate = greutate;
	this->pret = pret;
	if (brand != nullptr)
	{
		this->brand = new char[strlen(brand) + 1];
		strcpy(this->brand, brand);
	}
	else
	{
		this->brand = nullptr;
	}
}

Lant::Lant(const Lant& other)
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

Lant::~Lant()
{
	if (brand != nullptr)
	{
		delete[] brand;
	}
}

float Lant::getPret() const
{
	return pret;
}

char* Lant::getBrand() const
{
	return brand;
}

int Lant::getGreutate() const
{
	return greutate;
}
Lant& Lant::operator=(const Lant& other)
{
	if (this->brand != nullptr)
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

