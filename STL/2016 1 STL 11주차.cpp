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

// �����̳� ��� - 306��
// 1. ��� �����̳ʴ� �� ������ �����Ѵ�.
// 2. ���� ���Ҵ� Ư�� ������� ����ȴ�.
// 3. ��� ������ �Ϲ������� ������ �˻����� �ʴ´�.
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

// �����̳� ��� - 306��
// 1. ��� �����̳ʴ� �� ������ �����Ѵ�.
// 2. ���� ���Ҵ� Ư�� ������� ����ȴ�.
// 3. ��� ������ �Ϲ������� ������ �˻����� �ʴ´�.
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

// �����̳� ��� - 306��
// 1. ��� �����̳ʴ� �� ������ �����Ѵ�.
// 2. ���� ���Ҵ� Ư�� ������� ����ȴ�. (�� �ҽ�)
// 3. ��� ������ �Ϲ������� ������ �˻����� �ʴ´�.
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

// �̻��ϴ�.
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
	// �� ������ ( ; ) �̿��ؼ�
	// �Է¹��� �ܾ ������������ �����Ͻÿ�.
	// p . 309 
	
	multiset<string> s{ istream_iterator<string>(cin),
		istream_iterator<string>() };
	// 2��° ���� ctrl + z ����.
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
	// 3. ��� ������ �Ϲ������� ������ �˻����� �ʴ´�.

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
		cout << *iter << "s�� �ִ�" << endl;
	else
		cout << "s�� ����." << endl;
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
	array<Game, 10> a;	// array�� ũ�Ⱑ �����Ǿ��ִ�.
	array<Game, 10> b;

	cout << (a == b) << endl;
	// ������ �����ε� �ʿ�.
}
//////////////////////////////////////////////////////////////////////

class Game
{
private:
	int a[100];
};

void main()
{
	//	array<int , 10> a;	// array�� ũ�Ⱑ �����Ǿ��ִ�.
	int a;
	//	array<int , 11> b;	
	Game b;
	cout << (a == b) << endl;

	// ũ�Ⱑ 1�� �޶�, ���� �ٸ� type�̴�. ���� ������ ����.
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

	// array �� stack�� �Ҵ��Ͽ� ���� ������ ũ�Ⱑ
	// �޶����� �ݸ�, string�� heap�� �Ҵ��ϹǷ� ũ�Ⱑ ����.

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
	// ���� ���� ǥ���̴�.
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
// p.486 (8��)
// reserve�Լ��¹��ϳ�?

void main()
{
	vector<Game> v{ 1, 6, 2, 5, 3, 4 };
	
	auto p = v.begin();
	cout << *p << endl;

	// 100������ ���Ұ� �þ �� ����.
	v.reserve(100);
	// heap�� �޸𸮸� �ٸ� heap ������
	// capacity�� �ٽ� ��´�.
	// �����ִ� ���� ��������.
	// p�� ����Ű�� ���� dangling �� �ȴ�.
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

	// ����Ʈ�� ��� ����� �����̳��̴�.
	// c2�� c1�� 3,7 ���һ��̿� ���� ���� ������ �ϵ� �ƴϴ�.

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
	
	// ����Ʈ�� ��� ����� �����̳��̴�.
	// c2�� c1�� 3,7 ���һ��̿� ���� ���� ������ �ϵ� �ƴϴ�.

	auto iter = find(c1.begin(), c1.end(), 7);
	// ���������� ����
	//c1.insert(iter, c2.begin(), c2.end());
	// ���������� �̵�
	
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
	// set�̶� ��ü�� ���� ū�� �Ǵ� �� �� �־��
	// �ʱ�ȭ�� �����ϴ�.
	// <������>
	// strictly weak ordering
	// <�����ڰ� �־�� ������ �ش�.>

	// ���߿� �ϳ��� �־�� �ȴ�.
	// 1. operator<(Game,Game)
	// 2. Game.operator<(Game)

	// �ٵ� �� �Ʒ������� ���ư���?
	// operator int() const { return n; }
	// type �� ��ȯ�̴� ���ϱ� int�ε�, char�̵��� �ٸ�������
	// �������� �ٸ��ɷ� �ٲ�� �ִ�.
	// ���� operator ����ȯ�� const�� �پ���Ѵ�.


	for (const Game& d : s1)
		cout << d << " ";
	cout << endl;

	save();
}