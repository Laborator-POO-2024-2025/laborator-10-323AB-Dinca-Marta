#include "Bratara.h"

void Bratara::afisare(std::ostream& out) const
{
	out << "Pretul bratarii este: " << pret << '\n';
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

Bratara::Bratara()
{
	greutate = 0;
	pret = 0;
	brand = nullptr;
}

Bratara::Bratara(const char* brand, const int& greutate, const float& pret)
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

Bratara::Bratara(const Bratara& other)
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

Bratara::~Bratara()
{
	if (brand != nullptr)
	{
		delete[] brand;
	}
}

float Bratara::getPret() const
{
	return pret;
}

char* Bratara::getBrand() const
{
	return brand;
}

int Bratara::getGreutate() const
{
	return greutate;
}

Bratara& Bratara::operator=(const Bratara& other)
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
