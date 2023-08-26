#include "Monster.h"
#include "Student.h"
#include "Teacher.h"
#include "Calc.h"
#include <string>
#include <vector>
#include <cassert>
using namespace std;

#pragma region class ������
/*

class Fraction
{
private:
	int m_numerator;
	int m_denominator;
public:
	//Fraction(const int& in, const int& numin) �Լ� ���� ���
	Fraction()
		//���� �����ڸ� ������ ������ �⺻�����ڰ� ���� �ƹ� ���̳� �־���
	{
		m_numerator ;
		m_denominator ;
	}
	void print()
	{
		cout << m_numerator << "/" << m_denominator << endl;
	}
};
class Second
{
public:
	Second()
	{
		cout << "2";
	}
};

class First
{
	Second sec;
	//second�� ����� �ҷ��� ���� class�� ���� ���ְ� ����� �ؾ��Ѵ�
public:
	First()
	{
		cout << "1";
	}
};



int main()
{
	First fir;
	//Second �� ���� ������ �ȴ�
	//������ ���� ��������־� second�� �����ڸ� ���� �ϰ� ���� first�� ������ �Ѵ�

#pragma region fraction



	Fraction frac;
	//���⿡ ������ class�� �� �����ڸ� �ѹ������� �ؼ� ���� �ʱ�ȭ��
	frac.print();

	Fraction one_thirds(1, 2);
	one_thirds.print();
	//�����ڿ��� �ٷ� �ʱ�ȭ�ؼ� ���� �־��ټ� ���� �Լ� ���� ��� ����
	//���� ����Ʈ�� ���� ���δ� ��������� one_thieds�� ����Ը�ȴ�.


#pragma endregion


	return 0;
}
*/
#pragma endregion

#pragma region �������� ��� �̴ϼȶ�����(�ʱ���) ����Ʈ
/*
class B
{
	int m_b;
public:
	B(const int& m_b_in)
		:m_b(m_b_in)
	{}
};


class Something
{
private:
	int m_i;
	double m_d;
	char m_c;
	int m_arr[5];
	B m_b;

public:
	Something()
		: m_i{ 1 }, m_d{ 3.14 }, m_c{ 'a' }, m_arr{ 1,2,3,4,5 }, m_b(m_i-1)
		//�̴ϼȶ����� ����Ʈ �̷��Ե� �ʱ�ȭ ����
	{
		//m_i = 1;
		//m_d = 3.14;
		//m_c = 'a';
	}

	void pinrt()
	{
		cout << m_i << " " << m_d << " " << m_c << " " << endl;
		for (auto& ary : m_arr)
			cout << ary << " ";
		cout << endl;
	}

};

int main()
{
	Something sm;
	sm.pinrt();
}
*/
#pragma endregion

#pragma region ���� ������
/*

//�����ڰ� �ٸ������ڸ� ���󰡴°��� ���� �����ڶ�� �Ѵ�.
class Student
{
private:
	int m_id;
	string m_name;
public:

	Student(const string& name_in)
		//:m_id(0), m_name(name_in)
		:Student(0, name_in)
		//���� ������ ���ִ� ���� �ƴ϶�
		//�����ڸ� ����� ����ϸ� ���� ����ϰ� �ʱ�ȭ�� �Ҽ� �ִ�.
	{
		init(0, name_in);
	}

	Student(const int& id_in, const string& name_in)
	//	:m_id(id_in), m_name(name_in)
	{
		init(id_in, name_in);
	}

	void init(const int& id_in, const string& name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}
	//�ʱ�ȭ �ڵ带 �и��� �ؼ� ����ϴ°��� ����

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student st1(0, "jj");
	st1.print();

	Student st2("ss");
	st2.print();

	return 0;
}

*/
#pragma endregion

