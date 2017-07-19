//=============================================
//			Wed Jun 08 10:38:09 2016
//=============================================
// 2016. 6. 8. �� 23(����) (14��)1
// 14�� 2 �˰���/�ֳʱ׷� ����
// 15�� 1 �⸻���
// 15�� 2 ����Ȯ��

// 10. STL �Լ� ��ü�� ���� ���.

#include<iostream>
#include<set>
#include"save.h"

// 10�� �Լ� ��ü�� ���� ���.
using namespace std;

class Game
{
private:
	int level{ 19 };
public:
	Game(int n)
		: level(n) {}
	bool operator<(const Game& other) const
	{
		return level < other.level;
	}
	int get_n() const {return level;}
		
};

void main()
{
	// ������ �������� �Լ� ��ü�� ����Ҽ� �ִ�.
	set<Game> s;			

	s.insert({ 1, 10, 5, 3, 19 });
	save();
}
//=============================================
//			Wed Jun 08 10:47:57 2016
//=============================================
// 2016. 6. 8. �� 23(����) (14��)1
// 14�� 2 �˰���/�ֳʱ׷� ����
// 15�� 1 �⸻���
// 15�� 2 ����Ȯ��

// 10. STL �Լ� ��ü�� ���� ���.

#include<iostream>
#include<set>
#include"save.h"

// 10�� �Լ� ��ü�� ���� ���.
using namespace std;

class Game
{
private:
	int level{ 19 };
public:
	Game(int n)
		: level(n) {}
	bool operator<(const Game& other) const
	{
		return level < other.level;
	}
	int get_n() const {return level;}
		
};

// �Լ� ��ü�� � Ŭ�����̴�.
class XXX
{
public:
	bool operator()(const Game& a, const Game& b)
	{
		return a.get_n() < b.get_n();
	}
};

void main()
{
	// ������ �������� �Լ� ��ü�� ����Ҽ� �ִ�.
	set<Game, XXX> s;			
	// �Է¿����� �Լ���ü YYY�� �����������ε� 
	// �Լ���ü�� ��ü�Ҽ��ִ�.
	s.insert({ 1, 10, 5, 3, 19 });
	
	for (Game d : s)
		cout << d.get_n() << endl;
	save();
}
//=============================================
//			Wed Jun 08 10:58:13 2016
//=============================================
#include<iostream>
#include<set>
#include"save.h"

using namespace std;
// 540�� ���¸� ���� �Լ���ü
class IntSequence
{
private:
	int value;
public:
	IntSequence(int val) 
		: value(val) {}
	int operator() ()
	{
		return ++value;
	}
};
void main()
{
	IntSequence i(10);
	i();
	i();
	i();
	// �Լ��� ���� �����ϴ°��̾ƴ϶�
	// ���¸� ���� �����Ѵ�.

	save();
}
//=============================================
//			Wed Jun 08 11:06:58 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

// �Լ���ü�� �̿��Ͽ� 542�ʰ� ���� ���α׷��� �� �� �ִ�.
template<class Iter,class Call>
Call foreach(Iter b, Iter e, Call c)
{
	while (b != e)
		c(*b++);
	return c;
}

class MeanValue
{
private:
	int iSum { 0 };
	int iCount { 0 };
public:
	void operator()(int n)
	{
		iSum += n;
		iCount++;
	}
	double value()
	{
		return iSum / iCount;
	}
};

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8 };

	// ��հ��� ����Ͽ� ����Ѵ�.
	MeanValue ave = for_each(v.begin(), v.end(), MeanValue());

	cout << "��հ���" << ave.value() << endl;
	save();
}
//=============================================
//			Wed Jun 08 11:17:55 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

// �Լ���ü�� �̿��Ͽ� 542�ʰ� ���� ���α׷��� �� �� �ִ�.
template<class Iter,class Call>
Call foreach(Iter b, Iter e, Call c)
{
	while (b != e)
		c(*b++);
	return c;
}

class MeanValue
{
private:
	int iSum { 0 };
	int iCount { 0 };
public:
	void operator()(int n)
	{
		iSum += n;
		iCount++;
	}
	double value()
	{
		return (double)iSum / iCount;
	}
};

