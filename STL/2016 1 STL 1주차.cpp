//----------------------------------------------------
//	2016.1.STL 월23 수23
//
//	3. 7 월 (2일차/1주)
//----------------------------------------------------
// 소스파일 하드에 저장, 날짜 붙여서, CPP 파일 분리
// 정렬,랜덤 넘버 생성
//----------------------------------------------------

#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;


//void main()
//{
//	int x[2] = { 10,20 };
//
//	int&p = x[0];
//	++p;			// 값이 바뀐다. (레퍼런스와 포인트의 차이)
//	p = 333;
//
//	cout << x[0] << ", " << x[1] << endl;
//}


class Monster
{
private:
	string strName;
	int iNumber;
public:
	Monster(string _strName, int _iNumber)
		:strName(_strName), iNumber(_iNumber)
	{}
	~Monster()
	{}
public:
	string Get_Name(void) const { return strName; }
	int Get_Number(void) const { return iNumber; }
};

template <class T>
void change(T& a, T& b) // 데이터 복사를 방지하기위해서 사용된다.
{
	T t = a;
	a = b;
	b = t;
}

ostream &operator<<(ostream &os, const Monster &m)
{
	os << m.Get_Name() << " , " << m.Get_Number() << endl;

	return os;
}

void main()
{
	// 실습
	Monster x("빅뱅", 333), y("ogre", 777);
	change(x, y);

	cout << x << y << endl;

	save();
}


//=============================================
//  		Mon Mar  7 12:10:13 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

int compare(const void *a, const void *b);

void main()
{
	int a[] = { 2,4,6,8,10,1,3,5,7,9 };
	
	// C함수 qsort를 이용하여 a를 정렬하시오.

	// 지금 compare를 main() 안에서 선언한 후 qosrt로 넘겨봐라.

	qsort(a,10,sizeof(a[0]),compare);
	
	for (auto d : a)
		cout << d << " ";
	cout << endl;

	//save();
}