#pragma region �Ҹ���
/*
class Simple
{
private:
	int m_id;
public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor" << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor" << m_id << endl;
	}

 };

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];
		//cout << "Constructor" << endl;
	}

	~IntArray()
	{
		if(m_arr != nullptr)
			//nullptr�� �� ������ ������ �ֱ� ������ Ȯ�����ִ� ���� ����
			delete[] m_arr;
		//�����Ҵ� ������ delete�� �޸𸮸� ���� �������
	}
	//�Ҹ��ڰ� ������ �޸� ���� ����

	int getLength() { return m_length; }
};

int main()
{

	while (1)
	{
		IntArray my_int_arr(10000);
	}


	//Simple s1(0);
	Simple *s1 = new Simple(0);
	Simple s2(1);

	delete s1;
	//�����Ҵ����� ������� ���� ������ ����� �ڵ����� �޸𸮰� �������� �ʱ� ������ delete���� �޸𸮸� ������ ������ �Ҹ��ڰ� ȣ��˴ϴ�.

	//�Ҹ��ڰ� �Լ� ������ ������ ����ȴ�

	return 0;
}

*/
#pragma endregion

#pragma region this �����Ϳ� ���� ȣ��

/*

int main()
{
	Calc cal(10);
	cal.add(10);
	cal.sub(1);
	cal.mult(2);

	cal.print();



	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);
	//Simple::setID(&2,4) == s2.setID(4);

	//cout << &s1 << " " << s1.getID() << endls

}
*/
#pragma endregion

#pragma region Ŭ���� �ڵ�� ��� ����
/*


int main()
{
	Calc cal(10);
	cal.add(10);
	cal.sub(1);
	cal.mult(2);

	cal.print();

	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);
}

*/
#pragma endregion

#pragma region class const
/*
class Something {
public:

	int m_value = 0;
	string m_values = "default";

	const string& getValue() const { return m_values; }
	//�տ� const string&�� ����� ������ returnŸ���� const �̱� ������ �տ� const string&�� �����
	string& getValue() { return m_values; }
	//

	Something(const Something& st_in)
	//���⿡�� ���� constructor�� �����ִ�
	{
		m_value = st_in.m_value;
		//���� ���� ���� constructor�� ���������.
		cout << "Copy constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) { m_value = value; }
	//�׷��� setValue�� �ٲܼ� ���� �ʴ��� �� �� ������ ��� ������ ������ ���� ������ �ȵȴ�.


	//int getValue() const
		//getValue�� ����ҷ��� const�� ������� ��
	//{
	//	return m_value;
	//}
};

void print(const Something &st)****
//�̶� �׳� Something st��� ������ �ϸ� ���� �������� �ּҸ� �޾ƿ��� ������ �޸𸮰� �ϳ� �� ����� ������ �߻�
//�̷��� ������ �ذ��ϱ� ���ؼ� const Something &st�� ����ؼ� ���۷����� �޾ƿ��� ���� �ּҸ� ����ϱ� ������ �޸������� ȿ���� �� ����.
{
	cout << &st << endl;

	cout << st.getValue() << endl;
}

int main()
{
	//const Something something;//�ν��Ͻ�
	//const�� ����Ͽ� ���� ������ ���ϰڴٴ� ���̱� ������ setValue�� ����� �� ����.
	//something.setValue(3);

	//cout << something.getValue() << endl;
	//const ���� �ҷ����°͵� �ȵǴ� ������ ����Լ��� const�� �Ǻ��Ѵ�.
	Something something;

	print(something);
	//print st�� something�� ���簡�Ǹ鼭 �ʱ�ȭ �ϴ� ���� ������
	//���� �����ڴ� �ּҴ� �ٸ���

	something.getValue();
	//something.getValue() = 10;�� ����� �����ϴ�
	const Something something2;
	something2.getValue();
	//something2.getValue() = 1004;�� const�� ������ �ֱ� ������ ����� �Ұ��� �ϴ�


	return 0;
}

//�߰����� �ǰ� const �� ���ϼ� �ִ°����� �� ���̸� �޸����� ȿ���� ���� ������ ����ض�
*/

#pragma endregion

#pragma region static ���� ��� ����
/*
class Something
{
public:

	//static int s_value;
	//static �� ����ϸ� �⺻������ ���� �ʱ�ȭ�� ���Ѵ�.

	static const int s_value =1;
	//const�� ����ϸ� ���⼭ ������ �ؾ���

	//static int ������ int ������ ������
	// static�� ���� �޸𸮸� ���´�  �׳� ������ ����� ������ �ٸ� �ּҸ� ������ ���� ������ ������.
};

//int Something::s_value = 1;
//���� ������ ����� �ϸ� �ּҿ� ���� ����
//������Ͽ� �����ϸ� ������ ��

int main()
{
	Something st1;
	Something st2;

	//st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;



	return 0;
}

*/

