
//=============================================
//			Mon Mar 28 10:44:40 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

// STL은 속도에 최적화된 라이브러리입니다.
// 이 말은 예외처리 따위는 하지 않는다는 의미입니다.
// 예외처리가 필요하다면 그렇게 해주는 특별버전의 라이브러리나 함수를 사용해야 합니다.

class Animal
{
private:
public:
	virtual void move() = 0;
};

class Dog :public Animal
{
private:
public:
	virtual void move() override final	{		cout << "개 뛴다" << endl;	}
};

class Bird :public Animal
{
private:
public:
	virtual void move() override final { cout << "새 난다" << endl; }
};

void f(Animal& a) 
{
	// 만일 a가 원래 개였다면 move()를 호출하라.
	Dog d;
	try 
	{
		d = dynamic_cast<Dog&>(a);
		d.move();
	}
	catch(exception& e)
	{
		// Bird -> bad dynamic cast!
		cout << e.what() << endl;
	}
}

void main()
{
	Animal* a[3]{ new Dog,new Bird, new Dog };

	for (Animal*d : a)
	{
		f(*d);
	}

	save();

	// 4장에서 전체 예외처리 설명.
}
//=============================================
//			Mon Mar 28 10:51:43 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

// HEAP 메모리가 할당할 수 없는 경우
void main()
{
	int i = 1;
	while (true)
	{
		try
		{
			new int[100000000];
			cout << i++ << endl;
		}
		catch(exception& e)
		{
			cout << e.what() << endl;
			break;
		}
	}
	save();
}
//=============================================
//			Mon Mar 28 11:01:52 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

// 호출가능 타입(Callable type)
// 1. 함수
// 2. 멤버함수
// 3. 함수객체 : 함수호출연산자를 ( () ) 오버로딩한 클래스
// 4. 람다
// 5. function class
// 6. bind

class March
{
private:
public:
	void operator()() {
		cout << "함수호출연산자가 불림" << endl;
	}
};

void main()
{
	March a;

	a();
	
	save();
}
//=============================================
//			Mon Mar 28 11:07:14 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

// 호출가능 타입(Callable type)
// 1. 함수
// 2. 멤버함수
// 3. 함수객체 : 함수호출연산자를 ( () ) 오버로딩한 클래스
// 4. 람다
// 5. function class
// 6. bind

class March
{
private:
public:
	bool operator()(int a, int b) { return a > b; }
};

void main()
{
	int a[]{ 2,4,6,1,3,5 };

	March m;

	sort(begin(a), end(a),m);

	for (auto d : a)
		cout << d << " ";
	cout << endl;
	
	save();
}
//=============================================
//			Mon Mar 28 11:09:07 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

// 호출가능 타입(Callable type)
// 1. 함수
// 2. 멤버함수
// 3. 함수객체 : 함수호출연산자를 ( () ) 오버로딩한 클래스
// 4. 람다
// 5. function class
// 6. bind

class March
{
private:
public:
	bool operator()(int a, int b) { return a > b; }
};

void main()
{
	int a[]{ 2,4,6,1,3,5 };

	sort(begin(a), end(a),March());

	for (auto d : a)
		cout << d << " ";
	cout << endl;
	
	save();
}
//=============================================
//			Mon Mar 28 11:12:29 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

// 호출가능 타입(Callable type)
// 1. 함수
// 2. 멤버함수
// 3. 함수객체 : 함수호출연산자를 ( () ) 오버로딩한 클래스
// 4. 람다
// 5. function class
// 6. bind

class March
{
private:
public:
	bool operator()(int a, int b) { return a > b; }
};

void main()
{
	int a[]{ 2,4,6,1,3,5 };

	sort(begin(a), end(a), [](int a, int b) { return a < b; });

	for (auto d : a)
		cout << d << " ";
	cout << endl;

	save();
}

//=============================================
//			Mon Mar 28 11:13:29 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

// 호출가능 타입(Callable type)
// 1. 함수
// 2. 멤버함수
// 3. 함수객체 : 함수호출연산자를 ( () ) 오버로딩한 클래스
// 4. 람다
// 5. function class
// 6. bind

class March
{
private:
public:
	bool operator()(int a, int b) { return a > b; }
};

