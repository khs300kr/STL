
//=============================================
//			Mon Mar 28 10:44:40 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

// STL�� �ӵ��� ����ȭ�� ���̺귯���Դϴ�.
// �� ���� ����ó�� ������ ���� �ʴ´ٴ� �ǹ��Դϴ�.
// ����ó���� �ʿ��ϴٸ� �׷��� ���ִ� Ư�������� ���̺귯���� �Լ��� ����ؾ� �մϴ�.

class Animal
{
private:
public:
	virtual void move() = 0;
};

class Dog :public Animal
{
private:
public:
	virtual void move() override final	{		cout << "�� �ڴ�" << endl;	}
};

class Bird :public Animal
{
private:
public:
	virtual void move() override final { cout << "�� ����" << endl; }
};

void f(Animal& a) 
{
	// ���� a�� ���� �����ٸ� move()�� ȣ���϶�.
	Dog d;
	try 
	{
		d = dynamic_cast<Dog&>(a);
		d.move();
	}
	catch(exception& e)
	{
		// Bird -> bad dynamic cast!
		cout << e.what() << endl;
	}
}

void main()
{
	Animal* a[3]{ new Dog,new Bird, new Dog };

	for (Animal*d : a)
	{
		f(*d);
	}

	save();

	// 4�忡�� ��ü ����ó�� ����.
}
//=============================================
//			Mon Mar 28 10:51:43 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

// HEAP �޸𸮰� �Ҵ��� �� ���� ���
void main()
{
	int i = 1;
	while (true)
	{
		try
		{
			new int[100000000];
			cout << i++ << endl;
		}
		catch(exception& e)
		{
			cout << e.what() << endl;
			break;
		}
	}
	save();
}
//=============================================
//			Mon Mar 28 11:01:52 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

// ȣ�Ⱑ�� Ÿ��(Callable type)
// 1. �Լ�
// 2. ����Լ�
// 3. �Լ���ü : �Լ�ȣ�⿬���ڸ� ( () ) �����ε��� Ŭ����
// 4. ����
// 5. function class
// 6. bind

class March
{
private:
public:
	void operator()() {
		cout << "�Լ�ȣ�⿬���ڰ� �Ҹ�" << endl;
	}
};

void main()
{
	March a;

	a();
	
	save();
}
//=============================================
//			Mon Mar 28 11:07:14 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

// ȣ�Ⱑ�� Ÿ��(Callable type)
// 1. �Լ�
// 2. ����Լ�
// 3. �Լ���ü : �Լ�ȣ�⿬���ڸ� ( () ) �����ε��� Ŭ����
// 4. ����
// 5. function class
// 6. bind

class March
{
private:
public:
	bool operator()(int a, int b) { return a > b; }
};

void main()
{
	int a[]{ 2,4,6,1,3,5 };

	March m;

	sort(begin(a), end(a),m);

	for (auto d : a)
		cout << d << " ";
	cout << endl;
	
	save();
}
//=============================================
//			Mon Mar 28 11:09:07 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

// ȣ�Ⱑ�� Ÿ��(Callable type)
// 1. �Լ�
// 2. ����Լ�
// 3. �Լ���ü : �Լ�ȣ�⿬���ڸ� ( () ) �����ε��� Ŭ����
// 4. ����
// 5. function class
// 6. bind

class March
{
private:
public:
	bool operator()(int a, int b) { return a > b; }
};

void main()
{
	int a[]{ 2,4,6,1,3,5 };

	sort(begin(a), end(a),March());

	for (auto d : a)
		cout << d << " ";
	cout << endl;
	
	save();
}
//=============================================
//			Mon Mar 28 11:12:29 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

// ȣ�Ⱑ�� Ÿ��(Callable type)
// 1. �Լ�
// 2. ����Լ�
// 3. �Լ���ü : �Լ�ȣ�⿬���ڸ� ( () ) �����ε��� Ŭ����
// 4. ����
// 5. function class
// 6. bind

