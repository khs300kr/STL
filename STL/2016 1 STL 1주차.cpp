//----------------------------------------------------
//	2016.1.STL ��23 ��23
//
//	3. 7 �� (2����/1��)
//----------------------------------------------------
// �ҽ����� �ϵ忡 ����, ��¥ �ٿ���, CPP ���� �и�
// ����,���� �ѹ� ����
//----------------------------------------------------

#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;


//void main()
//{
//	int x[2] = { 10,20 };
//
//	int&p = x[0];
//	++p;			// ���� �ٲ��. (���۷����� ����Ʈ�� ����)
//	p = 333;
//
//	cout << x[0] << ", " << x[1] << endl;
//}


class Monster
{
private:
	string strName;
	int iNumber;
public:
	Monster(string _strName, int _iNumber)
		:strName(_strName), iNumber(_iNumber)
	{}
	~Monster()
	{}
public:
	string Get_Name(void) const { return strName; }
	int Get_Number(void) const { return iNumber; }
};

template <class T>
void change(T& a, T& b) // ������ ���縦 �����ϱ����ؼ� ���ȴ�.
{
	T t = a;
	a = b;
	b = t;
}

ostream &operator<<(ostream &os, const Monster &m)
{
	os << m.Get_Name() << " , " << m.Get_Number() << endl;

	return os;
}

void main()
{
	// �ǽ�
	Monster x("���", 333), y("ogre", 777);
	change(x, y);

	cout << x << y << endl;

	save();
}


//=============================================
//  		Mon Mar  7 12:10:13 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

int compare(const void *a, const void *b);

void main()
{
	int a[] = { 2,4,6,8,10,1,3,5,7,9 };
	
	// C�Լ� qsort�� �̿��Ͽ� a�� �����Ͻÿ�.

	// ���� compare�� main() �ȿ��� ������ �� qosrt�� �Ѱܺ���.

	qsort(a,10,sizeof(a[0]),compare);
	
	for (auto d : a)
		cout << d << " ";
	cout << endl;

	//save();
}

