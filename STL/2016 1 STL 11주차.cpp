//=============================================
//			Mon May 16 10:39:54 2016
//=============================================
#include<iostream>
#include<string>
#include<fstream>
#include"save.h"

using namespace std;

void main()
{
	string s("id12334");
	
	ofstream out("test");

	out << s << endl;

	ifstream in("test");
	in >> s;
	cout << s << endl;
	save();
	
}
//=============================================
//			Mon May 16 10:40:04 2016
//=============================================
#include<iostream>
#include<string>
#include<fstream>
#include"save.h"

using namespace std;

void main()
{
	string s("id   123  34");
	
	ofstream out("test");

	out << s << endl;

	ifstream in("test");
	in >> s;
	cout << s << endl;
	save();
	
}
//=============================================
//			Mon May 16 10:41:38 2016
//=============================================
#include<iostream>
#include<string>
#include<fstream>
#include"save.h"

using namespace std;

void main()
{
	string s1;
	string s2("vdjisdvji sdsjsvid jsdiv sdi sjvisjvi svjisv");

	cout << sizeof(s1) << endl;
	cout << sizeof(s2) << endl;
	
	save();
	
}
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<fstream>
#include"save.h"

using namespace std;

void main()
{
	string s("id   123  34w w w w w 333");
	string m{};
	ofstream out("test.txt");

	out << s << endl;

	ifstream in("test.txt");

	char c;
	while (in.get(c))
		m.push_back(c);
	cout << m << endl;

}
/////////////////////////////////////////////////////////////////////
//=============================================
//			Mon May 16 10:50:51 2016
//=============================================
#include<iostream>
#include<unordered_set>
#include"save.h"

using namespace std;

// 컨테이너 기능 - 306쪽
// 1. 모든 컨테이너는 값 문맥을 제공한다.
// 2. 내부 원소는 특정 순서대로 저장된다.
// 3. 모든 연산은 일반적으로 오류를 검사하지 않는다.
void main()
{
	unordered_set<int> u{ 1, 2, 3, 4, 5 };

	for (int d : u)
	{
		cout << d << " ";
	}
	cout << endl;
	save();
}
//=============================================
//			Mon May 16 10:52:31 2016
//=============================================
#include<iostream>
#include<unordered_set>
#include"save.h"

using namespace std;

// 컨테이너 기능 - 306쪽
// 1. 모든 컨테이너는 값 문맥을 제공한다.
// 2. 내부 원소는 특정 순서대로 저장된다.
// 3. 모든 연산은 일반적으로 오류를 검사하지 않는다.
void main()
{
	unordered_set<int> u{ 1, 2, 3, 4, 5 };

	for (int i = 0; i < 10; ++i)
	{
		for (int d : u)
		{
			cout << d << " ";
		}
		cout << endl;
		u.insert(6 + i);
	}
	save();
}
//=============================================
//			Mon May 16 10:55:35 2016
//=============================================
#include<iostream>
#include<unordered_set>
#include"save.h"

using namespace std;

// 컨테이너 기능 - 306쪽
// 1. 모든 컨테이너는 값 문맥을 제공한다.
// 2. 내부 원소는 특정 순서대로 저장된다. (이 소스)
// 3. 모든 연산은 일반적으로 오류를 검사하지 않는다.
void main()
{
	unordered_set<int> u{ 1, 2, 3, 4, 5 };

	for (int i = 0; i < 10; ++i)
	{
		for (int d : u)
		{
			cout << d << " ";
		}
		cout << endl;
		u.insert(6 + i);
	}

	auto p = u.begin();
	cout << *p << endl;
	save();
}

// 이상하다.
//=============================================
//			Mon May 16 11:11:46 2016
//=============================================
#include<iostream>
#include<set>
#include<string>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	// 한 문장을 ( ; ) 이용해서
	// 입력받은 단어를 오름차순으로 정렬하시오.
	// p . 309 
	
	multiset<string> s{ istream_iterator<string>(cin),
		istream_iterator<string>() };
	// 2번째 인자 ctrl + z 까지.
	for (string d : s)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon May 16 11:17:10 2016
