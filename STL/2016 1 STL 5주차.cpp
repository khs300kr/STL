//=============================================
//			Mon Apr  4 11:15:57 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// C++ 11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1.자원을 획득한다(HEAP)
// 2.자원을 이용한다.
// 3 반환한다.

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
	unique_ptr<Mini> p(m); // 포인터를 만들때 자원을 엮어줘야한다(독점)


	save();
}
//=============================================
//			Mon Apr  4 11:16:45 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// C++ 11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1.자원을 획득한다(HEAP)
// 2.자원을 이용한다.
// 3 반환한다.

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
	unique_ptr<Mini> p(m); // 포인터를 만들때 자원을 엮어줘야한다(독점)

	// 뭔가
	unique_ptr<Mini> q;
	q = move(p);
	// 이전시킬수있다.

	save();
}
//=============================================
//			Mon Apr  4 11:32:55 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// C++ 11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1.자원을 획득한다(HEAP)
// 2.자원을 이용한다.
// 3 반환한다.

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

	// unique ptr는 4바이트반면
	// shared ptr는 자원을 여러개 달라 붙어야 하므로 적어도 4바이트 이상이다.
	// 자원 = AddRef (레퍼런스를 카운팅 한다)

	cout << sizeof(p) << endl;
	// 8바이트

	save();
}

//=============================================
//			Mon Apr  4 11:35:21 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// C++ 11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1.자원을 획득한다(HEAP)
// 2.자원을 이용한다.
// 3 반환한다.

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
	
	// unique ptr는 4바이트반면
	// shared ptr는 자원을 여러개 달라 붙어야 하므로 적어도 4바이트 이상이다.
	// 자원 = AddRef (레퍼런스를 카운팅 한다)

	cout << p.use_count() << endl;
	// 멤버함수 갯수 (자원의 갯수)
	
	save();
}
//=============================================
//			Mon Apr  4 11:35:36 2016
//=============================================
#include<iostream>
#include<memory>
#include "save.h"

using namespace std;

// C++ 11에서는
// unique_ptr - 자원을 독점하는 포인터
// shared_ptr - 자원을 공유하는 포인터

// 포인터
// 1.자원을 획득한다(HEAP)
// 2.자원을 이용한다.
// 3 반환한다.

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
	
	// unique ptr는 4바이트반면
	// shared ptr는 자원을 여러개 달라 붙어야 하므로 적어도 4바이트 이상이다.
	// 자원 = AddRef (레퍼런스를 카운팅 한다)

	s.reset();	// 자원이 하나 줄어든다.
	cout << p.use_count() << endl;
	// 멤버함수 갯수 (자원의 갯수)
	
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
	cout << "정수 가장 작은 값 : " << n << endl;

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
	cout << "정수 가장 큰 값 : " << n << endl;

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
	cout << "정수 가장 큰 값" << numeric_limits<int>::max() << endl;

	save();
}
//=============================================
//			Mon Apr  4 11:46:37 2016
//=============================================
#include<iostream>
#include "save.h"

using namespace std;

// 5.4 type traits(데이터형 특질)

template<class T>
void f(T t)
{

}

void main()
{
	// 어떤 함수가 있는데 넘겨주는 값이 포인터이면 그 것이 가리키는 값을,
	// 그냥 값이라면 그 값을 출력하는 함수를 작성하고 싶다.

	int n{ 100 };
	int*p{ &n };

	f(n);		// 100
	f(p);		// 100
	// 이런 함수를 만들 수 있나?? 라는 점에서 시작.
	save();
}
//=============================================
//			Mon Apr  4 11:57:37 2016
//=============================================
#include<iostream>
#include "save.h"

using namespace std;

// 5.4 type traits(데이터형 특질)

// 템플릿 코드에서는 전달된 인자의 타입을 구분할 필요가 있다.
// 인자의 타입을 구분하기 위해 type traits을 이용한다.
template<class T>
void f(T t)
{
	if (is_pointer<T> ())	// 현재 전달된 T야 너는 포인터니?
		cout << "포인터가 전달됨" << endl;
	if (is_integral<T> ())
		cout << "정수형 타입이 전달됨" << endl;
}

