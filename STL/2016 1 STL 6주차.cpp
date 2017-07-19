
//=============================================
//			Mon Apr 11 10:46:38 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

// pair<string,scord>인 자료를 vector에 넣어 관리하고 싶다.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;
	v.reserve(10000);	// 메모리가 10000개 들어갈 공간을 확보한다.
	char buf[10];

	default_random_engine dre;
	uniform_int_distribution<> ui(0, 10000);

	// Score 데이터를 1만개 넣어보자.
	for (int i = 0; i < 10000; ++i)
	{
		v.push_back(make_pair(string("이름") + itoa(i+1,buf,10),ui(dre)));
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i].first << " --> " << v[i].second << endl;
	}

	save();
}
//=============================================
//			Mon Apr 11 10:53:49 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

// pair<string,scord>인 자료를 vector에 넣어 관리하고 싶다.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;
	v.reserve(10000);	// 메모리가 10000개 들어갈 공간을 확보한다.
	char buf[10];

	default_random_engine dre;
	uniform_int_distribution<> ui(0, 10000);

	// Score 데이터를 1만개 넣어보자.
	for (int i = 0; i < 10000; ++i)
	{
		v.push_back(make_pair(string("이름") + itoa(i+1,buf,10),ui(dre)));
	}

	//for (int i = 0; i < v.size(); ++i)
	//{
	//	cout << v[i].first << " --> " << v[i].second << endl;
	//}

	// 10000개 중에서 원하는 점수가 있는지 찾아보자
	// 찾아줘(시작,끝,점수)
	auto iter = find_if(v.begin(), v.end(), [](Score a) {
		if (a.second == 3500)
			return true;
		return false;
	});

	if (iter != v.end())
	{
		cout << "찾았습니다" << endl;
	}
	else
	{
		cout << "그런 점수는 없습니다" << endl;
	}
	save();
}
//=============================================
//			Mon Apr 11 11:02:18 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

// pair<string,scord>인 자료를 vector에 넣어 관리하고 싶다.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;
	v.reserve(10000);	// 메모리가 10000개 들어갈 공간을 확보한다.
	char buf[10];

	default_random_engine dre;
	uniform_int_distribution<> ui(0, 10000);

	// Score 데이터를 1만개 넣어보자.
	for (int i = 0; i < 10000; ++i)
	{
		v.push_back(make_pair(string("이름") + itoa(i+1,buf,10),ui(dre)));
	}

	//for (int i = 0; i < v.size(); ++i)
	//{
	//	cout << v[i].first << " --> " << v[i].second << endl;
	//}

	// 10000개 중에서 원하는 점수가 있는지 찾아보자
	// 찾아줘(시작,끝,점수)
	auto iter = find_if(v.begin(), v.end(), [](Score a) {
		if (a.second == 3500)
			return true;
		return false;
	});

	if (iter != v.end())
	{
		auto f = iter - v.begin();
		cout << iter->first << " --> " << iter->second << endl;
		cout << "찾았습니다" << f << endl;
		cout << v[f].first << " --> " << v[f].second << endl;
	}
	else
	{
		cout << "그런 점수는 없습니다" << endl;
	};
	save();
}
//=============================================
//			Mon Apr 11 11:05:08 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

// pair<string,scord>인 자료를 vector에 넣어 관리하고 싶다.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;
	v.reserve(10000);	// 메모리가 10000개 들어갈 공간을 확보한다.
	char buf[10];

	default_random_engine dre;
	uniform_int_distribution<> ui(0, 10000);

	// Score 데이터를 1만개 넣어보자.
	for (int i = 0; i < 10000; ++i)
	{
		v.push_back(make_pair(string("이름") + itoa(i+1,buf,10),ui(dre)));
	}

	//for (int i = 0; i < v.size(); ++i)
	//{
	//	cout << v[i].first << " --> " << v[i].second << endl;
	//}

	// 10000개 중에서 원하는 점수가 있는지 찾아보자
	// 찾아줘(시작,끝,점수)
	auto iter = find_if(v.begin(), v.end(), [](Score a) {
		if (a.second == 2765)
			return true;
		return false;
	});

	if (iter != v.end())
	{
		int f = iter - v.begin();
		cout << "찾았습니다" << f << endl;

		// 찾은 데이터 앞 뒤로 10개 출력
		for (int i = f - 10; i < f + 10; ++i)
		{
			if (i == f)
				cout << " ****************** ";
			cout << v[i].first << " --> " << v[i].second << endl;
		}
	}
	else
	{
		cout << "그런 점수는 없습니다" << endl;
	};
	save();
}
//=============================================
//			Mon Apr 11 11:11:03 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	vector<April> v;

	v.push_back(April());

	save();// 메모리 관찰
}
//=============================================
//			Mon Apr 11 11:11:49 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	vector<April> v;

	v.push_back(April());

	cout << "메인 함수 끝" << endl;
	save();
}
//=============================================
//			Mon Apr 11 11:13:52 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	vector<April> v;

	April a;
	v.push_back(a);

	cout << "메인 함수 끝" << endl;
	save();
}
//=============================================
//			Mon Apr 11 11:15:37 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	vector<April> v;

	April a;
	v.push_back(a);
	v.push_back(a);


	cout << "메인 함수 끝" << endl;
	save();
}
//=============================================
//			Mon Apr 11 11:15:49 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	vector<April> v;
	v.reserve(2);

	April a;
	v.push_back(a);
	v.push_back(a);


	cout << "메인 함수 끝" << endl;
	save();
}
//=============================================
//			Mon Apr 11 11:37:17 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	April(April&& other) { cout << "이동생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	vector<April> v;
//	v.reserve(2);

	April a;
	v.push_back(a);
	v.push_back(a);

	// reserve 없으면 이동이라는 글자를 볼수 있다.
	// 반드시 꼭 쳐다보세요~ ( 이동 , 복사 ) 생성자

	cout << "***** 메인 함수 끝 *****" << endl;
	save();
}

