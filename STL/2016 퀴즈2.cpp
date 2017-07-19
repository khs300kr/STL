
//=============================================
//			Mon May 23 10:53:33 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

class Cookie
{
	int id;
public:
	Cookie(int n)
		:id(n) { } // 쿠키 아이디
	operator int() const{ return id; } // cout 출력용
	//bool operator =(const Cookie& other) const
	//{
	//	return id < other.id;
	//}
	int get_id() const{ return id; }
};

void main()
{
	vector<Cookie> v;
	v.reserve(10000);

	default_random_engine dre;
	uniform_int_distribution<int> ui(1, 100);
	// [문제1]
	// 이과정을 쿠키가 만개 될때까지 반복
	while (v.size() != 100){
	// 랜덤값을 하나 만든다
		int n = ui(dre);
	// 현재까지 만든 쿠키중에 같은 값이 있나 찾는다
		auto p = find(v.begin(), v.end(), n);
	// 같은 값이 없다면
		if (p == v.end())
	// 현재 값으로 쿠키를 만들어 추가한다
		v.push_back(n);
	// 같은 값이 없다면 현재 값을 쿠키를 만들어 추가한다.
	}
	
	v[0] = 1;
	v[1] = 1;

	cout << "확인 전 " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	//
	sort(v.begin(), v.end());
	auto p = unique(v.begin(), v.end());
	v.erase(p, v.end());
	cout << v.size() << endl;
	//
	cout << "삭제 후 " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	
	save();
}


//=============================================
//			Mon May 23 10:55:21 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

class Cookie
{
	int id;
public:
	Cookie(int n)
		:id(n) { } // 쿠키 아이디
	operator int() const{ return id; } // cout 출력용
	//bool operator =(const Cookie& other) const
	//{
	//	return id < other.id;
	//}
	int get_id() const{ return id; }
};

void main()
{
	vector<Cookie> v;
	v.reserve(10000);

	default_random_engine dre;
	uniform_int_distribution<int> ui(1, 100);
	// [문제1]
	// 이과정을 쿠키가 만개 될때까지 반복
	while (v.size() != 100){
	// 랜덤값을 하나 만든다
		int n = ui(dre);
	// 현재까지 만든 쿠키중에 같은 값이 있나 찾는다
		auto p = find(v.begin(), v.end(), n);
	// 같은 값이 없다면
		if (p == v.end())
	// 현재 값으로 쿠키를 만들어 추가한다
		v.push_back(n);
	// 같은 값이 없다면 현재 값을 쿠키를 만들어 추가한다.
	}
	
	v[0] = 1;
	v[1] = 1;

	cout << "확인 전 " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	//
	// [ 3번 ]
	set<Cookie> s(v.begin(), v.end());
	cout << s.size() << endl;
	//
	cout << "삭제 후 " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	
	save();
}


//=============================================
//			Mon May 23 10:56:07 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

class Cookie
{
	int id;
public:
	Cookie(int n)
		:id(n) { } // 쿠키 아이디
	operator int() const{ return id; } // cout 출력용
	//bool operator =(const Cookie& other) const
	//{
	//	return id < other.id;
	//}
	int get_id() const{ return id; }
};

void main()
{
	vector<Cookie> v;
	v.reserve(10000);

	default_random_engine dre;
	uniform_int_distribution<int> ui(1, 100);
	// [문제1]
	// 이과정을 쿠키가 만개 될때까지 반복
	while (v.size() != 100){
	// 랜덤값을 하나 만든다
		int n = ui(dre);
	// 현재까지 만든 쿠키중에 같은 값이 있나 찾는다
		auto p = find(v.begin(), v.end(), n);
	// 같은 값이 없다면
		if (p == v.end())
	// 현재 값으로 쿠키를 만들어 추가한다
		v.push_back(n);
	// 같은 값이 없다면 현재 값을 쿠키를 만들어 추가한다.
	}
	
	v[0] = 1;
	v[1] = 1;

	cout << "확인 전 " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	//
	// [ 3번 ]
	set<Cookie> s(v.begin(), v.end());
	cout << s.size() << endl;
	//
	cout << "삭제 후 " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	
	save();
}


//=============================================
//			Mon May 23 10:56:20 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

class Cookie
{
	int id;
public:
	Cookie(int n)
		:id(n) { } // 쿠키 아이디
	operator int() const{ return id; } // cout 출력용
	//bool operator =(const Cookie& other) const
	//{
	//	return id < other.id;
	//}
	int get_id() const{ return id; }
};

void main()
{
	vector<Cookie> v;
	v.reserve(10000);

	default_random_engine dre;
	uniform_int_distribution<int> ui(1, 100);
	// [문제1]
	// 이과정을 쿠키가 만개 될때까지 반복
	while (v.size() != 100){
	// 랜덤값을 하나 만든다
		int n = ui(dre);
	// 현재까지 만든 쿠키중에 같은 값이 있나 찾는다
		auto p = find(v.begin(), v.end(), n);
	// 같은 값이 없다면
		if (p == v.end())
	// 현재 값으로 쿠키를 만들어 추가한다
		v.push_back(n);
	// 같은 값이 없다면 현재 값을 쿠키를 만들어 추가한다.
	}
	
	v[0] = 1;
	v[1] = 1;

	cout << "확인 전 " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	//
	// [ 3번 ]
	set<Cookie> s(v.begin(), v.end());
	cout << s.size() << endl;
	//
	cout << "삭제 후 " << endl;
	for (Cookie d : s)
		cout << d << "\t";
	cout << endl;
	
	save();
}


//=============================================
//			Mon May 23 11:00:09 2016
//=============================================
#include<iostream>
#include<vector>
#include<set>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

class Cookie
{
	int id;
public:
	Cookie(int n)
		:id(n) { } // 쿠키 아이디
	operator int() const{ return id; } // cout 출력용
	//bool operator =(const Cookie& other) const
	//{
	//	return id < other.id;
	//}
	int get_id() const{ return id; }
};

void main()
{
	vector<Cookie> v;
	v.reserve(10000);

	default_random_engine dre;
	uniform_int_distribution<int> ui(1, 100);
	// [문제1]
	// 이과정을 쿠키가 만개 될때까지 반복
	for (int i = 0; i < 100; ++i)
		v.push_back(i + 1);
	random_shuffle(v.begin(), v.end());

	v[0] = 1;
	v[1] = 1;

	cout << "확인 전 " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	//
	// [ 3번 ]
	set<Cookie> s(v.begin(), v.end());
	cout << s.size() << endl;
	//
	cout << "삭제 후 " << endl;
	for (Cookie d : s)
		cout << d << "\t";
	cout << endl;
	
	save();
}

