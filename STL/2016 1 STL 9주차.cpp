//=============================================
//			Mon May 02 11:04:42 2016
//=============================================

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
		(d.operator*()).operator = (b.operator*());
		//d++;
		d.operator++();
		//b++;
		b.operator++();
	}
}

class my_back_inserter
{
private:
	vector<int> cont;
public:
	my_back_inserter(vector<int>& v)	// 임시객체를 만든다.
	{
		cont = v;
	}
	my_back_inserter& operator*() { return *this; }
	void operator++(){}
	// 실제 표준의 back_inserter가 하는 일은 이 함수에서 일어남
	void operator=(int n) {}
};

// 퀴즈로 낼꺼... ( 돌아가게 하라)
//class my_class {
//public:
//	operator*() {}
//};

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;
	
	// 다음 코드가 문제없이 실행되도록 필요한 프로그램을 해주세요.
	my_back_inserter p(v2);

	my_copy(v.begin(), v.end(), p);

	save();
}
//=============================================
//			Mon May 02 11:06:44 2016
//=============================================

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
		(d.operator*()).operator = (b.operator*());
		//d++;
		d.operator++();
		//b++;
		b.operator++();
	}
}

class my_back_inserter
{
private:
	vector<int>* cont;
public:
	my_back_inserter(vector<int>& v)	// 임시객체를 만든다.
	{
		cont = &v;	// 포인터를 이용해서 주소를 사용 할 수 있다.
	}
	my_back_inserter& operator*() { return *this; }
	void operator++(){}
	// 실제 표준의 back_inserter가 하는 일은 이 함수에서 일어남
	void operator=(int n) 
	{
		cont->push_back(n);
	}
};

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;
	
	// 다음 코드가 문제없이 실행되도록 필요한 프로그램을 해주세요.
	my_back_inserter p(v2);

	my_copy(v.begin(), v.end(), p);

	for (auto&d : v2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Mon May 02 11:31:37 2016
//=============================================

#include<iostream>
#include<vector>
#include<list>
#include<iterator>	// back_insert()
#include"save.h"

using namespace std;

template<class Iter,class Dest>
void my_copy(Iter b, Iter e, Dest d)
{
	while (b != e){
		//*d++ = *b++;
		(d.operator*()).operator = (b.operator*());
		//d++;
		d.operator++();
		//b++;
		b.operator++();
	}
}

template<class T>
class my_back_inserter
{
private:
	T* cont;
public:
	my_back_inserter(T& v)	// 임시객체를 만든다. 따라서 레펀런스
	{
		cont = &v;	// 포인터를 이용해서 주소를 사용 할 수 있다.
	}

	my_back_inserter& operator*() { return *this; }
	void operator++(){}
	// 실제 표준의 back_inserter가 하는 일은 이 함수에서 일어남
	void operator=(int n) 
	{
		cont->push_back(n);
	}
};
void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	list<int> v2;
	
	// 다음 코드가 문제없이 실행되도록 필요한 프로그램을 해주세요.
	my_back_inserter<list<int>> p(v2);

	my_copy(v.begin(), v.end(), p);

	for (auto&d : v2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed May 04 10:45:52 2016
//=============================================
// 2016. 5. 4 수23 (월수)
// 알고리즘 조작 p.269
// 알고리즘과 멤버함수 비교
// 알고리즘 인자로서의 함수
// 람다 사용하기
// 함수 객체
// 선정의 함수객체와 바인더
//--------------------------------------
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6 };

	// 문제 v에서 짝수를 지워주세요
	// 짝수라는 조건을 찾아 지워야하므로 알고리즘함수 remove_if
	remove_if(v.begin(), v.end(), [](int n){
		if (n % 2 == 0) return true;
		else return false;
	});
	// 원소 3개라고 바꾸는 일을 할 수 없다.
	// 컨테이너의 원소 수를 관리할수있는것은 자신만
	// 할수있다. 단순 remove_if가 그럴수가없다.
	// 컨테이너 클래스 멤버 함수로 사용해야한다.

	for (auto& d : v)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed May 04 10:52:16 2016
//=============================================
// 2016. 5. 4 수23 (월수)
// 알고리즘 조작 p.269
// 알고리즘과 멤버함수 비교
// 알고리즘 인자로서의 함수
// 람다 사용하기
// 함수 객체
// 선정의 함수객체와 바인더
//--------------------------------------
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6 };

	// 문제 v에서 짝수를 지워주세요
	// 짝수라는 조건을 찾아 지워야하므로 알고리즘함수 remove_if
	
	auto p = remove_if(v.begin(), v.end(), [](int n){
		if (n % 2 == 0) return true;
		else return false;
	});

	v.erase(p, v.end());	// p 부터 v끝까지 지운다.

	for (auto& d : v)
		cout << d << " ";
	cout << endl;
	save();
}


//=============================================
//			Wed May 04 11:07:26 2016
//=============================================
#include<iostream>
#include<list>
#include<algorithm>
#include"save.h"

using namespace std;

