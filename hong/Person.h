#pragma once

#include <iostream>
#include <string>

class Person
{
private:
	std::string m_name;
public:
	/*Person()
		:m_name("asdf")
	{}
	1.파라미터가 없는 생성자를 선언하여 문제해결
	2.파라미터가 있는 생성자에서 선언을 해주면 해결
	*/


	Person(const std::string & name_in ="asdf");
	void setName(const std::string & name_in);
	std::string getName() const;
	void doNothing() const;

};