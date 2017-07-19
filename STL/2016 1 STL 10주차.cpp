//=============================================
//			Mon May 09 10:49:01 2016
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
// ���δ�
// �Լ� ������̴�.
// �Լ��� ���ڼ��� �ٲ� ���ο� �Լ��� ����� ����.

void main()
{
	// �Լ���ü�� ()�� �����ε��� Ŭ������ ��ü�̴�.
	// STL������ �̸� �������� �Լ���ü�� ����� ���Ҵ�.
	// 10�� (546��)���� �̷��� �����ǵ� �Լ���ü���� �����ִ�.
	// - �̿��Ϸ��� #include< functional>
	// �� �߿�
	//		multiplies<type>(), ȿ�� param1 * param2
	//

	multiplies<int> m;

	cout << m(2, 3) << endl;

	// ���� m�� ���� 2���� ȣ���ϴ� ȣ�Ⱑ�� Ÿ���̴�.
	// ���δ��� ���� 2���� �ʿ��� m�� �ٸ� ���ڰ����� ���� 
	// ȣ�Ⱑ��Ÿ��	���� �� �ִ�.
	cout << bind(m, 2, 3)() << endl;
	// bind�� ���ڸ� �� �־ ȣ���ߴ�.
	


	//set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//deque<int> coll2;

	//// transform�� �Ἥ coll1�� ��� ���Ҹ� coll2�� �ű�鼭
	//// 10�� ���Ѵ�.
	//transform(coll.begin(), coll.end(), back_inserter(coll2),
	//	[](int n) {
	//	return n * 10;
	//}); 
	save();
}
//=============================================
//			Mon May 09 10:49:28 2016
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
// ���δ�
// �Լ� ������̴�.
// �Լ��� ���ڼ��� �ٲ� ���ο� �Լ��� ����� ����.

void main()
{
	// �Լ���ü�� ()�� �����ε��� Ŭ������ ��ü�̴�.
	// STL������ �̸� �������� �Լ���ü�� ����� ���Ҵ�.
	// 10�� (546��)���� �̷��� �����ǵ� �Լ���ü���� �����ִ�.
	// - �̿��Ϸ��� #include< functional>
	// �� �߿�
	//		multiplies<type>(), ȿ�� param1 * param2
	//

	multiplies<int> m;

	cout << m(2, 3) << endl;

	// ���� m�� ���� 2���� ȣ���ϴ� ȣ�Ⱑ�� Ÿ���̴�.
	// ���δ��� ���� 2���� �ʿ��� m�� �ٸ� ���ڰ����� ���� 
	// ȣ�Ⱑ��Ÿ��	���� �� �ִ�.
	auto f = bind(m, 2, 3);
	cout << f() << endl;
	// bind�� ���ڸ� �� �־ ȣ���ߴ�.
	


	//set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//deque<int> coll2;

	//// transform�� �Ἥ coll1�� ��� ���Ҹ� coll2�� �ű�鼭
	//// 10�� ���Ѵ�.
	//transform(coll.begin(), coll.end(), back_inserter(coll2),
	//	[](int n) {
	//	return n * 10;
	//}); 
	save();
}
//=============================================
//			Mon May 09 10:51:58 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// ���δ�
// �Լ� ������̴�.
// �Լ��� ���ڼ��� �ٲ� ���ο� �Լ��� ����� ����.

