
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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//---------------------------------------------------------------

void main()
{
	// ���� �����̳� set<int>�� �������� 100�� �ְ� ����غ���.
	set<int> s;

	//reserve �� ������ �ؼ��� �ȵȴ�.
	for (int i = 0; i < 100; ++i)
		s.insert(rand());
	
	// (1) const_iterator �ݺ��ڸ��̿��ؼ� �б⸸�Ѵ�.
	for (set<int>::const_iterator iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << "\t";
	
	cout << endl;

	s.find(32757);

	//auto p = find(s.begin(), s.end(), 32757);

	//if (p != s.end())
	//	cout << "ã��" << *p << endl;

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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//---------------------------------------------------------------

void main()
{
	// ���� �����̳� set<int>�� �������� 100�� �ְ� ����غ���.
	set<int> s;

	//reserve �� ������ �ؼ��� �ȵȴ�.
	for (int i = 0; i < 100; ++i)
		s.insert(rand());
	
	// (1) const_iterator �ݺ��ڸ��̿��ؼ� �б⸸�Ѵ�.
	// (2) auto�� ����Ͽ� cbegin, cend ����
	for (auto iter = s.cbegin(); iter != s.cend(); ++iter)
		cout << *iter << "\t";
	
	cout << endl;

	s.find(32757);

	//auto p = find(s.begin(), s.end(), 32757);

	//if (p != s.end())
	//	cout << "ã��" << *p << endl;

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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//---------------------------------------------------------------

void main()
{
	// ���� �����̳� set<int>�� �������� 100�� �ְ� ����غ���.
	set<int> s;

	//reserve �� ������ �ؼ��� �ȵȴ�.
	for (int i = 0; i < 100; ++i)
		s.insert(rand());
	
	// (1) const_iterator �ݺ��ڸ��̿��ؼ� �б⸸�Ѵ�.
	// (2) auto�� ����Ͽ� cbegin, cend ����
	for (auto iter = s.cbegin(); iter != s.cend(); ++iter)
		cout << *iter << "\t";
	
	cout << endl;

	find(s.cbegin(), s.cend(), 32757);	
	//auto p = find(s.begin(), s.end(), 32757);
	// �̰��� 100���� ��ȸ�Ѵ�.
	
	auto p = s.find(32757);
	// set�� �ڱ⸸�� �Լ� tree search �� �� �ֵ��� �����Ѵ�.


	if (p != s.end())
		cout << "ã��" << *p << endl;

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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//---------------------------------------------------------------

void main()
{
	// ���� �����̳� set<int>�� �������� 100�� �ְ� ����غ���.
	// �������� ( #include<functional> �߰�)
	set<int,greater<int>> s;

	//reserve �� ������ �ؼ��� �ȵȴ�.
	for (int i = 0; i < 100; ++i)
		s.insert(rand());
	
	// (1) const_iterator �ݺ��ڸ��̿��ؼ� �б⸸�Ѵ�.
	// (2) auto�� ����Ͽ� cbegin, cend ����
	for (auto iter = s.cbegin(); iter != s.cend(); ++iter)
		cout << *iter << "\t";
	
	cout << endl;

	find(s.cbegin(), s.cend(), 32757);	
	//auto p = find(s.begin(), s.end(), 32757);
	// �̰��� 100���� ��ȸ�Ѵ�.
	
	auto p = s.find(32757);
	// set�� �ڱ⸸�� �Լ� tree search �� �� �ֵ��� �����Ѵ�.


	if (p != s.end())
		cout << "ã��" << *p << endl;
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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//---------------------------------------------------------------

// ���� �����̳� map
// map<key, value>
// (����) �̸��� ������ map���� �����غ���.

void main()
{
	using Score = pair<string, int>;
	map<string, int> m{ { "ö��", 200 }, make_pair("�ٵ���", 20) };
	// ���� Ʈ�����·� ������ �ڱ� �ڽ��� �����.
	// ��ü�� ����� ����ִ´�.

	m.insert(pair<string, int>("ö��", 30));
	// (1)������ Ÿ���� �̷������� �־���Ѵ�.
	m.insert(make_pair("����",50));
	// (2)�����ؼ� �ִ� �� make_pair
	m.insert(Score("����", 33));
	// (3)Score pair�� ����ؼ� �ִ´�.

	for (auto& d : m)
		cout << d.first << "->" << d.second << endl;

	// key���� ö���� �������� �ź� ���Ͽ���.
	// map�� ���� key���� ������� �ʴ´�.
	// multimap�� �̰��� ����Ѵ�.

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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//---------------------------------------------------------------

// ���� �����̳� map
// map<key, value>
// (����) �̸��� ������ map���� �����غ���.

void main()
{
	using Score = pair<string, int>;
	map<string, int> m{ { "ö��", 200 }, make_pair("�ٵ���", 20) };
	// ���� Ʈ�����·� ������ �ڱ� �ڽ��� �����.
	// ��ü�� ����� ����ִ´�.

	m.insert(pair<string, int>("ö��", 30));
	// (1)������ Ÿ���� �̷������� �־���Ѵ�.
	m.insert(make_pair("����",50));
	// (2)�����ؼ� �ִ� �� make_pair
	m.insert(Score("�̸�", 33));
	// (3)Score pair�� ����ؼ� �ִ´�.

	// ö���� ������ �ٲ㺸��.
	auto p = m.begin();
	++p;
	++p;
	++p;
	p->second = 77777;
	// begin�� cbegin �Ͽ� �ٲ��� �ʴ´�.

	for (auto& d : m)
		cout << d.first << "->" << d.second << endl;
	// key���� ö���� �������� �ź� ���Ͽ���.
	// map�� ���� key���� ������� �ʴ´�.
	// multimap�� �̰��� ����Ѵ�.

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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//---------------------------------------------------------------

// ���� �����̳� map
// map<key, value>
// (����) �̸��� ������ map���� �����غ���.

void main()
{
	using Score = pair<string, int>;
	map<string, int> m{ { "ö��", 200 }, make_pair("�ٵ���", 20) };
	// ���� Ʈ�����·� ������ �ڱ� �ڽ��� �����.
	// ��ü�� ����� ����ִ´�.

	m.insert(pair<string, int>("ö��", 30));
	// (1)������ Ÿ���� �̷������� �־���Ѵ�.
	m.insert(make_pair("����",50));
	// (2)�����ؼ� �ִ� �� make_pair
	m.insert(Score("�̸�", 33));
	// (3)Score pair�� ����ؼ� �ִ´�.

	// ö���� ������ �ٲ㺸��.
	// map�� �迭 �����ڸ� �����ε��� �Ǿ��ִ�.
	m["ö��"] = 7777;

	for (auto& d : m)
		cout << d.first << "->" << d.second << endl;
	// key���� ö���� �������� �ź� ���Ͽ���.
	// map�� ���� key���� ������� �ʴ´�.
	// multimap�� �̰��� ����Ѵ�.
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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//---------------------------------------------------------------

// ���� �����̳� map
// map<key, value>
// (����) �̸��� ������ map���� �����غ���.

void main()
{
	using Score = pair<string, int>;
	map<string, int> m{ { "ö��", 200 }, make_pair("�ٵ���", 20) };
	// ���� Ʈ�����·� ������ �ڱ� �ڽ��� �����.
	// ��ü�� ����� ����ִ´�.

	m.insert(pair<string, int>("ö��", 30));
	// (1)������ Ÿ���� �̷������� �־���Ѵ�.
	m.insert(make_pair("����",50));
	// (2)�����ؼ� �ִ� �� make_pair
	m.insert(Score("�̸�", 33));
	// (3)Score pair�� ����ؼ� �ִ´�.

	// ö���� ������ �ٲ㺸��.
	// map�� subscript opeator�� overlading �Ѵ�.
	// ����ڴ� map�� �����迭(associative array)ó�� ����� �� �ִ�.
	m["ö��"] = 77777;
	m["�ƺ�"] = 100;	// ���ο� �����͸� ������ �ʿ� insert �ȴ�.
	// m[key] = value;

	/* ���� ǥ���̴�!!!
	m["ö��"] = 77777;
	m.operator[]("ö��") = 77777;
	*/
	for (auto& d : m)
		cout << d.first << "->" << d.second << endl;
	// key���� ö���� �������� �ź� ���Ͽ���.
	// map�� ���� key���� ������� �ʴ´�.
	// multimap�� �̰��� ����Ѵ�.
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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//---------------------------------------------------------------

// ���� �����̳� map
// map<key, value>
// (����) �̸��� ������ map���� �����غ���.

void main()
{
	using Score = pair<string, int>;
	map<string, int> m{ { "ö��", 200 }, make_pair("�ٵ���", 20) };
	// ���� Ʈ�����·� ������ �ڱ� �ڽ��� �����.
	// ��ü�� ����� ����ִ´�.

	m.insert(pair<string, int>("ö��", 30));
	// (1)������ Ÿ���� �̷������� �־���Ѵ�.
	m.insert(make_pair("����",50));
	// (2)�����ؼ� �ִ� �� make_pair
	m.insert(Score("�̸�", 33));
	// (3)Score pair�� ����ؼ� �ִ´�.

	// ö���� ������ �ٲ㺸��.
	// map�� subscript opeator�� overlading �Ѵ�.
	// ����ڴ� map�� �����迭(associative array)ó�� ����� �� �ִ�.

	m["�ƺ�"] = 100;	// ���ο� �����͸� ������ �ʿ� insert �ȴ�.
	// m[key] = value;

	for (auto& d : m)
		cout << d.first << "->" << d.second << endl;
	// key���� ö���� �������� �ź� ���Ͽ���.
	// map�� ���� key���� ������� �ʴ´�.
	// multimap�� �̰��� ����Ѵ�.

	// value - ������ ���� �ϰ� �ʹ�.
	// ���� ���� ����� ���������� ���� ( ���� �̷����� �ؾ��ϳ� )

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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//-----------------------------------------

// ���� ���Ͽ� �ִ� ������ �󵵼��� ����϶�.

void main()
{
	ifstream in("�ȷ�Ȩ����+����.txt");

	char c;
	map<char, int> m;

	while (in >> c)
	{
		m[c]++;
	}
	// ������ ������ ����غ���
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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//-----------------------------------------

// ���� ���Ͽ� �ִ� ������ �󵵼��� ����϶�.

void main()
{
	// ���� ���� ���� �ܾ ����ϰ� �� �ܾ���
	// �󵵼��� ����Ͻÿ�.
	ifstream in("�ȷ�Ȩ����+����.txt");

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
// 6�� ǥ�� ���ø� ���̺귯��(STL)
// �����̳�
// �ݺ��� - ���ͷ�����
// �˰���
//-----------------------------------------

// ���� ���Ͽ� �ִ� ������ �󵵼��� ����϶�.

void main()
{
	// ���� ���� ���� �ܾ ����ϰ� �� �ܾ���
	// �󵵼��� ����Ͻÿ�.
	ifstream in("�ȷ�Ȩ����+����.txt");

	string c{};
	map<string, int> m;

	while (in >> c)
	{
		m[c]++;
	}
	// ���� ���� ������ �ܾ ������� 10���� ����϶�.
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

// �ݺ���(iterator)
// �����̳ʰ� �ڽ��� ����(private)�� ��ȸ�� �� �ֵ��� �����ϴ�
// ��ġ ������ó�� ����� �� �ִ� �������̽��̴�.

// �����̳��� �Լ�
//		begin() - �����̳��� ó�� ���Ҹ� ����Ų��.
//		end() - �����̳��� ������ ���Ҹ� �ϳ� ���� ��ġ�� ����Ų��.

// �ݺ��ڷ� �� �� �ִ� ����
//		*	- ������(derefencing operator)
//		++  - �������ҷ� �̵��Ѵ�
//		==  - �ݺ��ڳ��� ���Ѵ�.

// (end)��
// ���� �����̳ʿ��� ���������� �ϳ� �� ���ư��� �����Ѵ�.
// (1) != end() �� �����ϱ� ���ؼ�
// (2) ����ִ� �����̳ʴ� �ϳ� ���������� ������ first�� end�� ������ġ�� ����Ų��.

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

// �˰���(250��)
// �˰����� ���׸��� �����Լ��̴�.(���Ǵ°����� Ŭ������ ����Լ�)
// �˰����� ���ڴ� �ݺ��� �����̴�.
// �Լ��� �̸��� ����(verb)�̴�.
// ��� �˰����� �׻� ȿ������ ���� ����.

void main()
{
	vector<int> v(20, 1);

	for (int d : v)
		cout << d << " ";
	cout << endl;

	auto p = find(v.begin(), v.end(), 333);
	// ������ ó������ ������ 333�� ã����
	// ���ۺ��� ������ 333�̴� �鰳�� �����鼭 333�� ã�´�.
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

// �˰���(250��)
// �˰����� ���׸��� �����Լ��̴�.(���Ǵ°����� Ŭ������ ����Լ�)
// �˰����� ���ڴ� �ݺ��� �����̴�.
// �Լ��� �̸��� ����(verb)�̴�.
// ��� �˰����� �׻� ȿ������ ���� ����.

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
		cout << "����." << endl;
	// ���Ϳ� �Ȱ��� ���ư���.
	// 333�� ����, �Ȱ��� end�� ����Ų��.
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

// �˰���(250��)
// �˰����� ���׸��� �����Լ��̴�.(���Ǵ°����� Ŭ������ ����Լ�)
// �˰����� ���ڴ� �ݺ��� �����̴�.
// �Լ��� �̸��� ����(verb)�̴�.
// ��� �˰����� �׻� ȿ������ ���� ����.

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
		cout << "�翬" << endl;
	// set�� ����Լ� find�� Ʈ�������� search �Ѵ�.

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
		cout << "���� ã��" << *p << endl;
	else
		cout << "���� ����" << endl;
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
		cout << "���� ã��" << *p << endl;
	else
		cout << "���� ����" << endl;
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
		cout << "���� ã��" << *p << endl;
	else
		cout << "���� ����" << endl;
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
	
	// s���� m�� ã�Ƽ� M���� �ٲ��.

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
	// �˰��� �Լ� min_element�� ����� ����.
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
	// copy �˰��� �Լ��� �ϳ��� ������ �ٸ� �������� �����Ѵ�.
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
	// copy �˰��� �Լ��� �ϳ��� ������ �ٸ� �������� �����Ѵ�.
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
	// copy �˰��� �Լ��� �ϳ��� ������ �ٸ� �������� �����Ѵ�.
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
		// �̷� ���α׷��� �������� �ʰ� ���� �Լ���
		// ȣ��Ǵ°��̴�.
		des.operator*() = beg.operator*();
		beg.operator++(123);
		des.operator++(333);
		// ���� �Լ� ���ڸ� �����ϰ� �Լ� ȣ���ϴ°���
		// �ʵ� ���� �𸥴�.

	}
}


// p.250 �� �ݺ��� ������׸�.
void main()
{
	// copy �˰��� �Լ��� �ϳ��� ������ �ٸ� �������� �����Ѵ�.
	vector<int> v1{ 1,3,5,7,9 };
	vector<int> v2;

	my_copy(v1.begin(), v1.end(), back_inserter(v2));

	for (auto d : v2)
		cout << d << " ";
	cout << endl;
	save();
}