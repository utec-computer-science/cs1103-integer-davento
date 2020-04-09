#include 'Integer.h'

Integer::Integer(int value): this->value(value) {}

Integer::Integer(const Integer& other)
{
	this->value = other.value;
}

Integer Integer::operator=(const Integer& other)
{
	return Integer(this->value = other.value);    
}

Integer Integer::operator+(int value)
{
	return Integer(this->value + value);
}

Integer Integer::operator^(int ex)
{
	n = this->value;
	for(int i = 0; i < ex; i++)
		n *= this->value;
	return Integer(this->value = n);
}

Integer::operator int()
{
	return (int)this->value;
}

std::ostream& operator <<(std::ostream& os, const Integer&)
{
	os << this->value;
	return os;
}

std::istream& operator >>(std::istream& os, Integer&)
{
	os >> this->value;
	return os;
}