class March
{
private:
public:
	bool operator()(int a, int b) { return a > b; }
};

void main()
{
	int a[]{ 2,4,6,1,3,5 };

	sort(begin(a), end(a), [](int a, int b) { return a < b; });

	for (auto d : a)
		cout << d << " ";
	cout << endl;

	save();
}

//=============================================
//			Mon Mar 28 11:13:29 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

// ȣ�Ⱑ�� Ÿ��(Callable type)
// 1. �Լ�
// 2. ����Լ�
// 3. �Լ���ü : �Լ�ȣ�⿬���ڸ� ( () ) �����ε��� Ŭ����
// 4. ����
// 5. function class
// 6. bind

class March
{
private:
public:
	bool operator()(int a, int b) { return a > b; }
};

void main()
{
	int a[]{ 2,4,6,1,3,5 };

	[](int a, int b) { return a < b; };

	for (auto d : a)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Mar 28 11:15:32 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

// ȣ�Ⱑ�� Ÿ��(Callable type)
// 1. �Լ�
// 2. ����Լ�
// 3. �Լ���ü : �Լ�ȣ�⿬���ڸ� ( () ) �����ε��� Ŭ����
// 4. ����
// 5. function class
// 6. bind : ���� �Լ��� ���� ������ �ٲ� �� �Լ��� ����� �ش�.

int add(int a, int b)
{
	return a + b;
}

void main()
{
	cout << add(3, 4) << endl;

	save();
}
//=============================================
//			Mon Mar 28 11:17:18 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<functional>
#include"save.h"

using namespace std;

// ȣ�Ⱑ�� Ÿ��(Callable type)
// 1. �Լ�
// 2. ����Լ�
// 3. �Լ���ü : �Լ�ȣ�⿬���ڸ� ( () ) �����ε��� Ŭ����
// 4. ����
// 5. function class
// 6. bind : ���� �Լ��� ���� ������ �ٲ� �� �Լ��� ����� �ش�.

int add(int a, int b)
{
	return a + b;
}

void main()
{
	auto f = bind(add, 5, 10);
	
	cout << f() << endl;

	save();
}
//=============================================
//			Mon Mar 28 11:35:06 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<functional>
#include"save.h"

using namespace std;

// ȣ�Ⱑ�� Ÿ��(Callable type)
// 1. �Լ�
// 2. ����Լ�
// 3. �Լ���ü : �Լ�ȣ�⿬���ڸ� ( () ) �����ε��� Ŭ����
// 4. ����
// 5. function class
// 6. bind : ���� �Լ��� ���� ������ �ٲ� �� �Լ��� ����� �ش�.

void f(int(*fp)(int,int))
{
	fp(3, 4);
}
int a(int, int)
{
	cout << "�Լ� a�� ȣ����" << endl;
	return 10;
}
void main()
{
	f(a);

	save();
}
//=============================================
//			Mon Mar 28 11:35:33 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<functional>
#include"save.h"

using namespace std;

// ȣ�Ⱑ�� Ÿ��(Callable type)
// 1. �Լ�
// 2. ����Լ�
// 3. �Լ���ü : �Լ�ȣ�⿬���ڸ� ( () ) �����ε��� Ŭ����
// 4. ����
// 5. function class
// 6. bind : ���� �Լ��� ���� ������ �ٲ� �� �Լ��� ����� �ش�.

template<class T>
void f(T fp)
{
	fp(3, 4);
}
int a(int, int)
{
	cout << "�Լ� a�� ȣ����" << endl;
	return 10;
}
void main()
{
	f(a);

	save();
}
//=============================================
//			Mon Mar 28 11:58:55 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<functional>
#include<string>
#include"save.h"

using namespace std;

// 5��(��ƿ��Ƽ)
// pair<>, ����Ʈ������, type traits


// pair : ����(heterogeneous)�� �ڷ����� �ϳ��� ���� ����� �� �ֵ����Ѵ�.

void main()
{
	// �̸��� ������� ������ ��������.
	pair<string, int> OnePiece[]{ { "����", 400 } ,{ "����",300 } ,{ "����", 100 }
	,{ "���ڷκ�", 200 } };

	cout << sizeof(pair<string, int>) << endl;
	cout << sizeof(string) << endl;

	// ����� ����
	cout << "<����� ���� - ��������>" << endl;
	sort(begin(OnePiece), end(OnePiece), [](const pair<string, int> &a, const pair<string, int> &b)
	{return a.second < b.second; });

	for (pair<string, int> d : OnePiece)
	{
		cout << d.first << "--" << d.second << endl;
	}

	// �̸� ����
	cout << endl << "<�̸� ���� - ��������>" << endl;
	sort(begin(OnePiece), end(OnePiece), [](const pair<string, int> &a, const pair<string, int> &b)
	{return a.first > b.first; });

	for (pair<string, int> d : OnePiece)
	{
		cout << d.first << "--" << d.second << endl;
	}
	save();
}
//=============================================
//			Mon Mar 28 12:16:08 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<functional>
#include<string>
#include<random>
#include<cmath>
#include"save.h"

using namespace std;

// 5��(��ƿ��Ƽ)
// pair<>, ����Ʈ������, type traits


// pair : ����(heterogeneous)�� �ڷ����� �ϳ��� ���� ����� �� �ֵ����Ѵ�.

void main()
{
	// pair<double, double> Point2D;
	// 2���� ��ǥ 100��(-100~100���̰�)�� ��������.
	// �������� �ݰ� 10�̳��� ���鸸 ȭ�鿡 ����϶�.
	
	pair<double, double> Point2D[100];

	default_random_engine dre;
	uniform_int_distribution<> ui(-100, 100);
	
	for (auto& d : Point2D)
	{
		d.first = ui(dre);
		d.second = ui(dre);
	}
	
	for (auto& d : Point2D)
	{
		if(sqrt(pow(d.first, 2) + pow(d.second, 2)) < (double)10)
			cout << "(" << d.first << "," << d.second << ")" << endl;
	}
	save();
}
//=============================================
//			Wed Mar 30 10:46:04 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include"save.h"

using namespace std;

// pair : ����(heterogeneous)�� �ڷ����� �ϳ��� ���� ����� �� �ֵ����Ѵ�.
// �̸��� ������ vector�� �����ϰ� �ʹ�.
// vector�� �ϳ��� �ڷ����� ���� �� �ִ� ���� �迭�̴�.
// pair�� ����ϸ� �̸��� ������ �ϳ��� �ڷ������� ���� �� �־�
// ���Ϳ��� ���� �� �ִ�.

void main()
{
	vector<pair<string, int>> v;

	v.push_back(pair<string, int>("����", 400));
	v.push_back(pair<string, int>("����", 100));
	
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << " - " << v[i].second << endl;

	save();
}

//=============================================
//			Wed Mar 30 10:47:41 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include"save.h"

using namespace std;

// pair : ����(heterogeneous)�� �ڷ����� �ϳ��� ���� ����� �� �ֵ����Ѵ�.
// �̸��� ������ vector�� �����ϰ� �ʹ�.
// vector�� �ϳ��� �ڷ����� ���� �� �ִ� ���� �迭�̴�.
// pair�� ����ϸ� �̸��� ������ �ϳ��� �ڷ������� ���� �� �־�
// ���Ϳ��� ���� �� �ִ�.

void main()
{
	vector<pair<string, int>> v;

	v.push_back(make_pair<string,int>("����", 400));
	v.push_back(make_pair<string, int>("����", 100));
	
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << " - " << v[i].second << endl;

	save();
}

//=============================================
//			Wed Mar 30 10:49:19 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include"save.h"

using namespace std;

// pair : ����(heterogeneous)�� �ڷ����� �ϳ��� ���� ����� �� �ֵ����Ѵ�.
// �̸��� ������ vector�� �����ϰ� �ʹ�.
// vector�� �ϳ��� �ڷ����� ���� �� �ִ� ���� �迭�̴�.
// pair�� ����ϸ� �̸��� ������ �ϳ��� �ڷ������� ���� �� �־�
// ���Ϳ��� ���� �� �ִ�.

void main()
{
	typedef pair<string, int> Score;
	vector<Score> v;

	v.push_back(make_pair<string,int>("����", 400));
	v.push_back(make_pair("����", 100));
	
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << " - " << v[i].second << endl;

	save();
}

//=============================================
//			Wed Mar 30 10:51:10 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include"save.h"

using namespace std;

// pair : ����(heterogeneous)�� �ڷ����� �ϳ��� ���� ����� �� �ֵ����Ѵ�.
// �̸��� ������ vector�� �����ϰ� �ʹ�.
// vector�� �ϳ��� �ڷ����� ���� �� �ִ� ���� �迭�̴�.
// pair�� ����ϸ� �̸��� ������ �ϳ��� �ڷ������� ���� �� �־�
// ���Ϳ��� ���� �� �ִ�.

void main()
{
	// typedef pair<string, int> Score;
	using Score = pair<string, int>;
	// C++11�� typedef ��Ÿ��

	vector<Score> v;

	v.push_back(make_pair<string,int>("����", 400));
	v.push_back(make_pair("����", 100));
	
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << " - " << v[i].second << endl;

	save();
}

//=============================================
//			Wed Mar 30 10:59:57 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include<algorithm>
#include"save.h"

using namespace std;

// pair : ����(heterogeneous)�� �ڷ����� �ϳ��� ���� ����� �� �ֵ����Ѵ�.
// �̸��� ������ vector�� �����ϰ� �ʹ�.
// vector�� �ϳ��� �ڷ����� ���� �� �ִ� ���� �迭�̴�.
// pair�� ����ϸ� �̸��� ������ �ϳ��� �ڷ������� ���� �� �־�
// ���Ϳ��� ���� �� �ִ�.

void main()
{
	// typedef pair<string, int> Score;
	using Score = pair<string, int>;
	// C++11�� typedef ��Ÿ��

	vector<Score> v;

	v.push_back(make_pair("����", 400));
	v.push_back(make_pair("����", 100));
	v.push_back(make_pair("����", 300));
	v.push_back(make_pair("���", 200));

	// sort�� �����غ�����
	sort(v.begin(), v.end(), [](const Score& a, const Score& b) -> bool{
		cout << a.first << " �� " << b.first << endl;	/// sort �˰��� �ϴ���(���)
		return a.first < b.first;
	});

	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << " - " << v[i].second << endl;

	save();
}

//=============================================
//			Wed Mar 30 11:15:14 2016
//=============================================
#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include<algorithm>
#include"save.h"

using namespace std;

// ����Ʈ������
// �ڽ��� ȹ���� �ڿ��� �ڽ��� �Ҹ�ɶ� ������ �ִ� ������
// C++11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1. �ڿ��� ȹ���Ѵ�(HEAP)
// 2. �ڿ��� �̿��Ѵ�
// 3. ��ȯ�Ѵ�

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
};

