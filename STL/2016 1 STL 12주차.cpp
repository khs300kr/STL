
//=============================================
//			Mon May 23 11:08:39 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// 컨테이너를 다양한 방식으로 생성할 수 있다.
// 이동반복자를 사용해서 생성할 수도 있다.

void main()
{
	vector<string> v{ "2016년", "5월", "23일" };
	list<string> l(v.begin(), v.end());

	for (string d : l)
		cout << d << " ";
	cout << endl;

	save();
}

// 반복자 어댑터.
// 1. 역방향 반복자
// 2. 스트랑 반복자
// 3. 삽입 반복자
// 4. 이동 반복자
//=============================================
//			Mon May 23 11:13:26 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// 컨테이너를 다양한 방식으로 생성할 수 있다.
// 이동반복자를 사용해서 생성할 수도 있다.

void main()
{
	vector<string> v{ "2016년", "5월", "23일" };
	list<string> l(make_move_iterator(v.begin()),
		make_move_iterator(v.end()));

	for (string d : l)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon May 23 11:17:57 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// 컨테이너를 다양한 방식으로 생성할 수 있다.
// 이동반복자를 사용해서 생성할 수도 있다.

void main()
{
	vector<string> v{ "2016년", "5월", "23일" };
	cout << "이동하기 전 벡터의 내용" << endl;
	cout << "원소의 수 " << v.size() << endl;
	for (string d : v)
		cout << d << " ";
	cout << endl;

	list<string> l(make_move_iterator(v.begin()),
		make_move_iterator(v.end()));

	// 이동은 했는데 데이터는 그대로인데 갯수는
	// 아직도 3개이다
	cout << "이동하기 후 벡터의 내용" << endl;
	cout << "원소의 수 " << v.size() << endl;
	for (string d : v)
		cout << d << " ";
	cout << endl;



	cout << "이동하기 후 리스트 내용" << endl;
	cout << "원소의 수 " << l.size() << endl;
	for (string d : l)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Mon May 23 11:34:29 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// 컨테이너를 다양한 방식으로 생성할 수 있다.
// 이동반복자를 사용해서 생성할 수도 있다.

void main()
{
	vector<int> v{ 1,2,3 };
	list<int> l(make_move_iterator(v.begin()),
		make_move_iterator(v.end()));

	cout << "v ";
	for (int d : v)
		cout << d << " ";
	cout << endl;

	cout << "l ";
	for (int d : l)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon May 23 11:35:27 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// 컨테이너를 다양한 방식으로 생성할 수 있다.
// 이동반복자를 사용해서 생성할 수도 있다.

void main()
{
	vector<string> v{ "abc","123","여름30도" };
	list<string> l(make_move_iterator(v.begin()),
		make_move_iterator(v.end()));

	cout << "v ";
	for (string d : v)
		cout << d << " ";
	cout << endl;

	cout << "l ";
	for (string d : l)
		cout << d << " ";
	cout << endl;
	save();
	// int는 이동이 안되는데 string은 이동한다
	// 차이를 파악하자.
}

//=============================================
//			Mon May 23 11:52:05 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// 컨테이너를 다양한 방식으로 생성할 수 있다.
// 이동반복자를 사용해서 생성할 수도 있다.


void main()
{
	vector<string> v1{ "abc","123","여름30도" };

	// v1을 통째로 이동하는 경우
	vector<string> v2(move(v1));

	cout << v1.size() << endl;
	cout << v2.size() << endl;
	save();
}
//=============================================
//			Mon May 23 11:53:58 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// 컨테이너를 다양한 방식으로 생성할 수 있다.
// 이동반복자를 사용해서 생성할 수도 있다.


void main()
{
	vector<string> v1{ "abc","123","여름30도" };

	// v1이 동적으로 할당한 메모리의 번지
	cout << v1.data() << endl;

	// v2를 v1을 복사하여 만드는 경우
	vector<string> v2(v1);
	cout << v1.data() << endl;
	cout << v2.data() << endl;
	save();
}
//=============================================
//			Mon May 23 11:54:30 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include"save.h"

using namespace std;

// 컨테이너를 다양한 방식으로 생성할 수 있다.
// 이동반복자를 사용해서 생성할 수도 있다.


void main()
{
	vector<string> v1{ "abc","123","여름30도" };

	// v1이 동적으로 할당한 메모리의 번지
	cout << v1.data() << endl;

	// v2를 v1을 이동하여 만드는 경우
	vector<string> v2(move(v1));
	cout << v1.data() << endl;
	cout << v2.data() << endl;
	save();
}

// 컨테이너를 다양한 방식으로 생성할 수 있다.
// 이동반복자를 사용해서 생성할 수도 있다.


void main()
{
	set<string> s{ "abc", "123", "여름30도" };
	// set은 변경되면 안된다. set은 key값은 읽을 수만 있다.
	// 이것을 이동시킬려는 행동은 set을 손상시키는 행위이다.
	// const 인데 컴파일단계에서 거부해야한다.
	vector<string> v(make_move_iterator(s.begin()),
		make_move_iterator(s.end()));
	save();
}
// 7장 (컨테이너) 에 대해서 지금! 읽어보자
// 321 쪽에서 337쪽 deque의 메모리를 설명.

//=============================================
//			Mon May 23 12:11:03 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<deque>
#include"save.h"

using namespace std;

// 컨테이너를 다양한 방식으로 생성할 수 있다.
// 이동반복자를 사용해서 생성할 수도 있다.


void main()
{
	deque<string> s{ "abc","123","여름30도" };
	cout << s[0] << endl;
	cout << s[1] << endl;
	cout << s[2] << endl;
	// 이게 연속되있는걸로 생각할수있지만
	// 실질적으로 그렇지 않을 수 있다. (337쪽)
	// 마치 이어진것처럼 보여지는 컨테이너다
	// 그래서 vector 보다 속도가 느릴수 있다.
	save();
}
//=============================================
//			Wed May 25 10:53:41 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<set>
#include"save.h"

using namespace std;

// set의 정렬기준은 두 가지로 설정할 수 있다.
// 1. 템플릿 파라미터
//set<int, 기준> s;
// 2. 생성자 파라미터
//set<int> s(기준);

class Game{
	int hp;
	int mp;
public:
	Game(int hp, int mp) 
		: hp(hp), mp(mp) {}
	bool operator <(const Game& rhs) const
	{
		return (hp < rhs.hp);
	}
	int getHP() const { return hp; }
};

void main()
{
	set<Game> s{ { 100, 50 }, { 70, 50 }, { 100, 20 } }; // 1,2,3,4
	// < 연산자 하나만 이용해서 순서를 정하는 것을 strictly weak ordering
	// (368쪽)
	
	// 두 원소가 같은 지를 < 연산자를 이용하여 결정한다. ---> 동등성(equivalent)
	// 실제 두 원소가 같은지 비교는 == 연산자로 결정 ---> 상등성(equality)
	for (auto& d : s)
		cout << d.getHP() << endl;
	save();
}
//=============================================
//			Wed May 25 10:57:16 2016
//=============================================
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<set>
#include"save.h"

using namespace std;

// set의 정렬기준은 두 가지로 설정할 수 있다.
// 1. 템플릿 파라미터
//set<int, 기준> s;
// 2. 생성자 파라미터
//set<int> s(기준);

class Game{
	int hp;
	int mp;
public:
	Game(int hp, int mp) 
		: hp(hp), mp(mp) {}
	bool operator <(const Game& rhs) const
	{
		return (hp < rhs.hp);
	}
	int getHP() const { return hp; }	// 출력용.
};

void main()
{
	set<Game> s{ { 100, 50 }, { 70, 50 }, { 100, 20 } }; // 1,2,3,4

	// set은 빠른 검색을 하기 위해 사용한다.
	// set에서 원하는 값을 찾아보자.
	// Game(70,50)인 객체가 있는지 찾아보자.

	auto p = s.find(Game(70, 50));
	if (p != s.end())
		cout << "찾음" << endl;
	save();
}
//=============================================
//			Wed May 25 11:05:25 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

// ----------------------------------------------------
// -100 ~ 100 사이의 랜덤 정수 100개를 벡터에 저장하자.
// 특정한 값을 찾아 봅시다. 예) 33
//

void main()
{
	vector<int> v;
	for (int i = 0; i < 100;++i)
		v.push_back(rand() % 201 - 100);

	auto p = find(v.begin(), v.end(), 33);
	if (p != v.end())
		cout << "찾음" << endl;
	else
		cout << "없음" << endl;

	sort(v.begin(), v.end());
	for (auto& d : v)
		cout << d << "\t";
	save();
}
//=============================================
//			Wed May 25 11:08:08 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

// ----------------------------------------------------
// -100 ~ 100 사이의 랜덤 정수 100개를 벡터에 저장하자.
// 특정한 값을 찾아 봅시다. 예) 33
//

void main()
{
	vector<int> v;
	for (int i = 0; i < 100;++i)
		v.push_back(rand() % 201 - 100);

	sort(v.begin(), v.end());
	for (auto& d : v)
		cout << d << "\t";

	auto p = find(v.begin(), v.end(), 32);
	if (p != v.end())
		cout << "찾음 " << *p << endl;
	else
		cout << "없음" << endl;

	save();
}
//=============================================
//			Wed May 25 11:16:03 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

// ----------------------------------------------------
// -100 ~ 100 사이의 랜덤 정수 100개를 벡터에 저장하자.
// 특정한 값을 찾아 봅시다. 예) 33
//

void main()
{
	vector<int> v;
	v.reserve(100);
	for (int i = 0; i < 100;++i)
		v.push_back(rand() % 201 - 100);

	sort(v.begin(), v.end());

	auto p = find(v.begin(), v.end(), 33);
	if (p != v.end())
		cout << "찾음 " << *p << endl;
	else
		cout << "없음" << endl;

	for (auto& d : v)
		cout << d << "\t";

	// 32를 찾아보자 - 정렬된 시퀀스에서는 이진탐색을 하자.

	p = find(v.begin(), v.end(), 32);
	if (p != v.end())
		cout << "찾음" << *p << endl;
	else
		cout << "없음" << endl;

	save();
}
//=============================================
//			Wed May 25 11:38:54 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

// 검색 관련 함수들 - 전역 알고리즘 함수들임
//
// count - 찾는 값이 몇개나 있는가?
// find - 찾는 값이 처음 발견된 곳은 어디인가
//		--> 선형알고리즘, count는 무조건 끝까지 진행.
//
// 컨테이너가 정렬된 경우에(vector, deque)
// 원하는 값이 있는가?
//		binary_search - STL에서 bool 
//
// 있다면 어디에 있는가? 몇개나 있는가?
// --> equal_range가 정답.
// lower_bound - 원하는 값이 있는가? 있다면 어디에? 없다면 어디에 삽입 가능한가를 알려줌.
// upper_bound - 정렬된 범위에 삽입할 때 동등한 객체들의 순서 유지에 사용가능
// equal_range - 변환값은 pair(lower/upper)
//
// set/map에서는 멤버함수를 이용한다.

// ----------------------------------------------------
// -100 ~ 100 사이의 랜덤 정수 100개를 벡터에 저장하자.
// 특정한 값을 찾아 봅시다. 예) 33
// find()로 찾을 수 있었다.
// 
// 벡터가 정렬되어 있다면 binary_search() , return type = bool
// 로 찾아야 합니다.
// ----------------------------------------------------

void main()
{
	vector<int> v;
	v.reserve(100);
	for (int i = 0; i < 100;++i)
		v.push_back(rand() % 201 - 100);

	sort(v.begin(), v.end());

	auto p = find(v.begin(), v.end(), 33);
	if (p != v.end())
		cout << "찾음 " << *p << endl;
	else
		cout << "없음" << endl;

	for (auto& d : v)
		cout << d << "\t";

	// 32를 찾아보자 - 정렬된 시퀀스에서는 이진탐색을 하자.
	bool b = binary_search(v.begin(), v.end(), 32);

	if (b == true)
		cout << "32 찾음 " << endl;
	else
		cout << "32 없음 " << endl;
	
	save();
}
//=============================================
//			Wed May 25 11:48:57 2016
//=============================================
#include<iostream>
#include<string>
#include<algorithm>
#include"save.h"

using namespace std;

// 439쪽 그 외 STL 컨테이너
// STL 알고리즘과 함께 어울려 작동하는 컨테이너를 만들 수 있는 방법은?
//
// 1. STL 컨테이너가 요구하는 인터페이스를 제공한다.
//		string을 STL 컨테이너로 이용하는 경우를 말한다.
//		string은 begin(), end(), push_back() 등을 제공한다.
// 2. 컨테이너와 알고리즘간의 인터페이스를 담당하는 객체를 제공한다(반복자)
//		기존 배열
//		반복자는 포인터에 대하여 특수화(specialization)되어 있으므로.
void main()
{
	int a[] {1, 3, 5, 2, 4};

	sort(&a[0], &a[5]);

	for (int d : a)
		cout << d << endl;

	save();
}
//=============================================
//			Wed May 25 12:03:28 2016
//=============================================
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

// 439쪽 그 외 STL 컨테이너
// STL 알고리즘과 함께 어울려 작동하는 컨테이너를 만들 수 있는 방법은?
//
// 1. STL 컨테이너가 요구하는 인터페이스를 제공한다.
//		string을 STL 컨테이너로 이용하는 경우를 말한다.
//		string은 begin(), end(), push_back() 등을 제공한다.
// 2. 컨테이너와 알고리즘간의 인터페이스를 담당하는 객체를 제공한다(반복자)
//		기존 배열
//		반복자는 포인터에 대하여 특수화(specialization)되어 있으므로.
// 3. wrapper 클래스를 직접 만들어 사용한다.

//-----------------------------------------------------------------------
// 표준을 준수하는 컨테이너를 만들어 보자
//
// ItemBox 컨테이너 - 특별히 하는 일 없는 array<T,size>와 비슷한 컨테이너임
//-----------------------------------------------------------------------

template<class T,int n>
class ItemBox
{
private:
	T data[n];
public:
	T* begin() { return data; }
	T* end() { return data + n; }
	int size() { return n; }

};

void main()
{
	// 컨테이너 생성
	ItemBox<int, 10> a;
	
	auto p = a.begin();
	for (int i = 0; i < a.size(); ++i)
		*p++ = i + 1;

	// 알고리즘으로 값을 출력해보자
	// [1][2][3][4][5][6][7][8][9][10]

	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
								// cout << int

	cout << endl;
	
	save();
}
//=============================================
//			Wed May 25 12:10:26 2016
//=============================================
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

// 439쪽 그 외 STL 컨테이너
// STL 알고리즘과 함께 어울려 작동하는 컨테이너를 만들 수 있는 방법은?
//
// 1. STL 컨테이너가 요구하는 인터페이스를 제공한다.
//		string을 STL 컨테이너로 이용하는 경우를 말한다.
//		string은 begin(), end(), push_back() 등을 제공한다.
// 2. 컨테이너와 알고리즘간의 인터페이스를 담당하는 객체를 제공한다(반복자)
//		기존 배열
//		반복자는 포인터에 대하여 특수화(specialization)되어 있으므로.
// 3. wrapper 클래스를 직접 만들어 사용한다.

//-----------------------------------------------------------------------
// 표준을 준수하는 컨테이너를 만들어 보자
//
// ItemBox 컨테이너 - 특별히 하는 일 없는 array<T,size>와 비슷한 컨테이너임
//-----------------------------------------------------------------------

template<class T,int n>
class ItemBox
{
private:
	T data[n];
public:
	T* begin() { return data; }
	T* end() { return data + n; }
	int size() { return n; }

};

void main()
{
	// 컨테이너 생성
	ItemBox<int, 10> a;
	
	auto p = a.begin();
	for (int i = 0; i < a.size(); ++i)
		*p++ = i + 1;

	// 알고리즘으로 값을 출력해보자
	// [1][2][3][4][5][6][7][8][9][10]
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	// 내림차순으로 정렬해보자
	sort(a.begin(), a.end(), [](const int& a, const int& b){
		return a > b;
	});
	
	for (int d : a)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed May 25 12:12:45 2016
//=============================================
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

// 439쪽 그 외 STL 컨테이너
// STL 알고리즘과 함께 어울려 작동하는 컨테이너를 만들 수 있는 방법은?
//
// 1. STL 컨테이너가 요구하는 인터페이스를 제공한다.
//		string을 STL 컨테이너로 이용하는 경우를 말한다.
//		string은 begin(), end(), push_back() 등을 제공한다.
// 2. 컨테이너와 알고리즘간의 인터페이스를 담당하는 객체를 제공한다(반복자)
//		기존 배열
//		반복자는 포인터에 대하여 특수화(specialization)되어 있으므로.
// 3. wrapper 클래스를 직접 만들어 사용한다.

//-----------------------------------------------------------------------
// 표준을 준수하는 컨테이너를 만들어 보자
//
// ItemBox 컨테이너 - 특별히 하는 일 없는 array<T,size>와 비슷한 컨테이너임
//-----------------------------------------------------------------------

template<class T,int n>
class ItemBox
{
private:
	T data[n];
public:
	T* begin() { return data; }
	T* end() { return data + n; }
	T* mid() { return data + n / 2; }
	int size() { return n; }

};

void main()
{
	// 컨테이너 생성
	ItemBox<int, 10> a;
	
	auto p = a.begin();
	for (int i = 0; i < a.size(); ++i)
		*p++ = i + 1;

	// 알고리즘으로 값을 출력해보자
	// [1][2][3][4][5][6][7][8][9][10]
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	// 내림차순으로 정렬해보자
	sort(a.begin(), a.end(), [](const int& a, const int& b){
		return a > b;
	});
	
	for (int d : a)
		cout << d << " ";
	cout << endl;

	// 원소의 순서를 순환, rotate
	rotate(a.begin(), a.mid(), a.end());

	for (int d : a)
		cout << d << " ";
	cout << endl;

	save();
}

// 447쪽 - (꼭 읽어보세요)
// STL 이용해서 프로그램해서 하는것은 좋은데
// 항상 같은 컨테이너를 사용하면 안된다.
// 컨테이너를 쓸 것이면 기본적으로 vector를 사용하라.
