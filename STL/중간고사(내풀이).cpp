#include<iostream>
#include<list>
#include<cmath>
#include<random>
#include<algorithm>
#include<fstream>
using namespace std;

class Zombie
{
	int x, y;
	int hp{ 100 };
	bool alive;
public:
	Zombie(int x, int y) :
		x(x), y(y), hp(100), alive(true){}
	Zombie(int x, int y, int hp) :
		x(x), y(y), hp(hp), alive(true){}

	// 값을 읽을수있는 getter
	int getX() const { return x; }
	int getY() const { return y; }
	int getHP() const { return hp; }

	bool isAlive() const { return alive; }
	void render() const
	{
		cout << "위치(" << getX() << "," << getY() << ")HP : " << getHP() << endl;
	}
	void decHP(int n)
	{
		hp -= n;
		if (hp < 0)
			alive = false;
	}

};

template<class Lst, class Val>
void print(Lst& d, Val pos)
{
	auto p = d.begin();
	for (int i = 0; i < pos; ++i)
		++p;
	int iDistance = distance(d.begin(), p);

	for (int i = 0; i < 6; ++i)
		--p;
	for (int i = iDistance - 5; i < iDistance + 6; ++i)
	{
		if (i == iDistance)
		{
			cout << "***" << i << "***";
		}
		else
			cout << "[" << i << "]";

		p->render();
		++p;
	}
}


ofstream& operator <<(ofstream& os, list<Zombie>& p)
{
	list<Zombie>::iterator iter = p.begin();
	for (auto&d : p)
		os << d.getX() << " " << d.getY() << " " << d.getHP() << endl;
	return os;
}

ifstream& operator >>(ifstream &is, list<Zombie>& p)
{
	int x, y, hp;
	while (is >> x >> y >> hp)
		p.push_back(Zombie(x, y, hp));
	return is;
}

void main()
{
	list<Zombie> data;

	default_random_engine dre;
	uniform_int_distribution<int> di(-1000, 1000);

	//1
	for (int i = 0; i < 100; ++i)
		data.emplace_back(Zombie(di(dre), di(dre)));

	////2
	//cout << "---------------------------------" << endl;
	//cout << "[문제 2] 리스트의 원소를 출력함 1~ *6*~10" << endl;
	//cout << "---------------------------------" << endl;
	//print(data, 6);



	//3
	int n = 500;
	int bx = 100, by = 200; // 폭탄의 위치
	double dist;
	while (0 < n)
	{
		list<Zombie>::iterator iter = data.begin();
		for (; iter != data.end(); ++iter)
		{
			dist = sqrt((bx - iter->getX()) * (bx - iter->getX())
				+ (by - iter->getY()) * (by - iter->getY()));
			if (dist == 0)
				iter->decHP(iter->getHP());
			else
				iter->decHP((int)(1000 / dist));
		}
		--n;
	}


	//4
	cout << "정렬 후 " << endl;
	data.sort([](const Zombie& a, const Zombie& b){
		return a.getHP() > b.getHP();
	});



	//cout << "---------------------------------" << endl;
	//cout << "[문제 4] 리스트의 원소를 출력함 (기준 4)" << endl;
	//cout << "---------------------------------" << endl;
	//print(data, 6);

	//5
	data.remove_if([](const Zombie& a){
		return !a.isAlive();
	});

	//6
	cout << "---------------------------------" << endl;
	cout << "[문제 5] 리스트의 원소를 출력함 (기준 4)" << endl;
	cout << "---------------------------------" << endl;
	//print(data, 6);

	for (auto& d : data)
		d.render();

	list<Zombie>::iterator iter = data.begin();
	int iCount = 0;
	for (; iter != data.end(); ++iter)
	{
		++iCount;
	}
	cout << iCount << endl;;

	for (int i = 0; i < 100 - iCount; ++i)
	{
		data.insert(iter, Zombie(di(dre), di(dre)));
	}

	int inum = 1;
	for (auto& d : data)
	{
		cout << "(" << inum++ << ")";
		d.render();
	}
	print(data, 21);
	// 7
	ofstream out("좀비저장.txt");
	out << data;
	out.close();
	data.clear();
	cout << endl << data.size() << endl;

	// 8 
	ifstream in("좀비저장.txt");
	in >> data;
	in.close();
	print(data, 21);

}