void main()
{
	Mini* p = new Mini;
	// �̴ϴ� �ڿ��� �ƴ϶� �̴ϰ� �����ִ� HEAP �ڿ��̴�.
	delete p;

	save();
	// ���� ���� �Ҹ�(����)�� �ʿ伺)
}

//=============================================
//			Wed Mar 30 11:19:52 2016
//=============================================
#include<iostream>
#include<memory>
#include"save.h"

using namespace std;

// ����Ʈ������
// �ڽ��� ȹ���� �ڿ��� �ڽ��� �Ҹ�ɶ� ������ �ִ� ������
// C++11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1. �ڿ��� ȹ���Ѵ�(HEAP)
// 2. �ڿ��� �̿��Ѵ�
// 3. ��ȯ�Ѵ�

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
};

void main()
{
	// Mini* p = new Mini;
	// �ڿ��� �����ϴ� unique_ptr
	unique_ptr<Mini> p(new Mini);
	// ���� �������̱� ������ ������ Ÿ�Ը� ���´�.
	// �̴ϸ� ����°��� �ƴ϶� �޸𸮹����̴�.
	// p�� ���� ���� (STACK) - ������ ������� ��������.
	// ���� ������ ������� �ڵ����� ���� �Ѵ�.
	save();
}

//=============================================
//			Wed Mar 30 11:37:03 2016
//=============================================
#include<iostream>
#include<memory>
#include"save.h"

