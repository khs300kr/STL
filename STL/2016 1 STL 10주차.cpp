//=============================================
//			Mon May 09 10:49:01 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
// p. 293
// 바인더
// 함수 어댑터이다.
// 함수의 인자수를 바꿔 새로운 함수를 만들어 낸다.

void main()
{
	// 함수객체는 ()를 오버로딩한 클래스의 객체이다.
	// STL에서는 미리 여러개의 함수객체를 만들어 놓았다.
	// 10장 (546쪽)에는 이러한 선정의된 함수객체들이 나와있다.
	// - 이용하려면 #include< functional>
	// 그 중에
	//		multiplies<type>(), 효과 param1 * param2
	//

	multiplies<int> m;

	cout << m(2, 3) << endl;

	// 현재 m은 인자 2개로 호출하는 호출가능 타입이다.
	// 바인더는 인자 2개가 필요한 m을 다른 인자갯수를 갖는 
	// 호출가능타입	만들 수 있다.
	cout << bind(m, 2, 3)() << endl;
	// bind는 인자를 안 넣어서 호출했다.
	


	//set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//deque<int> coll2;

	//// transform을 써서 coll1의 모든 원소를 coll2로 옮기면서
	//// 10을 곱한다.
	//transform(coll.begin(), coll.end(), back_inserter(coll2),
	//	[](int n) {
	//	return n * 10;
	//}); 
	save();
}
//=============================================
//			Mon May 09 10:49:28 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
// p. 293
// 바인더
// 함수 어댑터이다.
// 함수의 인자수를 바꿔 새로운 함수를 만들어 낸다.

void main()
{
	// 함수객체는 ()를 오버로딩한 클래스의 객체이다.
	// STL에서는 미리 여러개의 함수객체를 만들어 놓았다.
	// 10장 (546쪽)에는 이러한 선정의된 함수객체들이 나와있다.
	// - 이용하려면 #include< functional>
	// 그 중에
	//		multiplies<type>(), 효과 param1 * param2
	//

	multiplies<int> m;

	cout << m(2, 3) << endl;

	// 현재 m은 인자 2개로 호출하는 호출가능 타입이다.
	// 바인더는 인자 2개가 필요한 m을 다른 인자갯수를 갖는 
	// 호출가능타입	만들 수 있다.
	auto f = bind(m, 2, 3);
	cout << f() << endl;
	// bind는 인자를 안 넣어서 호출했다.
	


	//set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//deque<int> coll2;

	//// transform을 써서 coll1의 모든 원소를 coll2로 옮기면서
	//// 10을 곱한다.
	//transform(coll.begin(), coll.end(), back_inserter(coll2),
	//	[](int n) {
	//	return n * 10;
	//}); 
	save();
}
//=============================================
//			Mon May 09 10:51:58 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// 바인더
// 함수 어댑터이다.
// 함수의 인자수를 바꿔 새로운 함수를 만들어 낸다.

void main()
{
	// 함수객체는 ()를 오버로딩한 클래스의 객체이다.
	// STL에서는 미리 여러개의 함수객체를 만들어 놓았다.
	// 10장 (546쪽)에는 이러한 선정의된 함수객체들이 나와있다.
	// - 이용하려면 #include< functional>
	// 그 중에
	//		multiplies<type>(), 효과 param1 * param2
	//

	multiplies<int> m;

	cout << m(2, 3) << endl;

	// 현재 m은 인자 2개로 호출하는 호출가능 타입이다.
	// 바인더는 인자 2개가 필요한 m을 다른 인자갯수를 갖는 
	// 호출가능타입	만들 수 있다.
	// bind는 인자를 안 넣어서 호출했다.
	auto f = bind(m, _1, 10);
	cout << f( 2 ) << endl;
	// 원래 m은 인자 2개로 불렀던것인데,
	// 1개로만 호출했다.


	//set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//deque<int> coll2;

	//// transform을 써서 coll1의 모든 원소를 coll2로 옮기면서
	//// 10을 곱한다.
	//transform(coll.begin(), coll.end(), back_inserter(coll2),
	//	[](int n) {
	//	return n * 10;
	//}); 
	save();
}
//=============================================
//			Mon May 09 10:56:49 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// 바인더
// 함수 어댑터이다.
// 함수의 인자수를 바꿔 새로운 함수를 만들어 낸다.