//=============================================
//			Mon Apr 11 11:39:47 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	April(April&& other) { cout << "이동생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	vector<April> v;

	v.push_back(April());
	v.push_back(April());

	cout << "***** 메인 함수 끝 *****" << endl;
	save();
}
//=============================================
//			Mon Apr 11 11:42:19 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	April(April&& other) { cout << "이동생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	vector<April> v;

	v.emplace_back(April());
	v.emplace_back(April());

	cout << "***** 메인 함수 끝 *****" << endl;
	save();
}
//=============================================
//			Mon Apr 11 11:42:47 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	April(April&& other) { cout << "이동생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	vector<April> v;

	v.emplace_back();
	v.emplace_back();

	cout << "***** 메인 함수 끝 *****" << endl;

	save();
}
//=============================================
//			Mon Apr 11 11:45:24 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	April(April&& other) { cout << "이동생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	vector<April> v;
	v.reserve(100);

	v.emplace_back();
	v.emplace_back();

	cout << "***** 메인 함수 끝 *****" << endl;
	save();
}
//=============================================
//			Mon Apr 11 11:53:33 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<list>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	April(April&& other) { cout << "이동생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	// 리스트에 a~z를 넣어보자, 출력도 해보고 특징을 알아보자.
	string s("abcdefghijklmnopqrstuvwxyz");

	list<char> cont(s.begin(), s.end());

	for (auto i = cont.begin(); i != cont.end(); ++i)
		cout << *i << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Apr 11 11:54:18 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<list>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	April(April&& other) { cout << "이동생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	// 리스트에 a~z를 넣어보자, 출력도 해보고 특징을 알아보자.
	list<char> cont;

	for (char c = 'a'; c <= 'z'; ++c)
		cont.push_back(c);

	for (auto i = cont.begin(); i != cont.end(); ++i)
		cout << *i << " ";
	cout << endl;
	
	save();
}
//=============================================
//			Mon Apr 11 11:59:27 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<list>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	April(April&& other) { cout << "이동생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	// 리스트에 a~z를 넣어보자, 출력도 해보고 특징을 알아보자.
	list<char> cont;

	for (char c = 'a'; c <= 'z'; ++c)
		cont.push_back(c);

	// 'o' 위치에 3번 'A','B','C"를 삽입해보자.
	list<char>::iterator iter = cont.begin();

	for (; iter != cont.end(); ++iter)
	{
		if ((*iter) == 'o')
		{
			cont.insert(iter, 'A');
			cont.insert(iter, 'B');
			cont.insert(iter, 'C');
		}
	}

	for (auto i = cont.begin(); i != cont.end(); ++i)
		cout << *i << " ";
	cout << endl;
	
	save();
}
//=============================================
//			Mon Apr 11 12:02:00 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<random>
#include<list>
#include"save.h"
using namespace std;

class April
{
private:
public:
	April() { cout << "생성자" << endl; }
	April(const April& other) { cout << "복사생성자" << endl; }
	April(April&& other) { cout << "이동생성자" << endl; }
	~April() { cout << "소멸자" << endl; }
};

void main()
{
	// 리스트에 a~z를 넣어보자, 출력도 해보고 특징을 알아보자.
	list<char> cont;

	for (char c = 'a'; c <= 'z'; ++c)
		cont.push_back(c);

	// 'o' 위치에 3번 'A','B','C"를 삽입해보자.
	auto p = find(cont.begin(), cont.end(), 'o');
	cont.insert(p, 'A');
	cont.insert(p, 'B');
	cont.insert(p, 'C');


	for (auto i = cont.begin(); i != cont.end(); ++i)
		cout << *i << " ";
	cout << endl;
	
	save();
}
//=============================================
//			Mon Apr 11 12:21:40 2016
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

void main()
{
	// 연관 컨테이너 set<int>에 랜덤정수 100개 넣고 출력해보자.
	set<int> s;

	//reserve 할 이유도 해서도 안된다.
	for (int i = 0; i < 100; ++i)
		s.insert(rand());

	for (set<int>::const_iterator iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << "\t";
	cout << endl;

	//s.find(32757);

	//auto p = find(s.begin(), s.end(), 32757);

	//if (p != s.end())
	//	cout << "찾음" << *p << endl;
	save();
}

