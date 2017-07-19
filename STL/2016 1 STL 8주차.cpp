//=============================================
//			Wed Apr 27 12:06:30 2016
//=============================================
// 2016.04.27 (��)
// ��23(����)		(8�� 2��)

#include<iostream>
#include<vector>
#include<iterator>	// back_insert()
#include"save.h"

using namespace std;

template<class Iter,class Dest>
void my_copy(Iter b, Iter e, Dest d)
{
	while (b != e)
		*d++ = *b++;
}
void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;

	my_copy(v.begin(), v.end(), back_inserter(v2));
	my_copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\n"));

	for (int d : v2)
		cout << d << endl;
	save();
}
//=============================================
//			Wed Apr 27 12:08:17 2016
//=============================================
// 2016.04.27 (��)
// ��23(����)		(8�� 2��)

#include<iostream>
#include<vector>
#include<iterator>	// back_insert()
#include"save.h"

using namespace std;

template<class Iter,class Dest>
void my_copy(Iter b, Iter e, Dest d)
{
	while (b != e){
		//*d++ = *b++;
		*d = *b;
		
		d++;
		b++;
	}
}

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;

	my_copy(v.begin(), v.end(), back_inserter(v2));
	my_copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\n"));

	for (int d : v2)
		cout << d << endl;
	save();
}
//=============================================
//			Wed Apr 27 12:09:10 2016
//=============================================
// 2016.04.27 (��)
// ��23(����)		(8�� 2��)

#include<iostream>
#include<vector>
#include<iterator>	// back_insert()
#include"save.h"

using namespace std;

template<class Iter,class Dest>
void my_copy(Iter b, Iter e, Dest d)
{
	while (b != e){
		//*d++ = *b++;
		d.operator*() = b.operator*();
		d.operator++();
		b.operator++();
	}
}

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;

	my_copy(v.begin(), v.end(), back_inserter(v2));
	my_copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\n"));

	for (int d : v2)
		cout << d << endl;
	save();
}
//=============================================
//			Wed Apr 27 12:11:54 2016
//=============================================
// 2016.04.27 (��)
// ��23(����)		(8�� 2��)

#include<iostream>
#include<vector>
#include<iterator>	// back_insert()
#include"save.h"

using namespace std;

template<class Iter,class Dest>
void my_copy(Iter b, Iter e, Dest d)
{
	while (b != e){
		d.operator++(123).operator*()
			= b.operator++(123).operator*();
	}
}

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;

	my_copy(v.begin(), v.end(), back_inserter(v2));
	my_copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\n"));

	for (int d : v2)
		cout << d << endl;
	save();
}
//=============================================
//			Wed Apr 27 12:13:42 2016
//=============================================
// 2016.04.27 (��)
// ��23(����)		(8�� 2��)

#include<iostream>
#include<vector>
#include<iterator>	// back_insert()
#include"save.h"

using namespace std;

template<class Iter,class Dest>
void my_copy(Iter b, Iter e, Dest d)
{
	while (b != e){
		*d++ = *b++;
		// �Լ��� ��ΰ� �����Ѵ�.(��⸦ ĥ �� �ִ�)
		//d.operator++(123).operator*()
		//	= b.operator++(123).operator*();
	}
}

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;

	my_copy(v.begin(), v.end(), back_inserter(v2));	// ���� �ݺ���.
	my_copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\n")); // stream Iterator

	for (int d : v2)
		cout << d << endl;
	save();
}


//=============================================
//			Wed Apr 27 12:20:34 2016
//=============================================
// 2016.04.27 (��)
// ��23(����)		(8�� 2��)

#include<iostream>
#include<vector>
#include<iterator>	// back_insert()
#include"save.h"

using namespace std;

template<class Iter,class Dest>
void my_copy(Iter b, Iter e, Dest d)
{
	while (b != e){
		*d++ = *b++;
		// �Լ��� ��ΰ� �����Ѵ�.(��⸦ ĥ �� �ִ�)
		//d.operator++(123).operator*()
		//	= b.operator++(123).operator*();
	}
}

// ����� ����... ( ���ư��� �϶�)
//class my_class {
//public:
//	operator*() {}
//};

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;
	
	back_insert_iterator<vector<int>> p(v2);

	*p = 333;	// p.operator*(333);
	cout << v2[0] << endl; // p.operator*(333)
						   // {
						   //	v2.push_back(333);
						   // }
	p = 111;
	p = 222;
	++p;
	// p�� �ϰ� ����Ű�� ���� 333�� ���� �־��ָ� �ȵǰڴ�?

	// my_copy(v.begin(), v.end(), my_class());
	// �� ��° ������ back_inserter�� �ݺ��� ������̴�.
	// �ݺ��ڿ� �䱸�Ǵ� ������ *,++,== ���� ������ Ŭ�����̴�.
	// back_inserter�� ���� ������ ������ ���� 
	// �����ϴ� �������� �����Ѵ�.
	save();
}