void main()
{
	// 어떤 함수가 있는데 넘겨주는 값이 포인터이면 그 것이 가리키는 값을,
	// 그냥 값이라면 그 값을 출력하는 함수를 작성하고 싶다.

	int n{ 100 };
	int*p{ &n };

	f("f를 인자로 넣을수도있을텐데 나중에 생각해보자");
	f(n);		// 100
	f(p);		// 100
	// 이런 함수를 만들 수 있나?? 라는 점에서 시작.

	save();
}

//=============================================
//			Mon Apr  4 11:57:37 2016(오류문)
//=============================================
#include<iostream>
#include "save.h"

using namespace std;

// 5.4 type traits(데이터형 특질)

// 템플릿 코드에서는 전달된 인자의 타입을 구분할 필요가 있다.
// 인자의 타입을 구분하기 위해 type traits을 이용한다.
template<class T>
void f(T t)
{
	if (is_pointer<T>())	// 현재 전달된 T야 너는 포인터니?
	{
		cout << "포인터가 전달됨" << *t << endl;
	}
	if (is_integral<T>())
	{
		cout << "정수형 타입이 전달됨" << t << endl;
	}

	// t가 안찍히는 이유는?
	// 프로그램이 확장될때
}

void f(int t)
{
	if (is_pointer<int>())	// 현재 전달된 T야 너는 포인터니?
	{
		cout << "포인터가 전달됨" << *t << endl;	// 빨간줄 생김.
	}
	if (is_integral<int>())
	{
		cout << "정수형 타입이 전달됨" << t << endl;
	}

	// t가 안찍히는 이유는?
	// 프로그램이 확장될때
}


// 지금 설명하고있는 내용은 p.168쪽입니다.

void main()
{
	// 어떤 함수가 있는데 넘겨주는 값이 포인터이면 그 것이 가리키는 값을,
	// 그냥 값이라면 그 값을 출력하는 함수를 작성하고 싶다.

	int n{ 100 };
	int*p{ &n };

	f(n);		// 100
	f(p);		// 100
				// 이런 함수를 만들 수 있나?? 라는 점에서 시작.

}


//=============================================
//			Mon Apr  4 12:10:40 2016
//=============================================
#include<iostream>
#include "save.h"

using namespace std;

// 5.4 type traits(데이터형 특질)

// 템플릿 코드에서는 전달된 인자의 타입을 구분할 필요가 있다.
// 인자의 타입을 구분하기 위해 type traits을 이용한다.

template<class T>
void f(T t)
{
	f(t, is_pointer<T>());
}

template<class T>
void f(T t, true_type)
{
	cout << "포인터 전달(가리키는 값) - " << *t << endl;
}

template<class T>
void f(T t, false_type)
{
	cout << "값이 전달 - " << t << endl;
}
// 지금 설명하고있는 내용은 p.168쪽입니다.

void main()
{
	// 어떤 함수가 있는데 넘겨주는 값이 포인터이면 그 것이 가리키는 값을,
	// 그냥 값이라면 그 값을 출력하는 함수를 작성하고 싶다.

	int n{ 100 };
	int*p{ &n };

	f(n);		// 100
	f(p);		// 100

	save();
}
//=============================================
//			Mon Apr  4 12:10:40 2016 ( 수업 X )
//=============================================
#include<iostream>
#include<algorithm>
#include "save.h"

using namespace std;

// 보조함수


