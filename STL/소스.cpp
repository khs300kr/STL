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

// HEAP �ڿ��� �Ҹ��ϴ� ����
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
		cout << "����" << "(" << x << "," << y << ")" << "�Ҵ� �ڿ� ��" << num
			<< "\t" << "ù° ��" << p[0] << endl;
	}
	
	double dist() const
	{
		// ���Լ���(0,0)�� (x,y)�Ÿ��� �˷��ش�
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

ostream& operator <<(ostream& os, list<Monster>& p)	// ofstream -> ���Ͽ����� �����Ѵ�.
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
	//cout << "���� 2��� ���" << endl;
	//cout << "--------------------" << endl;
	//for (Monster d : m)
	//	d.show();


	// ���� 7
	m.remove_if([](const Monster& a){
		return a.dist() < 10;
	});

	m.sort([](const Monster& a, const Monster& b){
		return a.dist() < b.dist();
	});

	//cout << endl;
	//cout << "--------------------" << endl;
	//cout << "���� 7��� ���" << endl;
	//cout << "--------------------" << endl;
	//for (Monster d : m)
	//{
	//	cout << "�Ÿ� - " << d.dist() << "\t";
	//	d.show();
	//}
	// ���� 8
	ofstream out("�⸻����.txt");
	out << m;
	out.close();

	m.clear();
	cout << endl;
	cout << "���� 8 - �����̳��� ������ �� " << m.size() << endl;

	ifstream in("�⸻����.txt");
	in >> m;

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "���� 8 ��� ��� " << endl;
	cout << "-----------------------" << endl;
	for (Monster d:m)
	{
		cout << "�Ÿ� - " << d.dist() << "\t";
		d.show();
	}
}