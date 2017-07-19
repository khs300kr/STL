
//=============================================
//			Mon May 30 10:48:31 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

//-------------------------------------------------------------
// 13�� 1
// 5. 30 ��23 (����)
// Ietrators are generalization of pointers
// that allow a C++ program to work with different data structures
// (Containers) in a uniform manner.

// �ݺ��ڴ� �����͸� �Ϲ�ȭ�����ν� C++ ���α׷����� ���� �ٸ�
// ������ ������
//-------------------------------------------------------------

// �˰��� �Լ� distance�� �� �ݺ��� ���� �Ÿ��� ����� �ִ� �Լ��̴�.

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };

	int iD = distance(v.begin(), v.end()); 
	cout << iD << endl;
	save();
}
//=============================================
//			Mon May 30 10:48:55 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };

	int iD = distance(v.end(), v.begin()); 
	cout << iD << endl;
	save();
}
//=============================================
//			Mon May 30 10:50:27 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

void main()
{
	set<int> v{ 1, 2, 3, 4, 5 };

	//int iD = distance(v.end(), v.begin()); 
	// Set is not working with end to begin.
	
	//cout << iD << endl;
	save();
}
//=============================================
//			Mon May 30 10:55:42 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class Iter>
int dist(Iter b, Iter e)
{
	int cnt{};
	while (b != e)	{
		++b;
		++cnt;
	}
	return cnt;
}

void main()
{
	set<int> v{ 1, 2, 3, 4, 5 };
	
	int d = dist(v.begin(), v.end());

	cout << d << endl;
	save();
}

//=============================================
//			Mon May 30 11:16:38 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

class Test{
public:
	void operator++(){ cout << "���� �ִ� �Լ� " << endl; }
	void operator++(int){ cout << "���� �ִ� �Լ�" << endl; }
};
void main()
{
	//
	Test a;
	++a; // a.operator++ (���� X) - ������(++) �Ĵ���(=)
	a++; // a.operator++ (���� O) - ������(=)  �Ŀ���(++)
	save();
}
//=============================================
//			Mon May 30 11:17:44 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

class Test{
public:
	void operator++(){ cout << "���� �ִ� �Լ� " << endl; }
	void operator++(int){ cout << "���� �ִ� �Լ�" << endl; }
};

void f() { cout << "f()" << endl; }
void f(int) { cout << "f(int)" << endl; }
void main()
{
	f();
	f(1);
	// ���ڸ� ����ϴ°��� �ƴ϶�, ã�ư��� �뵵�� ���δ�.
	save();
}
//=============================================
//			Mon May 30 11:39:57 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class Iter>
int dist(Iter b, Iter e)
{
	// ���޵� ���ڷκ��� �� ���ڰ� � �Ӽ��� ������ �Ǵ��� �� �ִ�.
	// (528��)
	// �ݺ��ڷκ��� ���� Ư���� �˾Ƴ� �� �ִ�.
	iterator_traits<Iter>::iterator_category;
	iterator_traits<Iter>::value_type;
	iterator_traits<Iter>::difference_type;
	iterator_traits<Iter>::pointer;
	iterator_traits<Iter>::reference;

	//if (){
		int cnt{};
		while (b != e)	{
			++b;
			++cnt;
		}
		return cnt;
	//}
	//else return e - b;
}

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	set<int> s{ 1, 2, 3, 4, 5 };

	int d = dist(v.begin(), v.end());
	cout << "�Ÿ���" << d << endl;
	save();
}
//=============================================
//			Mon May 30 11:49:55 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class Iter>
int dist(Iter b, Iter e)
{
	// ���޵� ���ڷκ��� �� ���ڰ� � �Ӽ��� ������ �Ǵ��� �� �ִ�.
	// (528��)
	// �ݺ��ڷκ��� ���� Ư���� �˾Ƴ� �� �ִ�.
	//iterator_traits<Iter>::iterator_category; --> �ڷ���
	// �̰��� ���� �ں��ڰ� � �����ΰ��� ��Ÿ����.
	// �ݺ����� ������ ���� �Ÿ� ����� �޶����� �Ѵ�.
	// �̰��� �ٸ� �Լ��� ȣ���Ͽ� �ذ��Ѵ�.
	return dist(b, e, iterator_traits<Iter>::iterator_category()); 
	// ���� 3�� �ٸ��Լ� �����ε�
}