//=============================================
#include<iostream>
#include<set>
#include<string>
#include<iterator>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	multiset<int> s{ 1, 1, 1, 2, 3, 4, 6, 6, 7 };
	
	auto p = find(s.begin(), s.end(), 5);
	// 3. 모든 연산은 일반적으로 오류를 검사하지 않는다.

	cout << *p << endl;
	save();
}

//=============================================
//			Mon May 16 11:34:27 2016
//=============================================
#include<iostream>
#include<set>
#include<string>
#include<iterator>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	multiset<int> s{ 1, 1, 1, 2, 3, 4, 6, 6, 7 };
	
	auto iter = s.find(5);
	if (iter != s.end())
		cout << *iter << "s에 있다" << endl;
	else
		cout << "s에 없다." << endl;
	save();
}

//////////////////////////////////////////////////////////////////////
class Game
{
private:
	int a[100];
};

void main()
{
	array<Game, 10> a;	// array는 크기가 고정되어있다.
	array<Game, 10> b;

	cout << (a == b) << endl;
	// 연산자 오버로딩 필요.
}
//////////////////////////////////////////////////////////////////////

class Game
{
private:
	int a[100];
};

void main()
{
	//	array<int , 10> a;	// array는 크기가 고정되어있다.
	int a;
	//	array<int , 11> b;	
	Game b;
	cout << (a == b) << endl;

	// 크기가 1만 달라도, 완전 다른 type이다. 절대 같을수 없다.
}

//////////////////////////////////////////////////////////////////////

//=============================================
//			Mon May 16 11:47:36 2016
//=============================================
#include<iostream>
#include<array>
#include"save.h"

using namespace std;

void main()
{
	array<int, 1> a;
	array<int, 10> b;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;

	// array 는 stack에 할당하여 둘이 데이터 크기가
	// 달라지는 반면, string은 heap에 할당하므로 크기가 같다.

	save();
}
//=============================================
//			Mon May 16 11:50:56 2016
//=============================================
#include<iostream>
#include<array>
#include"save.h"

using namespace std;

void main()
{
	array<char, 40> a{ "12345677" };

	for (char d : a)
		cout << d << " ";
	cout << endl;
	save();
}

//=============================================
//			Mon May 16 11:55:34 2016
//=============================================
#include<iostream>
#include<array>
#include"save.h"

using namespace std;

void main()
{
	array<char, 40> a{ "abcdefgh" };

	// 1.
	//cout << strlen(&a[0]) << endl;
	// 2.
	cout << strlen(a.data()) << endl;
	// 둘이 같은 표현이다.
	save();
}

//=============================================
//			Mon May 16 11:59:43 2016
//=============================================
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

class Game{
private:
	int n;
public:
	Game(int n) : n(n) {}
	operator int() { return n; }
};

void main()
{
	vector<Game> v{ 1, 6, 2, 5, 3, 4 };
	
	auto p = v.begin();
	cout << *p << endl;
	save();
}

//=============================================
//			Mon May 16 12:09:52 2016
//=============================================
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

class Game{
private:
	int n;
public:
	Game(int n) : n(n) {}
	operator int() { return n; }
};
// p.486 (8장)
// reserve함수는뭐하냐?

void main()
{
	vector<Game> v{ 1, 6, 2, 5, 3, 4 };
	
	auto p = v.begin();
	cout << *p << endl;

	// 100까지는 원소가 늘어날 거 같다.
	v.reserve(100);
	// heap에 메모리를 다른 heap 공간에
	// capacity를 다시 잡는다.
	// 갖고있던 값을 가져간다.
	// p가 가리키는 곳은 dangling 이 된다.
	p = v.begin();
	for (int d : v)
		cout << d << endl;
	save();
}
//=============================================
//			Mon May 16 12:13:39 2016
//=============================================
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

class Game{
private:
	int n;
public:
	Game(int n) : n(n) {}
	operator int() { return n; }
};

void main()
{
	vector<Game> v{ 1, 6, 2, 5, 3, 4 };
	
	auto p = v.begin();
	cout << *p << endl;

	v.reserve(100);
	p = v.begin();
	cout << *p << endl;

	save();
}
//=============================================
//			Wed May 18 06:50:16 2016
//=============================================
#include<iostream>
#include<list>
#include"save.h"

