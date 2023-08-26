#pragma once

#include "Person.h"

class Student : public Person
{
private:
	int m_intel;
	
public:
	Student(const std::string& name_in= "asdf", const int& intel_in = 0)
		//:m_name(name_in), m_intel(intel_in)
		:Person(name_in),m_intel(intel_in)
	{}
	
	void setIntel(const int& intel_in)
	{
		m_intel = intel_in;
	}
	int getIntel()
	{
		return m_intel;
	}

	void study()
	{
		std::cout << getName() << "is studying" << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Student& student)
	{
		out << student.getName() << " " << student.m_intel;
		//받아 오는 애가 const 이기 때문에 문제가 발생 getName 함수 뒤에 const 붙이면 해결
		return out;
	}
	
};