// ������ ���
template<class Iter>
int dist(Iter b, Iter e, random_access_iterator_tag)
{
	cout << "���� �׼��� �ݺ��ڰ� ���ڷ� ���� �Ǿ���" << endl;
	return e - b;
}

// 527��
// Bidirectional (�����)
// Input (�Է¸�)
// Ouput (��¸�)

// ���Ͱ� �ƴ� ���
template<class Iter>
int dist(Iter b, Iter e, forward_iterator_tag)
{
	int cnt{ 0 };
	cout << "������ �ݺ��ڰ� ���޵Ǿ���" << endl;
	while (b != e){
		cnt++;
		b++;
	}
	return cnt;
}

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	set<int> s{ 1, 2, 3, 4, 5 };

	int d = dist(v.end(), v.begin());
	cout << "�Ÿ���" << d << endl;
	save();
}
//=============================================
//			Mon May 30 12:04:38 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class Iter>
int dist(Iter b, Iter e)
{
	return dist(b, e, iterator_traits<Iter>::iterator_category());
}

// ������ ���
template<class Iter>
int dist(Iter b, Iter e, random_access_iterator_tag)
{
	cout << "���� �׼��� �ݺ��ڰ� ���ڷ� ���� �Ǿ���" << endl;
	return e - b;
}

// ���Ͱ� �ƴ� ���
template<class Iter>
int dist(Iter b, Iter e, forward_iterator_tag)
{
	int cnt{ 0 };
	cout << "������ �ݺ��ڰ� ���޵Ǿ���" << endl;
	while (b != e){
		cnt++;
		b++;
	}
	return cnt;
}

void main()
{
	int v[] {1, 2, 3};

	int d = dist(v+3,v);
	cout << "�Ÿ���" << d << endl;
	save();
}
//=============================================
//			Mon May 30 12:06:08 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class Iter>
int dist(Iter b, Iter e)
{
	return dist(b, e, iterator_traits<Iter>::iterator_category());
}

// ������ ���
template<class Iter>
int dist(Iter b, Iter e, random_access_iterator_tag)
{
	cout << "���� �׼��� �ݺ��ڰ� ���ڷ� ���� �Ǿ���" << endl;
	return e - b;
}

// ���Ͱ� �ƴ� ���
template<class Iter>
int dist(Iter b, Iter e, forward_iterator_tag)
{
	int cnt{ 0 };
	cout << "������ �ݺ��ڰ� ���޵Ǿ���" << endl;
	while (b != e){
		cnt++;
		b++;
	}
	return cnt;
}

void main()
{
	int a = 10;
	int b = 20;

	int d = dist(&a,&b);
	cout << "�Ÿ���" << d << endl;
	save();
}
//=============================================
//			Mon May 30 12:08:55 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class Iter>
int dist(Iter b, Iter e)
{
	return dist(b, e, iterator_traits<Iter>::iterator_category());
}

// ������ ���
template<class Iter>
int dist(Iter b, Iter e, random_access_iterator_tag)
{
	cout << "���� �׼��� �ݺ��ڰ� ���ڷ� ���� �Ǿ���" << endl;
	return e - b;
}

// ���Ͱ� �ƴ� ���
template<class Iter>
int dist(Iter b, Iter e, forward_iterator_tag)
{
	int cnt{ 0 };
	cout << "������ �ݺ��ڰ� ���޵Ǿ���" << endl;
	while (b != e){
		cnt++;
		b++;
	}
	return cnt;
}