// 275쪽 - 알고리즘과 멤버함수 비교
void main()
{
	list<int> coll{ 1, 2, 3, 4, 5, 6 };

	// 이 리스트에서 짝수를 지워주세요.
	auto p = remove_if(coll.begin(), coll.end(), [](int n){
		if (n & 1)
			return false;
		else
			return true;
	});
	coll.erase(p, coll.end());

	for (auto& d : coll)
		cout << d << " ";
	cout << endl;
	save();
}

//=============================================
//			Wed May 04 11:13:26 2016
//=============================================
#include<iostream>
#include<list>
#include<algorithm>
#include"save.h"

using namespace std;

// 275쪽 - 알고리즘과 멤버함수 비교
// list의 remove_if를 쓸수있더라도
// 알고리즘을 안쓰는게 맞아.
// 왜? 컨테이너가 제공하는 멤버함수가 더 효율적일수도 있기때문에
// remove_if 알고리즘은 포인터가 아니야.
// list의 요소를 remove를 예로들어볼수있는데
// remove_if가 list인지 모르고 , 값을 바꾸는 알고리즘을
// 사용한다. 그래서 한칸씩 이동한다. (list는 이런 동작에 적합하지않다.)
// list의 가장큰점이 대치된다.
void main()
{
	list<int> coll{ 1, 2, 3, 4, 5, 6 };

	// 이 리스트에서 짝수를 지워주세요.
	coll.remove_if([](int n){
		return !(n & 1);
	});

	for (auto& d : coll)
		cout << d << " ";
	save();

}

//=============================================
//			Wed May 04 11:17:33 2016
//=============================================
#include<iostream>
#include<list>
#include<algorithm>
#include"save.h"

using namespace std;
// p.276
void main()
{
	list<int> coll{ 1, 2, 3, 4, 5, 6 };

	// 모든 원소 출력
	for_each(coll.begin(), coll.end(), [](int n){
		cout << n << " ";
	});
	cout << endl;
	save();
}

//=============================================
//			Wed May 04 11:18:08 2016
//=============================================
#include<iostream>
#include<list>
#include<algorithm>
#include"save.h"

using namespace std;
// p.276
void print(int n)
{
	cout << n << " ";
}
void main()
{
	list<int> coll{ 1, 2, 3, 4, 5, 6 };

	// 모든 원소 출력
	for_each(coll.begin(), coll.end(), print);
	cout << endl;
	save();
}

//=============================================
//			Wed May 04 11:35:09 2016
//=============================================
#include<iostream>
#include<list>
#include<algorithm>
#include"save.h"

using namespace std;
// p.276

template<class T,class Call>
void foreach(T& b, T& e, Call f)
{	// Func 대신 Callable type이 적합하다.
	while (b != e)
		f(*b++);	
}
void print(int n)
{
	cout << n << " ";
}
void main()
{
	list<int> coll{ 1, 2, 3, 4, 5, 6 };

	// 모든 원소 출력
	foreach(coll.begin(), coll.end(), print);
	save();
}

//=============================================
//			Wed May 04 11:38:12 2016
//=============================================
#include<iostream>
#include<list>
#include<algorithm>
#include"save.h"

using namespace std;
// p.276 - 알고리즘 인자로서의 함수 
// 호출할 수 있는 것이라면 뭐든지 가능

template<class T,class Func>
void foreach(T& b, T& e, Func f)
{
	while (b != e)
		f(*b++);	
}
void main()
{
	list<int> coll{ 1, 2, 3, 4, 5, 6 };

	// 모든 원소 출력
	// 람다는 callable type이다.
	foreach(coll.begin(), coll.end(), [](int n){
		cout << n << " ";
	});
	save();
}

//=============================================
//			Wed May 04 11:51:30 2016
//=============================================
#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<iterator> // ostream_iterator
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6 };
	list<int> c{ 1, 2, 3, 4, 5, 6 };

	// v*c의 결과를 화면에 출력하시오.
	// 함수 하나만 사용할 것. -> transform()
	//
	//transform(소스1,소스2,목적지,변신)
	transform(v.begin(), v.end(), c.begin(),
		ostream_iterator<int>(cout," "),
		[](int a, int b){
		return a*b;
	});
	save();
}

//=============================================
//			Wed May 04 12:10:39 2016
//=============================================
#include<iostream>
#include<set>
#include"save.h"

using namespace std;
// 미리 정의되어 있는 함수 객체(291)

class Game
{
	int n{ 0 };
public:
	Game(int n) : n{ n } {}
	bool operator<(const Game& g) const
	{
		return n < g.n;
	}
	operator int() const { return n; }
};

void main()
{
	set<Game> s{ 1, 3, 5, 2, 4, 6 };
	// set<Game,less<Game>> s; (less = 오름차순)
	for (Game d : s)
		cout << d << " ";
	cout << endl;
	save();
}

//=============================================
//			Wed May 04 12:19:50 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
// p. 293
// 바인더
void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;

	// transform을 써서 coll1의 모든 원소를 coll2로 옮기면서
	// 10을 곱한다.
	transform(coll.begin(), coll.end(), back_inserter(coll2),
		[](int n) {
		return n * 10;
	}); 
	save();
}