#pragma endregion

#pragma region ���� ��� �Լ�
/*
class Something
{
public:
	class _init
	{
	public:
		_init()
		{
			s_value = 1234;
		}
	};
	//static �����ڸ� ����ϱ� ���ؼ� inclass�� ����ؼ� �����ϸ� ����� �� �ִ�.

private:

	static int s_value;
	//static ��� ������ ��� ���� Ŭ������ ��� �ν��Ͻ��� ������ �����ϴ�
	int  m_value;

	static _init s_initializer;

public:



	//Something()
	//	:m_value(1), s_value(1234)
	//{}
	//static�̸� �����ڿ��� �ʱ�ȭ�� �� �� ����.
	static int getValue()
	{
		return s_value;
		//static������ this�Լ��� ����� �� ����.
		//�׸��� m_value�� ����� �� ����
	}

	int temp()
	{
		return this->s_value;
		//Ư�� �ν��Ͻ��� �ּҸ� �޾ƴٰ� �װ��� ����ϰڴ�
	}

};

int Something::s_value = 1024;
Something::_init Something::s_initializer;

int main()
{
	cout << Something::getValue() << endl;
	//Something st1�� �����ϱ� ���� ����� �����ϴ�
	//Something�ȿ� getValue()��� ���� ����Ҽ� �ִٰ�
	//��� ������ private�� ������ ������ �׳� �Լ��� ����Ҽ� ������ static �Լ��� ����ϸ� ��밡��

	Something s1,  s2;

	cout << s1.getValue() << endl;
	//cout << st1.s_value<< endl;
	//static ��� ������ ����ϱ� ������ ���� �ּҸ� ����Ѵ�

	int (Something:: *fptr1)() = &Something::temp;
	//int �ּҸ� ����Ű�µ� = �� �ּҴ� temp �̴�
	cout << (s2.*fptr1)() << endl;

	int (*fptr2)() = &Something::getValue;
	//static�� �Լ��� �ҷ��÷��� Something�� Ŭ������ �����ϰ� �ּ�
	cout << fptr2() << endl;
	//Ư�� �ν��ͽ��� �ʿ���� �۵��� ����



	return 0;
}

*/
#pragma endregion

#pragma region ģ�� �Լ��� Ŭ����
/*

class A;
//���� ������ �ؼ� B��� Ŭ������ �ִٰ� �� �����ϸ� A������ �ִٰ� �Ǵ��� ���� ������ ���� �ִ�.


class B
{
private:
	int m_value = 2;

	//friend void doSomething(A& a, B& b);
	//�Ѵ� �˰� ������ a�� ���� �ְ� b�� ���߿��־� �Լ����� ������ �� �׷� �� ���� ����

public:
	void doSomething(A& a);
	//����� ���Ǹ� ���� �ؼ� ������ �ذ�����

};

class A
{
private:
	int m_value = 1;

	//friend void doSomething(A& a, B& b);
	//������ �ܺ� �Լ����� ������ �ȵ����� friend�Լ��� ����ؼ� ���� ���� �ϵ��� �ٲ�

	//friend class B;
	//b Ŭ������ ������ �����ϵ��� �Ѵ�
	friend void B::doSomething(A& a);
	//�̹����� ��� �ȿ� �Լ��� ���Ŷ�B::doSomething�̶�� ����
};

void B::doSomething(A& a)
{
	cout << a.m_value << endl;
}
//B���� ������ �߱� ������ B::�߰�

//void doSomething(A& a)
//{
//	cout << a.m_value << " " << b.m_value << endl;
//	//a�� ��ü private�� �ִ� ��� ������ ����ϰ� �ʹ�. friend�� ���� �ض�
//}


int main()
{
	A a;
	B b;
	b.doSomething(a);

	return 0;
}
*/

#pragma endregion

#pragma region �͸� ��ü
/*
class A
{
public:
	int m_value;

	void printf()
	{
		cout << "Hello" << endl;
	}
};

int main()
{
	A().printf();
	//��ü�� ���� ����Ʈ�� ���� �ɶ����� �����ڿ� �Ҹ��ڸ� �ѹ��� �����Ѵ� ������ �ۼ��ϸ��� ��� ����� ������ �Ѵ�.
	//������ ����� �� ����
	return 0;
}

*/