void main()
{
	// �Լ���ü�� ()�� �����ε��� Ŭ������ ��ü�̴�.
	// STL������ �̸� �������� �Լ���ü�� ����� ���Ҵ�.
	// 10�� (546��)���� �̷��� �����ǵ� �Լ���ü���� �����ִ�.
	// - �̿��Ϸ��� #include< functional>
	// �� �߿�
	//		multiplies<type>(), ȿ�� param1 * param2
	//

	multiplies<int> m;

	cout << m(2, 3) << endl;

	// ���� m�� ���� 2���� ȣ���ϴ� ȣ�Ⱑ�� Ÿ���̴�.
	// ���δ��� ���� 2���� �ʿ��� m�� �ٸ� ���ڰ����� ���� 
	// ȣ�Ⱑ��Ÿ��	���� �� �ִ�.
	// bind�� ���ڸ� �� �־ ȣ���ߴ�.
	auto f = bind(m, _1, 10);
	cout << f( 2 ) << endl;
	// ���� m�� ���� 2���� �ҷ������ε�,
	// 1���θ� ȣ���ߴ�.


	//set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//deque<int> coll2;

	//// transform�� �Ἥ coll1�� ��� ���Ҹ� coll2�� �ű�鼭
	//// 10�� ���Ѵ�.
	//transform(coll.begin(), coll.end(), back_inserter(coll2),
	//	[](int n) {
	//	return n * 10;
	//}); 
	save();
}
//=============================================
//			Mon May 09 10:56:49 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// ���δ�
// �Լ� ������̴�.
// �Լ��� ���ڼ��� �ٲ� ���ο� �Լ��� ����� ����.

void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;

	// transform�� �Ἥ coll1�� ��� ���Ҹ� coll2�� �ű�鼭
	// 10�� ���Ѵ�.
	transform(coll.begin(), coll.end(), back_inserter(coll2),
		[](int n) {
		return n * 10;
	}); 

	for (int d : coll2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Mon May 09 11:08:23 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// ���δ�
// �Լ� ������̴�.
// �Լ��� ���ڼ��� �ٲ� ���ο� �Լ��� ����� ����.

void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;


	// transform�� �Ἥ coll1�� ��� ���Ҹ� coll2�� �ű�鼭
	// 10�� ���Ѵ�.
	auto f = bind(multiplies<int>(), _1, 10);

	transform(coll.begin(), coll.end(), back_inserter(coll2),
		// ȣ�Ⱑ�ɰ�ü�� ���� �ϴ� �ڸ�
		// �� �Լ��� coll.begin()�� ���� �������ؼ�
		// �� ȣ�Ⱑ�� ��ü�� �����Ѵ�.
		// �� ��ü�� �� ���� �޾� *10�Ͽ� �����Ѵ�.
		// �� ������ multiplies�� bind�� �̿��Ͽ� �ذ��϶�.
		f
	); 

	for (int d : coll2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Mon May 09 11:08:38 2016
//=============================================
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// ���δ�
// �Լ� ������̴�.
// �Լ��� ���ڼ��� �ٲ� ���ο� �Լ��� ����� ����.

void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;


	// transform�� �Ἥ coll1�� ��� ���Ҹ� coll2�� �ű�鼭
	// 10�� ���Ѵ�.
	transform(coll.begin(), coll.end(), back_inserter(coll2),
		// ȣ�Ⱑ�ɰ�ü�� ���� �ϴ� �ڸ�
		// �� �Լ��� coll.begin()�� ���� �������ؼ�
		// �� ȣ�Ⱑ�� ��ü�� �����Ѵ�.
		// �� ��ü�� �� ���� �޾� *10�Ͽ� �����Ѵ�.
		// �� ������ multiplies�� bind�� �̿��Ͽ� �ذ��϶�.
		bind(multiplies<int>(), _1, 10)
	); 

	for (int d : coll2)
		cout << d << " ";
	cout << endl;
	save();
}

#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// ���δ�
// �Լ� ������̴�.
// �Լ��� ���ڼ��� �ٲ� ���ο� �Լ��� ����� ����.

template <class Iter, class Dest, class call>
xtransform(Iter b, Iter e, Dest d, call c)
{
	while (b != e)
	{
		d.push_back(c(*b));
		b++;
	}
}

void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;


	// transform�� �Ἥ coll1�� ��� ���Ҹ� coll2�� �ű�鼭
	// 10�� ���Ѵ�.
	auto f = bind(multiplies<int>(), _1, 10);

	xtransform(coll.begin(), coll.end(), back_inserter(coll2),
		f
		); // ���ĺ�����!!!(�����Ͼȵ�!!X)


	for (int d : coll2)
		cout << d << " ";
	cout << endl;

}
//=============================================
//			Mon May 09 11:14:25 2016
//=============================================
// �˰��� ���ڷμ��� �Լ�
//		������(predicates)
//			-bool ���� �����ϴ� ȣ�Ⱑ��Ÿ������
//			 �˰����� ���ڷ� ����. �ַ� �����̳�
//			 Ž���� ���ȴ�.
//		����������
//		����������
//		
// ���� ����ϱ�
//		C++ �����Ϸ��� �Ϲ� �Լ��� ���� ���ٸ� ����ȭ�� 
//		���ɼ��� �ſ� ũ��.
// �Լ� ��ü
//		() �����ڸ� overloading�� Ŭ����
//		���¸� ���´� - closure(Ŭ����)
//		�ڽŸ��� �ڷ����� ���´�.
//		��ü�� �Լ���ü�� �Ϲ��Լ����� ������
//
// 6.11 �����̳��� ���� - requirements
//	  1. ���Ҵ� ���� �Ǵ� �̵� �����ؾ� �Ѵ�. 
//	  2. �Ҵ� �����ڷ� �Ҵ�� �� �־�� �Ѵ�.
//	  3. �Ҹ��ڷ� �Ҹ�� �� �־�� �Ѵ�.
// ----------------------------------------------------------
#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;
using namespace std::placeholders;
// p. 293
// ���δ�
// �Լ� ������̴�.
// �Լ��� ���ڼ��� �ٲ� ���ο� �Լ��� ����� ����.