int compare(void *first, void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

//=============================================
//			Wed Mar 09 10:37:51 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

int test()
{
	cout << "테스트 함수 속" << endl;
	return 3;
}

void main()
{
	test();
	(*test)();
	// 같은표현이다.

	save();
}


//=============================================
//			Wed Mar 09 10:37:51 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int compare(const void *a, const void *b);
int test();

void main()
{
	int a[] = { 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 };

	// C함수 qsort를 이용하여 a를 정렬하시오.

	// 지금 test를 main() 안에서 선언한 후 qosrt로 넘겨봐라.

	//int (const void *, const void *) -> compare의 함수 타입이다.

	int(*test)(const void*, const void*) = compare;
	// This is function pointer.
	// auto test = compare;
	// auto의 용도.

	qsort(a, 10, sizeof(a[0]), test);

	for (auto d : a)
		cout << d << " ";
	cout << endl;

	//save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int test()
{
	cout << "함수 몸체 속 " << endl;
	return 3;
}



//=============================================
//			Wed Mar 09 11:00:56 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;

// 정렬, 랜덤 넘버 를 사용하자.
// 많은 수의 정수를 정렬해 보자 - 10000
// C++11의 난수를 사용하자 - #include<random>

int compare(const void *first, const void *seocnd);

void main()
{
	srand((unsigned int)time(NULL));
	int a[10000];

	// C++11 랜덤
	// 난수생성 엔진과 난수확률분포를 사용하여 생성한다.
	default_random_engine dre;

	// a의 값을 임의의 정수로 채워라.
	for (auto& d : a)
		d = rand() % 100;
	// 17장 p.987쪽 rand() 함수에 적혀있다.
	// rand()다운 rand를 한다.

	// C함수 qosrt를 이용하여 a를 정렬하시오.
	qsort(a, 10000, 4, compare);

	for (auto d : a)
		cout << d << " ";	// 오름차순 정렬
	cout << endl;
	save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

//=============================================
//			Wed Mar 09 11:00:56 2016
//=============================================
// 정렬, 랜덤 넘버 를 사용하자.
// 많은 수의 정수를 정렬해 보자 - 10000
// C++11의 난수를 사용하자 - #include<random>
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;
int compare(const void *first, const void *seocnd);

void main()
{
	srand((unsigned int)time(NULL));
	int a[1000];

	// C++11 랜덤
	// 난수생성 엔진과 난수확률분포를 사용하여 생성한다.
	default_random_engine dre;
	normal_distribution<> nd(0, 6.0);
	// 2번째 인자 시그마
	// 수학 통계적인 확률분포또한 활용 가능하다.

	// a의 값을 임의의 정수로 채워라.
	for (auto& d : a)
		d = nd(dre);
	// 17장 p.987쪽 rand() 함수에 적혀있다.
	// rand()다운 rand를 한다.
 
	// C함수 qosrt를 이용하여 a를 정렬하시오.
	qsort(a, 1000, 4, compare);

	for (auto d : a)
		cout << d << " ";	// 오름차순 정렬
	cout << endl;
	save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
//=============================================
//			Wed Mar 09 11:07:28 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;

// 정렬, 랜덤 넘버 를 사용하자.
// 많은 수의 정수를 정렬해 보자 - 10000
// C++11의 난수를 사용하자 - #include<random>

int compare(const void *first, const void *seocnd);

void main()
{
	srand((unsigned int)time(NULL));
	int a[1000];

	// C++11 랜덤
	// 난수생성 엔진과 난수확률분포를 사용하여 생성한다.
	default_random_engine dre;
	uniform_int_distribution<> ui(-100,100);
	// 확률분포가 아닌 고른분포.
	// 직관적인 예전방식!
	// 수학 통계적인 확률분포또한 활용 가능하다.

	// a의 값을 임의의 정수로 채워라.
	for (auto& d : a)
		d = ui(dre);
	// 17장 p.987쪽 rand() 함수에 적혀있다.
	// rand()다운 rand를 한다.
 
	// C함수 qosrt를 이용하여 a를 정렬하시오.
	qsort(a, 1000, 4, compare);

	for (auto d : a)
		cout << d << " ";	// 오름차순 정렬
	cout << endl;
	save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
//=============================================
//			Wed Mar 09 11:17:59 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;

// 정렬, 랜덤 넘버 를 사용하자.
// 많은 수의 정수를 정렬해 보자 - 10000
// C++11의 난수를 사용하자 - #include<random>

int compare(const void *first, const void *seocnd);

void main()
{
	srand((unsigned int)time(NULL));
	// 1,000,000개의 정수를 생성하고 정렬
	int *a = new int[100];
	// 이것은 for(int i=0; i < 1000000; ++i)를 써야 해결.
	// 주소만 가르키므로 번지를 대변 x.


	// C++11 랜덤
	// 난수생성 엔진과 난수확률분포를 사용하여 생성한다.
	default_random_engine dre;
	uniform_int_distribution<> ui(-100,100);
	// 확률분포가 아닌 고른분포.
	// 직관적인 예전방식!
	// 수학 통계적인 확률분포또한 활용 가능하다.

	for (int i = 0; i < 100; ++i)
	{
		a[i] = ui(dre);
	}

	// a의 값을 임의의 정수로 채워라.
	//for (auto& d : a)
	//	d = ui(dre);
	// 17장 p.987쪽 rand() 함수에 적혀있다.
	// rand()다운 rand를 한다.
 
	// C함수 qosrt를 이용하여 a를 정렬하시오.
	qsort(a, 100, 4, compare);

	//for (auto d : a)
	//	cout << d << " ";	// 오름차순 정렬

	for (int i = 0; i < 100; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	delete[] a;

	save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
//=============================================
//			Wed Mar 09 11:47:17 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;

// 정렬, 랜덤 넘버 를 사용하자.
// 많은 수의 정수를 정렬해 보자 - 10000
// C++11의 난수를 사용하자 - #include<random>

int compare(const void *first, const void *seocnd);

void main()
{
	srand((unsigned int)time(NULL));
	// 1,000,000개의 정수를 생성하고 정렬
	int *a = new int[1000000];
	// 이것은 for(int i=0; i < 1000000; ++i)를 써야 해결.
	// 주소만 가르키므로 번지를 대변 x.

	// C++11 랜덤
	// 난수생성 엔진과 난수확률분포를 사용하여 생성한다.
	default_random_engine dre;
	uniform_int_distribution<> ui;
	// 확률분포가 아닌 고른분포.
	// 직관적인 예전방식!
	// 수학 통계적인 확률분포또한 활용 가능하다.

	for (int i = 0; i < 1000000; ++i)
	{
		a[i] = ui(dre);
	}

	// a의 값을 임의의 정수로 채워라.
	//for (auto& d : a)
	//	d = ui(dre);
	// 17장 p.987쪽 rand() 함수에 적혀있다.
	// rand()다운 rand를 한다.
 
	// C함수 qosrt를 이용하여 a를 정렬하시오.
	qsort(a, 1000000, 4, compare);

	//for (auto d : a)
	//	cout << d << " ";	// 오름차순 정렬

	// 정렬한 정수를 파일에 저장합니다... (기념으로)
	// 가시적으로 메모리를 저장하면 출력하는데에 메모리
	// 소비가 심하다.
	ofstream out("정수들.txt",ios::binary);
	// 2진수로 기록하여 정확하게 400만 바이트 형성
	// 따라서 이코드를 작성한다.
	out.write((const char*)(a), sizeof(int) * 1000000);
	/*for (int i = 0; i < 1000000; ++i)
	{
		out << a[i] << " ";
	}*/
	
	//out << endl;

	delete[] a;
	save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
//=============================================
//			Wed Mar 09 11:51:30 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;

// 정렬, 랜덤 넘버 를 사용하자.
// 많은 수의 정수를 정렬해 보자 - 10000
// C++11의 난수를 사용하자 - #include<random>
// 파일에 저장하였다.
// 저장한 정수를 읽어오자

void main()
{
	ifstream in("정수들.txt", ios::binary);

	int* a = new int[1000000];

	in.read((char*)a, 1000000);

	for (int i = 0; i < 100; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	delete[] a;
	
	save();
}
//=============================================
//			Wed Mar 09 12:04:14 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

// 정렬, 랜덤 넘버 를 사용하자.
// 많은 수의 정수를 정렬해 보자 - 10000
// C++11의 난수를 사용하자 - #include<random>
// 파일에 저장하였다.
// 저장한 정수를 읽어오자

void main()
{
	int a[] = { 10,9,8,7,6,5,4,3,2,1 };
	
	// C++에서는 a를 다음과 같이 정렬한다.
	sort(a , a + 10);
	// Range 설정.(시작은 실질, 끝은 실질 하나더 끝)
	for (int d : a)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed Mar 09 12:12:20 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

// 정렬, 랜덤 넘버 를 사용하자.
// 많은 수의 정수를 정렬해 보자 - 10000
// C++11의 난수를 사용하자 - #include<random>
// 파일에 저장하였다.
// 저장한 정수를 읽어오자

int f(int a, int b)
{
	return a > b;
}

void main()
{
	int a[] = { 10,19,8,7,6,5,4,3,2,51 };
	
	// C++에서는 a를 다음과 같이 정렬한다.
	// 내림차순으로 정렬해보자.
	sort(a, a + 10, f);
	// 함수기능 3번쨰인자를 넣자.
	// Range 설정.(시작은 실질, 끝은 실질 하나더 끝)
	// 막바로 함수를쓰고싶다. 람다함수를 쓰자!!
	for (int d : a)
		cout << d << " ";
	cout << endl;
	save();

}
//=============================================
//			Wed Mar 09 12:13:40 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

// 정렬, 랜덤 넘버 를 사용하자.
// 많은 수의 정수를 정렬해 보자 - 10000
// C++11의 난수를 사용하자 - #include<random>
// 파일에 저장하였다.
// 저장한 정수를 읽어오자

//int f(int a, int b)
//{
//	return a > b;
//}

void main()
{
	int a[] = { 10,19,8,7,6,5,4,3,2,51 };
	
	// C++에서는 a를 다음과 같이 정렬한다.
	// 내림차순으로 정렬해보자.
	sort(a, a + 10, [](int a, int b) {
		return a > b; 
	});
	// 함수기능 3번쨰인자를 넣자.
	// Range 설정.(시작은 실질, 끝은 실질 하나더 끝)
	// 막바로 함수를쓰고싶다. 람다함수를 쓰자!!
	for (int d : a)
		cout << d << " ";
	cout << endl;
	save();

}
///////////////////////////////////////////////////



#include<iostream>
#include<ctime>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

// 정렬, 랜덤 넘버 를 사용하자.
// 많은 수의 정수를 정렬해 보자 - 10000
// C++11의 난수를 사용하자 - #include<random>
// 파일에 저장하였다.
// 저장한 정수를 읽어오자

class Wizard
{

};

void main()
{
	// 마법사는 이름과 나이를 갖는다.
	Wizard a[] = { ("1월", 10), ("2월", 20), ("3월", 3) };

	// 마법사를 이름 오름차순으로 정렬 후 출력
	// 마법사를 이름 내림차순으로 정렬 후 출력

	// C함수인 qsort로 해결.
	// 정렬은 qsort()를 사용하라.

	for (auto d : a)	// 각 마법사의 이름과 나이를 출력
		cout << d << endl;
}
