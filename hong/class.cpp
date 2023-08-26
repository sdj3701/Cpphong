#include "Monster.h"
#include "Student.h"
#include "Teacher.h"
#include "Calc.h"
#include <string>
#include <vector>
#include <cassert>
using namespace std;

#pragma region class 생성자
/*

class Fraction
{
private:
	int m_numerator;
	int m_denominator;
public:
	//Fraction(const int& in, const int& numin) 함수 같이 사용
	Fraction()
		//만약 생성자를 만들지 않으면 기본생성자가 생겨 아무 값이나 넣어줌
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
	//second를 사용을 할려면 먼저 class를 선언 해주고 사용을 해야한다
public:
	First()
	{
		cout << "1";
	}
};



int main()
{
	First fir;
	//Second 가 먼저 실행이 된다
	//이유는 값이 먼저들어있어 second의 생성자를 먼저 하고 나서 first을 실행을 한다

#pragma region fraction



	Fraction frac;
	//여기에 들어오면 class로 들어가 생성자를 한번실행을 해서 값을 초기화함
	frac.print();

	Fraction one_thirds(1, 2);
	one_thirds.print();
	//생성자에서 바로 초기화해서 값을 넣어줄수 있음 함수 같이 사용 가능
	//만약 디폴트로 값이 전부다 들어있으면 one_thieds만 사용함면된다.


#pragma endregion


	return 0;
}
*/
#pragma endregion

#pragma region 생서자의 멤버 이니셜라이즈(초기자) 리스트
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
		//이니셜라이즈 리스트 이렇게도 초기화 가능
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

#pragma region 위임 생성자
/*

//생성자가 다른생성자를 따라가는것을 위임 생성자라고 한다.
class Student
{
private:
	int m_id;
	string m_name;
public:

	Student(const string& name_in)
		//:m_id(0), m_name(name_in)
		:Student(0, name_in)
		//따로 선언을 해주는 것이 아니라
		//생성자를 끌어다 사용하면 더욱 깔끔하게 초기화를 할수 있다.
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
	//초기화 코드를 분리를 해서 사용하는것이 좋다

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

#pragma region 소멸자
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
			//nullptr일 떄 지워도 문제가 있기 때문에 확인해주는 것이 좋다
			delete[] m_arr;
		//동적할당 했으니 delete로 메모리를 삭제 해줘야함
	}
	//소멸자가 없으면 메모리 릭이 생김

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
	//동적할당으로 만들어진 경우는 영역을 벗어나도 자동으로 메모리가 해제되지 않기 때문에 delete으로 메모리를 해제할 때에만 소멸자가 호출됩니다.

	//소멸자가 함수 범위를 나가면 실행된다

	return 0;
}

*/
#pragma endregion

#pragma region this 포인터와 연쇄 호출

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

#pragma region 클래스 코드와 헤더 파일
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
	//앞에 const string&을 사용한 이유는 return타입이 const 이기 때문에 앞에 const string&을 사용함
	string& getValue() { return m_values; }
	//

	Something(const Something& st_in)
	//여기에서 복사 constructor가 숨어있다
	{
		m_value = st_in.m_value;
		//내가 직접 복사 constructor를 구현해줬다.
		cout << "Copy constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) { m_value = value; }
	//그래서 setValue도 바꿀수 있지 않느냐 할 수 있지만 멤버 변수를 받을수 없기 때문에 안된다.


	//int getValue() const
		//getValue를 사용할려면 const를 붙혀줘야 함
	//{
	//	return m_value;
	//}
};

void print(const Something &st)****
//이때 그냥 Something st라고 선언을 하면 복사 생성자의 주소를 받아오기 때문에 메모리가 하나 더 생기는 문제가 발생
//이러한 문제를 해결하기 위해서 const Something &st를 사용해서 레퍼랜스를 받아오면 같은 주소를 사용하기 때문에 메모리적으로 효율이 더 좋다.
{
	cout << &st << endl;

	cout << st.getValue() << endl;
}