void main()
{
	set<int, greater<int>> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;


	// transform�� �Ἥ coll1�� ��� ���Ҹ� coll2�� �ű�鼭
	// 10�� ���Ѵ�.
	transform(coll.begin(), coll.end(), back_inserter(coll2),
		[](int n) {return n * 10; }
		);
	// ���ٰ� �� ȿ�����ΰ��� �� �� �ִ�.
	for (int d : coll2)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Mon May 09 11:54:32 2016
//=============================================
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

class Game
{
};

void main()
{	
	// 6.11 �����̳��� ���� - requirements(����,�Ҹ�,����) p.296
	//	  1. ���Ҵ� ���� �Ǵ� �̵� �����ؾ� �Ѵ�. 
	//	  2. �Ҵ� �����ڷ� �Ҵ�� �� �־�� �Ѵ�.
	//	  3. �Ҹ��ڷ� �Ҹ�� �� �־�� �Ѵ�.
	vector<Game> v;
	v.push_back(Game());

	save();
	// p. 297, 298 �߿��ϴ�. ( �� �о���� )
	// p .304 ���� �߿��ϴ�.
}
//=============================================
//			Mon May 09 12:15:16 2016
//=============================================
// 7�� STL �����̳�
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"save.h"

using namespace std;

void main()
{
	// �� ���Ͼȿ� �� ���� �ܾ �ִ��� ����� ������.
	ifstream in("�ҽ�.cpp");
	string s;
	int n{};
	while (in >> s)
		++n;
	cout << n << endl;
	save();
}
//=============================================
//			Mon May 09 12:20:19 2016
//=============================================
// 7�� STL �����̳�
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;


void main()
{
	// �ҽ�.cpp�� ��� �ܾ� ������ �Ųٷ� ����϶�.
	// using --> gnisu
	string s;
	ifstream in("�ҽ�.cpp");

	while (in >> s)
	{
		// s�� �� �ܾ� ����.
		copy(s.rbegin(), s.rend(), ostream_iterator<char>(cout));
		cout << "\t";
	}
	cout << endl;
	save();
}
//=============================================
//			Wed May 11 10:50:11 2016
//=============================================
/***********************************
 2015. 5. 11. ��23(����) 10�� 2��°
 ������ �� (5. 18) ���� 2 ����
***********************************/
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog(int n) 
		: age(n) {}
	int get_age(void) const
	{
		return age;
	}

};

bool f(Dog& d)
{
	if (d.get_age() >= 7)
		return true;
	else
		return false;
}

