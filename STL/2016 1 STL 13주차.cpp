
//=============================================
//			Mon May 30 10:48:31 2016
//=============================================
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include"save.h"

//-------------------------------------------------------------
// 13주 1
// 5. 30 월23 (월수)
// Ietrators are generalization of pointers
// that allow a C++ program to work with different data structures
// (Containers) in a uniform manner.

// 반복자는 포인터를 일반화함으로써 C++ 프로그램에서 서로 다른
// 데이터 구조를
//-------------------------------------------------------------

// 알고리즘 함수 distance는 두 반복자 간의 거리를 계산해 주는 함수이다.

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
	void operator++(){ cout << "인자 있는 함수 " << endl; }
	void operator++(int){ cout << "인자 있는 함수" << endl; }
};
void main()
{
	//
	Test a;
	++a; // a.operator++ (인자 X) - 선연산(++) 후대입(=)
	a++; // a.operator++ (인자 O) - 선대입(=)  후연산(++)
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
	void operator++(){ cout << "인자 있는 함수 " << endl; }
	void operator++(int){ cout << "인자 있는 함수" << endl; }
};

void f() { cout << "f()" << endl; }
void f(int) { cout << "f(int)" << endl; }
void main()
{
	f();
	f(1);
	// 인자를 사용하는것이 아니라, 찾아가는 용도로 쓰인다.
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
	// 전달된 인자로부터 그 인자가 어떤 속성을 갖는지 판단할 수 있다.
	// (528쪽)
	// 반복자로부터 다음 특성을 알아낼 수 있다.
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
	cout << "거리는" << d << endl;
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
	// 전달된 인자로부터 그 인자가 어떤 속성을 갖는지 판단할 수 있다.
	// (528쪽)
	// 반복자로부터 다음 특성을 알아낼 수 있다.
	//iterator_traits<Iter>::iterator_category; --> 자료형
	// 이것은 현재 박본자가 어떤 종류인가를 나타낸다.
	// 반복자의 종류에 따라 거리 계산이 달라져야 한다.
	// 이것은 다른 함수를 호출하여 해결한다.
	return dist(b, e, iterator_traits<Iter>::iterator_category()); 
	// 인자 3개 다른함수 오버로딩
}

// 벡터인 경우
template<class Iter>
int dist(Iter b, Iter e, random_access_iterator_tag)
{
	cout << "랜덤 액세스 반복자가 인자로 전달 되었다" << endl;
	return e - b;
}

// 527쪽
// Bidirectional (양방향)
// Input (입력만)
// Ouput (출력만)

