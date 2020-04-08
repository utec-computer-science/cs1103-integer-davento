#include 'Integer.h'

/*
#include <iostream>

class	Integer
{
	int	value;

	public:
		Integer();
		Integer(int value);
		Integer(const Integer& other);
		Integer operator=(const Integer& other);
		Integer operator+(int value);
		Integer operator^(int ex);
		operator int();
		friend std::ostream& operator <<(std::ostream& os, const Integer&);
		friend std::istream& operator >>(std::istream& os, Integer&);
};
*/

Integer::Integer(int value): this->value(value) {}

Integer::Integer(const Integer& other)
{
	value = other.value;
}

Integer::operator=(const Integer& other)
{
	value = other.value;	
}

Integer::operator+(int value)
{
	return this->value += value;
}

Integer::operator^(int ex)
{
	for(int i = 0; i < ex; i++)
		value *= ex;
}

Integer::operator int()
{
	return (int)value;
}

friend std::ostream& operator <<(std::ostream& os, const Integer&)
{
	os << value;
}

friend std::istream& operator >>(std::istream& os, Integer&)
{
	in >> value;
}