using namespace std;

// ����Ʈ������
// �ڽ��� ȹ���� �ڿ��� �ڽ��� �Ҹ�ɶ� ������ �ִ� ������
// C++11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1. �ڿ��� ȹ���Ѵ�(HEAP)
// 2. �ڿ��� �̿��Ѵ�
// 3. ��ȯ�Ѵ�

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
	void f() 
	{ cout << "member" << endl; }
};

void main()
{
	Mini* p = new Mini;
	p->f();
	Mini* q = p;
	q->f();

	delete p;
	//delete q;
	// �߸��� ǥ��

	//unique_ptr<Mini> p(new Mini);	
	//p->f();
	save();
}
//=============================================
//			Wed Mar 30 11:39:09 2016
//=============================================
#include<iostream>
#include<memory>
#include"save.h"

using namespace std;

// ����Ʈ������
// �ڽ��� ȹ���� �ڿ��� �ڽ��� �Ҹ�ɶ� ������ �ִ� ������
// C++11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1. �ڿ��� ȹ���Ѵ�(HEAP)
// 2. �ڿ��� �̿��Ѵ�
// 3. ��ȯ�Ѵ�

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
	void f() 
	{ cout << "member" << endl; }
};

void main()
{

	unique_ptr<Mini> p(new Mini);	
	p->f();
	//unique_ptr<Mini> q = p; 
	// �����͸� ��������Ѵ�.
	// �������� ���´�.
	unique_ptr<Mini> q = move(p);
	// �̻� ������. (�̵�����)
	save();
}
//=============================================
//			Wed Mar 30 11:40:07 2016
//=============================================
#include<iostream>
#include<memory>
#include"save.h"

