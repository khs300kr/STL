
//=============================================
//			Mon Apr 18 10:38:14 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<set>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//---------------------------------------------------------------

void main()
{
	// 연관 컨테이너 set<int>에 랜덤정수 100개 넣고 출력해보자.
	set<int> s;

	//reserve 할 이유도 해서도 안된다.
	for (int i = 0; i < 100; ++i)
		s.insert(rand());
	
	// (1) const_iterator 반복자를이용해서 읽기만한다.
	for (set<int>::const_iterator iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << "\t";
	
	cout << endl;

	s.find(32757);

	//auto p = find(s.begin(), s.end(), 32757);

	//if (p != s.end())
	//	cout << "찾음" << *p << endl;

	save();
}
//=============================================
//			Mon Apr 18 10:39:01 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<set>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//---------------------------------------------------------------

void main()
{
	// 연관 컨테이너 set<int>에 랜덤정수 100개 넣고 출력해보자.
	set<int> s;

	//reserve 할 이유도 해서도 안된다.
	for (int i = 0; i < 100; ++i)
		s.insert(rand());
	
	// (1) const_iterator 반복자를이용해서 읽기만한다.
	// (2) auto를 사용하여 cbegin, cend 가능
	for (auto iter = s.cbegin(); iter != s.cend(); ++iter)
		cout << *iter << "\t";
	
	cout << endl;

	s.find(32757);

	//auto p = find(s.begin(), s.end(), 32757);

	//if (p != s.end())
	//	cout << "찾음" << *p << endl;

	save();
}
//=============================================
//			Mon Apr 18 10:42:12 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<set>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//---------------------------------------------------------------

void main()
{
	// 연관 컨테이너 set<int>에 랜덤정수 100개 넣고 출력해보자.
	set<int> s;

	//reserve 할 이유도 해서도 안된다.
	for (int i = 0; i < 100; ++i)
		s.insert(rand());
	
	// (1) const_iterator 반복자를이용해서 읽기만한다.
	// (2) auto를 사용하여 cbegin, cend 가능
	for (auto iter = s.cbegin(); iter != s.cend(); ++iter)
		cout << *iter << "\t";
	
	cout << endl;

	find(s.cbegin(), s.cend(), 32757);	
	//auto p = find(s.begin(), s.end(), 32757);
	// 이것은 100개를 순회한다.
	
	auto p = s.find(32757);
	// set은 자기만의 함수 tree search 할 수 있도록 존재한다.


	if (p != s.end())
		cout << "찾음" << *p << endl;

	save();
}
//=============================================
//			Mon Apr 18 10:45:36 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<set>
#include<functional>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//---------------------------------------------------------------

void main()
{
	// 연관 컨테이너 set<int>에 랜덤정수 100개 넣고 출력해보자.
	// 내림차순 ( #include<functional> 추가)
	set<int,greater<int>> s;

	//reserve 할 이유도 해서도 안된다.
	for (int i = 0; i < 100; ++i)
		s.insert(rand());
	
	// (1) const_iterator 반복자를이용해서 읽기만한다.
	// (2) auto를 사용하여 cbegin, cend 가능
	for (auto iter = s.cbegin(); iter != s.cend(); ++iter)
		cout << *iter << "\t";
	
	cout << endl;

	find(s.cbegin(), s.cend(), 32757);	
	//auto p = find(s.begin(), s.end(), 32757);
	// 이것은 100개를 순회한다.
	
	auto p = s.find(32757);
	// set은 자기만의 함수 tree search 할 수 있도록 존재한다.


	if (p != s.end())
		cout << "찾음" << *p << endl;
	save();
}
//=============================================
//			Mon Apr 18 11:04:52 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<set>
#include<functional>
#include<map>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//---------------------------------------------------------------

// 연관 컨테이너 map
// map<key, value>
// (연습) 이름과 점수를 map으로 관리해보자.

void main()
{
	using Score = pair<string, int>;
	map<string, int> m{ { "철수", 200 }, make_pair("바둑이", 20) };
	// 맵은 트리형태로 순서는 자기 자신이 만든다.
	// 객체를 만들고 집어넣는다.

	m.insert(pair<string, int>("철수", 30));
	// (1)데이터 타입을 이런식으로 넣어야한다.
	m.insert(make_pair("영희",50));
	// (2)유추해서 넣는 문 make_pair
	m.insert(Score("동희", 33));
	// (3)Score pair를 사용해서 넣는다.

	for (auto& d : m)
		cout << d.first << "->" << d.second << endl;

	// key값인 철수가 복수여서 거부 당하였다.
	// map은 동일 key값을 허용하지 않는다.
	// multimap은 이것은 허용한다.

	save();
}

//=============================================
//			Mon Apr 18 11:07:54 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<set>
#include<functional>
#include<map>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//---------------------------------------------------------------

// 연관 컨테이너 map
// map<key, value>
// (연습) 이름과 점수를 map으로 관리해보자.

void main()
{
	using Score = pair<string, int>;
	map<string, int> m{ { "철수", 200 }, make_pair("바둑이", 20) };
	// 맵은 트리형태로 순서는 자기 자신이 만든다.
	// 객체를 만들고 집어넣는다.

	m.insert(pair<string, int>("철수", 30));
	// (1)데이터 타입을 이런식으로 넣어야한다.
	m.insert(make_pair("영희",50));
	// (2)유추해서 넣는 문 make_pair
	m.insert(Score("이름", 33));
	// (3)Score pair를 사용해서 넣는다.

	// 철수의 점수를 바꿔보자.
	auto p = m.begin();
	++p;
	++p;
	++p;
	p->second = 77777;
	// begin을 cbegin 하여 바뀌지 않는다.

	for (auto& d : m)
		cout << d.first << "->" << d.second << endl;
	// key값인 철수가 복수여서 거부 당하였다.
	// map은 동일 key값을 허용하지 않는다.
	// multimap은 이것은 허용한다.

	save();
}

//=============================================
//			Mon Apr 18 11:10:20 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<set>
#include<functional>
#include<map>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//---------------------------------------------------------------

// 연관 컨테이너 map
// map<key, value>
// (연습) 이름과 점수를 map으로 관리해보자.

void main()
{
	using Score = pair<string, int>;
	map<string, int> m{ { "철수", 200 }, make_pair("바둑이", 20) };
	// 맵은 트리형태로 순서는 자기 자신이 만든다.
	// 객체를 만들고 집어넣는다.

	m.insert(pair<string, int>("철수", 30));
	// (1)데이터 타입을 이런식으로 넣어야한다.
	m.insert(make_pair("영희",50));
	// (2)유추해서 넣는 문 make_pair
	m.insert(Score("이름", 33));
	// (3)Score pair를 사용해서 넣는다.

	// 철수의 점수를 바꿔보자.
	// map은 배열 연산자를 오버로딩이 되어있다.
	m["철수"] = 7777;

	for (auto& d : m)
		cout << d.first << "->" << d.second << endl;
	// key값인 철수가 복수여서 거부 당하였다.
	// map은 동일 key값을 허용하지 않는다.
	// multimap은 이것은 허용한다.
	save();
}

//=============================================
//			Mon Apr 18 11:13:10 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<set>
#include<functional>
#include<map>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//---------------------------------------------------------------

// 연관 컨테이너 map
// map<key, value>
// (연습) 이름과 점수를 map으로 관리해보자.

void main()
{
	using Score = pair<string, int>;
	map<string, int> m{ { "철수", 200 }, make_pair("바둑이", 20) };
	// 맵은 트리형태로 순서는 자기 자신이 만든다.
	// 객체를 만들고 집어넣는다.

	m.insert(pair<string, int>("철수", 30));
	// (1)데이터 타입을 이런식으로 넣어야한다.
	m.insert(make_pair("영희",50));
	// (2)유추해서 넣는 문 make_pair
	m.insert(Score("이름", 33));
	// (3)Score pair를 사용해서 넣는다.

	// 철수의 점수를 바꿔보자.
	// map은 subscript opeator를 overlading 한다.
	// 사용자는 map을 연관배열(associative array)처럼 사용할 수 있다.
	m["철수"] = 77777;
	m["아빠"] = 100;	// 새로운 데이터를 넣으면 맵에 insert 된다.
	// m[key] = value;

	/* 같은 표현이다!!!
	m["철수"] = 77777;
	m.operator[]("철수") = 77777;
	*/
	for (auto& d : m)
		cout << d.first << "->" << d.second << endl;
	// key값인 철수가 복수여서 거부 당하였다.
	// map은 동일 key값을 허용하지 않는다.
	// multimap은 이것은 허용한다.
	save();
}

//=============================================
//			Mon Apr 18 11:18:41 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<set>
#include<functional>
#include<map>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//---------------------------------------------------------------

// 연관 컨테이너 map
// map<key, value>
// (연습) 이름과 점수를 map으로 관리해보자.

void main()
{
	using Score = pair<string, int>;
	map<string, int> m{ { "철수", 200 }, make_pair("바둑이", 20) };
	// 맵은 트리형태로 순서는 자기 자신이 만든다.
	// 객체를 만들고 집어넣는다.

	m.insert(pair<string, int>("철수", 30));
	// (1)데이터 타입을 이런식으로 넣어야한다.
	m.insert(make_pair("영희",50));
	// (2)유추해서 넣는 문 make_pair
	m.insert(Score("이름", 33));
	// (3)Score pair를 사용해서 넣는다.

	// 철수의 점수를 바꿔보자.
	// map은 subscript opeator를 overlading 한다.
	// 사용자는 map을 연관배열(associative array)처럼 사용할 수 있다.

	m["아빠"] = 100;	// 새로운 데이터를 넣으면 맵에 insert 된다.
	// m[key] = value;

	for (auto& d : m)
		cout << d.first << "->" << d.second << endl;
	// key값인 철수가 복수여서 거부 당하였다.
	// map은 동일 key값을 허용하지 않는다.
	// multimap은 이것은 허용한다.

	// value - 점수로 정렬 하고 싶다.
	// 새로 맵을 만들어 점수순으로 정렬 ( 궂이 이런짓을 해야하나 )

	map<int, string> m2;
	auto p = m.begin();
	for (int i = 0 ; i < m.size(); ++i, ++p)
		m2.insert(make_pair(p->second, p->first));

	cout << endl;
	for (auto& d: m2)
		cout << d.first << "->" << d.second << endl;

	save();
}

//=============================================
//			Mon Apr 18 11:45:13 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<fstream>
#include<map>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//-----------------------------------------

// 현재 파일에 있는 문자의 빈도수를 출력하라.

void main()
{
	ifstream in("셜록홈즈의+모험.txt");

	char c;
	map<char, int> m;

	while (in >> c)
	{
		m[c]++;
	}
	// 영문자 갯수만 출력해보자
	for (char c = 'a'; c <= 'z'; ++c)
	{
		cout << c << "-->" << m[c] << endl;
	}

	save();
}

//=============================================
//			Mon Apr 18 11:45:13 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<functional>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//-----------------------------------------

// 현재 파일에 있는 문자의 빈도수를 출력하라.

void main()
{
	// 제일 많이 쓰인 단어를 출력하고 그 단어의
	// 빈도수를 출력하시오.
	ifstream in("셜록홈즈의+모험.txt");

	string c{};
	map<string, int> m;

	while (in >> c)
	{
		m[c]++;
	}
	for (auto&d : m)
		cout << d.first << "->" << d.second << endl;
}


//=============================================
//			Mon Apr 18 11:54:26 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<functional>
#include"save.h"

using namespace std;
// 6장 표준 템플릿 라이브러리(STL)
// 컨테이너
// 반복자 - 이터레이터
// 알고리즘
//-----------------------------------------

// 현재 파일에 있는 문자의 빈도수를 출력하라.

void main()
{
	// 제일 많이 쓰인 단어를 출력하고 그 단어의
	// 빈도수를 출력하시오.
	ifstream in("셜록홈즈의+모험.txt");

	string c{};
	map<string, int> m;

	while (in >> c)
	{
		m[c]++;
	}
	// 제일 많이 출현한 단어를 순서대로 10개만 출력하라.
	cout << " a : " << m["a"] << endl;
	cout << " the : " << m["the"] << endl;
	save();
}
//=============================================
//			Mon Apr 18 12:08:48 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<algorithm>
#include<functional>
#include"save.h"

using namespace std;

// 반복자(iterator)
// 컨테이너가 자신의 원소(private)를 순회할 수 있도록 제공하는
// 마치 포인터처럼 사용할 수 있는 인터페이스이다.

// 컨테이너의 함수
//		begin() - 컨테이너의 처음 원소를 가리킨다.
//		end() - 컨테이너의 마지막 원소를 하나 지난 위치를 가리킨다.

// 반복자로 할 수 있는 연산
//		*	- 역참조(derefencing operator)
//		++  - 다음원소로 이동한다
//		==  - 반복자끼리 비교한다.

// (end)는
// 선형 컨테이너에서 실질적으로 하나 더 나아가서 존재한다.
// (1) != end() 를 수행하기 위해서
// (2) 비어있는 컨테이너는 하나 더존재하지 않으면 first와 end는 같은위치를 가리킨다.

void main()
{
	string s("1234567890");
	for (auto p = s.rbegin(); p != s.rend(); ++p)
		cout << *p << " ";
	cout << endl;

	save();
}
//=============================================
//			Wed Apr 20 10:45:58 2016
//=============================================
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

// 알고리즘(250쪽)
// 알고리즘은 제네릭한 전역함수이다.(대비되는개념은 클래스의 멤버함수)
// 알고리즘의 인자는 반복자 구간이다.
// 함수의 이름은 동사(verb)이다.
// 모든 알고리즘이 항상 효율적일 수는 없다.

void main()
{
	vector<int> v(20, 1);

	for (int d : v)
		cout << d << " ";
	cout << endl;

	auto p = find(v.begin(), v.end(), 333);
	// 벡터의 처음부터 끝까지 333을 찾아줘
	// 시작부터 끝까지 333이니 백개를 세가면서 333을 찾는다.
	cout << p - v.begin() << endl;

	save();
}
//=============================================
//			Wed Apr 20 10:48:29 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

// 알고리즘(250쪽)
// 알고리즘은 제네릭한 전역함수이다.(대비되는개념은 클래스의 멤버함수)
// 알고리즘의 인자는 반복자 구간이다.
// 함수의 이름은 동사(verb)이다.
// 모든 알고리즘이 항상 효율적일 수는 없다.

void main()
{
	multiset<int> v;

	for (int i = 0; i < 20; ++i)
		v.insert(1);

	for (int d : v)
		cout << d << " ";
	cout << endl;

	auto p = find(v.begin(), v.end(), 333);
	if (p == v.end())
		cout << "없다." << endl;
	// 벡터와 똑같이 돌아간다.
	// 333은 없고, 똑같은 end를 가리킨다.
	save();
}
//=============================================
//			Wed Apr 20 10:50:22 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

// 알고리즘(250쪽)
// 알고리즘은 제네릭한 전역함수이다.(대비되는개념은 클래스의 멤버함수)
// 알고리즘의 인자는 반복자 구간이다.
// 함수의 이름은 동사(verb)이다.
// 모든 알고리즘이 항상 효율적일 수는 없다.

void main()
{
	multiset<int> v;

	for (int i = 0; i < 20; ++i)
		v.insert(1);

	for (int d : v)
		cout << d << " ";
	cout << endl;

	auto p = v.find(333);
	if (p == v.end())
		cout << "당연" << endl;
	// set의 멤버함수 find가 트리구조로 search 한다.

	save();
}
//=============================================
//			Wed Apr 20 11:00:21 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

vector<int>::iterator my_find(vector<int>::iterator, vector<int>::iterator, int)
{
	cout << endl;
}

void main()
{
	vector<int> v{ 1,3,5,7,9 };
	
	auto p = my_find(v.begin(), v.end(), 333);

	if (p != v.end())
		cout << "값을 찾음" << *p << endl;
	else
		cout << "값이 없음" << endl;
}
//=============================================
//			Wed Apr 20 11:09:35 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class Iter, class Val>
Iter my_find(Iter beg, Iter end, Val v)
{
	while (beg != end)
	{
		if (*beg == v)
			return beg;
		++beg;
	}
	return end;
}


void main()
{
	vector<int> v{ 1,3,5,7,9 };
	
	auto p = my_find(v.begin(), v.end(), 333);

	if (p != v.end())
		cout << "값을 찾음" << *p << endl;
	else
		cout << "값이 없음" << endl;
	save();
}
//=============================================
//			Wed Apr 20 11:09:55 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class Iter, class Val>
Iter my_find(Iter beg, Iter end, Val v)
{
	while (beg != end)
	{
		if (*beg == v)
			return beg;
		++beg;
	}
	return end;
}


void main()
{
	vector<int> v{ 1,3,5,7,9 };
	
	auto p = my_find(v.begin(), v.end(), 3);

	if (p != v.end())
		cout << "값을 찾음" << *p << endl;
	else
		cout << "값이 없음" << endl;
	save();
}

//=============================================
//			Wed Apr 20 11:16:52 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<string>
#include"save.h"

using namespace std;

template<class Iter, class Val>
Iter my_find(Iter beg, Iter end, Val v)
{
	while (beg != end)
	{
		if (*beg == v)
			return beg;
		++beg;
	}
	return end;
}

void main()
{
	string s("abcdefghijklmnopqrstuvwxyz");
	
	// s에서 m을 찾아서 M으로 바꿔라.

	auto p = my_find(s.begin(), s.end(), 'm');
	*p = 'M';

	cout << s << endl;
	save();
}
//=============================================
//			Wed Apr 20 11:48:55 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include"save.h"

using namespace std;

template<class Iter>
Iter my_min_element(Iter& beg, Iter& end)
{
	Iter min = beg;
	while (beg != end)
	{
		if (*beg < *min)
		{
			min = beg;
		}
		++beg;
	}
	return min;
}

void main()
{
	// 알고리즘 함수 min_element를 만들어 보자.
	vector<int> v{ 1,3,5,7,9};

	cout << *my_min_element(v.begin(), v.end()) << endl;;
	save();
}

//=============================================
//			Wed Apr 20 12:01:39 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<string>
#include"save.h"

using namespace std;

template<class Iter>
Iter my_min_element(Iter& beg, Iter& end)
{
	Iter min = beg;
	while (beg != end)
	{
		if (*beg < *min)
		{
			min = beg;
		}
		++beg;
	}
	return min;
}

void main()
{
	// copy 알고리즘 함수는 하나의 구간을 다른 구간으로 복사한다.
	vector<int> v1{ 1,3,5,7,9 };
	vector<int> v2(v1.size());

	copy(v1.begin() + 1, v1.end() - 1, v2.begin());

	for (auto d : v2)
		cout << d << " ";
	cout << endl;

	save();

}

//=============================================
//			Wed Apr 20 12:07:07 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<string>
#include"save.h"

using namespace std;

template<class Iter,class Dest>
void my_copy(Iter beg, Iter end, Dest des)
{
	while (beg != end)
	{
		*des++ = *beg++;
	}
}

void main()
{
	// copy 알고리즘 함수는 하나의 구간을 다른 구간으로 복사한다.
	vector<int> v1{ 1,3,5,7,9 };
	vector<int> v2(v1.size());

	my_copy(v1.begin() + 1, v1.end() - 1, v2.begin());

	for (auto d : v2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed Apr 20 12:10:04 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<iterator>	// back_inserter
#include"save.h"

using namespace std;

template<class Iter,class Dest>
void my_copy(Iter beg, Iter end, Dest des)
{
	while (beg != end)
	{
		*des++ = *beg++;
	}
}

void main()
{
	// copy 알고리즘 함수는 하나의 구간을 다른 구간으로 복사한다.
	vector<int> v1{ 1,3,5,7,9 };
	vector<int> v2;

	my_copy(v1.begin(), v1.end(), back_inserter(v2));

	for (auto d : v2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed Apr 20 12:17:42 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<iterator>	// back_inserter
#include"save.h"

using namespace std;

template<class Iter,class Dest>
void my_copy(Iter beg, Iter end, Dest des)
{
	while (beg != end)	
	{
		// *des++ = *beg++;
		// 이런 프로그램은 존재하지 않고 실제 함수가
		// 호출되는것이다.
		des.operator*() = beg.operator*();
		beg.operator++(123);
		des.operator++(333);
		// 내가 함수 인자를 전달하고 함수 호출하는것은
		// 너도 나도 모른다.

	}
}


// p.250 쪽 반복자 어댑터항목.
void main()
{
	// copy 알고리즘 함수는 하나의 구간을 다른 구간으로 복사한다.
	vector<int> v1{ 1,3,5,7,9 };
	vector<int> v2;

	my_copy(v1.begin(), v1.end(), back_inserter(v2));

	for (auto d : v2)
		cout << d << " ";
	cout << endl;
	save();
}