void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;

	// transform을 써서 coll1의 모든 원소를 coll2로 옮기면서
	// 10을 곱한다.
	transform(coll.begin(), coll.end(), back_inserter(coll2),
		[](int n) {
		return n * 10;
	}); 

	for (int d : coll2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Mon May 09 11:08:23 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// 바인더
// 함수 어댑터이다.
// 함수의 인자수를 바꿔 새로운 함수를 만들어 낸다.

void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;


	// transform을 써서 coll1의 모든 원소를 coll2로 옮기면서
	// 10을 곱한다.
	auto f = bind(multiplies<int>(), _1, 10);

	transform(coll.begin(), coll.end(), back_inserter(coll2),
		// 호출가능객체가 들어가야 하는 자리
		// 이 함수는 coll.begin()의 값을 역참조해서
		// 이 호출가능 객체로 전달한다.
		// 이 객체는 이 값을 받아 *10하여 리턴한다.
		// 이 문제를 multiplies와 bind를 이용하여 해결하라.
		f
	); 

	for (int d : coll2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Mon May 09 11:08:38 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// 바인더
// 함수 어댑터이다.
// 함수의 인자수를 바꿔 새로운 함수를 만들어 낸다.

void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;


	// transform을 써서 coll1의 모든 원소를 coll2로 옮기면서
	// 10을 곱한다.
	transform(coll.begin(), coll.end(), back_inserter(coll2),
		// 호출가능객체가 들어가야 하는 자리
		// 이 함수는 coll.begin()의 값을 역참조해서
		// 이 호출가능 객체로 전달한다.
		// 이 객체는 이 값을 받아 *10하여 리턴한다.
		// 이 문제를 multiplies와 bind를 이용하여 해결하라.
		bind(multiplies<int>(), _1, 10)
	); 

	for (int d : coll2)
		cout << d << " ";
	cout << endl;
	save();
}

#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// 바인더
// 함수 어댑터이다.
// 함수의 인자수를 바꿔 새로운 함수를 만들어 낸다.

template <class Iter, class Dest, class call>
xtransform(Iter b, Iter e, Dest d, call c)
{
	while (b != e)
	{
		d.push_back(c(*b));
		b++;
	}
}

void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;


	// transform을 써서 coll1의 모든 원소를 coll2로 옮기면서
	// 10을 곱한다.
	auto f = bind(multiplies<int>(), _1, 10);

	xtransform(coll.begin(), coll.end(), back_inserter(coll2),
		f
		); // 고쳐보세요!!!(컴파일안됨!!X)


	for (int d : coll2)
		cout << d << " ";
	cout << endl;

}
//=============================================
//			Mon May 09 11:14:25 2016
//=============================================
// 알고리즘 인자로서의 함수
//		조건자(predicates)
//			-bool 값을 리턴하는 호출가능타입으로
//			 알고리즘의 인자로 사용됨. 주로 정렬이나
//			 탐색에 사용된다.
//		단항조건자
//		이항조건자
//		
// 람다 사용하기
//		C++ 컴파일러는 일반 함수에 비해 람다를 최적화할 
//		가능성이 매우 크다.
// 함수 객체
//		() 연산자를 overloading한 클래스
//		상태를 갖는다 - closure(클로저)
//		자신만의 자료형을 갖는다.
//		대체로 함수객체는 일반함수보다 빠르다
//
// 6.11 컨테이너의 원소 - requirements
//	  1. 원소는 복사 또는 이동 가능해야 한다. 
//	  2. 할당 연산자로 할당될 수 있어야 한다.
//	  3. 소멸자로 소멸될 수 있어야 한다.
// ----------------------------------------------------------
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// 바인더
// 함수 어댑터이다.
// 함수의 인자수를 바꿔 새로운 함수를 만들어 낸다.