void main()
{
	int a[]{ 2,4,6,1,3,5 };

	[](int a, int b) { return a < b; };

	for (auto d : a)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Mar 28 11:15:32 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

// 호출가능 타입(Callable type)
// 1. 함수
// 2. 멤버함수
// 3. 함수객체 : 함수호출연산자를 ( () ) 오버로딩한 클래스
// 4. 람다
// 5. function class
// 6. bind : 원래 함수의 인자 갯수를 바꾼 새 함수를 만들어 준다.

int add(int a, int b)
{
	return a + b;
}

void main()
{
	cout << add(3, 4) << endl;

	save();
}
//=============================================
//			Mon Mar 28 11:17:18 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<functional>
#include"save.h"

using namespace std;

// 호출가능 타입(Callable type)
// 1. 함수
// 2. 멤버함수
// 3. 함수객체 : 함수호출연산자를 ( () ) 오버로딩한 클래스
// 4. 람다
// 5. function class
// 6. bind : 원래 함수의 인자 갯수를 바꾼 새 함수를 만들어 준다.

int add(int a, int b)
{
	return a + b;
}

void main()
{
	auto f = bind(add, 5, 10);
	
	cout << f() << endl;

	save();
}
//=============================================
//			Mon Mar 28 11:35:06 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<functional>
#include"save.h"

using namespace std;

// 호출가능 타입(Callable type)
// 1. 함수
// 2. 멤버함수
// 3. 함수객체 : 함수호출연산자를 ( () ) 오버로딩한 클래스
// 4. 람다
// 5. function class
// 6. bind : 원래 함수의 인자 갯수를 바꾼 새 함수를 만들어 준다.

void f(int(*fp)(int,int))
{
	fp(3, 4);
}
int a(int, int)
{
	cout << "함수 a를 호출함" << endl;
	return 10;
}
void main()
{
	f(a);

	save();
}
//=============================================
//			Mon Mar 28 11:35:33 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<functional>
#include"save.h"

using namespace std;

// 호출가능 타입(Callable type)
// 1. 함수
// 2. 멤버함수
// 3. 함수객체 : 함수호출연산자를 ( () ) 오버로딩한 클래스
// 4. 람다
// 5. function class
// 6. bind : 원래 함수의 인자 갯수를 바꾼 새 함수를 만들어 준다.

template<class T>
void f(T fp)
{
	fp(3, 4);
}
int a(int, int)
{
	cout << "함수 a를 호출함" << endl;
	return 10;
}
void main()
{
	f(a);

	save();
}
//=============================================
//			Mon Mar 28 11:58:55 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<functional>
#include<string>
#include"save.h"

using namespace std;

// 5장(유틸리티)
// pair<>, 스마트포인터, type traits


// pair : 이종(heterogeneous)의 자료형을 하나로 묶어 사용할 수 있도록한다.

void main()
{
	// 이름과 현상금을 쌍으로 관리하자.
	pair<string, int> OnePiece[]{ { "루피", 400 } ,{ "조로",300 } ,{ "쵸파", 100 }
	,{ "니코로빈", 200 } };

	cout << sizeof(pair<string, int>) << endl;
	cout << sizeof(string) << endl;

	// 현상금 순서
	cout << "<현상금 순서 - 오름차순>" << endl;
	sort(begin(OnePiece), end(OnePiece), [](const pair<string, int> &a, const pair<string, int> &b)
	{return a.second < b.second; });

	for (pair<string, int> d : OnePiece)
	{
		cout << d.first << "--" << d.second << endl;
	}

	// 이름 순서
	cout << endl << "<이름 순서 - 내림차순>" << endl;
	sort(begin(OnePiece), end(OnePiece), [](const pair<string, int> &a, const pair<string, int> &b)
	{return a.first > b.first; });

	for (pair<string, int> d : OnePiece)
	{
		cout << d.first << "--" << d.second << endl;
	}
	save();
}
//=============================================
//			Mon Mar 28 12:16:08 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<functional>
#include<string>
#include<random>
#include<cmath>
#include"save.h"

using namespace std;

// 5장(유틸리티)
// pair<>, 스마트포인터, type traits


// pair : 이종(heterogeneous)의 자료형을 하나로 묶어 사용할 수 있도록한다.

void main()
{
	// pair<double, double> Point2D;
	// 2차원 좌표 100개(-100~100사이값)를 생성하자.
	// 원점에서 반경 10이내인 점들만 화면에 출력하라.
	
	pair<double, double> Point2D[100];

	default_random_engine dre;
	uniform_int_distribution<> ui(-100, 100);
	
	for (auto& d : Point2D)
	{
		d.first = ui(dre);
		d.second = ui(dre);
	}
	
	for (auto& d : Point2D)
	{
		if(sqrt(pow(d.first, 2) + pow(d.second, 2)) < (double)10)
			cout << "(" << d.first << "," << d.second << ")" << endl;
	}
	save();
}
//=============================================
//			Wed Mar 30 10:46:04 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include"save.h"

using namespace std;

// pair : 이종(heterogeneous)의 자료형을 하나로 묶어 사용할 수 있도록한다.
// 이름과 점수를 vector로 관리하고 싶다.
// vector는 하나의 자료형을 담을 수 있는 동적 배열이다.
// pair를 사용하면 이름과 점수를 하나의 자료형으로 만들 수 있어
// 벡터에도 담을 수 있다.

void main()
{
	vector<pair<string, int>> v;

	v.push_back(pair<string, int>("루피", 400));
	v.push_back(pair<string, int>("쵸파", 100));
	
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << " - " << v[i].second << endl;

	save();
}

//=============================================
//			Wed Mar 30 10:47:41 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include"save.h"

using namespace std;

// pair : 이종(heterogeneous)의 자료형을 하나로 묶어 사용할 수 있도록한다.
// 이름과 점수를 vector로 관리하고 싶다.
// vector는 하나의 자료형을 담을 수 있는 동적 배열이다.
// pair를 사용하면 이름과 점수를 하나의 자료형으로 만들 수 있어
// 벡터에도 담을 수 있다.

void main()
{
	vector<pair<string, int>> v;

	v.push_back(make_pair<string,int>("루피", 400));
	v.push_back(make_pair<string, int>("쵸파", 100));
	
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << " - " << v[i].second << endl;

	save();
}

//=============================================
//			Wed Mar 30 10:49:19 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include"save.h"

using namespace std;

// pair : 이종(heterogeneous)의 자료형을 하나로 묶어 사용할 수 있도록한다.
// 이름과 점수를 vector로 관리하고 싶다.
// vector는 하나의 자료형을 담을 수 있는 동적 배열이다.
// pair를 사용하면 이름과 점수를 하나의 자료형으로 만들 수 있어
// 벡터에도 담을 수 있다.

void main()
{
	typedef pair<string, int> Score;
	vector<Score> v;

	v.push_back(make_pair<string,int>("루피", 400));
	v.push_back(make_pair("쵸파", 100));
	
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << " - " << v[i].second << endl;

	save();
}

//=============================================
//			Wed Mar 30 10:51:10 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include"save.h"

using namespace std;

// pair : 이종(heterogeneous)의 자료형을 하나로 묶어 사용할 수 있도록한다.
// 이름과 점수를 vector로 관리하고 싶다.
// vector는 하나의 자료형을 담을 수 있는 동적 배열이다.
// pair를 사용하면 이름과 점수를 하나의 자료형으로 만들 수 있어
// 벡터에도 담을 수 있다.

void main()
{
	// typedef pair<string, int> Score;
	using Score = pair<string, int>;
	// C++11의 typedef 스타일

	vector<Score> v;

	v.push_back(make_pair<string,int>("루피", 400));
	v.push_back(make_pair("쵸파", 100));
	
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << " - " << v[i].second << endl;

	save();
}

//=============================================
//			Wed Mar 30 10:59:57 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include<algorithm>
#include"save.h"

using namespace std;

// pair : 이종(heterogeneous)의 자료형을 하나로 묶어 사용할 수 있도록한다.
// 이름과 점수를 vector로 관리하고 싶다.
// vector는 하나의 자료형을 담을 수 있는 동적 배열이다.
// pair를 사용하면 이름과 점수를 하나의 자료형으로 만들 수 있어
// 벡터에도 담을 수 있다.

void main()
{
	// typedef pair<string, int> Score;
	using Score = pair<string, int>;
	// C++11의 typedef 스타일

	vector<Score> v;

	v.push_back(make_pair("루피", 400));
	v.push_back(make_pair("쵸파", 100));
	v.push_back(make_pair("조로", 300));
	v.push_back(make_pair("상디", 200));

	// sort로 정렬해보세요
	sort(v.begin(), v.end(), [](const Score& a, const Score& b) -> bool{
		cout << a.first << " 비교 " << b.first << endl;	/// sort 알고리즘 하는일(출력)
		return a.first < b.first;
	});

	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << " - " << v[i].second << endl;

	save();
}

//=============================================
//			Wed Mar 30 11:15:14 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include<algorithm>
#include"save.h"

using namespace std;

// 스마트포인터
// 자신의 획득한 자원을 자신이 소멸될때 해제해 주는 포인터
// C++11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1. 자원을 획득한다(HEAP)
// 2. 자원을 이용한다
// 3. 반환한다

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
};