#pragma endregion

#pragma region ���� ���� Composition
/*

int main()
{
	Monster mon1("Sanson",Position2D(0,0));
	cout << mon1 << endl;

	Monster mon2("Sanson", Position2D(0, 0));
	

	//while (1)//game loop
	{
		mon1.moveTo(Position2D(1,1));
		//event
		cout << mon1 << endl;
	}

	return 0;
}

 */
#pragma endregion

#pragma region ���հ���

/*

int main()
{
	
}

*/

#pragma endregion

#pragma region ���� ����
/*
class Patient;
//������ ����� �� ������ ����*

class Doctor
{
private:
	string m_name;
	vector<Patient*> m_patients;
public:
	Doctor(const string& name_in)
		:m_name(name_in)
	{}

	void addPatient(Patient* new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void meetPatients();
	//���� ������ �ϸ� ���� �� �� ���� ������ �Լ��� ������ ������ ����ؾ���*

	friend class Patient;

};

class Patient
{
private:
	string m_name;
	vector<Doctor*> m_doctors;
	//��� �׸� ���� ���� ������ �ּҸ�

public:
	Patient(const string& name_in)
		:m_name(name_in)
	{}

	void addDoctor(Doctor* new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}
	void meetDoctors()
	{
		for (auto& ele : m_doctors)
		{
			cout << "Meet Doctors : " << ele->m_name << endl;
		}
	}

	friend class Doctor;
	//ele ������ private m_name�� ������ �� �ֵ��� �Ѵ�.
};

void  Doctor::meetPatients()
{
	for (auto& ele :m_patients)
	{
		cout << "Meet Doctors : " << ele->m_name << endl;
	}
}

int main()
{
	Patient* p1 = new Patient("jj");
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("Violet");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	p1->meetDoctors();

	d1->meetPatients();

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}
*/

#pragma endregion

#pragma region ���� ����



#pragma endregion

#pragma region �����̳� class
/*
int main()
{
	vector<int> int_vec;
	array<int, 10>;

	return 0;
}
*/

#pragma endregion

#pragma region ����� �⺻1
/*

class Mother
{
private:
	int m_i;
public:
	Mother(const int& i_in)
		:m_i(i_in)
	{}
	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

class Child : public Mother
{
private:
	double m_d;
public:
	Child(const int& i_in, const double& d_in)
		//	:m_i(i_in),m_d(d_in)������ ȣ�� ���� ������ �ȵȴ�
		:Mother(i_in), m_d(d_in)
		//�Ǵ� Mother Ŭ������ �����ڸ� Mother():m_i(0){} ���� �ۼ��� �ϸ� �۵��� �ȴ�.
	{
		//Mother::setValue(i_in);
		//m_d = d_in;
		//�̴ϼȶ����� ����ϸ� ���̷��� �ۼ� ���� �ʾƵ� �ȴ�.
		
	}
	void setValue(const int& i_in, const double& d_in)
	{
		Mother::setValue(i_in);
		//Mother�� �δ� �Ű������� �������� private���� protected�� ����ؼ� �ٲٰų� public�̸� ��밣��
		//������ private ���¿��� ����ҷ��� Mother::setValue(i_in)�� �޾Ƽ� ����ؾ��Ѵ�.
		m_d = d_in;
	}
	void setValue(const double& d_in)
	{
		m_d = d_in;
	}
	double getValue()
	{
		return m_d;
	}
};

int main()
{
	Mother mother(1024);
	//mother.setValue(1024);
	cout << mother.getValue()<< endl;

	Child child(1024,133);
	//child.Mother::getValue();
	////�ڽ��� �θ� ������ ���� value ��ȯ
	//child.setValue(128);
	cout << child.Mother::getValue() << endl;
	cout << child.getValue()<< endl;

	return 0;
}
*/

#pragma endregion

#pragma region ����� �⺻2
/*
int main()
{
	Student std("jack jcak");
	std.setName("jj2");
	std::cout << std.getName() << std::endl;

	Teacher teacher1("Dr.H");
	teacher1.setName("dr k");
	std::cout << teacher1.getName() << std::endl;

	std::cout << std << std::endl;
	std::cout << teacher1 << std::endl;

	std.doNothing();
	teacher1.doNothing();

	std.study();
	teacher1.teach();

	Person person;
	person.setName("mr. in");
	person.getName();
	

	return 0;
}
*/

