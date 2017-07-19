//=============================================
//			Mon Apr  4 11:15:57 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// C++ 11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1.�ڿ��� ȹ���Ѵ�(HEAP)
// 2.�ڿ��� �̿��Ѵ�.
// 3 ��ȯ�Ѵ�.

class Mini
{
public:
	Mini() { cout << "ctor" << endl; }
	~Mini() { cout << "dtor" << endl; }
	void f() { cout << "member" << endl; }
};

void main()
{
	Mini* m = new Mini;
	unique_ptr<Mini> p(m); // �����͸� ���鶧 �ڿ��� ��������Ѵ�(����)


	save();
}
//=============================================
//			Mon Apr  4 11:16:45 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// C++ 11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1.�ڿ��� ȹ���Ѵ�(HEAP)
// 2.�ڿ��� �̿��Ѵ�.
// 3 ��ȯ�Ѵ�.

class Mini
{
public:
	Mini() { cout << "ctor" << endl; }
	~Mini() { cout << "dtor" << endl; }
	void f() { cout << "member" << endl; }
};

void main()
{
	Mini* m = new Mini;
	unique_ptr<Mini> p(m); // �����͸� ���鶧 �ڿ��� ��������Ѵ�(����)

	// ����
	unique_ptr<Mini> q;
	q = move(p);
	// ������ų���ִ�.

	save();
}
//=============================================
//			Mon Apr  4 11:32:55 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// C++ 11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1.�ڿ��� ȹ���Ѵ�(HEAP)
// 2.�ڿ��� �̿��Ѵ�.
// 3 ��ȯ�Ѵ�.

class Mini
{
public:
	Mini() { cout << "ctor" << endl; }
	~Mini() { cout << "dtor" << endl; }
	void f() { cout << "member" << endl; }
};

void main()
{
	shared_ptr<Mini> p(new Mini);

	// unique ptr�� 4����Ʈ�ݸ�
	// shared ptr�� �ڿ��� ������ �޶� �پ�� �ϹǷ� ��� 4����Ʈ �̻��̴�.
	// �ڿ� = AddRef (���۷����� ī���� �Ѵ�)

	cout << sizeof(p) << endl;
	// 8����Ʈ

	save();
}

//=============================================
//			Mon Apr  4 11:35:21 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// C++ 11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1.�ڿ��� ȹ���Ѵ�(HEAP)
// 2.�ڿ��� �̿��Ѵ�.
// 3 ��ȯ�Ѵ�.

class Mini
{
public:
	Mini() { cout << "ctor" << endl; }
	~Mini() { cout << "dtor" << endl; }
	void f() { cout << "member" << endl; }
};

void main()
{
	shared_ptr<Mini> p(new Mini);

	shared_ptr<Mini> q = p;
	shared_ptr<Mini> r = q;
	shared_ptr<Mini> s = p;
	shared_ptr<Mini> t = s;
	
	// unique ptr�� 4����Ʈ�ݸ�
	// shared ptr�� �ڿ��� ������ �޶� �پ�� �ϹǷ� ��� 4����Ʈ �̻��̴�.
	// �ڿ� = AddRef (���۷����� ī���� �Ѵ�)

	cout << p.use_count() << endl;
	// ����Լ� ���� (�ڿ��� ����)
	
	save();
}
//=============================================
//			Mon Apr  4 11:35:36 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// C++ 11������
// unique_ptr - �ڿ��� �����ϴ� ������
// shared_ptr - �ڿ��� �����ϴ� ������

// ������
// 1.�ڿ��� ȹ���Ѵ�(HEAP)
// 2.�ڿ��� �̿��Ѵ�.
// 3 ��ȯ�Ѵ�.

class Mini
{
public:
	Mini() { cout << "ctor" << endl; }
	~Mini() { cout << "dtor" << endl; }
	void f() { cout << "member" << endl; }
};

void main()
{
	shared_ptr<Mini> p(new Mini);

	shared_ptr<Mini> q = p;
	shared_ptr<Mini> r = q;
	shared_ptr<Mini> s = p;
	shared_ptr<Mini> t = s;
	
	// unique ptr�� 4����Ʈ�ݸ�
	// shared ptr�� �ڿ��� ������ �޶� �پ�� �ϹǷ� ��� 4����Ʈ �̻��̴�.
	// �ڿ� = AddRef (���۷����� ī���� �Ѵ�)

	s.reset();	// �ڿ��� �ϳ� �پ���.
	cout << p.use_count() << endl;
	// ����Լ� ���� (�ڿ��� ����)
	
	save();
}
//=============================================
//			Mon Apr  4 11:41:09 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// 5.3 numeroc_limits