void main()
{
	Mini* p = new Mini;
	// 미니는 자원이 아니라 미니가 잡혀있는 HEAP 자원이다.
	delete p;

	save();
	// 기존 생성 소멸(해지)의 필요성)
}

//=============================================
//			Wed Mar 30 11:19:52 2016
//=============================================
#include<iostream>
#include<memory>
#include"save.h"

using namespace std;

// 스마트포인터
// 자신의 획득한 자원을 자신이 소멸될때 해제해 주는 포인터
// C++11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1. 자원을 획득한다(HEAP)
// 2. 자원을 이용한다
// 3. 반환한다

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
};

void main()
{
	// Mini* p = new Mini;
	// 자원을 독점하는 unique_ptr
	unique_ptr<Mini> p(new Mini);
	// 내가 포인터이기 때문에 데이터 타입만 적는다.
	// 미니를 만드는것이 아니라 메모리번지이다.
	// p는 지연 변수 (STACK) - 지역이 사라지면 없어진다.
	// 따라서 지역이 사라지면 자동으로 해지 한다.
	save();
}

//=============================================
//			Wed Mar 30 11:37:03 2016
//=============================================
#include<iostream>
#include<memory>
#include"save.h"

using namespace std;

// 스마트포인터
// 자신의 획득한 자원을 자신이 소멸될때 해제해 주는 포인터
// C++11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1. 자원을 획득한다(HEAP)
// 2. 자원을 이용한다
// 3. 반환한다

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
	void f() 
	{ cout << "member" << endl; }
};