void main()
{
	vector<int> v{ istream_iterator<int>(cin),
		istream_iterator<int>()};
	

	cout << "��հ��� " 
		<< foreach(v.begin(),v.end(),MeanValue()).value() << endl;
	save();
}
//=============================================
//			Wed Jun 08 11:19:21 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

// �Լ���ü�� �̿��Ͽ� 542�ʰ� ���� ���α׷��� �� �� �ִ�.
template<class Iter,class Call>
Call foreach(Iter b, Iter e, Call c)
{
	while (b != e)
		c(*b++);
	return c;
}

class MeanValue
{
private:
	int iSum { 0 };
	int iCount { 0 };
public:
	void operator()(int n)
	{
		iSum += n;
		iCount++;
	}
	double value()
	{
		return (double)iSum / iCount;
	}
	operator double() { return value(); }
};

void main()
{
	vector<int> v{ istream_iterator<int>(cin),
		istream_iterator<int>()};
	

	cout << "��հ��� " 
		<< foreach(v.begin(),v.end(),MeanValue()) << endl;
	save();
}
//=============================================
//			Wed Jun 08 11:47:56 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{1, 3, 5};

	cout << all_of(v.begin(), v.end(), [](int n){
		return n & 1;
	}) << endl;// �� ���� Ȧ����?
	
	save();
}
//=============================================
//			Wed Jun 08 12:04:37 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 1, 2, 2, 2, 3 };

	v.erase(unique(v.begin(), v.end()), v.end());
	for (int d : v)
		cout << d << endl;
	
	save();
}
//=============================================
//			Wed Jun 08 12:05:01 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 1, 2, 2, 2, 3,1 };

	v.erase(unique(v.begin(), v.end()), v.end());
	for (int d : v)
		cout << d << endl;
	// �����ѳ༮�� �����. �� ������ �Ǿ��־����.
	save();
}
//=============================================
//			Wed Jun 08 12:11:13 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// ����ġ�� �ϴ� �˰���.
	partition(v.begin(), v.end(), [](int n){
		return !(n & 1);
	});

	for (int d : v)
		cout << d << " ";
	save();
}
//=============================================
//			Wed Jun 08 12:14:53 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// ����ġ�� �ϴ� �˰���.
	auto p = stable_partition(v.begin(), v.end(), [](int n){
		return !(n & 1);
	});

	for (int d : v)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Jun 13 10:51:59 2016
//=============================================
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"save.h"

using namespace std;

void main()
{
	cout << "Anagram�� ã�� ���α׷�" << endl;

	cout << "���� ������ �Է��ϼ��� : " << flush;

	string dictionary_name;
	cin >> dictionary_name;

	ifstream ifs(dictionary_name);
	if (!ifs.is_open())	// ������ �� ���ȴ�?
	{
		cout << dictionary_name << "�� ���� �� �����ϴ�" << endl;
		exit(0);
	}

	vector<string> v;
	
	string s;
	while (ifs >> s)
	{
		v.push_back(s);
	}
	save();
}

//=============================================
//			Mon Jun 13 10:57:55 2016
//=============================================
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	cout << "Anagram�� ã�� ���α׷�" << endl;

	ifstream ifs("diction");
	if (!ifs.is_open())	// ������ �� ���ȴ�?
	{
		cout << "���� diction�� ���� �� �����ϴ�" << endl;
		exit(0);
	}

	vector<string> v;

	copy(istream_iterator<string>(ifs), istream_iterator<string>(),
		back_inserter(v));

	cout << "��� " << v.size() << "���� �ܾ �о����ϴ�" << endl;

	save();
}

//=============================================
//			Mon Jun 13 11:17:50 2016
//=============================================
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include"save.h"

using namespace std;

struct PS : pair<string, string>
{
	PS() : pair<string, string>(string(), string()) {}
	PS(const string& s) : pair<string, string>(s, s){
		sort(first.begin(), first.end());
	}
};