#pragma endregion

#pragma region ������ Ŭ�������� ���� ����
/*
class Mother
{
private:
	int m_i;
public:
	Mother(const int& i_in)
		:m_i(1)
		//������ ����Ʈ �����ڸ� ���� �ؼ� ����߾�� ������
	{}
	void setI(const int & i_in)
	{
		m_i = i_in;
	}
};

class Child :public Mother
{
public:
	double m_d;
public:
	Child()
		:Mother(1234),m_d(1.0)//, m_i(1) �̴ϼȶ������ �ȵ����� �տ� Mother(), m_d(1.0)�� ���� �ִ� ���̴�
		//Mother(1024)�� ����ϰ� ������ Mother �����ڿ��� ������ �߰��ϸ� �ȴ�
	{
		//���⼭ m_i = 1024������ �����ϴ� �� ������ ���� Mother�� �����ڰ� ȣ����� �ʾ� ã�� ��������
		//���� �ȿ��� ���ʹ� �̹� Mother �����ڸ� ȣ�� �� ���� �̱⿡ ������ �� �ִ�.
	}
};

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}
};

class B:public A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
};

class C :public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}
};

int main()
{
	//Child c1;

	return 0;
}
*/

#pragma endregion

#pragma region ������ Ŭ�������� ������ �ʱ�ȭ
/*
//class Mother
//{
//private:
//	int m_i;
//public:
//	Mother(const int & i_in)
//		:m_i(i_in)
//	{
//		cout << "Mother construction" << endl;
//	}
//
//};
//
//class Child : public Mother
//{
//public:
//	double m_d;
//	int m_temp;
//
//public:
//	Child()
//		:m_d(1.0f), Mother(1024)
//	{
//		cout << "Child construction" << endl;
//	}
//};
// ũ�⸦ �ѹ� �� �ڽ� ũ�� = �θ� ũ�� + �ڽ� ũ���̴� 

class A
{
public:
	A(int a)
	{
		cout << "A:" << a << endl;
	}
	~A()
	{}
};

class B :public A
{
public:

	B(int a, double b)
		:A(a)
	{
		cout << "B:" << b << endl;
	}
	~B()
	{

	}
};

class C : public B
{
public:


	C(int a, double b, char c)
		:B(a,b)
	{
		cout << "C:" << c << endl;
	}
	~C()
	{

	}
};

int main()
{

	C c(102,3.14,'a');


	//Child c1;

	//cout << sizeof(Mother) << endl;
	//cout << sizeof(Child) << endl;


}
*/

#pragma endregion

#pragma region ��Ӱ� ���� ������
/*
class Base
{
public:
	int m_public;
	//������ ���� ����
protected:
	int m_protected;
	//�ڽ��� ���� ����
private:
	int m_private;
	//�ڽĵ� �Ұ���
};

class Derived : public Base
	//public�� ����
	//protected���� ����ϸ� public�� �ȵ�
	//private���� ����ϸ� ��𿡼��� �ȵ�
{
public:
	Derived()
	{
		
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		Derived::m_public;
	}
};

int main()
{
	Base base;

	base.m_public = 123;
	

	return 0;
}
*/

#pragma endregion

#pragma region ������ Ŭ������ ���ο� ��� �߰��ϱ�
/*
class Base
{
protected:
	int m_value;
public:
	Base(const int & value)
		:m_value(value)
	{}
};

class Derived : public Base
{
public:
	Derived(int value)
		:Base(value)
	{

	}
	//�̶�base�� �ִ� ���� �ڽĿ��� �ٲٴ� ��� ����
	void setValue(int value)
	{
		Base::m_value = value;
		//�ڽĿ��� ���� �ҷ��� proctected�� ����ؼ� ������ ���� �ϵ��� �Ѵ�
		//�׷��� �̳��� �� ���⼭ ������ ����? private���� �ϰ� get�� ����ؼ� ������ ����Ǵµ� �׷��� ���۸ս��� �� �������� �ؼ� 
		//proteced�� ����� ������ ����ϰ� ����� �Ǵ� ��� ���� ����� ���ϰ� �ϱ� ���ؼ� �̷��� ����Ѵ�.
	}

};

int main()
{
	return 0;
}

*/
#pragma endregion

