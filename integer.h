#include <iostream>

class	Integer
{
	int	value;

	public:
		Integer();
		Integer(int value);
		Integer(const Integer& other);
		Integer operator=(const Integer& other); ////permite igualar el valor de otro objeto de tipo Integer
		Integer operator+(int value);
		Integer operator^(int base, int ex);
		operator int(); //casting. no podría usarse el valor para otras operaciones
		friend std::ostream& operator <<(std::ostream& os, const Integer&);
		friend std::istream& operator >>(std::istream& os, Integer&);
};