int main()
{
	//const Something something;//인스턴스
	//const를 사용하여 값을 변경을 안하겠다는 말이기 때문에 setValue를 사용할 수 없다.
	//something.setValue(3);

	//cout << something.getValue() << endl;
	//const 값을 불러오는것도 안되는 이유는 멤버함수가 const냐 판별한다.
	Something something;

	print(something);
	//print st의 something를 복사가되면서 초기화 하는 것이 맞지만
	//복사 생성자는 주소는 다르다

	something.getValue();
	//something.getValue() = 10;이 사용이 가능하다
	const Something something2;
	something2.getValue();
	//something2.getValue() = 1004;는 const를 가지고 있기 떄문에 사용이 불가능 하다


	return 0;
}

//추가적인 의견 const 는 붙일수 있는곳에는 다 붙이면 메모리적인 효율이 좋기 때문에 사용해라
*/

#pragma endregion

#pragma region static 정적 멤버 변수
/*
class Something
{
public:

	//static int s_value;
	//static 을 사용하면 기본적으로 값을 초기화를 못한다.

	static const int s_value =1;
	//const를 사용하면 여기서 선언을 해야함

	//static int 변수와 int 변수의 차이점
	// static은 같은 메모리를 같는다  그냥 변수는 사용할 때마다 다른 주소를 가져다 쓰고 끝나면 버린다.
};

//int Something::s_value = 1;
//정적 변수를 사용을 하면 주소와 값이 같다
//헤더파일에 선언하면 에러가 남

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

#pragma region 정적 멤버 함수
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
	//static 생성자를 사용하기 위해서 inclass를 사용해서 접근하면 사용할 수 있다.

private:

	static int s_value;
	//static 멤버 변수는 모든 같은 클래스인 모든 인스턴스가 접근이 가능하다
	int  m_value;

	static _init s_initializer;

public:



	//Something()
	//	:m_value(1), s_value(1234)
	//{}
	//static이면 생성자에서 초기화를 할 수 없다.
	static int getValue()
	{
		return s_value;
		//static에서는 this함수를 사용할 수 없다.
		//그리고 m_value도 사용할 수 없다
	}

	int temp()
	{
		return this->s_value;
		//특정 인스턴스의 주소를 받아다가 그것을 사용하겠다
	}

};

int Something::s_value = 1024;
Something::_init Something::s_initializer;

int main()
{
	cout << Something::getValue() << endl;
	//Something st1을 선언하기 전에 사용이 가능하다
	//Something안에 getValue()라는 것을 사용할수 있다고
	//멤버 변수가 private을 가지고 있으면 그냥 함수를 사용할수 없지만 static 함수를 사용하면 사용가능

	Something s1,  s2;

	cout << s1.getValue() << endl;
	//cout << st1.s_value<< endl;
	//static 멤버 변수를 사용하기 때문에 같은 주소를 사용한다

	int (Something:: *fptr1)() = &Something::temp;
	//int 주소를 가리키는데 = 그 주소는 temp 이다
	cout << (s2.*fptr1)() << endl;

	int (*fptr2)() = &Something::getValue;
	//static의 함수를 불러올려면 Something의 클래스를 생략하고 주소
	cout << fptr2() << endl;
	//특정 인스터스가 필요없이 작동이 가능



	return 0;
}

*/
#pragma endregion

#pragma region 친구 함수와 클래스
/*

class A;
//전방 선언을 해서 B라는 클래스가 있다고 만 선언하면 A에서도 있다고 판단해 값을 가지고 갈수 있다.


class B
{
private:
	int m_value = 2;

	//friend void doSomething(A& a, B& b);
	//둘다 알고 싶지만 a가 먼저 있고 b가 나중에있어 함수에서 에러가 남 그럴 때 전방 선언

public:
	void doSomething(A& a);
	//선언과 정의를 따로 해서 문제를 해결하자

};

class A
{
private:
	int m_value = 1;

	//friend void doSomething(A& a, B& b);
	//원래는 외부 함수여서 접근이 안되지만 friend함수를 사용해서 접근 가능 하도록 바꿈

	//friend class B;
	//b 클래스도 접근이 가능하도록 한다
	friend void B::doSomething(A& a);
	//이번에는 멤버 안에 함수가 들어간거라B::doSomething이라고 선언
};

void B::doSomething(A& a)
{
	cout << a.m_value << endl;
}
//B에서 선언을 했기 때문에 B::추가

//void doSomething(A& a)
//{
//	cout << a.m_value << " " << b.m_value << endl;
//	//a의 객체 private에 있는 멤버 변수를 사용하고 싶다. friend를 선언 해라
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

#pragma region 익명 객체
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
	//객체가 없는 프린트는 선언 될때마다 생성자와 소멸자를 한번씩 생성한다 여러번 작성하면은 계속 만들고 삭제를 한다.
	//여러번 사용할 수 없음
	return 0;
}

*/