using namespace std;

class Game{
private:
	int n;
public:
	Game(int n) : n(n) {}
	operator int() { return n; }
};

void main()
{
	list<Game> c1{ 1, 2, 3, 7, 8, 9 };
	list<Game> c2{ 4, 5, 6 };

	// 리스트는 노드 기반의 컨테이너이다.
	// c2를 c1의 3,7 원소사이에 끼워 넣은 것쯤은 일도 아니다.

	auto iter = find(c1.begin(), c1.end(), 7);
	c1.insert(iter,c2.begin(),c2.end());

	for (int d : c1)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed May 18 10:48:38 2016
//=============================================
#include<iostream>
#include<list>
#include"save.h"
using namespace std;

class Game{
private:
	int n;
public:
	Game(int n) : n(n) {}
	operator int() { return n; }
};

// p. 342 , 344
void main()
{
	list<Game> c1{ 1, 2, 3, 7, 8, 9 };
	list<Game> c2{ 4, 5, 6 };
	
	// 리스트는 노드 기반의 컨테이너이다.
	// c2를 c1의 3,7 원소사이에 끼워 넣은 것쯤은 일도 아니다.

	auto iter = find(c1.begin(), c1.end(), 7);
	// 기존데이터 보존
	//c1.insert(iter, c2.begin(), c2.end());
	// 기존데이터 이동
	
	c1.splice(iter, c2,++c2.begin(),--c2.end());
	
	for (int d : c1)
		cout << d << " ";
	cout << endl;
	for (int d : c2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed May 18 11:04:44 2016
//=============================================
#include<iostream>
#include<set>
#include"save.h"
using namespace std;

class Game
{
private:
	int n;
public:
	Game(int n) : n(n) {}
	operator int() const { return n; }
};

// p. 367
void main()
{
	set<Game> s1{ 1, 2, 3, 7, 8, 9 };

	for (int d : s1)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed May 18 11:09:36 2016
//=============================================
#include<iostream>
#include<set>
#include"save.h"
using namespace std;

class Game
{
private:
	int n;
public:
	Game(int n) : n(n) {}
	int get_n() const { return n; }
};

bool operator<(const Game& a, const Game& b)
{
	return a.get_n() < b.get_n();
}

// p. 367
void main()
{
	set<Game> s1{ 1, 7, 2, 8, 3, 9 };

	for (const Game& data : s1)
		cout << data.get_n() << " ";
	cout << endl;

	save();
}
//=============================================
//			Wed May 18 11:13:35 2016
//=============================================
#include<iostream>
#include<set>
#include"save.h"
using namespace std;

class Game
{
private:
	int n;
public:
	Game(int n) : n(n) {}

	bool operator<(const Game& other) const
	{
		return n < other.n;
	}
	int get_n() const { return n; }

};

// p. 367
void main()
{
	set<Game> s1{ 1, 7, 2, 8, 3, 9 };

	for (const Game& data : s1)
		cout << data.get_n() << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed May 18 11:15:30 2016
//=============================================
#include<iostream>
#include<set>
#include"save.h"
using namespace std;

class Game
{
private:
	int n;
public:
	Game(int n) : n(n) {}
	operator int() const { return n; }

};

// p. 367
void main()
{
	set<Game> s1{ 1, 7, 2, 8, 3, 9 };
	// set이란 객체는 누가 큰지 판단 할 수 있어야
	// 초기화가 가능하다.
	// <교수님>
	// strictly weak ordering
	// <연산자가 있어야 정렬해 준다.>

	// 둘중에 하나가 있어야 된다.
	// 1. operator<(Game,Game)
	// 2. Game.operator<(Game)

	// 근데 왜 아래구문이 돌아갈까?
	// operator int() const { return n; }
	// type 형 변환이다 보니까 int인데, char이든지 다른것으로
	// 언제든지 다른걸로 바뀔수 있다.
	// 따라서 operator 형변환은 const가 붙어야한다.


	for (const Game& d : s1)
		cout << d << " ";
	cout << endl;

	save();
}