void main()
{
	int n = 0x80000000;
	cout << "���� ���� ���� �� : " << n << endl;

	save();
}
//=============================================
//			Mon Apr  4 11:41:34 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// 5.3 numeroc_limits

void main()
{
	int n = 0x7fffffff;
	cout << "���� ���� ū �� : " << n << endl;

	save();
}
//=============================================
//			Mon Apr  4 11:42:00 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// 5.3 numeroc_limits

void main()
{
	cout << "���� ���� ū ��" << numeric_limits<int>::max() << endl;

	save();
}
//=============================================
//			Mon Apr  4 11:46:37 2016
//=============================================
#include<iostream>
#include "save.h"

using namespace std;

// 5.4 type traits(�������� Ư��)

template<class T>
void f(T t)
{

}

void main()
{
	// � �Լ��� �ִµ� �Ѱ��ִ� ���� �������̸� �� ���� ����Ű�� ����,
	// �׳� ���̶�� �� ���� ����ϴ� �Լ��� �ۼ��ϰ� �ʹ�.

	int n{ 100 };
	int*p{ &n };

	f(n);		// 100
	f(p);		// 100
	// �̷� �Լ��� ���� �� �ֳ�?? ��� ������ ����.
	save();
}
//=============================================
//			Mon Apr  4 11:57:37 2016
//=============================================
#include<iostream>
#include "save.h"

using namespace std;

// 5.4 type traits(�������� Ư��)

// ���ø� �ڵ忡���� ���޵� ������ Ÿ���� ������ �ʿ䰡 �ִ�.
// ������ Ÿ���� �����ϱ� ���� type traits�� �̿��Ѵ�.
template<class T>
void f(T t)
{
	if (is_pointer<T> ())	// ���� ���޵� T�� �ʴ� �����ʹ�?
		cout << "�����Ͱ� ���޵�" << endl;
	if (is_integral<T> ())
		cout << "������ Ÿ���� ���޵�" << endl;
}

void main()
{
	// � �Լ��� �ִµ� �Ѱ��ִ� ���� �������̸� �� ���� ����Ű�� ����,
	// �׳� ���̶�� �� ���� ����ϴ� �Լ��� �ۼ��ϰ� �ʹ�.

	int n{ 100 };
	int*p{ &n };

	f("f�� ���ڷ� �������������ٵ� ���߿� �����غ���");
	f(n);		// 100
	f(p);		// 100
	// �̷� �Լ��� ���� �� �ֳ�?? ��� ������ ����.

	save();
}

//=============================================
//			Mon Apr  4 11:57:37 2016(������)
//=============================================
#include<iostream>
#include "save.h"

using namespace std;

// 5.4 type traits(�������� Ư��)

// ���ø� �ڵ忡���� ���޵� ������ Ÿ���� ������ �ʿ䰡 �ִ�.
// ������ Ÿ���� �����ϱ� ���� type traits�� �̿��Ѵ�.
template<class T>
void f(T t)
{
	if (is_pointer<T>())	// ���� ���޵� T�� �ʴ� �����ʹ�?
	{
		cout << "�����Ͱ� ���޵�" << *t << endl;
	}
	if (is_integral<T>())
	{
		cout << "������ Ÿ���� ���޵�" << t << endl;
	}

	// t�� �������� ������?
	// ���α׷��� Ȯ��ɶ�
}

void f(int t)
{
	if (is_pointer<int>())	// ���� ���޵� T�� �ʴ� �����ʹ�?
	{
		cout << "�����Ͱ� ���޵�" << *t << endl;	// ������ ����.
	}
	if (is_integral<int>())
	{
		cout << "������ Ÿ���� ���޵�" << t << endl;
	}

	// t�� �������� ������?
	// ���α׷��� Ȯ��ɶ�
}


// ���� �����ϰ��ִ� ������ p.168���Դϴ�.