#pragma endregion

#pragma region 구성 관계 Composition
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

#pragma region 집합관계

/*

int main()
{
	
}

*/

#pragma endregion

#pragma region 제휴 관계
/*
class Patient;
//주의점 출력할 때 문제가 생김*

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
	//전방 선언을 하면 값을 알 수 없기 때문에 함수를 밖으로 빼내서 사용해야함*

	friend class Patient;

};

class Patient
{
private:
	string m_name;
	vector<Doctor*> m_doctors;
	//담는 그릇 같은 존재 닥터의 주소를

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
	//ele 닥터의 private m_name을 접근할 수 있도록 한다.
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

#pragma region 의존 관계



#pragma endregion

#pragma region 컨테이너 class
/*
int main()
{
	vector<int> int_vec;
	array<int, 10>;

	return 0;
}
*/

#pragma endregion

#pragma region 상속의 기본1
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
		//	:m_i(i_in),m_d(d_in)생성자 호출 순위 때문에 안된다
		:Mother(i_in), m_d(d_in)
		//또는 Mother 클래스의 생성자를 Mother():m_i(0){} 으로 작성을 하면 작동이 된다.
	{
		//Mother::setValue(i_in);
		//m_d = d_in;
		//이니셜라져를 사용하면 괜이렇게 작성 하지 않아도 된다.
		
	}
	void setValue(const int& i_in, const double& d_in)
	{
		Mother::setValue(i_in);
		//Mother에 인는 매개변수를 받을려면 private에서 protected를 사용해서 바꾸거나 public이면 사용간으
		//하지만 private 상태에서 사용할려면 Mother::setValue(i_in)을 받아서 사용해야한다.
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
	////자식의 부모가 가지고 있응 value 소환
	//child.setValue(128);
	cout << child.Mother::getValue() << endl;
	cout << child.getValue()<< endl;

	return 0;
}
*/

#pragma endregion

#pragma region 상속의 기본2
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

#pragma region 유도된 클래스들의 생성 순서
/*
class Mother
{
private:
	int m_i;
public:
	Mother(const int& i_in)
		:m_i(1)
		//원래는 디폴트 생성자를 선언 해서 사용했어야 하지만
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
		:Mother(1234),m_d(1.0)//, m_i(1) 이니셜라이즈는 안되지만 앞에 Mother(), m_d(1.0)이 숨어 있던 것이다
		//Mother(1024)를 사용하고 싶으면 Mother 생성자에서 내용을 추가하면 된다
	{
		//여기서 m_i = 1024선언이 가능하다 그 이유는 아직 Mother의 생성자가 호출되지 않아 찾지 못하지만
		//이쪽 안에서 부터는 이미 Mother 생성자를 호출 한 다음 이기에 선언할 수 있다.
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

#pragma region 유도된 클래스들의 생성과 초기화
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
// 크기를 한번 봄 자식 크기 = 부모 크기 + 자식 크기이다 

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

#pragma region 상속과 접근 지정자
/*
class Base
{
public:
	int m_public;
	//누구든 접근 가능
protected:
	int m_protected;
	//자식은 접근 가능
private:
	int m_private;
	//자식도 불가능
};

class Derived : public Base
	//public은 가능
	//protected으로 사용하면 public로 안됨
	//private으로 사용하면 어디에서든 안됨
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

#pragma region 유도된 클래스에 새로운 기능 추가하기
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
	//이때base에 있는 값을 자식에서 바꾸는 방법 예시
	void setValue(int value)
	{
		Base::m_value = value;
		//자식에서 접근 할려면 proctected를 사용해서 접근을 가능 하도록 한다
		//그런데 이놈을 왜 여기서 구현을 하지? private으로 하고 get을 사용해서 가지고 오면되는데 그러면 포퍼먼스가 좀 떨어지고 해서 
		//proteced를 사용한 이유는 빈번하게 사용이 되는 경우 접근 방법을 편하게 하기 위해서 이렇게 사용한다.
	}

};

int main()
{
	return 0;
}

*/
#pragma endregion

