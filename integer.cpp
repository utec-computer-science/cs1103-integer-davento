#include "integer.h"

Integer::Integer() { value = 0;}

Integer::Integer(int value): value(value) {}

Integer::Integer(const Integer& other)
{
	this->value = other.value;
}

Integer::~Integer() {}

Integer Integer::operator=(const Integer& other)
{
	return this->value = other.value;    
}

Integer Integer::operator+(int value)
{
	return this->value + value;
}

Integer Integer::operator^(int ex)
{
	int n = this->value;
	for(int i = 0; i < ex; i++)
		n *= this->value;
	return this->value = n;
}

Integer::operator int()
{
	return (int)this->value;
}

std::ostream& operator <<(std::ostream& os, const Integer& x)
{
	os << x.value;
	return os;
}

std::istream& operator >>(std::istream& os, Integer& x)
{
	os >> x.value;
	return os;
}