void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;


	// transform을 써서 coll1의 모든 원소를 coll2로 옮기면서
	// 10을 곱한다.
	transform(coll.begin(), coll.end(), back_inserter(coll2),
		[](int n) {return n * 10; }
		);
	// 람다가 더 효율적인것을 알 수 있다.
	for (int d : coll2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Mon May 09 11:54:32 2016
//=============================================
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

class Game
{
};

void main()
{	
	// 6.11 컨테이너의 원소 - requirements(생성,소멸,복사) p.296
	//	  1. 원소는 복사 또는 이동 가능해야 한다. 
	//	  2. 할당 연산자로 할당될 수 있어야 한다.
	//	  3. 소멸자로 소멸될 수 있어야 한다.
	vector<Game> v;
	v.push_back(Game());

	save();
	// p. 297, 298 중요하다. ( 꼭 읽어보세요 )
	// p .304 가장 중요하다.
}
//=============================================
//			Mon May 09 12:15:16 2016
//=============================================
// 7장 STL 컨테이너
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"save.h"

using namespace std;

void main()
{
	// 이 파일안에 몇 개의 단어가 있는지 출력해 보세요.
	ifstream in("소스.cpp");
	string s;
	int n{};
	while (in >> s)
		++n;
	cout << n << endl;
	save();
}
//=============================================
//			Mon May 09 12:20:19 2016
//=============================================
// 7장 STL 컨테이너
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;


void main()
{
	// 소스.cpp의 모든 단어 순서를 거꾸로 출력하라.
	// using --> gnisu
	string s;
	ifstream in("소스.cpp");

	while (in >> s)
	{
		// s로 한 단어 읽음.
		copy(s.rbegin(), s.rend(), ostream_iterator<char>(cout));
		cout << "\t";
	}
	cout << endl;
	save();
}
//=============================================
//			Wed May 11 10:50:11 2016
//=============================================
/***********************************
 2015. 5. 11. 수23(월수) 10주 2번째
 다음주 수 (5. 18) 퀴즈 2 예정
***********************************/
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog(int n) 
		: age(n) {}
	int get_age(void) const
	{
		return age;
	}

};

bool f(Dog& d)
{
	if (d.get_age() >= 7)
		return true;
	else
		return false;
}

void main()
{
	vector<Dog> v{ 5, 7, 3, 6, 9 };
	// 나이가 7살 이상인 객체가 몇 개 있는지 찾아보세요.
	// 1. 일반함수를 조건자로 사용
	int n = count_if(v.begin(), v.end(), f);
	cout << n << endl;
	// 2. 람다를 조건자로 사용
	//count_if(v.begin(), v.end(), [](int n){
	//	return n > 6;
	//});
	// 3. 함수객체를 조건자로 사용
	save();
}
//=============================================
//			Wed May 11 10:53:01 2016
//=============================================
/***********************************
 2015. 5. 11. 수23(월수) 10주 2번째
 다음주 수 (5. 18) 퀴즈 2 예정
***********************************/
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	explicit Dog(int n) 
		: age(n) {}
	// explicit -> 암시적인 변환 막는다.
	int get_age(void) const
	{
		return age;
	}

};

bool f(Dog& d)
{
	if (d.get_age() >= 7)
		return true;
	else
		return false;
}

void main()
{
	vector<Dog> v{ Dog{ 5 }, Dog{ 7 }, Dog{ 3 }, Dog{ 6 }, Dog{ 9 } };
	// 나이가 7살 이상인 객체가 몇 개 있는지 찾아보세요.
	// 1. 일반함수를 조건자로 사용
	//int n = count_if(v.begin(), v.end(), f);
	//cout << n << endl;
	// 2. 람다를 조건자로 사용
	int n = count_if(v.begin(), v.end(), [](const Dog& d){
		return d.get_age() >= 7;
	});
	cout << n << endl;
	// 3. 함수객체를 조건자로 사용
	save();
}
//=============================================
//			Wed May 11 10:56:15 2016
//=============================================
/***********************************
 2015. 5. 11. 수23(월수) 10주 2번째
 다음주 수 (5. 18) 퀴즈 2 예정
***********************************/
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	explicit Dog(int n) 
		: age(n) {}
	// explicit -> 암시적인 변환 막는다.
	int get_age(void) const
	{
		return age;
	}

};

class Test
{
public:
	bool operator ()(const Dog& d)
	{
		if( d.get_age() >= 7 )
			return true;
		else 
			return false;
	}

};

bool f(Dog& d)
{
	if (d.get_age() >= 7)
		return true;
	else
		return false;
}

void main()
{
	vector<Dog> v{ Dog{ 5 }, Dog{ 7 }, Dog{ 3 }, Dog{ 6 }, Dog{ 9 } };
	// 나이가 7살 이상인 객체가 몇 개 있는지 찾아보세요.
	// 1. 일반함수를 조건자로 사용
	//int n = count_if(v.begin(), v.end(), f);
	//cout << n << endl;
	// 2. 람다를 조건자로 사용
	//int n = count_if(v.begin(), v.end(), [](const Dog& d){
	//	return d.get_age() >= 7;
	//});
	//cout << n << endl;
	// 3. 함수객체를 조건자로 사용
	int n = count_if(v.begin(), v.end(), Test());
	cout << n << endl;
	save();
}
//=============================================
//			Wed May 11 10:57:11 2016
//=============================================
/***********************************
 2015. 5. 11. 수23(월수) 10주 2번째
 다음주 수 (5. 18) 퀴즈 2 예정
***********************************/
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	explicit Dog(int n) 
		: age(n) {}
	// explicit -> 암시적인 변환 막는다.
	int get_age(void) const
	{
		return age;
	}

};