void main()
{
	vector<Dog> v{ 5, 7, 3, 6, 9 };
	// ���̰� 7�� �̻��� ��ü�� �� �� �ִ��� ã�ƺ�����.
	// 1. �Ϲ��Լ��� �����ڷ� ���
	int n = count_if(v.begin(), v.end(), f);
	cout << n << endl;
	// 2. ���ٸ� �����ڷ� ���
	//count_if(v.begin(), v.end(), [](int n){
	//	return n > 6;
	//});
	// 3. �Լ���ü�� �����ڷ� ���
	save();
}
//=============================================
//			Wed May 11 10:53:01 2016
//=============================================
/***********************************
 2015. 5. 11. ��23(����) 10�� 2��°
 ������ �� (5. 18) ���� 2 ����
***********************************/
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	explicit Dog(int n) 
		: age(n) {}
	// explicit -> �Ͻ����� ��ȯ ���´�.
	int get_age(void) const
	{
		return age;
	}

};

bool f(Dog& d)
{
	if (d.get_age() >= 7)
		return true;
	else
		return false;
}

void main()
{
	vector<Dog> v{ Dog{ 5 }, Dog{ 7 }, Dog{ 3 }, Dog{ 6 }, Dog{ 9 } };
	// ���̰� 7�� �̻��� ��ü�� �� �� �ִ��� ã�ƺ�����.
	// 1. �Ϲ��Լ��� �����ڷ� ���
	//int n = count_if(v.begin(), v.end(), f);
	//cout << n << endl;
	// 2. ���ٸ� �����ڷ� ���
	int n = count_if(v.begin(), v.end(), [](const Dog& d){
		return d.get_age() >= 7;
	});
	cout << n << endl;
	// 3. �Լ���ü�� �����ڷ� ���
	save();
}
//=============================================
//			Wed May 11 10:56:15 2016
//=============================================
/***********************************
 2015. 5. 11. ��23(����) 10�� 2��°
 ������ �� (5. 18) ���� 2 ����
***********************************/
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	explicit Dog(int n) 
		: age(n) {}
	// explicit -> �Ͻ����� ��ȯ ���´�.
	int get_age(void) const
	{
		return age;
	}

};

class Test
{
public:
	bool operator ()(const Dog& d)
	{
		if( d.get_age() >= 7 )
			return true;
		else 
			return false;
	}

};

bool f(Dog& d)
{
	if (d.get_age() >= 7)
		return true;
	else
		return false;
}

void main()
{
	vector<Dog> v{ Dog{ 5 }, Dog{ 7 }, Dog{ 3 }, Dog{ 6 }, Dog{ 9 } };
	// ���̰� 7�� �̻��� ��ü�� �� �� �ִ��� ã�ƺ�����.
	// 1. �Ϲ��Լ��� �����ڷ� ���
	//int n = count_if(v.begin(), v.end(), f);
	//cout << n << endl;
	// 2. ���ٸ� �����ڷ� ���
	//int n = count_if(v.begin(), v.end(), [](const Dog& d){
	//	return d.get_age() >= 7;
	//});
	//cout << n << endl;
	// 3. �Լ���ü�� �����ڷ� ���
	int n = count_if(v.begin(), v.end(), Test());
	cout << n << endl;
	save();
}
//=============================================
//			Wed May 11 10:57:11 2016
//=============================================
/***********************************
 2015. 5. 11. ��23(����) 10�� 2��°
 ������ �� (5. 18) ���� 2 ����
***********************************/
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	explicit Dog(int n) 
		: age(n) {}
	// explicit -> �Ͻ����� ��ȯ ���´�.
	int get_age(void) const
	{
		return age;
	}

};

class Test
{
public:
	bool operator ()(const Dog& d)
	{
		if( d.get_age() >= 7 )
			return true;
		else 
			return false;
	}

};

bool f(Dog& d)
{
	if (d.get_age() >= 7)
		return true;
	else
		return false;
}

