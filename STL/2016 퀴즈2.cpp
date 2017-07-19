
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
		:id(n) { } // ��Ű ���̵�
	operator int() const{ return id; } // cout ��¿�
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
	// [����1]
	// �̰����� ��Ű�� ���� �ɶ����� �ݺ�
	while (v.size() != 100){
	// �������� �ϳ� �����
		int n = ui(dre);
	// ������� ���� ��Ű�߿� ���� ���� �ֳ� ã�´�
		auto p = find(v.begin(), v.end(), n);
	// ���� ���� ���ٸ�
		if (p == v.end())
	// ���� ������ ��Ű�� ����� �߰��Ѵ�
		v.push_back(n);
	// ���� ���� ���ٸ� ���� ���� ��Ű�� ����� �߰��Ѵ�.
	}
	
	v[0] = 1;
	v[1] = 1;

	cout << "Ȯ�� �� " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	//
	sort(v.begin(), v.end());
	auto p = unique(v.begin(), v.end());
	v.erase(p, v.end());
	cout << v.size() << endl;
	//
	cout << "���� �� " << endl;
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
		:id(n) { } // ��Ű ���̵�
	operator int() const{ return id; } // cout ��¿�
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
	// [����1]
	// �̰����� ��Ű�� ���� �ɶ����� �ݺ�
	while (v.size() != 100){
	// �������� �ϳ� �����
		int n = ui(dre);
	// ������� ���� ��Ű�߿� ���� ���� �ֳ� ã�´�
		auto p = find(v.begin(), v.end(), n);
	// ���� ���� ���ٸ�
		if (p == v.end())
	// ���� ������ ��Ű�� ����� �߰��Ѵ�
		v.push_back(n);
	// ���� ���� ���ٸ� ���� ���� ��Ű�� ����� �߰��Ѵ�.
	}
	
	v[0] = 1;
	v[1] = 1;

	cout << "Ȯ�� �� " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	//
	// [ 3�� ]
	set<Cookie> s(v.begin(), v.end());
	cout << s.size() << endl;
	//
	cout << "���� �� " << endl;
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
		:id(n) { } // ��Ű ���̵�
	operator int() const{ return id; } // cout ��¿�
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
	// [����1]
	// �̰����� ��Ű�� ���� �ɶ����� �ݺ�
	while (v.size() != 100){
	// �������� �ϳ� �����
		int n = ui(dre);
	// ������� ���� ��Ű�߿� ���� ���� �ֳ� ã�´�
		auto p = find(v.begin(), v.end(), n);
	// ���� ���� ���ٸ�
		if (p == v.end())
	// ���� ������ ��Ű�� ����� �߰��Ѵ�
		v.push_back(n);
	// ���� ���� ���ٸ� ���� ���� ��Ű�� ����� �߰��Ѵ�.
	}
	
	v[0] = 1;
	v[1] = 1;

	cout << "Ȯ�� �� " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	//
	// [ 3�� ]
	set<Cookie> s(v.begin(), v.end());
	cout << s.size() << endl;
	//
	cout << "���� �� " << endl;
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
		:id(n) { } // ��Ű ���̵�
	operator int() const{ return id; } // cout ��¿�
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
	// [����1]
	// �̰����� ��Ű�� ���� �ɶ����� �ݺ�
	while (v.size() != 100){
	// �������� �ϳ� �����
		int n = ui(dre);
	// ������� ���� ��Ű�߿� ���� ���� �ֳ� ã�´�
		auto p = find(v.begin(), v.end(), n);
	// ���� ���� ���ٸ�
		if (p == v.end())
	// ���� ������ ��Ű�� ����� �߰��Ѵ�
		v.push_back(n);
	// ���� ���� ���ٸ� ���� ���� ��Ű�� ����� �߰��Ѵ�.
	}
	
	v[0] = 1;
	v[1] = 1;

	cout << "Ȯ�� �� " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	//
	// [ 3�� ]
	set<Cookie> s(v.begin(), v.end());
	cout << s.size() << endl;
	//
	cout << "���� �� " << endl;
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
		:id(n) { } // ��Ű ���̵�
	operator int() const{ return id; } // cout ��¿�
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
	// [����1]
	// �̰����� ��Ű�� ���� �ɶ����� �ݺ�
	for (int i = 0; i < 100; ++i)
		v.push_back(i + 1);
	random_shuffle(v.begin(), v.end());

	v[0] = 1;
	v[1] = 1;

	cout << "Ȯ�� �� " << endl;
	for (Cookie d : v)
		cout << d << "\t";
	cout << endl;
	//
	// [ 3�� ]
	set<Cookie> s(v.begin(), v.end());
	cout << s.size() << endl;
	//
	cout << "���� �� " << endl;
	for (Cookie d : s)
		cout << d << "\t";
	cout << endl;
	
	save();
}