class Test
{
public:
	bool operator ()(const Dog& d)
	{
		if( d.get_age() >= 7 )
			return true;
		else 
			return false;
	}

};

bool f(Dog& d)
{
	if (d.get_age() >= 7)
		return true;
	else
		return false;
}

void main()
{
	vector<Dog> v{ Dog{ 5 }, Dog{ 7 }, Dog{ 3 }, Dog{ 6 }, Dog{ 9 } };
	// 나이가 7살 이상인 객체가 몇 개 있는지 찾아보세요.
	
	// 1. 일반함수를 조건자로 사용(고전적인 방법)
	count_if(v.begin(), v.end(), f);
	// 2. 람다를 조건자로 사용(모든 C++사용하는 가독성이 좋다)
	count_if(v.begin(), v.end(), [](const Dog& d){
		return d.get_age() >= 7;
	});

	// 3. 함수객체를 조건자로 사용
	count_if(v.begin(), v.end(), Test());
	// 2번 람다에 비해서 장점이 존재한다.
	// 원한다면 클래스이기 때문에 적절한 상태를 가질수있다.
	// 함수를 부를떄마다 이 동작을 변경 시킬 수 있다.
	save();
}
//=============================================
//			Wed May 11 11:21:34 2016
//=============================================
// 7장
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	explicit Dog(int n)
		: age(n) {}
	// explicit -> 암시적인 변환 막는다.
	int get_age(void) const
	{
		return age;
	}

};
void main()
{
	vector<Dog> v;
	vector<Dog>::value_type x;

	save();
}
//=============================================
//			Wed May 11 11:37:18 2016
//=============================================
// 7장
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v{ 1, 2, 3, 4, 5 };

	// v를 이동하여 새로운 객체 u를 만들어 보세요.
	vector<Dog> u{ move(v) };

	save();
}
//=============================================
//			Wed May 11 11:37:51 2016
//=============================================
// 7장
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v{ 1, 2, 3, 4, 5 };

	// v를 이동하여 새로운 객체 u를 만들어 보세요.
	vector<Dog> u = (vector<Dog>&&)v;
	// r-Value reference

	save();
}
//=============================================
//			Wed May 11 11:42:47 2016
//=============================================
// 7장
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v{ 1, 2, 3, 4, 5 };
	vector<Dog> u{ 1, 2, 3, 4, 5, 6, 7 };

	u = move(v);
	// All existing elements of a are either move
	// assigned to or destroyed

	// a shall be equal to the value that rv had
	// before this assignment
	cout << u.size() << endl;
	save();
}
//=============================================
//			Wed May 11 11:45:06 2016
//=============================================
// 7장
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v{ 1, 2, 3, 4, 5 };
	
	v.~vector<Dog>();

	cout << v.size() << endl;

	save();
}
//=============================================
//			Wed May 11 11:49:20 2016
//=============================================
// 7장
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v{ 1, 2, 3, 4, 5 };
	vector<Dog> u;
	u.swap(v);
	// v의 모든 원소를 지우고 메모리를 해제할 수 있니?

	v.erase(v.begin(), v.end());
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	// swap 해서 0만들기.
	save();
}
//=============================================
//			Wed May 11 11:59:38 2016
//=============================================
// 7장
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v( 1000, Dog(10) );
	// 10살 Dog 1000개 만들기.
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	save();
}
//=============================================
//			Wed May 11 12:03:09 2016
//=============================================
// 7장
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<int> s{ 1, 2, 3, 4, 5 };
	vector<int> v(s.rbegin(),s.rend());

	for (int d : v)
		cout << d << endl;
	save();
}
// 7장
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}

};


void main()
{
	// 키보드에서 원하는 만큼 숫자를 입력해서 v를 만들어 주세요.
	// 그리고 합을 출력해 주세요.


	vector<int> v{ istream_iterator<int>(cin),
		istream_iterator<int>() };

	int sum{};
	for (int d : v)
		sum += d;

	cout << sum << endl;
	save();
}


void main()
{
	// 키보드에서 원하는 만큼 숫자를 입력해서 v를 만들어 주세요.
	// 그리고 합을 출력해 주세요.
	vector<int> v(istream_iterator<int>(cin),
		istream_iterator<int>());
	// ex) int f(인자1,인자2) -> 위를 함수처럼 읽는다.

	int sum{};
	for (int d : v)
		sum += d;

	cout << sum << endl;
}