void main()
{
	cout << "Anagram�� ã�� ���α׷�" << endl;

	ifstream ifs("diction");
	if (!ifs.is_open())	// ������ �� ���ȴ�?
	{
		cout << "���� diction�� ���� �� �����ϴ�" << endl;
		exit(0);
	}

	vector<PS> v;
	v.reserve(20159);

	copy(istream_iterator<string>(ifs), 
		istream_iterator<string>(),	back_inserter(v));
	cout << "��� " << v.size() << "���� �ܾ �о����ϴ�" << endl;

	// ���̵��
	// ���� �ܾ�� �� �ܾ ������ �ܾ �ϳ��� ������ �����.

	// ȭ�鿡 v�� ����غ���
	for (int i = 10000; i < 10100; ++i)
	{
		cout << v[i].first << " --- " << v[i].second << endl;
	}
	save();
}

//=============================================
//			Mon Jun 13 11:18:57 2016
//=============================================
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include"save.h"

using namespace std;

struct PS : pair<string, string>
{
	PS() : pair<string, string>(string(), string()) {}
	PS(const string& s) : pair<string, string>(s, s){
		sort(first.begin(), first.end());
	}
};

void main()
{
	cout << "Anagram�� ã�� ���α׷�" << endl;

	ifstream ifs("diction");
	if (!ifs.is_open())	// ������ �� ���ȴ�?
	{
		cout << "���� diction�� ���� �� �����ϴ�" << endl;
		exit(0);
	}

	vector<PS> v;
	v.reserve(20159);

	copy(istream_iterator<string>(ifs), 
		istream_iterator<string>(),	back_inserter(v));
	cout << "��� " << v.size() << "���� �ܾ �о����ϴ�" << endl;

	// ���̵��
	// ���� �ܾ�� �� �ܾ ������ �ܾ �ϳ��� ������ �����.
	// v�� first �������� �����Ѵ�.
	sort(v.begin(), v.end(), [](const PS&a, const PS&b){
		return a.first < b.first;
	});
	// ȭ�鿡 v�� ����غ���
	for (int i = 10000; i < 10100; ++i)
	{
		cout << v[i].first << " --- " << v[i].second << endl;
	}
	save();
}

//=============================================
//			Mon Jun 13 11:59:04 2016
//=============================================
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include"save.h"

using namespace std;

struct PS : pair<string, string>
{
	PS() : pair<string, string>(string(), string()) {}
	PS(const string& s) : pair<string, string>(s, s){
		sort(first.begin(), first.end());
	}
	operator string() const { return second; }
};

void main()
{
	cout << "Anagram�� ã�� ���α׷�" << endl;

	ifstream ifs("diction");
	if (!ifs.is_open())	// ������ �� ���ȴ�?
	{
		cout << "���� diction�� ���� �� �����ϴ�" << endl;
		exit(0);
	}

	vector<PS> v;
	v.reserve(20159);

	copy(istream_iterator<string>(ifs), 
		istream_iterator<string>(),	back_inserter(v));
	cout << "��� " << v.size() << "���� �ܾ �о����ϴ�" << endl;

	// ���̵��
	// ���� �ܾ�� �� �ܾ ������ �ܾ �ϳ��� ������ �����.
	// v�� first �������� �����Ѵ�.
	sort(v.begin(), v.end(), [](const PS&a, const PS&b){
		return a.first < b.first;
	});

	//// ȭ�鿡 v�� ����غ���
	//for (int i = 0; i < 10100; ++i)
	//{
	//	cout << v[i].first << " --- " << v[i].second << endl;
	//}

	// ó������ ������ ������ ���� �ܾ ��������
	// ���� ��ġ�� ���� ��ġ�� �ܾ ���� ���� ã�´�
	// if (�߰��ߴ�)
	//		�߰��� ��ġ���� ���� ���� �ܾ ������ ��ġ�� ã�´�.

	int i = 1;
	vector<PS>::const_iterator j = v.begin(),
		end = v.end(), k;

	while (true)
	{
		j = adjacent_find(j, end, [](const PS& a, const PS& b){
			return a.first == b.first;
		});

		if (j == end)
			break;
		k = find_if_not(j + 1, end, [j](const PS& a){
			return a.first == j->first;
		});

		// ���� [j,k)�� anagram�̴�.
		cout << "[" << i++ << "] ";
		copy(j, k, ostream_iterator<string>(cout, " "));
		cout << endl;
		j = k;
	}
	save();
}