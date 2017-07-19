
//=============================================
//			Mon May 23 11:08:39 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// �����̳ʸ� �پ��� ������� ������ �� �ִ�.
// �̵��ݺ��ڸ� ����ؼ� ������ ���� �ִ�.

void main()
{
	vector<string> v{ "2016��", "5��", "23��" };
	list<string> l(v.begin(), v.end());

	for (string d : l)
		cout << d << " ";
	cout << endl;

	save();
}

// �ݺ��� �����.
// 1. ������ �ݺ���
// 2. ��Ʈ�� �ݺ���
// 3. ���� �ݺ���
// 4. �̵� �ݺ���
//=============================================
//			Mon May 23 11:13:26 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// �����̳ʸ� �پ��� ������� ������ �� �ִ�.
// �̵��ݺ��ڸ� ����ؼ� ������ ���� �ִ�.

void main()
{
	vector<string> v{ "2016��", "5��", "23��" };
	list<string> l(make_move_iterator(v.begin()),
		make_move_iterator(v.end()));

	for (string d : l)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon May 23 11:17:57 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// �����̳ʸ� �پ��� ������� ������ �� �ִ�.
// �̵��ݺ��ڸ� ����ؼ� ������ ���� �ִ�.

void main()
{
	vector<string> v{ "2016��", "5��", "23��" };
	cout << "�̵��ϱ� �� ������ ����" << endl;
	cout << "������ �� " << v.size() << endl;
	for (string d : v)
		cout << d << " ";
	cout << endl;

	list<string> l(make_move_iterator(v.begin()),
		make_move_iterator(v.end()));

	// �̵��� �ߴµ� �����ʹ� �״���ε� ������
	// ������ 3���̴�
	cout << "�̵��ϱ� �� ������ ����" << endl;
	cout << "������ �� " << v.size() << endl;
	for (string d : v)
		cout << d << " ";
	cout << endl;



	cout << "�̵��ϱ� �� ����Ʈ ����" << endl;
	cout << "������ �� " << l.size() << endl;
	for (string d : l)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Mon May 23 11:34:29 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// �����̳ʸ� �پ��� ������� ������ �� �ִ�.
// �̵��ݺ��ڸ� ����ؼ� ������ ���� �ִ�.

void main()
{
	vector<int> v{ 1,2,3 };
	list<int> l(make_move_iterator(v.begin()),
		make_move_iterator(v.end()));

	cout << "v ";
	for (int d : v)
		cout << d << " ";
	cout << endl;

	cout << "l ";
	for (int d : l)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon May 23 11:35:27 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// �����̳ʸ� �پ��� ������� ������ �� �ִ�.
// �̵��ݺ��ڸ� ����ؼ� ������ ���� �ִ�.

void main()
{
	vector<string> v{ "abc","123","����30��" };
	list<string> l(make_move_iterator(v.begin()),
		make_move_iterator(v.end()));

	cout << "v ";
	for (string d : v)
		cout << d << " ";
	cout << endl;

	cout << "l ";
	for (string d : l)
		cout << d << " ";
	cout << endl;
	save();
	// int�� �̵��� �ȵǴµ� string�� �̵��Ѵ�
	// ���̸� �ľ�����.
}

//=============================================
//			Mon May 23 11:52:05 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// �����̳ʸ� �پ��� ������� ������ �� �ִ�.
// �̵��ݺ��ڸ� ����ؼ� ������ ���� �ִ�.


void main()
{
	vector<string> v1{ "abc","123","����30��" };

	// v1�� ��°�� �̵��ϴ� ���
	vector<string> v2(move(v1));

	cout << v1.size() << endl;
	cout << v2.size() << endl;
	save();
}
//=============================================
//			Mon May 23 11:53:58 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// �����̳ʸ� �پ��� ������� ������ �� �ִ�.
// �̵��ݺ��ڸ� ����ؼ� ������ ���� �ִ�.


void main()
{
	vector<string> v1{ "abc","123","����30��" };

	// v1�� �������� �Ҵ��� �޸��� ����
	cout << v1.data() << endl;

	// v2�� v1�� �����Ͽ� ����� ���
	vector<string> v2(v1);
	cout << v1.data() << endl;
	cout << v2.data() << endl;
	save();
}
//=============================================
//			Mon May 23 11:54:30 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// �����̳ʸ� �پ��� ������� ������ �� �ִ�.
// �̵��ݺ��ڸ� ����ؼ� ������ ���� �ִ�.


void main()
{
	vector<string> v1{ "abc","123","����30��" };

	// v1�� �������� �Ҵ��� �޸��� ����
	cout << v1.data() << endl;

	// v2�� v1�� �̵��Ͽ� ����� ���
	vector<string> v2(move(v1));
	cout << v1.data() << endl;
	cout << v2.data() << endl;
	save();
}

// �����̳ʸ� �پ��� ������� ������ �� �ִ�.
// �̵��ݺ��ڸ� ����ؼ� ������ ���� �ִ�.


void main()
{
	set<string> s{ "abc", "123", "����30��" };
	// set�� ����Ǹ� �ȵȴ�. set�� key���� ���� ���� �ִ�.
	// �̰��� �̵���ų���� �ൿ�� set�� �ջ��Ű�� �����̴�.
	// const �ε� �����ϴܰ迡�� �ź��ؾ��Ѵ�.
	vector<string> v(make_move_iterator(s.begin()),
		make_move_iterator(s.end()));
	save();
}
// 7�� (�����̳�) �� ���ؼ� ����! �о��
// 321 �ʿ��� 337�� deque�� �޸𸮸� ����.

//=============================================
//			Mon May 23 12:11:03 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<deque>
#include"save.h"

using namespace std;

// �����̳ʸ� �پ��� ������� ������ �� �ִ�.
// �̵��ݺ��ڸ� ����ؼ� ������ ���� �ִ�.


void main()
{
	deque<string> s{ "abc","123","����30��" };
	cout << s[0] << endl;
	cout << s[1] << endl;
	cout << s[2] << endl;
	// �̰� ���ӵ��ִ°ɷ� �����Ҽ�������
	// ���������� �׷��� ���� �� �ִ�. (337��)
	// ��ġ �̾�����ó�� �������� �����̳ʴ�
	// �׷��� vector ���� �ӵ��� ������ �ִ�.
	save();
}
//=============================================
//			Wed May 25 10:53:41 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<set>
#include"save.h"

using namespace std;

// set�� ���ı����� �� ������ ������ �� �ִ�.
// 1. ���ø� �Ķ����
//set<int, ����> s;
// 2. ������ �Ķ����
//set<int> s(����);

class Game{
	int hp;
	int mp;
public:
	Game(int hp, int mp) 
		: hp(hp), mp(mp) {}
	bool operator <(const Game& rhs) const
	{
		return (hp < rhs.hp);
	}
	int getHP() const { return hp; }
};

void main()
{
	set<Game> s{ { 100, 50 }, { 70, 50 }, { 100, 20 } }; // 1,2,3,4
	// < ������ �ϳ��� �̿��ؼ� ������ ���ϴ� ���� strictly weak ordering
	// (368��)
	
	// �� ���Ұ� ���� ���� < �����ڸ� �̿��Ͽ� �����Ѵ�. ---> ���(equivalent)
	// ���� �� ���Ұ� ������ �񱳴� == �����ڷ� ���� ---> ��(equality)
	for (auto& d : s)
		cout << d.getHP() << endl;
	save();
}
//=============================================
//			Wed May 25 10:57:16 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<set>
#include"save.h"

using namespace std;

// set�� ���ı����� �� ������ ������ �� �ִ�.
// 1. ���ø� �Ķ����
//set<int, ����> s;
// 2. ������ �Ķ����
//set<int> s(����);

class Game{
	int hp;
	int mp;
public:
	Game(int hp, int mp) 
		: hp(hp), mp(mp) {}
	bool operator <(const Game& rhs) const
	{
		return (hp < rhs.hp);
	}
	int getHP() const { return hp; }	// ��¿�.
};

void main()
{
	set<Game> s{ { 100, 50 }, { 70, 50 }, { 100, 20 } }; // 1,2,3,4

	// set�� ���� �˻��� �ϱ� ���� ����Ѵ�.
	// set���� ���ϴ� ���� ã�ƺ���.
	// Game(70,50)�� ��ü�� �ִ��� ã�ƺ���.

	auto p = s.find(Game(70, 50));
	if (p != s.end())
		cout << "ã��" << endl;
	save();
}
//=============================================
//			Wed May 25 11:05:25 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

// ----------------------------------------------------
// -100 ~ 100 ������ ���� ���� 100���� ���Ϳ� ��������.
// Ư���� ���� ã�� ���ô�. ��) 33
//

void main()
{
	vector<int> v;
	for (int i = 0; i < 100;++i)
		v.push_back(rand() % 201 - 100);

	auto p = find(v.begin(), v.end(), 33);
	if (p != v.end())
		cout << "ã��" << endl;
	else
		cout << "����" << endl;

	sort(v.begin(), v.end());
	for (auto& d : v)
		cout << d << "\t";
	save();
}
//=============================================
//			Wed May 25 11:08:08 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

// ----------------------------------------------------
// -100 ~ 100 ������ ���� ���� 100���� ���Ϳ� ��������.
// Ư���� ���� ã�� ���ô�. ��) 33
//

void main()
{
	vector<int> v;
	for (int i = 0; i < 100;++i)
		v.push_back(rand() % 201 - 100);

	sort(v.begin(), v.end());
	for (auto& d : v)
		cout << d << "\t";

	auto p = find(v.begin(), v.end(), 32);
	if (p != v.end())
		cout << "ã�� " << *p << endl;
	else
		cout << "����" << endl;

	save();
}
//=============================================
//			Wed May 25 11:16:03 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

// ----------------------------------------------------
// -100 ~ 100 ������ ���� ���� 100���� ���Ϳ� ��������.
// Ư���� ���� ã�� ���ô�. ��) 33
//

void main()
{
	vector<int> v;
	v.reserve(100);
	for (int i = 0; i < 100;++i)
		v.push_back(rand() % 201 - 100);

	sort(v.begin(), v.end());

	auto p = find(v.begin(), v.end(), 33);
	if (p != v.end())
		cout << "ã�� " << *p << endl;
	else
		cout << "����" << endl;

	for (auto& d : v)
		cout << d << "\t";

	// 32�� ã�ƺ��� - ���ĵ� ������������ ����Ž���� ����.

	p = find(v.begin(), v.end(), 32);
	if (p != v.end())
		cout << "ã��" << *p << endl;
	else
		cout << "����" << endl;

	save();
}
//=============================================
//			Wed May 25 11:38:54 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

// �˻� ���� �Լ��� - ���� �˰��� �Լ�����
//
// count - ã�� ���� ��� �ִ°�?
// find - ã�� ���� ó�� �߰ߵ� ���� ����ΰ�
//		--> �����˰���, count�� ������ ������ ����.
//
// �����̳ʰ� ���ĵ� ��쿡(vector, deque)
// ���ϴ� ���� �ִ°�?
//		binary_search - STL���� bool 
//
// �ִٸ� ��� �ִ°�? ��� �ִ°�?
// --> equal_range�� ����.
// lower_bound - ���ϴ� ���� �ִ°�? �ִٸ� ���? ���ٸ� ��� ���� �����Ѱ��� �˷���.
// upper_bound - ���ĵ� ������ ������ �� ������ ��ü���� ���� ������ ��밡��
// equal_range - ��ȯ���� pair(lower/upper)
//
// set/map������ ����Լ��� �̿��Ѵ�.

// ----------------------------------------------------
// -100 ~ 100 ������ ���� ���� 100���� ���Ϳ� ��������.
// Ư���� ���� ã�� ���ô�. ��) 33
// find()�� ã�� �� �־���.
// 
// ���Ͱ� ���ĵǾ� �ִٸ� binary_search() , return type = bool
// �� ã�ƾ� �մϴ�.
// ----------------------------------------------------

void main()
{
	vector<int> v;
	v.reserve(100);
	for (int i = 0; i < 100;++i)
		v.push_back(rand() % 201 - 100);

	sort(v.begin(), v.end());

	auto p = find(v.begin(), v.end(), 33);
	if (p != v.end())
		cout << "ã�� " << *p << endl;
	else
		cout << "����" << endl;

	for (auto& d : v)
		cout << d << "\t";

	// 32�� ã�ƺ��� - ���ĵ� ������������ ����Ž���� ����.
	bool b = binary_search(v.begin(), v.end(), 32);

	if (b == true)
		cout << "32 ã�� " << endl;
	else
		cout << "32 ���� " << endl;
	
	save();
}
//=============================================
//			Wed May 25 11:48:57 2016
//=============================================
#include<iostream>
#include<string>
#include<algorithm>
#include"save.h"

using namespace std;

// 439�� �� �� STL �����̳�
// STL �˰���� �Բ� ���� �۵��ϴ� �����̳ʸ� ���� �� �ִ� �����?
//
// 1. STL �����̳ʰ� �䱸�ϴ� �������̽��� �����Ѵ�.
//		string�� STL �����̳ʷ� �̿��ϴ� ��츦 ���Ѵ�.
//		string�� begin(), end(), push_back() ���� �����Ѵ�.
// 2. �����̳ʿ� �˰����� �������̽��� ����ϴ� ��ü�� �����Ѵ�(�ݺ���)
//		���� �迭
//		�ݺ��ڴ� �����Ϳ� ���Ͽ� Ư��ȭ(specialization)�Ǿ� �����Ƿ�.
void main()
{
	int a[] {1, 3, 5, 2, 4};

	sort(&a[0], &a[5]);

	for (int d : a)
		cout << d << endl;

	save();
}
//=============================================
//			Wed May 25 12:03:28 2016
//=============================================
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

// 439�� �� �� STL �����̳�
// STL �˰���� �Բ� ���� �۵��ϴ� �����̳ʸ� ���� �� �ִ� �����?
//
// 1. STL �����̳ʰ� �䱸�ϴ� �������̽��� �����Ѵ�.
//		string�� STL �����̳ʷ� �̿��ϴ� ��츦 ���Ѵ�.
//		string�� begin(), end(), push_back() ���� �����Ѵ�.
// 2. �����̳ʿ� �˰����� �������̽��� ����ϴ� ��ü�� �����Ѵ�(�ݺ���)
//		���� �迭
//		�ݺ��ڴ� �����Ϳ� ���Ͽ� Ư��ȭ(specialization)�Ǿ� �����Ƿ�.
// 3. wrapper Ŭ������ ���� ����� ����Ѵ�.

//-----------------------------------------------------------------------
// ǥ���� �ؼ��ϴ� �����̳ʸ� ����� ����
//
// ItemBox �����̳� - Ư���� �ϴ� �� ���� array<T,size>�� ����� �����̳���
//-----------------------------------------------------------------------

template<class T,int n>
class ItemBox
{
private:
	T data[n];
public:
	T* begin() { return data; }
	T* end() { return data + n; }
	int size() { return n; }

};

void main()
{
	// �����̳� ����
	ItemBox<int, 10> a;
	
	auto p = a.begin();
	for (int i = 0; i < a.size(); ++i)
		*p++ = i + 1;

	// �˰������� ���� ����غ���
	// [1][2][3][4][5][6][7][8][9][10]

	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
								// cout << int

	cout << endl;
	
	save();
}
//=============================================
//			Wed May 25 12:10:26 2016
//=============================================
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

// 439�� �� �� STL �����̳�
// STL �˰���� �Բ� ���� �۵��ϴ� �����̳ʸ� ���� �� �ִ� �����?
//
// 1. STL �����̳ʰ� �䱸�ϴ� �������̽��� �����Ѵ�.
//		string�� STL �����̳ʷ� �̿��ϴ� ��츦 ���Ѵ�.
//		string�� begin(), end(), push_back() ���� �����Ѵ�.
// 2. �����̳ʿ� �˰����� �������̽��� ����ϴ� ��ü�� �����Ѵ�(�ݺ���)
//		���� �迭
//		�ݺ��ڴ� �����Ϳ� ���Ͽ� Ư��ȭ(specialization)�Ǿ� �����Ƿ�.
// 3. wrapper Ŭ������ ���� ����� ����Ѵ�.

//-----------------------------------------------------------------------
// ǥ���� �ؼ��ϴ� �����̳ʸ� ����� ����
//
// ItemBox �����̳� - Ư���� �ϴ� �� ���� array<T,size>�� ����� �����̳���
//-----------------------------------------------------------------------

template<class T,int n>
class ItemBox
{
private:
	T data[n];
public:
	T* begin() { return data; }
	T* end() { return data + n; }
	int size() { return n; }

};

void main()
{
	// �����̳� ����
	ItemBox<int, 10> a;
	
	auto p = a.begin();
	for (int i = 0; i < a.size(); ++i)
		*p++ = i + 1;

	// �˰������� ���� ����غ���
	// [1][2][3][4][5][6][7][8][9][10]
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	// ������������ �����غ���
	sort(a.begin(), a.end(), [](const int& a, const int& b){
		return a > b;
	});
	
	for (int d : a)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed May 25 12:12:45 2016
//=============================================
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

// 439�� �� �� STL �����̳�
// STL �˰���� �Բ� ���� �۵��ϴ� �����̳ʸ� ���� �� �ִ� �����?
//
// 1. STL �����̳ʰ� �䱸�ϴ� �������̽��� �����Ѵ�.
//		string�� STL �����̳ʷ� �̿��ϴ� ��츦 ���Ѵ�.
//		string�� begin(), end(), push_back() ���� �����Ѵ�.
// 2. �����̳ʿ� �˰����� �������̽��� ����ϴ� ��ü�� �����Ѵ�(�ݺ���)
//		���� �迭
//		�ݺ��ڴ� �����Ϳ� ���Ͽ� Ư��ȭ(specialization)�Ǿ� �����Ƿ�.
// 3. wrapper Ŭ������ ���� ����� ����Ѵ�.

//-----------------------------------------------------------------------
// ǥ���� �ؼ��ϴ� �����̳ʸ� ����� ����
//
// ItemBox �����̳� - Ư���� �ϴ� �� ���� array<T,size>�� ����� �����̳���
//-----------------------------------------------------------------------

template<class T,int n>
class ItemBox
{
private:
	T data[n];
public:
	T* begin() { return data; }
	T* end() { return data + n; }
	T* mid() { return data + n / 2; }
	int size() { return n; }

};

void main()
{
	// �����̳� ����
	ItemBox<int, 10> a;
	
	auto p = a.begin();
	for (int i = 0; i < a.size(); ++i)
		*p++ = i + 1;

	// �˰������� ���� ����غ���
	// [1][2][3][4][5][6][7][8][9][10]
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	// ������������ �����غ���
	sort(a.begin(), a.end(), [](const int& a, const int& b){
		return a > b;
	});
	
	for (int d : a)
		cout << d << " ";
	cout << endl;

	// ������ ������ ��ȯ, rotate
	rotate(a.begin(), a.mid(), a.end());

	for (int d : a)
		cout << d << " ";
	cout << endl;

	save();
}

// 447�� - (�� �о����)
// STL �̿��ؼ� ���α׷��ؼ� �ϴ°��� ������
// �׻� ���� �����̳ʸ� ����ϸ� �ȵȴ�.
// �����̳ʸ� �� ���̸� �⺻������ vector�� ����϶�.
