#include "Person.h"

using namespace std;

Person::Person(const std::string& name_in)
	:m_name(name_in)
{}

void Person::setName(const std::string& name_in)
{
	m_name = name_in;
}

std::string Person::getName() const
{
	return m_name;
}

void Person::doNothing() const
{
	cout << m_name << " is doin nothing" << std::endl;
}
