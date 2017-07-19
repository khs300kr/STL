//=============================================
//			Mon Mar 14 10:49:31 2016
//=============================================
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

bool f(int a, int b)
{
	return a > b;	// 내림차순
}

void main()
{
	// STL의 대표 정렬 알고리즘 sort
	int a[] {2, 4, 6, 1, 3, 5};

	//qsort( a, 6, 4, cmp );	// C언어 함수
								// generic (포괄적인,총칭적인)

	sort(&a[0], &a[6],f);		// 인자가 2개~3개 들어간다.
								// 첫번쨰 인자 First , 두번째 인자 Last
								// default 오름차순이다. 내림차순 할려면?
								// 세번쨰 인자 사용
	for (auto d : a)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Mar 14 10:51:53 2016
//=============================================
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	// STL의 대표 정렬 알고리즘 sort
	int a[] {2, 4, 6, 1, 3, 5};

	//qsort( a, 6, 4, cmp );	// C언어 함수
								// generic (포괄적인,총칭적인)

	sort(&a[0], &a[6], [](int a, int b) {
		return a > b;
	});							// 람다함수 사용법과 사용하는 이유
								// 인자가 2개~3개 들어간다.
								// 첫번쨰 인자 First , 두번째 인자 Last
								// default 오름차순이다. 내림차순 할려면?
								// 세번쨰 인자 사용
	for (auto d : a)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Mar 14 10:53:52 2016
//=============================================
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	// STL의 대표 정렬 알고리즘 sort
	int a[] {2, 4, 6, 1, 3, 5};

	//qsort( a, 6, 4, cmp );	// C언어 함수
								// generic (포괄적인,총칭적인)

	sort(begin(a), end(a), [](int a, int b) -> bool {	// C++ 표현
		return a > b;
	});							// 람다함수 사용법과 사용하는 이유
								// 인자가 2개~3개 들어간다.
								// 첫번쨰 인자 First , 두번째 인자 Last
								// default 오름차순이다. 내림차순 할려면?
								// 세번쨰 인자 사용
	for (auto d : a)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Mar 14 11:08:28 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include"save.h"

using namespace std;

class Wizard
{
private:
	string strName;
	int iNum;
public:
	Wizard(string _strName, int _iNum)
		: strName(_strName), iNum(_iNum) {}
public:
	string getName() const { return strName; } // const(Only for read)
	int getNum() const { return iNum; }	// const(Only for read)
};

void main()
{
	Wizard a[] {{"3월", 14}, {"2월", 29}, { "4월", 1 }};	// Uniform Initialization

	sort(begin(a), end(a), [](const Wizard &a, const Wizard &b){
		return a.getNum() < b.getNum();
	});
	// Only Reading (Const)를 붙인다 + 복사하지않는다 (레퍼런스)
	// [] 람다 Introducer

	for (auto data : a)
		cout << data.getName() << "," << data.getNum() << endl;

	save();
}
//=============================================
//			Mon Mar 14 12:13:37 2016
//=============================================
/*******************************************
//2016. 1. STL 월23 수23

//3. 14 월23(2주/2일차)

//새 언어 특성
//auto, 일관된 초기화, 범위기반의 for loop
//이동문맥과 r-value 참조 (클래스 전체 복습 실습)
//람다
*******************************************/

#include<iostream>
#include<vector>
#include<string>
#include"save.h"

using namespace std;
void main()
{
	//int a[10];		// compile time에 크기를 정해줘야한다.
	vector<string> v{ "오늘은","3월","14일","화이트데이" };	 
						// Dynamic은 크기가 유동적.
	
	
	vector<string>::const_iterator iter = v.begin();

	for (; iter < v.end(); ++iter)		// 이친구가 복잡한 자료형이기때문에 ++iter를 사용.
		cout << *iter << endl;

	save();
}
//=============================================
//			Mon Mar 14 12:15:48 2016
//=============================================
/*******************************************
//2016. 1. STL 월23 수23

//3. 14 월23(2주/2일차)

//새 언어 특성
//auto, 일관된 초기화, 범위기반의 for loop
//이동문맥과 r-value 참조 (클래스 전체 복습 실습)
//람다
*******************************************/

#include<iostream>
#include<vector>
#include<string>
#include"save.h"

using namespace std;
void main()
{
	//int a[10];		// compile time에 크기를 정해줘야한다.
	vector<string> v{ "오늘은","3월","14일","화이트데이" };	 
						// Dynamic은 크기가 유동적.
	
	v.push_back("언제나 추가 가능하다");

	
	//vector<string>::const_iterator iter = v.begin();

	//for (; iter < v.end(); ++iter)		// 이친구가 복잡한 자료형이기때문에 ++iter를 사용.
	//	cout << *iter << endl;

	for (auto i = v.begin(); i < v.end(); ++i)
		cout << *i << endl;

	save();
}
//=============================================
//			Wed Mar 16 10:40:03 2016
//=============================================
/*******************************************
//2016. 1. STL 월23 수23

//3. 14 월23(2주/2일차)

//새 언어 특성
//auto, 일관된 초기화, 범위기반의 for loop
//이동문맥과 r-value 참조 (클래스 전체 복습 실습)
//람다
*******************************************/

#include<iostream>
#include<vector>
#include<string>
#include"save.h"

using namespace std;
void main()
{
	// 한정자 (qualifier) -> 한정사
	int a{ 100 };
	volatile int b{ a };	// const는 한정사이다.
							// volatile(휘발성의).

	save();
}
//=============================================
//			Wed Mar 16 10:45:29 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

// 통합된 초기화(uniform initialization C++)
// RAII

void change(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void main()
{
	int a = 10, b = 20;

	change(a, b);

	cout << a << "," << b << endl;

	save();
}

//=============================================
//			Wed Mar 16 10:51:07 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

// 통합된 초기화(uniform initialization C++)
// RAII

template <class T>
void change(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}
class Monster
{
private:
	int n;
public:
	Monster(int _n)
		: n(_n) {}
};

void main()
{
	//int a(10);		// C++03, int와 같은 POD에서도 
					// 클래스와 같은 방식의 초기화가 도입
	// C++11의 통합된 초기화
	int a{ 10 };
	// default가 0으로 초기화
	int b{};

	cout << b << endl;

	save();
}

//=============================================
//			Wed Mar 16 10:55:07 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

// 통합된 초기화(uniform initialization C++)
// RAII

template <class T>
void change(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

void main()
{
	double pi{ 3.141592 };
	cout << sizeof(double) << endl; // 8 byte
	cout << sizeof(int) << endl; // 4 byte

	int n{ pi };
	// data를 통합된 초기화를 통해 더 효율적이고 엄격하게
	// 쓰기위해서 도입.
	// 따라서 컴파일이 안된다.
	cout << n << endl;

	save();
}
//=============================================
//			Wed Mar 16 10:59:24 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

// 통합된 초기화(uniform initialization C++)
// RAII

template <class T>
void change(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

class Monster
{
private:
	int n;
public:
	Monster(int n) {}
	Monster() {};
};

void main()
{
	Monster m[10] = { 3, 5, 7, 10 };

	cout << sizeof(m) << endl;

	// 따라서 우리는 앞으로 초기화를

	int a[] = { 3, 5, 7, 9 };

	// 이렇게 하겠다.

	save();
}
//=============================================
//			Wed Mar 16 11:03:49 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

// 통합된 초기화(uniform initialization C++)
// RAII

// 범위기반의 for loop
void main()
{
	int a[] {1, 2, 3, 4, 5, 23,4343535,645646,45643235,234234};

	for (auto& d : a)
		cout << (d=0) << endl;
	// page 51.
	// 범위기반의 for loop

	for (decl : coll)
		statement;
	// decl = 선언문
	// collection = 모듬 {1,2,3,4,5,6,7,8,9,10} 등등.
	// statement = 조작
	// ex)
	for (auto d : { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 })
		cout << d;
	save();
}
//=============================================
//			Mon Mar 21 10:43:25 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.
		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	//Model a;			// 크기 정보 없이 기본 생성
	//Model b(1000);		// 1000 byte 데이터
	//
	////cout << sizeof(a) << endl;
	////cout << sizeof(b) << endl;
	//
	//Model c = b;	// uniform initialization 보다 복사생성을 알리고자
	//				// = 를 사용하였다.
	//				// 소멸자가 있기 때문에 죽었다.
	//a = c;			// a.operator(c);

	{Model a{ 100 }; }
	Model b{ 123 };

	save();
}
