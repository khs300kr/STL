
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

// pair<string,scord>�� �ڷḦ vector�� �־� �����ϰ� �ʹ�.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;
	v.reserve(10000);	// �޸𸮰� 10000�� �� ������ Ȯ���Ѵ�.
	char buf[10];

	default_random_engine dre;
	uniform_int_distribution<> ui(0, 10000);

	// Score �����͸� 1���� �־��.
	for (int i = 0; i < 10000; ++i)
	{
		v.push_back(make_pair(string("�̸�") + itoa(i+1,buf,10),ui(dre)));
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

// pair<string,scord>�� �ڷḦ vector�� �־� �����ϰ� �ʹ�.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;
	v.reserve(10000);	// �޸𸮰� 10000�� �� ������ Ȯ���Ѵ�.
	char buf[10];

	default_random_engine dre;
	uniform_int_distribution<> ui(0, 10000);

	// Score �����͸� 1���� �־��.
	for (int i = 0; i < 10000; ++i)
	{
		v.push_back(make_pair(string("�̸�") + itoa(i+1,buf,10),ui(dre)));
	}

	//for (int i = 0; i < v.size(); ++i)
	//{
	//	cout << v[i].first << " --> " << v[i].second << endl;
	//}

	// 10000�� �߿��� ���ϴ� ������ �ִ��� ã�ƺ���
	// ã����(����,��,����)
	auto iter = find_if(v.begin(), v.end(), [](Score a) {
		if (a.second == 3500)
			return true;
		return false;
	});

	if (iter != v.end())
	{
		cout << "ã�ҽ��ϴ�" << endl;
	}
	else
	{
		cout << "�׷� ������ �����ϴ�" << endl;
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

// pair<string,scord>�� �ڷḦ vector�� �־� �����ϰ� �ʹ�.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;
	v.reserve(10000);	// �޸𸮰� 10000�� �� ������ Ȯ���Ѵ�.
	char buf[10];

	default_random_engine dre;
	uniform_int_distribution<> ui(0, 10000);

	// Score �����͸� 1���� �־��.
	for (int i = 0; i < 10000; ++i)
	{
		v.push_back(make_pair(string("�̸�") + itoa(i+1,buf,10),ui(dre)));
	}

	//for (int i = 0; i < v.size(); ++i)
	//{
	//	cout << v[i].first << " --> " << v[i].second << endl;
	//}

	// 10000�� �߿��� ���ϴ� ������ �ִ��� ã�ƺ���
	// ã����(����,��,����)
	auto iter = find_if(v.begin(), v.end(), [](Score a) {
		if (a.second == 3500)
			return true;
		return false;
	});

	if (iter != v.end())
	{
		auto f = iter - v.begin();
		cout << iter->first << " --> " << iter->second << endl;
		cout << "ã�ҽ��ϴ�" << f << endl;
		cout << v[f].first << " --> " << v[f].second << endl;
	}
	else
	{
		cout << "�׷� ������ �����ϴ�" << endl;
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

// pair<string,scord>�� �ڷḦ vector�� �־� �����ϰ� �ʹ�.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;
	v.reserve(10000);	// �޸𸮰� 10000�� �� ������ Ȯ���Ѵ�.
	char buf[10];

	default_random_engine dre;
	uniform_int_distribution<> ui(0, 10000);

	// Score �����͸� 1���� �־��.
	for (int i = 0; i < 10000; ++i)
	{
		v.push_back(make_pair(string("�̸�") + itoa(i+1,buf,10),ui(dre)));
	}

	//for (int i = 0; i < v.size(); ++i)
	//{
	//	cout << v[i].first << " --> " << v[i].second << endl;
	//}

	// 10000�� �߿��� ���ϴ� ������ �ִ��� ã�ƺ���
	// ã����(����,��,����)
	auto iter = find_if(v.begin(), v.end(), [](Score a) {
		if (a.second == 2765)
			return true;
		return false;
	});

	if (iter != v.end())
	{
		int f = iter - v.begin();
		cout << "ã�ҽ��ϴ�" << f << endl;

		// ã�� ������ �� �ڷ� 10�� ���
		for (int i = f - 10; i < f + 10; ++i)
		{
			if (i == f)
				cout << " ****************** ";
			cout << v[i].first << " --> " << v[i].second << endl;
		}
	}
	else
	{
		cout << "�׷� ������ �����ϴ�" << endl;
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	vector<April> v;

	v.push_back(April());

	save();// �޸� ����
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	vector<April> v;

	v.push_back(April());

	cout << "���� �Լ� ��" << endl;
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	vector<April> v;

	April a;
	v.push_back(a);

	cout << "���� �Լ� ��" << endl;
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	vector<April> v;

	April a;
	v.push_back(a);
	v.push_back(a);


	cout << "���� �Լ� ��" << endl;
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	vector<April> v;
	v.reserve(2);

	April a;
	v.push_back(a);
	v.push_back(a);


	cout << "���� �Լ� ��" << endl;
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	April(April&& other) { cout << "�̵�������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	vector<April> v;
//	v.reserve(2);

	April a;
	v.push_back(a);
	v.push_back(a);

	// reserve ������ �̵��̶�� ���ڸ� ���� �ִ�.
	// �ݵ�� �� �Ĵٺ�����~ ( �̵� , ���� ) ������

	cout << "***** ���� �Լ� �� *****" << endl;
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	April(April&& other) { cout << "�̵�������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	vector<April> v;

	v.push_back(April());
	v.push_back(April());

	cout << "***** ���� �Լ� �� *****" << endl;
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	April(April&& other) { cout << "�̵�������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	vector<April> v;

	v.emplace_back(April());
	v.emplace_back(April());

	cout << "***** ���� �Լ� �� *****" << endl;
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	April(April&& other) { cout << "�̵�������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	vector<April> v;

	v.emplace_back();
	v.emplace_back();

	cout << "***** ���� �Լ� �� *****" << endl;

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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	April(April&& other) { cout << "�̵�������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	vector<April> v;
	v.reserve(100);

	v.emplace_back();
	v.emplace_back();

	cout << "***** ���� �Լ� �� *****" << endl;
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	April(April&& other) { cout << "�̵�������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	// ����Ʈ�� a~z�� �־��, ��µ� �غ��� Ư¡�� �˾ƺ���.
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	April(April&& other) { cout << "�̵�������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	// ����Ʈ�� a~z�� �־��, ��µ� �غ��� Ư¡�� �˾ƺ���.
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	April(April&& other) { cout << "�̵�������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	// ����Ʈ�� a~z�� �־��, ��µ� �غ��� Ư¡�� �˾ƺ���.
	list<char> cont;

	for (char c = 'a'; c <= 'z'; ++c)
		cont.push_back(c);

	// 'o' ��ġ�� 3�� 'A','B','C"�� �����غ���.
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
	April() { cout << "������" << endl; }
	April(const April& other) { cout << "���������" << endl; }
	April(April&& other) { cout << "�̵�������" << endl; }
	~April() { cout << "�Ҹ���" << endl; }
};

void main()
{
	// ����Ʈ�� a~z�� �־��, ��µ� �غ��� Ư¡�� �˾ƺ���.
	list<char> cont;

	for (char c = 'a'; c <= 'z'; ++c)
		cont.push_back(c);

	// 'o' ��ġ�� 3�� 'A','B','C"�� �����غ���.
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
	// ���� �����̳� set<int>�� �������� 100�� �ְ� ����غ���.
	set<int> s;

	//reserve �� ������ �ؼ��� �ȵȴ�.
	for (int i = 0; i < 100; ++i)
		s.insert(rand());

	for (set<int>::const_iterator iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << "\t";
	cout << endl;

	//s.find(32757);

	//auto p = find(s.begin(), s.end(), 32757);

	//if (p != s.end())
	//	cout << "ã��" << *p << endl;
	save();
}