#pragma region ��ӹ��� �Լ� �������̵� �ϱ�

/*
class Base
{
protected:
	int m_i;
public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "I'm base" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		cout << "hello" << std::endl;
		return out;
	}
};

class Derived : public Base
{
private:
	double m_d;
public:
	Derived(int value)
		:Base(value)
	{}

	void print()
		//����ϴ� ������ ������ �����̴�
		//�������̵�
	{
		Base::print();
		cout << "I'm derived" << endl;
	}


	friend std::ostream& operator << (std::ostream& out, const Derived& b)
	{
		cout << static_cast<Base>(b);
		//static cast�� ����ؼ� Base::operator�� �ҷ��� �� �ִ�
		cout << "hello Derived" << std::endl;
		return out;
	}
};

int main()
{
	Base base(5);
	cout << base;

	Derived derived(7);
	cout << derived;

	return 0;
}

*/
#pragma endregion

#pragma region ��ӹ��� �Լ��� ���߱�

/*
class Base
{
protected:
	int m_i;
public:
	Base(int value)
		: m_i(value)
	{}
	void print()
	{
		cout << "I'm base" << endl;
	}

};

class Derived : public Base
{
private:
	double m_d;
public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i;
	//public �Ʒ����� using �� ����ϸ� m_i�Ʒ����� public�� �ǹ���

private:
	using Base::print;
	//private�� �����ϰ� using�� ����ϸ� public�� �ִ� �͵� ����� �ȵ� �θ�� ����� ����
	void print() = delete;

};

int main()
{

	Derived derived(4);

	derived.m_i= 1234;
	derived.print();


	return 0;
}

*/
#pragma endregion

#pragma region ���� ���
/*
class USBDevice
{
private:
	long m_id;
public:
	USBDevice(long id)
		:m_id(id)
	{}
	long getID() { return m_id; }
	void plugAndPlay(){}
};

class NetworkDevice
{
private:
	long m_id;
public:
	NetworkDevice(long id)
		: m_id(id)
	{}

	long getID() { return m_id; }
	void networking(){}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice
	//���� ���
{
public:
	USBNetworkDevice(long usb_id,long net_id)
		//�ϳ��� �ΰ��� �� �� ����
		:USBDevice(usb_id), NetworkDevice(net_id)
	{}
};

int main()
{
	USBNetworkDevice my_device(3.14, 6.022);

	my_device.networking();
	my_device.plugAndPlay();

	//my_device.getID();
	//������ ���� �������� �޾� ����� ������?
	//���� �ϴ� ��� USBDevice::getID()�� ������ �ȴ�.
	return 0;
}
*/

#pragma endregion

#pragma region �ڽ� Ŭ������ ��ü�� �θ�Ŭ������ �����͸� ����Ѵٸ�?

/*
class Animal
{
protected:
	string m_name;

public:
	Animal(std::string name)
		: m_name(name)
	{}

public:
	string getName() { return m_name; }

	virtual void speak() const
	{
		cout << m_name << " ???" << endl;
	}
};

class Cat :public Animal
{
public:
	Cat(string name)
		:Animal(name)
	{}
	void speak() const
	{
		cout << m_name << " Meow" << endl;
	}
};
class Dog :public Animal
{
public:
	Dog(string name)
		:Animal(name)
	{}
	void speak() const
	{
		cout << m_name << " Woof" << endl;
	}
};


int main()
{
	Cat cats[] = { Cat("cat1"),Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5") };
	Dog dogs[] = { Dog("dog1"),Dog("dog2") };

	for (int i = 0; i < 5; ++i)
	{
		cats[i].speak();
	}
	for (int i = 0; i < 2; ++i)
	{
		dogs[i].speak();
	}

	Animal* my_animals[] = { &cats[0],&cats[1],&cats[2],&cats[3],&cats[4],&dogs[0],&dogs[1] };
	for (int i = 0; i < 7; i++)
	{
		my_animals[i]->speak();
	}
	//virtual�� ����ϸ� �θ� Ŭ���� Ÿ���� ������ �ε� �ڽ� ó�� �ൿ�Ѵ�.
	//�θ��� Ŭ�������ٰ� �����͸� ����ϸ� �θ� Ŭ������ �Լ��� ���������
	//virtual�� ����ϰ� ���� ���� ����ϸ� �ڽ�Ŭ������ speak�Լ��� ����Ѵ�.

	//animal animal("my animal");
	//cat cat("my cat");
	//dog dog("my dog");

	//animal.speak();
	//cat.speak();
	//dog.speak();

	//animal* ptr_animal1 = &cat;
	//animal* ptr_animal2 = &dog;

	//ptr_animal1->speak();
	//ptr_animal2->speak();
	//�ڽ� Ŭ������ �θ�Ŭ���� ĳ������ �ؼ� ����ϸ�  �θ�Ŭ���� ���� ������

	return 0;
}

*/
#pragma endregion

