#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<fstream>
#include<algorithm>
#include<iterator>
#include<functional>
using namespace std;

class Player
{
	int hp;
	double x, y;
public:
	Player(double x, double y, int hp = 100)
		: x(x), y(y) {}
};

// HEAP 자원을 소모하는 몬스터
class Monster
{
	int num;
	double x, y;
	int* p;
public:
	Monster(double x, double y, int n)
		: x(x), y(y), num(n)
	{
		p = new int[num];
		for (int i = 0; i < num; ++i)
			p[i] = rand();
	}

	Monster(double x, double y, int n, int s)
		: x(x), y(y), num(n)
	{
		p = new int[num];
		p[0] = s;
		//
	}

	void show()
	{
		cout << "몬스터" << "(" << x << "," << y << ")" << "할당 자원 수" << num
			<< "\t" << "첫째 값" << p[0] << endl;
	}
	
	double dist() const
	{
		// 이함수는(0,0)과 (x,y)거리를 알려준다
		return sqrt(x*x + y*y);
	}
public:
	//~Monster()
	//{
	//	delete[] p;
	//}
	double getX() const { return x; }
	double getY() const { return y; }
	int getN() const { return num; }
	int* getP() const { return p; }
};

ostream& operator <<(ostream& os, list<Monster>& p)	// ofstream -> 파일에서만 제한한다.
{
	for (auto&d : p)
	{
		os << d.getX() << " " << d.getY() << " " << d.getN()
			<< " " << d.getP()[0] << endl;
	}
	return os;
}

ifstream& operator >>(ifstream &is, list<Monster>& p)
{
	double x, y;
	int n;
	int s;
	while (is >> x >> y >> n >> s)
	{
		p.push_back(Monster(x, y, n,s));
	}
	return is;
}

void main()
{
	Player me(0.0, 0.0);

	list<Monster> m;
	for (int i = 0; i < 100; ++i)
		m.push_back(Monster((double)(rand() % 41 - 20), (double)(rand() % 41 - 20), rand() % 91 + 10));
	
	//cout << endl;
	//cout << "--------------------" << endl;
	//cout << "문제 2결과 출력" << endl;
	//cout << "--------------------" << endl;
	//for (Monster d : m)
	//	d.show();


	// 문제 7
	m.remove_if([](const Monster& a){
		return a.dist() < 10;
	});

	m.sort([](const Monster& a, const Monster& b){
		return a.dist() < b.dist();
	});

	//cout << endl;
	//cout << "--------------------" << endl;
	//cout << "문제 7결과 출력" << endl;
	//cout << "--------------------" << endl;
	//for (Monster d : m)
	//{
	//	cout << "거리 - " << d.dist() << "\t";
	//	d.show();
	//}
	// 문제 8
	ofstream out("기말시험.txt");
	out << m;
	out.close();

	m.clear();
	cout << endl;
	cout << "문자 8 - 컨테이너의 원소의 수 " << m.size() << endl;

	ifstream in("기말시험.txt");
	in >> m;

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "문제 8 결과 출력 " << endl;
	cout << "-----------------------" << endl;
	for (Monster d:m)
	{
		cout << "거리 - " << d.dist() << "\t";
		d.show();
	}
}