void main()
{
	int a[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//minmax() 함수는 큰 값과 작은 값을 같이 찾아 주는 보조함수이다.

	pair<int, int> p = minmax(&a[0], &a[10]);
}

//=============================================
//			Wed Apr  6
//=============================================
/*
*STL = 자료구조 + 알고리즘
- Generic : 무슨 객체인지 데이터 타입인지 상관없다.
- Component : 자료구조 컨테이너를 엮어주는 알고리즘이 있다.
- iterator : 반복자는 클래스로 만든 포인터다.(포인터동작 지원)
- Adaptor : 어떤 기존의 동작에 포장을 씌운다.
- Predicates : 알고리즘속에 들어가서 sort의 3번쨰 인자 bool 반환형.
어떤 조건을 충족하는 판단 조건자,서술자.
- Function Object : 클래스인데, 함수 호출 연산자를 오버로딩하는
클래스, 함수호출처럼 부를수있다.
이게 들어갈 자리에 람다가 들어간다(중요성 하락)
- Callable type : 호출할수 있는 타입.


*STL Sequence Containers
- Array : 정식 자료구조. (템플릿이기떄문에 쓰는방법도 다르다)
-> 최대 100개 이면 이것으로. (유한성)
- vector : 오른쪽으로 늘어날 수 있다. (무한성)
- deque(덱) : 왼쪽 오른쪽 둘다 늘어날 수 있다.

리스트는 sort 지원 X , 멤버함수 사용!
- forward_list : 앞으로만 가는 리스트
- list : 노드 연결


*STL Associative Containers
- set,multiset,map,multimap
- multi는 똑같은 키값을 넣어줄수있는 표시이다.
- 자기 정렬 방식에 따라서 정렬이 된다. Set같은것을
- 만들때 설정 할 수 있다.
- 삽입삭제에 비효율이지만, 데이터를 희생하고 미리 정렬을 하는기법


*STL Unordered Associative Containers
- unordered_set , unordered_map : 해쉬 셋, 해쉬 맵이다.
- 앞의 Associative 보다 더 빨리 찾기위해서, (특정,이상적인환경에서)

=> 13개의 표준 컨테이너가 있다.
*/
//=============================================
//			Wed Apr 06 11:32:53 2016
//=============================================
#include<iostream>
#include<array>
#include"save.h"
using namespace std;

// array 컨테이너
// STL 표준 컨테이너이며 정적 배열(컴파일시 크기가 정히져야 함)이다.

void main()
{
	// 정수 10개를 담는 array를 만들어보자.
	array<int, 10> a {};
	// 이것의 자료형은 array<int,10> 이다.
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

// array 컨테이너
// STL 표준 컨테이너이며 정적 배열(컴파일시 크기가 정히져야 함)이다.

void main()
{
	// 정수 10개를 담는 array를 만들어보자.
	array<int, 10> a{{1, 20, 3, 40, 5, 60, 7, 80, 9, 100}};
	// 이것의 자료형은 array<int,10> 이다.

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

// array 컨테이너
// STL 표준 컨테이너이며 정적 배열(컴파일시 크기가 정히져야 함)이다.

void main()
{
	// 정수 10개를 담는 array를 만들어보자.
	array<int, 10> a{{1, 20, 3, 40, 5, 60, 7, 80, 9, 100}};
	// 이것의 자료형은 array<int,10> 이다.

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

// array 컨테이너
// STL 표준 컨테이너이며 정적 배열(컴파일시 크기가 정히져야 함)이다.

void main()
{
	// 정수 10개를 담는 array를 만들어보자.
	vector<int> a{{1, 20, 3, 40, 5, 60, 7, 80, 9, 100}};
	// 이것의 자료형은 array<int,10> 이다.

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

// array 컨테이너
// STL 표준 컨테이너이며 정적 배열(컴파일시 크기가 정히져야 함)이다.

void main()
{
	// 정수 10개를 담는 array를 만들어보자.
	list<int> a{{1, 20, 3, 40, 5, 60, 7, 80, 9, 100}};
	// 이것의 자료형은 array<int,10> 이다.
	
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

// array 컨테이너
// STL 표준 컨테이너이며 정적 배열(컴파일시 크기가 정히져야 함)이다.

void main()
{
	// 정수 10개를 담는 array를 만들어보자.
	set<int> a{{1, 20, 3, 40, 5, 60, 7, 80, 9, 100}};
	// 이것의 자료형은 array<int,10> 이다.
	
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

// 키보드에서 원하는 만큼의 단어를 입력받아서 저장해라.
// 오름차순으로 정렬한 후
// 화면에 전체를 출력하라.

// 이문제를 어떻게 해결할 지 생각 해보자.

void main()
{
	vector<string> v_str;
	string strInput;
	// 벡터에 원하는 자료를 받는다.
	while (true)
	{
		cin >> strInput;
		v_str.push_back(strInput);
		
		if (strInput == "1")
			break;
	}
	// 벡터의 자료를 정렬한다.
	sort(v_str.begin(), v_str.end());
	// 정렬된 벡터를 출력한다.
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

// 키보드에서 원하는 만큼의 단어를 입력받아서 저장해라. (ctrl+z)
// 오름차순으로 정렬한 후
// 화면에 전체를 출력하라.

// 이문제를 어떻게 해결할 지 생각 해보자.

void main()
{
	vector<string> v_str;

	// 벡터에 원하는 자료를 받는다.
	copy(istream_iterator<string>(cin), istream_iterator<string>(),
		back_inserter(v_str));

	// 벡터의 자료를 정렬한다.
	sort(v_str.begin(), v_str.end());

	// 정렬된 벡터를 출력한다.
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

// 키보드에서 원하는 만큼의 단어를 입력받아서 저장해라. (ctrl+z)
// 오름차순으로 정렬한 후
// 화면에 전체를 출력하라.

// 이문제를 어떻게 해결할 지 생각 해보자.

void main()
{
	set<string> v_str;

	// 벡터에 원하는 자료를 받는다.
	copy(istream_iterator<string>(cin), istream_iterator<string>(),
		inserter(v_str,v_str.begin()));

	// 정렬된 벡터를 출력한다.
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

// pair<string,scord>인 자료를 vector에 넣어 관리하고 싶다.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;

	v.push_back(make_pair("루피", 100));
	v.push_back(make_pair("조로", 200));
	v.push_back(make_pair("상디", 300));
	v.push_back(make_pair("나미", 400));
	v.push_back(make_pair("쵸파", 500));

	// 이름순으로 정렬하여 출력해 보세요.
	sort(v.begin(), v.end());

	for (auto d : v)
		cout << d.first << ", " << d.second << endl;
	cout << endl;

	// 점수순으로 정렬하여 출력해 보세요.
	sort(v.begin(), v.end(), [](const Score &a, const Score& b){
		return a.second > b.second;
	});

	for (auto d : v)
		cout << d.first << ", " << d.second << endl;
	save();
}

// 이름순으로 정렬하여 출력해 보세요.
sort(v.begin(), v.end());

for (Score d : v)
cout << Score << endl;
cout << endl;

// 점수순으로 정렬하여 출력해 보세요.
sort(v.begin(), v.end(), [](const Score &a, const Score& b){
	return a.second > b.second;
});

for (Score d : v)
cout << Score << endl;

// 한번해보셈 ( cout << Score << endl; )
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

// pair<string,scord>인 자료를 vector에 넣어 관리하고 싶다.

using Score = pair<string, int>;

void main()
{
	vector<Score> v;

	v.push_back(make_pair("루피", 100));
	v.push_back(make_pair("조로", 200));
	v.push_back(make_pair("상디", 300));
	v.push_back(make_pair("나미", 400));
	v.push_back(make_pair("쵸파", 500));

	// 이름순으로 정렬하여 출력해 보세요.
	sort(v.begin(), v.end());

	// 점수순으로 정렬하여 출력해 보세요.
	sort(v.begin(), v.end(), [](const Score &a, const Score& b){
		return a.second > b.second;
	});

	// STL 반복자를 이용한 컨테이너 원소 접근
	vector<Score>::iterator iter = v.begin();
	for (; iter != v.end(); ++iter)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	save();
}