#pragma region ���� �Լ��� ������
/*
class A
{
public:
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public: 
	void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	void print() { cout << "D" << endl; }
	//���� void�� �ƴ϶� int ���̸� �� ������ �θ� ��� �ޱ� ������ �ȵ�
};
//4�� ���
int main()
{
	A* a;
	//a.print();

	B b;
	b.print();

	C c;
	c.print();

	D d;
	d.print();

	A &ref = c;
	ref.print();
	//���۷����� a�̱� ������ a�� ����
	//������ virtual�̸� �ڽ��� ���´�.

	return 0;
}
*/

#pragma endregion

#pragma region overrride , final, ���� ��ȯ��
/*
class A
{
public:
	 void print() { cout << "A " << endl; }
	virtual A* getThis() { return this; }
};
class B :public A
{
public:
	void print() { cout << "B" << endl; }
	// ������ �ٸ��ų� �Լ��� �ٸ��� override�� �ȵȴ�. const�� �θ�� �ڽ� �Ѵ� ���������Ѵ�.
	// final�� ����ϸ� override�� �Ҽ� ����. ���ƹ����� �����
	virtual B* getThis() { return this; }

};
class C : public B
{
public:
	virtual void print() { cout << "C" << endl; }
	
};

int main()
{
	A a;
	B b;

	A &ref = b;
	b.getThis()->print();
	ref.getThis()->print();

	cout << typeid(b.getThis()).name() << endl;
	cout << typeid(ref.getThis()).name() << endl;
	

	return 0;
}
*/

#pragma endregion

#pragma region ���� ������ �����ε� ���� ���� ���� ����
/*
class MyString
{
public:
	char* m_data = nullptr;
	int m_length = 0;
public:
	MyString(const char* source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		// null �ڸ��� �߰��ϱ� ���ؼ� +1
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';

	}

	MyString(const MyString& source)
		//�ڱ� �ڽ��� �Ķ���ͷ� ������
	{
		cout << "Copy constructor " << endl;
		m_length = source.m_length;
		//�޸𸮸� ���� ��ƾ���

		if (source.m_data != nullptr)
			//�޸𸮸� ������ ���� ���
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
			//���� �޸𸮸� ������ �ְڴ�
		}
		else
			m_data = nullptr;
	}

	MyString& operator = (const MyString& source)
	{
		cout << "Assignment operator " << endl;

		if (this == &source)
			return *this;
		delete[] m_data;
		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];
			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;

		return *this;
	}

	~MyString()
	{
		delete m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }
};

int main()
{
	MyString hello("Hello");

	//MyString str 1 = hello;
	// ���� ������
	//MyStirng str2;
	//str2 = hello; ���۷����� �߻���

	cout << (int*)hello.m_data << endl;
	//new�� �Ҵ� ���� ������ �߰� char�� �������̱����� (int*)����
	cout << hello.getString() << endl;
	{
		MyString copy = hello;
		//���� ������ ������ �ǰ� ������ ���� �����ڰ� �����
		//copy = hello �� ���� �����ڰ� ȣ��
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	}
	cout << hello.getString() << endl;

	return 0;
}
*/


#pragma endregion

#pragma region ������
/*
enum Color
{
	COLOR_BALCK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN
};

int main()
{

	Color paint = COLOR_BALCK;
	Color house(COLOR_BLUE);
	Color a{ COLOR_GREEN };



	return 0;
}

*/
#pragma endregion