// *�� �ݺ����� Ư���� ��� ���� �ֱ⋚����
// iterator_tranits<T*>�� ���� specialization �Ǿ��ֱ� �����̴�.
// �ᱹ 9�忡���� 527���� �����߿��ϴ�.
void main()
{
	int a = 10;
	int b = 20;
	cout << &a << endl;
	cout << &b << endl;

	int d = dist(&a,&b);
	cout << "�Ÿ���" << d << endl;
	save();
}
//=============================================
//			Wed Jun 01 11:05:47 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class Bi_Iterator>	// ����� �ݺ���.
void myreverse(Bi_Iterator beg,Bi_Iterator end)
{
	// ���ҵ��� ������ ������.
	iterator_traits<Bi_Iterator>::difference_type 
		n = distance(beg, end);
	cout << "�ٲ���� ������ �� : " << n << endl;

	while ( n > 0 )
	{
		// Swap �ϱ� ���� �ӽ� ����.
		iterator_traits<Bi_Iterator>::value_type 
			tmp = *beg;
		*beg++ = *--end;
		*end = tmp;
		n -= 2;
	}
	
}
void main()
{
	// �˰��� �Լ� revese()�� ���� [b,e)�� ���� ������
	// �ݴ�� �ٲٴ� �Լ��̴�.
	// �� �Լ��� ���� �����϶�.
	vector<int> v{ 1, 2, 3, 4, 5 };
	//reverse()
	myreverse(v.begin(), v.end());
	for (int d : v)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed Jun 01 11:16:10 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class Fow_Iterator>	// ������ �ݺ���.
void shift_left(Fow_Iterator beg, Fow_Iterator end)
{
	while (beg != end)
	{

	}
	
}

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// �ݺ��ڸ� ���ڷ� �޾� �������� ���Ҹ� �� �ڸ� �̵� ��Ű�� �Լ��� �ۼ��϶�.
	//shift_left(v.begin(), v.end());
	rotate(v.begin(), v.begin() + 1, v.end());
	
	// 2,3,4,5,6,7,8,9,10,1
	for (int d : v)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed Jun 01 11:33:17 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

using namespace std;

template<class FwdIter>	// ������ �ݺ���.
void shift_left(FwdIter beg, FwdIter end)
{
	auto d = distance(beg, end);

	auto tmp = *beg;
	for (int i = 0; i < d - 1;++i)
	{
		*beg++ = *(beg+1);
	}
	*beg = tmp;
}

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// �ݺ��ڸ� ���ڷ� �޾� �������� ���Ҹ� �� �ڸ� �̵� ��Ű�� �Լ��� �ۼ��϶�.
	shift_left(v.begin(), v.end());
	//rotate(v.begin(), v.begin() + 1, v.end());
	
	// 2,3,4,5,6,7,8,9,10,1
	for (int d : v)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed Jun 01 11:36:52 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<forward_list>
#include"save.h"

using namespace std;

template<class FwdIter>	// ������ �ݺ���.
void shift_left(FwdIter beg, FwdIter end)
{
	// 528���� ����.
	iterator_traits<int*>::difference_type
		d = distance(beg, end);

	auto tmp = *beg;
	auto mid = beg;
	mid++;
	for (int i = 0; i < d - 1;++i)
	{
		*beg++ = *(mid++);
	}
	*beg = tmp;
}

void main()
{
	forward_list<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// �ݺ��ڸ� ���ڷ� �޾� �������� ���Ҹ� �� �ڸ� �̵� ��Ű�� �Լ��� �ۼ��϶�.
	shift_left(v.begin(), v.end());
	//rotate(v.begin(), v.begin() + 1, v.end());
	

	// �� ���α׷��� �� ����Ǵ°�?
	// �����ʹ� �ݺ��ڸ� ������� Ư���� ���� �ֱ� ������
	// �������� ���� ���� �Ϲ�ȭ�� ����.
	// ���������� - �ݺ��� ������ ����.
	
	// 2,3,4,5,6,7,8,9,10,1
	for (int d : v)
		cout << d << " ";
	cout << endl;
	save();
}

//=============================================
//			Wed Jun 01 11:36:52 2016
//=============================================
// ������ �ȳ��´�. �������� �ֱ�.
#include<iostream>
#include<algorithm>
#include<vector>
#include"save.h"

using namespace std;

// 531��.
// ǥ�ع����� ��
// ����ڰ� �ڽ��� ���� ����Ʈ���� ��ȸ�� �� �ִ�
// BinaryTreeIterator�� ���� �Ѵٰ� �����غ���.
template<class T>
class BinaryTreeIterator<T>
{

};

template<class T>
struct iterator_traits<BinaryTreeIterator<T>> // 1.
{
	// 5���� type
	typedef ptrdiff_t		difference;
	typedef T				value_type;
	typedef T*				pointer;
	typedef T&				reference;
	typedef bidirectional_iterator_tag
		iterator_category;
};
class MyIter
{
private:
public:

};

// �̿� ���� ������ ���� ������

// 531�� �Ʒ��κа� ���� Ŭ������ ��ӹ޾� ���� ���� �ִ�.
// 532�ʿ��� ����Ǵ� ����� ���� �ݺ��� Ŭ������ �� �� �ִ�.

void main()
{
	// ������ �ݺ��ڸ� ����� �ʹ�. ��� �ϸ� �ǳ�?
	// 1. iterator_traits ������ ���� �ʼ� �ټ����� �ڷ����� �����Ѵ�.
	// 2. iterator_traits ������ ���� (�κ�) Ư��ȭ�� �����Ѵ�.


}