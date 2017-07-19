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
	my_back_inserter(vector<int>& v)	// �ӽð�ü�� �����.
	{
		cont = v;
	}
	my_back_inserter& operator*() { return *this; }
	void operator++(){}
	// ���� ǥ���� back_inserter�� �ϴ� ���� �� �Լ����� �Ͼ
	void operator=(int n) {}
};

// ����� ����... ( ���ư��� �϶�)
//class my_class {
//public:
//	operator*() {}
//};

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;
	
	// ���� �ڵ尡 �������� ����ǵ��� �ʿ��� ���α׷��� ���ּ���.
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
	my_back_inserter(vector<int>& v)	// �ӽð�ü�� �����.
	{
		cont = &v;	// �����͸� �̿��ؼ� �ּҸ� ��� �� �� �ִ�.
	}
	my_back_inserter& operator*() { return *this; }
	void operator++(){}
	// ���� ǥ���� back_inserter�� �ϴ� ���� �� �Լ����� �Ͼ
	void operator=(int n) 
	{
		cont->push_back(n);
	}
};

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2;
	
	// ���� �ڵ尡 �������� ����ǵ��� �ʿ��� ���α׷��� ���ּ���.
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
	my_back_inserter(T& v)	// �ӽð�ü�� �����. ���� ���ݷ���
	{
		cont = &v;	// �����͸� �̿��ؼ� �ּҸ� ��� �� �� �ִ�.
	}

	my_back_inserter& operator*() { return *this; }
	void operator++(){}
	// ���� ǥ���� back_inserter�� �ϴ� ���� �� �Լ����� �Ͼ
	void operator=(int n) 
	{
		cont->push_back(n);
	}
};
void main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	list<int> v2;
	
	// ���� �ڵ尡 �������� ����ǵ��� �ʿ��� ���α׷��� ���ּ���.
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
// 2016. 5. 4 ��23 (����)
// �˰��� ���� p.269
// �˰���� ����Լ� ��
// �˰��� ���ڷμ��� �Լ�
// ���� ����ϱ�
// �Լ� ��ü
// ������ �Լ���ü�� ���δ�
//--------------------------------------
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6 };

	// ���� v���� ¦���� �����ּ���
	// ¦����� ������ ã�� �������ϹǷ� �˰����Լ� remove_if
	remove_if(v.begin(), v.end(), [](int n){
		if (n % 2 == 0) return true;
		else return false;
	});
	// ���� 3����� �ٲٴ� ���� �� �� ����.
	// �����̳��� ���� ���� �����Ҽ��ִ°��� �ڽŸ�
	// �Ҽ��ִ�. �ܼ� remove_if�� �׷���������.
	// �����̳� Ŭ���� ��� �Լ��� ����ؾ��Ѵ�.

	for (auto& d : v)
		cout << d << " ";
	cout << endl;
	save();
}
//=============================================
//			Wed May 04 10:52:16 2016
//=============================================
// 2016. 5. 4 ��23 (����)
// �˰��� ���� p.269
// �˰���� ����Լ� ��
// �˰��� ���ڷμ��� �Լ�
// ���� ����ϱ�
// �Լ� ��ü
// ������ �Լ���ü�� ���δ�
//--------------------------------------
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6 };

	// ���� v���� ¦���� �����ּ���
	// ¦����� ������ ã�� �������ϹǷ� �˰����Լ� remove_if
	
	auto p = remove_if(v.begin(), v.end(), [](int n){
		if (n % 2 == 0) return true;
		else return false;
	});

	v.erase(p, v.end());	// p ���� v������ �����.

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

// 275�� - �˰���� ����Լ� ��
void main()
{
	list<int> coll{ 1, 2, 3, 4, 5, 6 };

	// �� ����Ʈ���� ¦���� �����ּ���.
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

// 275�� - �˰���� ����Լ� ��
// list�� remove_if�� �����ִ���
// �˰����� �Ⱦ��°� �¾�.
// ��? �����̳ʰ� �����ϴ� ����Լ��� �� ȿ�����ϼ��� �ֱ⶧����
// remove_if �˰����� �����Ͱ� �ƴϾ�.
// list�� ��Ҹ� remove�� ���ε����ִµ�
// remove_if�� list���� �𸣰� , ���� �ٲٴ� �˰�����
// ����Ѵ�. �׷��� ��ĭ�� �̵��Ѵ�. (list�� �̷� ���ۿ� ���������ʴ�.)
// list�� ����ū���� ��ġ�ȴ�.
void main()
{
	list<int> coll{ 1, 2, 3, 4, 5, 6 };

	// �� ����Ʈ���� ¦���� �����ּ���.
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

	// ��� ���� ���
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

	// ��� ���� ���
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
{	// Func ��� Callable type�� �����ϴ�.
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

	// ��� ���� ���
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
// p.276 - �˰��� ���ڷμ��� �Լ� 
// ȣ���� �� �ִ� ���̶�� ������ ����

template<class T,class Func>
void foreach(T& b, T& e, Func f)
{
	while (b != e)
		f(*b++);	
}
void main()
{
	list<int> coll{ 1, 2, 3, 4, 5, 6 };

	// ��� ���� ���
	// ���ٴ� callable type�̴�.
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

	// v*c�� ����� ȭ�鿡 ����Ͻÿ�.
	// �Լ� �ϳ��� ����� ��. -> transform()
	//
	//transform(�ҽ�1,�ҽ�2,������,����)
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
// �̸� ���ǵǾ� �ִ� �Լ� ��ü(291)

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
	// set<Game,less<Game>> s; (less = ��������)
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
// ���δ�
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
	save();
}