void main()
{
	// � �Լ��� �ִµ� �Ѱ��ִ� ���� �������̸� �� ���� ����Ű�� ����,
	// �׳� ���̶�� �� ���� ����ϴ� �Լ��� �ۼ��ϰ� �ʹ�.

	int n{ 100 };
	int*p{ &n };

	f(n);		// 100
	f(p);		// 100
				// �̷� �Լ��� ���� �� �ֳ�?? ��� ������ ����.

}


//=============================================
//			Mon Apr  4 12:10:40 2016
//=============================================
#include<iostream>
#include "save.h"

using namespace std;

// 5.4 type traits(�������� Ư��)

// ���ø� �ڵ忡���� ���޵� ������ Ÿ���� ������ �ʿ䰡 �ִ�.
// ������ Ÿ���� �����ϱ� ���� type traits�� �̿��Ѵ�.

template<class T>
void f(T t)
{
	f(t, is_pointer<T>());
}

template<class T>
void f(T t, true_type)
{
	cout << "������ ����(����Ű�� ��) - " << *t << endl;
}

template<class T>
void f(T t, false_type)
{
	cout << "���� ���� - " << t << endl;
}
// ���� �����ϰ��ִ� ������ p.168���Դϴ�.

void main()
{
	// � �Լ��� �ִµ� �Ѱ��ִ� ���� �������̸� �� ���� ����Ű�� ����,
	// �׳� ���̶�� �� ���� ����ϴ� �Լ��� �ۼ��ϰ� �ʹ�.

	int n{ 100 };
	int*p{ &n };

	f(n);		// 100
	f(p);		// 100

	save();
}
//=============================================
//			Mon Apr  4 12:10:40 2016 ( ���� X )
//=============================================
#include<iostream>
#include<algorithm>
#include "save.h"

using namespace std;

// �����Լ�


void main()
{
	int a[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//minmax() �Լ��� ū ���� ���� ���� ���� ã�� �ִ� �����Լ��̴�.

	pair<int, int> p = minmax(&a[0], &a[10]);
}

//=============================================
//			Wed Apr  6
//=============================================
/*
*STL = �ڷᱸ�� + �˰���
- Generic : ���� ��ü���� ������ Ÿ������ �������.
- Component : �ڷᱸ�� �����̳ʸ� �����ִ� �˰����� �ִ�.
- iterator : �ݺ��ڴ� Ŭ������ ���� �����ʹ�.(�����͵��� ����)
- Adaptor : � ������ ���ۿ� ������ �����.
- Predicates : �˰���ӿ� ���� sort�� 3���� ���� bool ��ȯ��.
� ������ �����ϴ� �Ǵ� ������,������.
- Function Object : Ŭ�����ε�, �Լ� ȣ�� �����ڸ� �����ε��ϴ�
Ŭ����, �Լ�ȣ��ó�� �θ����ִ�.
�̰� �� �ڸ��� ���ٰ� ����(�߿伺 �϶�)
- Callable type : ȣ���Ҽ� �ִ� Ÿ��.


*STL Sequence Containers
- Array : ���� �ڷᱸ��. (���ø��̱⋚���� ���¹���� �ٸ���)
-> �ִ� 100�� �̸� �̰�����. (���Ѽ�)
- vector : ���������� �þ �� �ִ�. (���Ѽ�)
- deque(��) : ���� ������ �Ѵ� �þ �� �ִ�.

����Ʈ�� sort ���� X , ����Լ� ���!
- forward_list : �����θ� ���� ����Ʈ
- list : ��� ����


*STL Associative Containers
- set,multiset,map,multimap
- multi�� �Ȱ��� Ű���� �־��ټ��ִ� ǥ���̴�.
- �ڱ� ���� ��Ŀ� ���� ������ �ȴ�. Set��������
- ���鶧 ���� �� �� �ִ�.
- ���Ի����� ��ȿ��������, �����͸� ����ϰ� �̸� ������ �ϴ±��


*STL Unordered Associative Containers
- unordered_set , unordered_map : �ؽ� ��, �ؽ� ���̴�.
- ���� Associative ���� �� ���� ã�����ؼ�, (Ư��,�̻�����ȯ�濡��)

=> 13���� ǥ�� �����̳ʰ� �ִ�.
*/
//=============================================
//			Wed Apr 06 11:32:53 2016
//=============================================
#include<iostream>
#include<array>
#include"save.h"
using namespace std;

// array �����̳�
// STL ǥ�� �����̳��̸� ���� �迭(�����Ͻ� ũ�Ⱑ �������� ��)�̴�.

void main()
{
	// ���� 10���� ��� array�� ������.
	array<int, 10> a {};
	// �̰��� �ڷ����� array<int,10> �̴�.
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << " ";
	cout << endl;

	save();
}
//=============================================
//			Wed Apr 06 11:37:14 2016
//=============================================
#include<iostream>
#include<array>
#include<algorithm>
#include"save.h"
using namespace std;

// array �����̳�
// STL ǥ�� �����̳��̸� ���� �迭(�����Ͻ� ũ�Ⱑ �������� ��)�̴�.

void main()
{
	// ���� 10���� ��� array�� ������.
	array<int, 10> a{{1, 20, 3, 40, 5, 60, 7, 80, 9, 100}};
	// �̰��� �ڷ����� array<int,10> �̴�.

	sort(a.begin(), a.end(), [](const int &a, const int &b){
		return a > b;
	});
	
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << " ";
	cout << endl;

	save();
}
//=============================================
//			Wed Apr 06 11:37:24 2016
//=============================================
#include<iostream>
#include<array>
#include<algorithm>
#include"save.h"
using namespace std;

// array �����̳�
// STL ǥ�� �����̳��̸� ���� �迭(�����Ͻ� ũ�Ⱑ �������� ��)�̴�.

void main()
{
	// ���� 10���� ��� array�� ������.
	array<int, 10> a{{1, 20, 3, 40, 5, 60, 7, 80, 9, 100}};
	// �̰��� �ڷ����� array<int,10> �̴�.

	sort(a.begin(), a.end());
	
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << " ";
	cout << endl;

	save();
}
//=============================================
//			Wed Apr 06 11:39:29 2016
//=============================================
#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
#include"save.h"
using namespace std;

// array �����̳�
// STL ǥ�� �����̳��̸� ���� �迭(�����Ͻ� ũ�Ⱑ �������� ��)�̴�.

void main()
{
	// ���� 10���� ��� array�� ������.
	vector<int> a{{1, 20, 3, 40, 5, 60, 7, 80, 9, 100}};
	// �̰��� �ڷ����� array<int,10> �̴�.

	sort(a.begin(), a.end(), [](const int &a, const int &b){
		return a > b;
	});
	
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << " ";
	cout << endl;

	save();
}
//=============================================
//			Wed Apr 06 11:42:41 2016
//=============================================
#include<iostream>
#include<array>
#include<vector>
#include<list>
#include<algorithm>
#include"save.h"
using namespace std;

// array �����̳�
// STL ǥ�� �����̳��̸� ���� �迭(�����Ͻ� ũ�Ⱑ �������� ��)�̴�.

void main()
{
	// ���� 10���� ��� array�� ������.
	list<int> a{{1, 20, 3, 40, 5, 60, 7, 80, 9, 100}};
	// �̰��� �ڷ����� array<int,10> �̴�.
	
	for (auto i = a.begin(); i != a.end(); ++i)
		cout << *i << " ";
	cout << endl;

	save();
}
//=============================================
//			Wed Apr 06 11:42:51 2016
//=============================================
#include<iostream>
#include<array>
#include<vector>
#include<list>
#include<set>
#include<algorithm>
#include"save.h"
using namespace std;

// array �����̳�
// STL ǥ�� �����̳��̸� ���� �迭(�����Ͻ� ũ�Ⱑ �������� ��)�̴�.

void main()
{
	// ���� 10���� ��� array�� ������.
	set<int> a{{1, 20, 3, 40, 5, 60, 7, 80, 9, 100}};
	// �̰��� �ڷ����� array<int,10> �̴�.
	
	for (auto i = a.begin(); i != a.end(); ++i)
		cout << *i << " ";
	cout << endl;

	save();
}
//=============================================
//			Wed Apr 06 11:53:06 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include"save.h"
using namespace std;

// Ű���忡�� ���ϴ� ��ŭ�� �ܾ �Է¹޾Ƽ� �����ض�.
// ������������ ������ ��
// ȭ�鿡 ��ü�� ����϶�.

// �̹����� ��� �ذ��� �� ���� �غ���.

void main()
{
	vector<string> v_str;
	string strInput;
	// ���Ϳ� ���ϴ� �ڷḦ �޴´�.
	while (true)
	{
		cin >> strInput;
		v_str.push_back(strInput);
		
		if (strInput == "1")
			break;
	}
	// ������ �ڷḦ �����Ѵ�.
	sort(v_str.begin(), v_str.end());
	// ���ĵ� ���͸� ����Ѵ�.
	vector<string>::iterator iter = v_str.begin();
	for (; iter != v_str.end(); ++iter)
	{
		cout << *iter << endl;
	}
	save();
}
//=============================================
//			Wed Apr 06 11:56:38 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include"save.h"
using namespace std;

// Ű���忡�� ���ϴ� ��ŭ�� �ܾ �Է¹޾Ƽ� �����ض�. (ctrl+z)
// ������������ ������ ��
// ȭ�鿡 ��ü�� ����϶�.

// �̹����� ��� �ذ��� �� ���� �غ���.

void main()
{
	vector<string> v_str;

	// ���Ϳ� ���ϴ� �ڷḦ �޴´�.
	copy(istream_iterator<string>(cin), istream_iterator<string>(),
		back_inserter(v_str));

	// ������ �ڷḦ �����Ѵ�.
	sort(v_str.begin(), v_str.end());

	// ���ĵ� ���͸� ����Ѵ�.
	copy(v_str.begin(), v_str.end(), 
		ostream_iterator<string>(cout, " "));

	save();
}
//=============================================
//			Wed Apr 06 12:02:36 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<iterator>
#include"save.h"
using namespace std;

// Ű���忡�� ���ϴ� ��ŭ�� �ܾ �Է¹޾Ƽ� �����ض�. (ctrl+z)
// ������������ ������ ��
// ȭ�鿡 ��ü�� ����϶�.

// �̹����� ��� �ذ��� �� ���� �غ���.

void main()
{
	set<string> v_str;

	// ���Ϳ� ���ϴ� �ڷḦ �޴´�.
	copy(istream_iterator<string>(cin), istream_iterator<string>(),
		inserter(v_str,v_str.begin()));

	// ���ĵ� ���͸� ����Ѵ�.
	copy(v_str.begin(), v_str.end(), 
		ostream_iterator<string>(cout, " "));

	save();
}
//=============================================
//			Wed Apr 06 12:13:12 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include"save.h"
using namespace std;

// pair<string,scord>�� �ڷḦ vector�� �־� �����ϰ� �ʹ�.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;

	v.push_back(make_pair("����", 100));
	v.push_back(make_pair("����", 200));
	v.push_back(make_pair("���", 300));
	v.push_back(make_pair("����", 400));
	v.push_back(make_pair("����", 500));

	// �̸������� �����Ͽ� ����� ������.
	sort(v.begin(), v.end());

	for (auto d : v)
		cout << d.first << ", " << d.second << endl;
	cout << endl;

	// ���������� �����Ͽ� ����� ������.
	sort(v.begin(), v.end(), [](const Score &a, const Score& b){
		return a.second > b.second;
	});

	for (auto d : v)
		cout << d.first << ", " << d.second << endl;
	save();
}

