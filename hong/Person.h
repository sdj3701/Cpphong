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
	1.�Ķ���Ͱ� ���� �����ڸ� �����Ͽ� �����ذ�
	2.�Ķ���Ͱ� �ִ� �����ڿ��� ������ ���ָ� �ذ�
	*/


	Person(const std::string & name_in ="asdf");
	void setName(const std::string & name_in);
	std::string getName() const;
	void doNothing() const;

};