#pragma region 상속받은 함수 오버라이딩 하기

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
		//사용하는 이유는 다형성 때문이다
		//오버라이딩
	{
		Base::print();
		cout << "I'm derived" << endl;
	}


	friend std::ostream& operator << (std::ostream& out, const Derived& b)
	{
		cout << static_cast<Base>(b);
		//static cast를 사용해서 Base::operator를 불러올 수 있다
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

#pragma region 상속받은 함수를 감추기

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
	//public 아래에서 using 을 사용하면 m_i아래서는 public이 되버림

private:
	using Base::print;
	//private을 선언하고 using을 사용하면 public에 있는 것도 사용이 안됨 부모는 사용이 가능
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

#pragma region 다중 상속
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
	//다중 상속
{
public:
	USBNetworkDevice(long usb_id,long net_id)
		//하나로 두개를 줄 수 있음
		:USBDevice(usb_id), NetworkDevice(net_id)
	{}
};

int main()
{
	USBNetworkDevice my_device(3.14, 6.022);

	my_device.networking();
	my_device.plugAndPlay();

	//my_device.getID();
	//문제가 생김 누구꺼를 받아 사용할 것인지?
	//구분 하는 방법 USBDevice::getID()를 적으면 된다.
	return 0;
}
*/

#pragma endregion

#pragma region 자식 클래스의 객체에 부모클래스의 포인터를 사용한다면?

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
	//virtual을 사용하면 부모 클래스 타입의 포인터 인데 자식 처럼 행동한다.
	//부모의 클래스에다가 포인터를 사용하면 부모 클래스의 함수를 사용하지만
	//virtual을 사용하고 전과 같이 사용하면 자식클래스의 speak함수를 사용한다.

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
	//자식 클래스를 부모클래스 캐스팅을 해서 사용하면  부모클래스 인줄 착각함

	return 0;
}

*/
#pragma endregion

#pragma region 가상 함수와 다형성
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
	//만약 void가 아니라 int 형이면 할 수없다 부모를 상속 받기 때문에 안됨
};
//4중 상속
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
	//레퍼렌스가 a이기 때문에 a만 나옴
	//하지만 virtual이면 자식이 나온다.

	return 0;
}
*/

#pragma endregion

#pragma region overrride , final, 공변 반환형
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
	// 변수가 다르거나 함수가 다르면 override가 안된다. const도 부모랑 자식 둘다 사용해줘야한다.
	// final을 사용하면 override를 할수 없다. 막아버리는 제어어
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

#pragma region 대입 연산자 오버로딩 깊은 복사 얕은 복사
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
		// null 자리를 추가하기 위해서 +1
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';

	}

	MyString(const MyString& source)
		//자기 자신이 파라미터로 들어오면
	{
		cout << "Copy constructor " << endl;
		m_length = source.m_length;
		//메모리를 따로 잡아야함

		if (source.m_data != nullptr)
			//메모리를 가지고 있을 경우
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
			//나도 메모리를 가지고 있겠다
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
	// 복사 생성자
	//MyStirng str2;
	//str2 = hello; 오퍼레이터 발생ㄹ

	cout << (int*)hello.m_data << endl;
	//new로 할당 받은 데이터 추가 char의 포인터이기지만 (int*)강제
	cout << hello.getString() << endl;
	{
		MyString copy = hello;
		//복사 생성자 생성이 되고 있으면 복사 생성자가 생기고
		//copy = hello 는 대입 연사자가 호출
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	}
	cout << hello.getString() << endl;

	return 0;
}
*/


#pragma endregion

#pragma region 열거형
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

