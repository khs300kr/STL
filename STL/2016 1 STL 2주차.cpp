//=============================================
//			Mon Mar 14 10:49:31 2016
//=============================================
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

bool f(int a, int b)
{
	return a > b;	// ��������
}

void main()
{
	// STL�� ��ǥ ���� �˰��� sort
	int a[] {2, 4, 6, 1, 3, 5};

	//qsort( a, 6, 4, cmp );	// C��� �Լ�
								// generic (��������,��Ī����)

	sort(&a[0], &a[6],f);		// ���ڰ� 2��~3�� ����.
								// ù���� ���� First , �ι�° ���� Last
								// default ���������̴�. �������� �ҷ���?
								// ������ ���� ���
	for (auto d : a)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Mar 14 10:51:53 2016
//=============================================
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	// STL�� ��ǥ ���� �˰��� sort
	int a[] {2, 4, 6, 1, 3, 5};

	//qsort( a, 6, 4, cmp );	// C��� �Լ�
								// generic (��������,��Ī����)

	sort(&a[0], &a[6], [](int a, int b) {
		return a > b;
	});							// �����Լ� ������ ����ϴ� ����
								// ���ڰ� 2��~3�� ����.
								// ù���� ���� First , �ι�° ���� Last
								// default ���������̴�. �������� �ҷ���?
								// ������ ���� ���
	for (auto d : a)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Mar 14 10:53:52 2016
//=============================================
#include<iostream>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	// STL�� ��ǥ ���� �˰��� sort
	int a[] {2, 4, 6, 1, 3, 5};

	//qsort( a, 6, 4, cmp );	// C��� �Լ�
								// generic (��������,��Ī����)

	sort(begin(a), end(a), [](int a, int b) -> bool {	// C++ ǥ��
		return a > b;
	});							// �����Լ� ������ ����ϴ� ����
								// ���ڰ� 2��~3�� ����.
								// ù���� ���� First , �ι�° ���� Last
								// default ���������̴�. �������� �ҷ���?
								// ������ ���� ���
	for (auto d : a)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Mar 14 11:08:28 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include"save.h"

using namespace std;

class Wizard
{
private:
	string strName;
	int iNum;
public:
	Wizard(string _strName, int _iNum)
		: strName(_strName), iNum(_iNum) {}
public:
	string getName() const { return strName; } // const(Only for read)
	int getNum() const { return iNum; }	// const(Only for read)
};

void main()
{
	Wizard a[] {{"3��", 14}, {"2��", 29}, { "4��", 1 }};	// Uniform Initialization

	sort(begin(a), end(a), [](const Wizard &a, const Wizard &b){
		return a.getNum() < b.getNum();
	});
	// Only Reading (Const)�� ���δ� + ���������ʴ´� (���۷���)
	// [] ���� Introducer

	for (auto data : a)
		cout << data.getName() << "," << data.getNum() << endl;

	save();
}
//=============================================
//			Mon Mar 14 12:13:37 2016
//=============================================
/*******************************************
//2016. 1. STL ��23 ��23

//3. 14 ��23(2��/2����)

//�� ��� Ư��
//auto, �ϰ��� �ʱ�ȭ, ��������� for loop
//�̵����ư� r-value ���� (Ŭ���� ��ü ���� �ǽ�)
//����
*******************************************/

#include<iostream>
#include<vector>
#include<string>
#include"save.h"

using namespace std;
void main()
{
	//int a[10];		// compile time�� ũ�⸦ ��������Ѵ�.
	vector<string> v{ "������","3��","14��","ȭ��Ʈ����" };	 
						// Dynamic�� ũ�Ⱑ ������.
	
	
	vector<string>::const_iterator iter = v.begin();

	for (; iter < v.end(); ++iter)		// ��ģ���� ������ �ڷ����̱⶧���� ++iter�� ���.
		cout << *iter << endl;

	save();
}
//=============================================
//			Mon Mar 14 12:15:48 2016
//=============================================
/*******************************************
//2016. 1. STL ��23 ��23

//3. 14 ��23(2��/2����)

//�� ��� Ư��
//auto, �ϰ��� �ʱ�ȭ, ��������� for loop
//�̵����ư� r-value ���� (Ŭ���� ��ü ���� �ǽ�)
//����
*******************************************/

#include<iostream>
#include<vector>
#include<string>
#include"save.h"

using namespace std;
void main()
{
	//int a[10];		// compile time�� ũ�⸦ ��������Ѵ�.
	vector<string> v{ "������","3��","14��","ȭ��Ʈ����" };	 
						// Dynamic�� ũ�Ⱑ ������.
	
	v.push_back("������ �߰� �����ϴ�");

	
	//vector<string>::const_iterator iter = v.begin();

	//for (; iter < v.end(); ++iter)		// ��ģ���� ������ �ڷ����̱⶧���� ++iter�� ���.
	//	cout << *iter << endl;

	for (auto i = v.begin(); i < v.end(); ++i)
		cout << *i << endl;

	save();
}
//=============================================
//			Wed Mar 16 10:40:03 2016
//=============================================
/*******************************************
//2016. 1. STL ��23 ��23

//3. 14 ��23(2��/2����)

//�� ��� Ư��
//auto, �ϰ��� �ʱ�ȭ, ��������� for loop
//�̵����ư� r-value ���� (Ŭ���� ��ü ���� �ǽ�)
//����
*******************************************/

#include<iostream>
#include<vector>
#include<string>
#include"save.h"

using namespace std;
void main()
{
	// ������ (qualifier) -> ������
	int a{ 100 };
	volatile int b{ a };	// const�� �������̴�.
							// volatile(�ֹ߼���).

	save();
}
//=============================================
//			Wed Mar 16 10:45:29 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

// ���յ� �ʱ�ȭ(uniform initialization C++)
// RAII

void change(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void main()
{
	int a = 10, b = 20;

	change(a, b);

	cout << a << "," << b << endl;

	save();
}

//=============================================
//			Wed Mar 16 10:51:07 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

// ���յ� �ʱ�ȭ(uniform initialization C++)
// RAII

template <class T>
void change(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}
class Monster
{
private:
	int n;
public:
	Monster(int _n)
		: n(_n) {}
};

void main()
{
	//int a(10);		// C++03, int�� ���� POD������ 
					// Ŭ������ ���� ����� �ʱ�ȭ�� ����
	// C++11�� ���յ� �ʱ�ȭ
	int a{ 10 };
	// default�� 0���� �ʱ�ȭ
	int b{};

	cout << b << endl;

	save();
}

//=============================================
//			Wed Mar 16 10:55:07 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

// ���յ� �ʱ�ȭ(uniform initialization C++)
// RAII

template <class T>
void change(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

void main()
{
	double pi{ 3.141592 };
	cout << sizeof(double) << endl; // 8 byte
	cout << sizeof(int) << endl; // 4 byte

	int n{ pi };
	// data�� ���յ� �ʱ�ȭ�� ���� �� ȿ�����̰� �����ϰ�
	// �������ؼ� ����.
	// ���� �������� �ȵȴ�.
	cout << n << endl;

	save();
}
//=============================================
//			Wed Mar 16 10:59:24 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

// ���յ� �ʱ�ȭ(uniform initialization C++)
// RAII

template <class T>
void change(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

class Monster
{
private:
	int n;
public:
	Monster(int n) {}
	Monster() {};
};

void main()
{
	Monster m[10] = { 3, 5, 7, 10 };

	cout << sizeof(m) << endl;

	// ���� �츮�� ������ �ʱ�ȭ��

	int a[] = { 3, 5, 7, 9 };

	// �̷��� �ϰڴ�.

	save();
}
//=============================================
//			Wed Mar 16 11:03:49 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

// ���յ� �ʱ�ȭ(uniform initialization C++)
// RAII

// ��������� for loop
void main()
{
	int a[] {1, 2, 3, 4, 5, 23,4343535,645646,45643235,234234};

	for (auto& d : a)
		cout << (d=0) << endl;
	// page 51.
	// ��������� for loop

	for (decl : coll)
		statement;
	// decl = ����
	// collection = ��� {1,2,3,4,5,6,7,8,9,10} ���.
	// statement = ����
	// ex)
	for (auto d : { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 })
		cout << d;
	save();
}
//=============================================
//			Mon Mar 21 10:43:25 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.
		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

		cout << id << " ���� ������ " << size << endl;
		return *this;
	}
};

void main()
{
	//Model a;			// ũ�� ���� ���� �⺻ ����
	//Model b(1000);		// 1000 byte ������
	//
	////cout << sizeof(a) << endl;
	////cout << sizeof(b) << endl;
	//
	//Model c = b;	// uniform initialization ���� ��������� �˸�����
	//				// = �� ����Ͽ���.
	//				// �Ҹ��ڰ� �ֱ� ������ �׾���.
	//a = c;			// a.operator(c);

	{Model a{ 100 }; }
	Model b{ 123 };

	save();
}