// �̸������� �����Ͽ� ����� ������.
sort(v.begin(), v.end());

for (Score d : v)
cout << Score << endl;
cout << endl;

// ���������� �����Ͽ� ����� ������.
sort(v.begin(), v.end(), [](const Score &a, const Score& b){
	return a.second > b.second;
});

for (Score d : v)
cout << Score << endl;

// �ѹ��غ��� ( cout << Score << endl; )
//=============================================
//			Wed Apr 06 12:17:08 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include"save.h"
using namespace std;

// pair<string,scord>�� �ڷḦ vector�� �־� �����ϰ� �ʹ�.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;

	v.push_back(make_pair("����", 100));
	v.push_back(make_pair("����", 200));
	v.push_back(make_pair("���", 300));
	v.push_back(make_pair("����", 400));
	v.push_back(make_pair("����", 500));

	// �̸������� �����Ͽ� ����� ������.
	sort(v.begin(), v.end());

	// ���������� �����Ͽ� ����� ������.
	sort(v.begin(), v.end(), [](const Score &a, const Score& b){
		return a.second > b.second;
	});

	// STL �ݺ��ڸ� �̿��� �����̳� ���� ����
	vector<Score>::iterator iter = v.begin();
	for (; iter != v.end(); ++iter)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	save();
}