int compare(void *first, void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

//=============================================
//			Wed Mar 09 10:37:51 2016
//=============================================
#include<iostream>
#include"save.h"

using namespace std;

int test()
{
	cout << "�׽�Ʈ �Լ� ��" << endl;
	return 3;
}

void main()
{
	test();
	(*test)();
	// ����ǥ���̴�.

	save();
}


//=============================================
//			Wed Mar 09 10:37:51 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int compare(const void *a, const void *b);
int test();

void main()
{
	int a[] = { 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 };

	// C�Լ� qsort�� �̿��Ͽ� a�� �����Ͻÿ�.

	// ���� test�� main() �ȿ��� ������ �� qosrt�� �Ѱܺ���.

	//int (const void *, const void *) -> compare�� �Լ� Ÿ���̴�.

	int(*test)(const void*, const void*) = compare;
	// This is function pointer.
	// auto test = compare;
	// auto�� �뵵.

	qsort(a, 10, sizeof(a[0]), test);

	for (auto d : a)
		cout << d << " ";
	cout << endl;

	//save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int test()
{
	cout << "�Լ� ��ü �� " << endl;
	return 3;
}



//=============================================
//			Wed Mar 09 11:00:56 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;

// ����, ���� �ѹ� �� �������.
// ���� ���� ������ ������ ���� - 10000
// C++11�� ������ ������� - #include<random>

int compare(const void *first, const void *seocnd);

void main()
{
	srand((unsigned int)time(NULL));
	int a[10000];

	// C++11 ����
	// �������� ������ ����Ȯ�������� ����Ͽ� �����Ѵ�.
	default_random_engine dre;

	// a�� ���� ������ ������ ä����.
	for (auto& d : a)
		d = rand() % 100;
	// 17�� p.987�� rand() �Լ��� �����ִ�.
	// rand()�ٿ� rand�� �Ѵ�.

	// C�Լ� qosrt�� �̿��Ͽ� a�� �����Ͻÿ�.
	qsort(a, 10000, 4, compare);

	for (auto d : a)
		cout << d << " ";	// �������� ����
	cout << endl;
	save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

//=============================================
//			Wed Mar 09 11:00:56 2016
//=============================================
// ����, ���� �ѹ� �� �������.
// ���� ���� ������ ������ ���� - 10000
// C++11�� ������ ������� - #include<random>
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;
int compare(const void *first, const void *seocnd);

void main()
{
	srand((unsigned int)time(NULL));
	int a[1000];

	// C++11 ����
	// �������� ������ ����Ȯ�������� ����Ͽ� �����Ѵ�.
	default_random_engine dre;
	normal_distribution<> nd(0, 6.0);
	// 2��° ���� �ñ׸�
	// ���� ������� Ȯ���������� Ȱ�� �����ϴ�.

	// a�� ���� ������ ������ ä����.
	for (auto& d : a)
		d = nd(dre);
	// 17�� p.987�� rand() �Լ��� �����ִ�.
	// rand()�ٿ� rand�� �Ѵ�.
 
	// C�Լ� qosrt�� �̿��Ͽ� a�� �����Ͻÿ�.
	qsort(a, 1000, 4, compare);

	for (auto d : a)
		cout << d << " ";	// �������� ����
	cout << endl;
	save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
//=============================================
//			Wed Mar 09 11:07:28 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;

// ����, ���� �ѹ� �� �������.
// ���� ���� ������ ������ ���� - 10000
// C++11�� ������ ������� - #include<random>

int compare(const void *first, const void *seocnd);

void main()
{
	srand((unsigned int)time(NULL));
	int a[1000];

	// C++11 ����
	// �������� ������ ����Ȯ�������� ����Ͽ� �����Ѵ�.
	default_random_engine dre;
	uniform_int_distribution<> ui(-100,100);
	// Ȯ�������� �ƴ� ������.
	// �������� �������!
	// ���� ������� Ȯ���������� Ȱ�� �����ϴ�.

	// a�� ���� ������ ������ ä����.
	for (auto& d : a)
		d = ui(dre);
	// 17�� p.987�� rand() �Լ��� �����ִ�.
	// rand()�ٿ� rand�� �Ѵ�.
 
	// C�Լ� qosrt�� �̿��Ͽ� a�� �����Ͻÿ�.
	qsort(a, 1000, 4, compare);

	for (auto d : a)
		cout << d << " ";	// �������� ����
	cout << endl;
	save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
//=============================================
//			Wed Mar 09 11:17:59 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;

// ����, ���� �ѹ� �� �������.
// ���� ���� ������ ������ ���� - 10000
// C++11�� ������ ������� - #include<random>

int compare(const void *first, const void *seocnd);

void main()
{
	srand((unsigned int)time(NULL));
	// 1,000,000���� ������ �����ϰ� ����
	int *a = new int[100];
	// �̰��� for(int i=0; i < 1000000; ++i)�� ��� �ذ�.
	// �ּҸ� ����Ű�Ƿ� ������ �뺯 x.


	// C++11 ����
	// �������� ������ ����Ȯ�������� ����Ͽ� �����Ѵ�.
	default_random_engine dre;
	uniform_int_distribution<> ui(-100,100);
	// Ȯ�������� �ƴ� ������.
	// �������� �������!
	// ���� ������� Ȯ���������� Ȱ�� �����ϴ�.

	for (int i = 0; i < 100; ++i)
	{
		a[i] = ui(dre);
	}

	// a�� ���� ������ ������ ä����.
	//for (auto& d : a)
	//	d = ui(dre);
	// 17�� p.987�� rand() �Լ��� �����ִ�.
	// rand()�ٿ� rand�� �Ѵ�.
 
	// C�Լ� qosrt�� �̿��Ͽ� a�� �����Ͻÿ�.
	qsort(a, 100, 4, compare);

	//for (auto d : a)
	//	cout << d << " ";	// �������� ����

	for (int i = 0; i < 100; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	delete[] a;

	save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
//=============================================
//			Wed Mar 09 11:47:17 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;

// ����, ���� �ѹ� �� �������.
// ���� ���� ������ ������ ���� - 10000
// C++11�� ������ ������� - #include<random>

int compare(const void *first, const void *seocnd);

void main()
{
	srand((unsigned int)time(NULL));
	// 1,000,000���� ������ �����ϰ� ����
	int *a = new int[1000000];
	// �̰��� for(int i=0; i < 1000000; ++i)�� ��� �ذ�.
	// �ּҸ� ����Ű�Ƿ� ������ �뺯 x.

	// C++11 ����
	// �������� ������ ����Ȯ�������� ����Ͽ� �����Ѵ�.
	default_random_engine dre;
	uniform_int_distribution<> ui;
	// Ȯ�������� �ƴ� ������.
	// �������� �������!
	// ���� ������� Ȯ���������� Ȱ�� �����ϴ�.

	for (int i = 0; i < 1000000; ++i)
	{
		a[i] = ui(dre);
	}

	// a�� ���� ������ ������ ä����.
	//for (auto& d : a)
	//	d = ui(dre);
	// 17�� p.987�� rand() �Լ��� �����ִ�.
	// rand()�ٿ� rand�� �Ѵ�.
 
	// C�Լ� qosrt�� �̿��Ͽ� a�� �����Ͻÿ�.
	qsort(a, 1000000, 4, compare);

	//for (auto d : a)
	//	cout << d << " ";	// �������� ����

	// ������ ������ ���Ͽ� �����մϴ�... (�������)
	// ���������� �޸𸮸� �����ϸ� ����ϴµ��� �޸�
	// �Һ� ���ϴ�.
	ofstream out("������.txt",ios::binary);
	// 2������ ����Ͽ� ��Ȯ�ϰ� 400�� ����Ʈ ����
	// ���� ���ڵ带 �ۼ��Ѵ�.
	out.write((const char*)(a), sizeof(int) * 1000000);
	/*for (int i = 0; i < 1000000; ++i)
	{
		out << a[i] << " ";
	}*/
	
	//out << endl;

	delete[] a;
	save();
}

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
//=============================================
//			Wed Mar 09 11:51:30 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include"save.h"

using namespace std;

// ����, ���� �ѹ� �� �������.
// ���� ���� ������ ������ ���� - 10000
// C++11�� ������ ������� - #include<random>
// ���Ͽ� �����Ͽ���.
// ������ ������ �о����

void main()
{
	ifstream in("������.txt", ios::binary);

	int* a = new int[1000000];

	in.read((char*)a, 1000000);

	for (int i = 0; i < 100; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	delete[] a;
	
	save();
}
//=============================================
//			Wed Mar 09 12:04:14 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

// ����, ���� �ѹ� �� �������.
// ���� ���� ������ ������ ���� - 10000
// C++11�� ������ ������� - #include<random>
// ���Ͽ� �����Ͽ���.
// ������ ������ �о����

void main()
{
	int a[] = { 10,9,8,7,6,5,4,3,2,1 };
	
	// C++������ a�� ������ ���� �����Ѵ�.
	sort(a , a + 10);
	// Range ����.(������ ����, ���� ���� �ϳ��� ��)
	for (int d : a)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed Mar 09 12:12:20 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

// ����, ���� �ѹ� �� �������.
// ���� ���� ������ ������ ���� - 10000
// C++11�� ������ ������� - #include<random>
// ���Ͽ� �����Ͽ���.
// ������ ������ �о����

int f(int a, int b)
{
	return a > b;
}

void main()
{
	int a[] = { 10,19,8,7,6,5,4,3,2,51 };
	
	// C++������ a�� ������ ���� �����Ѵ�.
	// ������������ �����غ���.
	sort(a, a + 10, f);
	// �Լ���� 3�������ڸ� ����.
	// Range ����.(������ ����, ���� ���� �ϳ��� ��)
	// ���ٷ� �Լ�������ʹ�. �����Լ��� ����!!
	for (int d : a)
		cout << d << " ";
	cout << endl;
	save();

}
//=============================================
//			Wed Mar 09 12:13:40 2016
//=============================================
#include<iostream>
#include<ctime>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

// ����, ���� �ѹ� �� �������.
// ���� ���� ������ ������ ���� - 10000
// C++11�� ������ ������� - #include<random>
// ���Ͽ� �����Ͽ���.
// ������ ������ �о����

//int f(int a, int b)
//{
//	return a > b;
//}

void main()
{
	int a[] = { 10,19,8,7,6,5,4,3,2,51 };
	
	// C++������ a�� ������ ���� �����Ѵ�.
	// ������������ �����غ���.
	sort(a, a + 10, [](int a, int b) {
		return a > b; 
	});
	// �Լ���� 3�������ڸ� ����.
	// Range ����.(������ ����, ���� ���� �ϳ��� ��)
	// ���ٷ� �Լ�������ʹ�. �����Լ��� ����!!
	for (int d : a)
		cout << d << " ";
	cout << endl;
	save();

}
///////////////////////////////////////////////////



#include<iostream>
#include<ctime>
#include<random>
#include<algorithm>
#include"save.h"

using namespace std;

// ����, ���� �ѹ� �� �������.
// ���� ���� ������ ������ ���� - 10000
// C++11�� ������ ������� - #include<random>
// ���Ͽ� �����Ͽ���.
// ������ ������ �о����

class Wizard
{

};

void main()
{
	// ������� �̸��� ���̸� ���´�.
	Wizard a[] = { ("1��", 10), ("2��", 20), ("3��", 3) };

	// �����縦 �̸� ������������ ���� �� ���
	// �����縦 �̸� ������������ ���� �� ���

	// C�Լ��� qsort�� �ذ�.
	// ������ qsort()�� ����϶�.

	for (auto d : a)	// �� �������� �̸��� ���̸� ���
		cout << d << endl;
}
