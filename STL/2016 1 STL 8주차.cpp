//=============================================
//			Wed Apr 27 12:06:30 2016
//=============================================
// 2016.04.27 (수)
// 수23(월수)		(8주 2일)

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
// 2016.04.27 (수)
// 수23(월수)		(8주 2일)

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
// 2016.04.27 (수)
// 수23(월수)		(8주 2일)

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
// 2016.04.27 (수)
// 수23(월수)		(8주 2일)

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
// 2016.04.27 (수)
// 수23(월수)		(8주 2일)

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
		// 함수라서 모두가 존재한다.(사기를 칠 수 있다)
		//d.operator++(123).operator*()
		//	= b.operator++(123).operator*();
	}
}

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;

	my_copy(v.begin(), v.end(), back_inserter(v2));	// 삽입 반복자.
	my_copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\n")); // stream Iterator

	for (int d : v2)
		cout << d << endl;
	save();
}


//=============================================
//			Wed Apr 27 12:20:34 2016
//=============================================
// 2016.04.27 (수)
// 수23(월수)		(8주 2일)

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
		// 함수라서 모두가 존재한다.(사기를 칠 수 있다)
		//d.operator++(123).operator*()
		//	= b.operator++(123).operator*();
	}
}

// 퀴즈로 낼꺼... ( 돌아가게 하라)
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
	// p야 니가 가리키는 곳에 333을 집어 넣어주면 안되겠니?

	// my_copy(v.begin(), v.end(), my_class());
	// 세 번째 인자인 back_inserter는 반복자 어댑터이다.
	// 반복자에 요구되는 동작인 *,++,== 등을 구현한 클래스이다.
	// back_inserter는 값을 쓰려는 동작을 값을 
	// 삽입하는 동작으로 구현한다.
	save();
}