void main()
{
	vector<Dog> v{ Dog{ 5 }, Dog{ 7 }, Dog{ 3 }, Dog{ 6 }, Dog{ 9 } };
	// ���̰� 7�� �̻��� ��ü�� �� �� �ִ��� ã�ƺ�����.
	
	// 1. �Ϲ��Լ��� �����ڷ� ���(�������� ���)
	count_if(v.begin(), v.end(), f);
	// 2. ���ٸ� �����ڷ� ���(��� C++����ϴ� �������� ����)
	count_if(v.begin(), v.end(), [](const Dog& d){
		return d.get_age() >= 7;
	});

	// 3. �Լ���ü�� �����ڷ� ���
	count_if(v.begin(), v.end(), Test());
	// 2�� ���ٿ� ���ؼ� ������ �����Ѵ�.
	// ���Ѵٸ� Ŭ�����̱� ������ ������ ���¸� �������ִ�.
	// �Լ��� �θ������� �� ������ ���� ��ų �� �ִ�.
	save();
}
//=============================================
//			Wed May 11 11:21:34 2016
//=============================================
// 7��
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	explicit Dog(int n)
		: age(n) {}
	// explicit -> �Ͻ����� ��ȯ ���´�.
	int get_age(void) const
	{
		return age;
	}

};
void main()
{
	vector<Dog> v;
	vector<Dog>::value_type x;

	save();
}
//=============================================
//			Wed May 11 11:37:18 2016
//=============================================
// 7��
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v{ 1, 2, 3, 4, 5 };

	// v�� �̵��Ͽ� ���ο� ��ü u�� ����� ������.
	vector<Dog> u{ move(v) };

	save();
}
//=============================================
//			Wed May 11 11:37:51 2016
//=============================================
// 7��
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v{ 1, 2, 3, 4, 5 };

	// v�� �̵��Ͽ� ���ο� ��ü u�� ����� ������.
	vector<Dog> u = (vector<Dog>&&)v;
	// r-Value reference

	save();
}
//=============================================
//			Wed May 11 11:42:47 2016
//=============================================
// 7��
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v{ 1, 2, 3, 4, 5 };
	vector<Dog> u{ 1, 2, 3, 4, 5, 6, 7 };

	u = move(v);
	// All existing elements of a are either move
	// assigned to or destroyed

	// a shall be equal to the value that rv had
	// before this assignment
	cout << u.size() << endl;
	save();
}
//=============================================
//			Wed May 11 11:45:06 2016
//=============================================
// 7��
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v{ 1, 2, 3, 4, 5 };
	
	v.~vector<Dog>();

	cout << v.size() << endl;

	save();
}
//=============================================
//			Wed May 11 11:49:20 2016
//=============================================
// 7��
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v{ 1, 2, 3, 4, 5 };
	vector<Dog> u;
	u.swap(v);
	// v�� ��� ���Ҹ� ����� �޸𸮸� ������ �� �ִ�?

	v.erase(v.begin(), v.end());
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	// swap �ؼ� 0�����.
	save();
}
//=============================================
//			Wed May 11 11:59:38 2016
//=============================================
// 7��
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<Dog> v( 1000, Dog(10) );
	// 10�� Dog 1000�� �����.
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	save();
}
//=============================================
//			Wed May 11 12:03:09 2016
//=============================================
// 7��
#include<iostream>
#include<vector>
#include<algorithm>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}	

};
void main()
{
	vector<int> s{ 1, 2, 3, 4, 5 };
	vector<int> v(s.rbegin(),s.rend());

	for (int d : v)
		cout << d << endl;
	save();
}
// 7��
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include "save.h"
using namespace std;

class Dog
{
private:
	int age{};
public:
	Dog() {}
	Dog(int n)
		: age(n) {}

};


void main()
{
	// Ű���忡�� ���ϴ� ��ŭ ���ڸ� �Է��ؼ� v�� ����� �ּ���.
	// �׸��� ���� ����� �ּ���.


	vector<int> v{ istream_iterator<int>(cin),
		istream_iterator<int>() };

	int sum{};
	for (int d : v)
		sum += d;

	cout << sum << endl;
	save();
}


void main()
{
	// Ű���忡�� ���ϴ� ��ŭ ���ڸ� �Է��ؼ� v�� ����� �ּ���.
	// �׸��� ���� ����� �ּ���.
	vector<int> v(istream_iterator<int>(cin),
		istream_iterator<int>());
	// ex) int f(����1,����2) -> ���� �Լ�ó�� �д´�.

	int sum{};
	for (int d : v)
		sum += d;

	cout << sum << endl;
}