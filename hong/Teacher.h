#pragma once

#include "Person.h"

class Teacher :public Person
{
private:
	
public:
	Teacher(const std::string & name_in ="asdf")
		//:m_name(name_in) 지운 이유는 Person헤더파일에 적어둠
		:Person(name_in)
	{
		this->getName();
	}
	
	void teach()
	{
		std::cout << getName() << "is teaching" << std::endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Teacher& teachar)
	{
		//out << teachar.m_name << std::endl;
		out << teachar.getName();
		return out;
	}

};