void main()
{
	Mini* p = new Mini;
	p->f();
	Mini* q = p;
	q->f();

	delete p;
	//delete q;
	// 잘못된 표현

	//unique_ptr<Mini> p(new Mini);	
	//p->f();
	save();
}
//=============================================
//			Wed Mar 30 11:39:09 2016
//=============================================
#include<iostream>
#include<memory>
#include"save.h"

using namespace std;

// 스마트포인터
// 자신의 획득한 자원을 자신이 소멸될때 해제해 주는 포인터
// C++11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1. 자원을 획득한다(HEAP)
// 2. 자원을 이용한다
// 3. 반환한다

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
	void f() 
	{ cout << "member" << endl; }
};

void main()
{

	unique_ptr<Mini> p(new Mini);	
	p->f();
	//unique_ptr<Mini> q = p; 
	// 포인터를 복사생성한다.
	// 컴파일이 막는다.
	unique_ptr<Mini> q = move(p);
	// 이사 보낸다. (이동생성)
	save();
}
//=============================================
//			Wed Mar 30 11:40:07 2016
//=============================================
#include<iostream>
#include<memory>
#include"save.h"

using namespace std;

// 스마트포인터
// 자신의 획득한 자원을 자신이 소멸될때 해제해 주는 포인터
// C++11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1. 자원을 획득한다(HEAP)
// 2. 자원을 이용한다
// 3. 반환한다

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
	void f() 
	{ cout << "member" << endl; }
};

void main()
{
	unique_ptr<Mini> p(new Mini);	
	p->f();
	unique_ptr<Mini> q = move(p);

	cout << "이사간 후" << endl;
	p->f();	// 불려진다.
	// undefined - 정의 되지않았다.
	// 이런것을 할 수 없다.
	save();
}
//=============================================
//			Wed Mar 30 11:42:38 2016
//=============================================
#include<iostream>
#include<memory>
#include"save.h"

using namespace std;

// 스마트포인터
// 자신의 획득한 자원을 자신이 소멸될때 해제해 주는 포인터
// C++11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1. 자원을 획득한다(HEAP)
// 2. 자원을 이용한다
// 3. 반환한다

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
	void f() 
	{ cout << "member" << endl; }
};

void main()
{
	unique_ptr<Mini> p(new Mini[10]);
	// 프로그램 돌아가신다.
	// 소멸자에 array로 지워주라고 소멸자에 프로그래밍할수있다
	// delete[] p;
	save();
}