// 벡터가 아닌 경우
template<class Iter>
int dist(Iter b, Iter e, forward_iterator_tag)
{
	int cnt{ 0 };
	cout << "순방향 반복자가 전달되었다" << endl;
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
	cout << "거리는" << d << endl;
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

// 벡터인 경우
template<class Iter>
int dist(Iter b, Iter e, random_access_iterator_tag)
{
	cout << "랜덤 액세스 반복자가 인자로 전달 되었다" << endl;
	return e - b;
}

// 벡터가 아닌 경우
template<class Iter>
int dist(Iter b, Iter e, forward_iterator_tag)
{
	int cnt{ 0 };
	cout << "순방향 반복자가 전달되었다" << endl;
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
	cout << "거리는" << d << endl;
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

// 벡터인 경우
template<class Iter>
int dist(Iter b, Iter e, random_access_iterator_tag)
{
	cout << "랜덤 액세스 반복자가 인자로 전달 되었다" << endl;
	return e - b;
}

// 벡터가 아닌 경우
template<class Iter>
int dist(Iter b, Iter e, forward_iterator_tag)
{
	int cnt{ 0 };
	cout << "순방향 반복자가 전달되었다" << endl;
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
	cout << "거리는" << d << endl;
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

// 벡터인 경우
template<class Iter>
int dist(Iter b, Iter e, random_access_iterator_tag)
{
	cout << "랜덤 액세스 반복자가 인자로 전달 되었다" << endl;
	return e - b;
}

// 벡터가 아닌 경우
template<class Iter>
int dist(Iter b, Iter e, forward_iterator_tag)
{
	int cnt{ 0 };
	cout << "순방향 반복자가 전달되었다" << endl;
	while (b != e){
		cnt++;
		b++;
	}
	return cnt;
}

// *는 반복자의 특성을 모두 갖고 있기떄문에
// iterator_tranits<T*>에 대해 specialization 되어있기 떄문이다.
// 결국 9장에서는 527쪽이 가장중요하다.
void main()
{
	int a = 10;
	int b = 20;
	cout << &a << endl;
	cout << &b << endl;

	int d = dist(&a,&b);
	cout << "거리는" << d << endl;
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

template<class Bi_Iterator>	// 양방향 반복자.
void myreverse(Bi_Iterator beg,Bi_Iterator end)
{
	// 원소들의 갯수를 세보자.
	iterator_traits<Bi_Iterator>::difference_type 
		n = distance(beg, end);
	cout << "바꿔야할 원소의 수 : " << n << endl;

	while ( n > 0 )
	{
		// Swap 하기 위한 임시 변수.
		iterator_traits<Bi_Iterator>::value_type 
			tmp = *beg;
		*beg++ = *--end;
		*end = tmp;
		n -= 2;
	}
	
}
void main()
{
	// 알고리즘 함수 revese()는 구간 [b,e)의 원소 순서를
	// 반대로 바꾸는 함수이다.
	// 이 함수를 직접 구현하라.
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

template<class Fow_Iterator>	// 순방향 반복자.
void shift_left(Fow_Iterator beg, Fow_Iterator end)
{
	while (beg != end)
	{

	}
	
}

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 반복자를 인자로 받아 왼쪽으로 원소를 한 자리 이동 시키는 함수를 작성하라.
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

template<class FwdIter>	// 순방향 반복자.
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
	// 반복자를 인자로 받아 왼쪽으로 원소를 한 자리 이동 시키는 함수를 작성하라.
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

template<class FwdIter>	// 순방향 반복자.
void shift_left(FwdIter beg, FwdIter end)
{
	// 528쪽의 내용.
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
	// 반복자를 인자로 받아 왼쪽으로 원소를 한 자리 이동 시키는 함수를 작성하라.
	shift_left(v.begin(), v.end());
	//rotate(v.begin(), v.begin() + 1, v.end());
	

	// 이 프로그램은 왜 실행되는가?
	// 포인터는 반복자를 갖춰야할 특성을 갖고 있기 때문에
	// 포인터의 폭을 넓혀 일반화한 개념.
	// 디자인패턴 - 반복자 패턴이 존재.
	
	// 2,3,4,5,6,7,8,9,10,1
	for (int d : v)
		cout << d << " ";
	cout << endl;
	save();
}

//=============================================
//			Wed Jun 01 11:36:52 2016
//=============================================
// 시험은 안나온다. 전문적인 애기.
#include<iostream>
#include<algorithm>
#include<vector>
#include"save.h"

using namespace std;

// 531쪽.
// 표준문서의 예
// 사용자가 자신이 만든 이진트리를 순회할 수 있는
// BinaryTreeIterator를 정의 한다고 생각해보자.
template<class T>
class BinaryTreeIterator<T>
{

};

template<class T>
struct iterator_traits<BinaryTreeIterator<T>> // 1.
{
	// 5가지 type
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

// 이와 같이 정의할 수도 있지만

// 531쪽 아랫부분과 같이 클래스를 상속받아 만들 수도 있다.
// 532쪽에서 실행되는 사용자 정의 반복자 클래스를 볼 수 있다.

void main()
{
	// 나만의 반복자를 만들고 싶다. 어떻게 하면 되나?
	// 1. iterator_traits 구조를 위한 필수 다섯가지 자료형을 제공한다.
	// 2. iterator_traits 구조에 대한 (부분) 특수화를 제공한다.


}