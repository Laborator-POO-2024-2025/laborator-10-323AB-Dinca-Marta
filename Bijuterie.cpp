#include "Bijuterie.h"


std::ostream& operator<<(std::ostream& out, const Bijuterie* const& Bijuterie)
{
	
		Bijuterie->afisare(out); // ne folosim de late binding
		return out;
	
}
Bijuterie:: ~Bijuterie() {

}

/*Bijuterie& Bijuterie::operator=(const Bijuterie& bijuterie)
{
	// TODO: insert return statement here
}*/