using namespace std;

// ����Ʈ������
// �ڽ��� ȹ���� �ڿ��� �ڽ��� �Ҹ�ɶ� ������ �ִ� ������
// C++11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1. �ڿ��� ȹ���Ѵ�(HEAP)
// 2. �ڿ��� �̿��Ѵ�
// 3. ��ȯ�Ѵ�

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
	void f() 
	{ cout << "member" << endl; }
};

void main()
{
	unique_ptr<Mini> p(new Mini);	
	p->f();
	unique_ptr<Mini> q = move(p);

	cout << "�̻簣 ��" << endl;
	p->f();	// �ҷ�����.
	// undefined - ���� �����ʾҴ�.
	// �̷����� �� �� ����.
	save();
}
//=============================================
//			Wed Mar 30 11:42:38 2016
//=============================================
#include<iostream>
#include<memory>
#include"save.h"

using namespace std;

// ����Ʈ������
// �ڽ��� ȹ���� �ڿ��� �ڽ��� �Ҹ�ɶ� ������ �ִ� ������
// C++11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1. �ڿ��� ȹ���Ѵ�(HEAP)
// 2. �ڿ��� �̿��Ѵ�
// 3. ��ȯ�Ѵ�

class Mini
{
public:
	Mini()
	{ cout << "ctor" << endl; }
	~Mini()
	{ cout << "dtor " << endl; }
	void f() 
	{ cout << "member" << endl; }
};

void main()
{
	unique_ptr<Mini> p(new Mini[10]);
	// ���α׷� ���ư��Ŵ�.
	// �Ҹ��ڿ� array�� �����ֶ�� �Ҹ��ڿ� ���α׷����Ҽ��ִ�
	// delete[] p;
	save();
}