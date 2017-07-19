#include<iostream>
#include<random>
#include<list>
#include<cmath>
#include<algorithm>
#include<fstream>
using namespace std;

//-------
class Zombie
{
	int x, y;	// 2D 화면상의 위치
	int hp;		// 체력
	bool alive;	// true: 살아있는 좀비? , false : 체력이 바닥난 좀비
public:
	explicit Zombie(int x, int y, int hp) : x(x), y(y), hp(hp), alive(true){
		//		cout << "좀비생성" << endl;
		// 좀비를 생성하는 생성자
		// x는 0~1023 y는 0~767사이의 정수, hp는 100에서 시작.(모두 경계값 포함)
	}
	pair<int, int> getXY(){ return make_pair(x, y); }
	int getHP(){ return hp; }
	bool isAlive(){ return alive; }
	void render(){ }
	void decHP(int n){
		hp -= n;
		if (hp < 0)
			alive = false;
	}
};


void print(list<Zombie> z, const int &b, const int&c){
	cout << "좀비의 수: " << z.size() << endl;
	auto i = z.begin();
	int a = 0;
	for (; i != z.end(); ++i){
		if (a >= b&&a <= b + c)
			cout << "X,Y좌표 (" << i->getXY().first << ", " << i->getXY().second << ") " << "HP값 : " << i->getHP() << " 생존여부 : " << i->isAlive() << endl;
		++a;
	}
}

ofstream& operator<<(ofstream &os, list<Zombie> data){
	for (auto i = data.begin(); i != data.end(); ++i){
		os << i->getXY().first << " " << i->getXY().second << " " << i->getHP() << endl;
	}
	return os;
};

ifstream& operator>>(ifstream &is, list<Zombie> &data){
	int x, y, hp;
	while (is >> x >> y >> hp)
		data.push_back(Zombie(x, y, hp));
	return is;
};

int main(){
	list<Zombie> data;
	default_random_engine rNum;
	uniform_int_distribution<int> randX(0, 1023);
	uniform_int_distribution<int> randY(0, 767);

	for (int i = 0; i < 50; ++i)
		data.push_back(Zombie(randX(rNum), randY(rNum), 100));

	cout << "-----------------------------------------------------" << endl;
	cout << "[문제 2] 리스트의 원소를 출력함(10개를 건너뛰고 5개)" << endl;
	cout << "-----------------------------------------------------" << endl;

	print(data, 10, 5);

	int bx = 555, by = 333;
	double dist;

	list<Zombie>::iterator p;
	for (p = data.begin(); p != data.end(); ++p){
		dist = sqrt((bx - p->getXY().first)*(bx - p->getXY().first) + (by - p->getXY().second)*(by - p->getXY().second));
		if (dist == 0)
			p->decHP(p->getHP());
		else
			p->decHP(3000 / dist);
	}

	data.sort([](Zombie &a, Zombie &b){
		return a.getHP() < b.getHP();
	});

	cout << "-----------------------------------------------------" << endl;
	cout << "[문제 4] 리스트의 원소를 출력함(0번째 원소부터 10개)" << endl;
	cout << "-----------------------------------------------------" << endl;

	print(data, 0, 10);

	cout << "-----------------------------------------------------" << endl;
	cout << "[문제 5]" << endl;
	cout << "-----------------------------------------------------" << endl;

	data.remove_if([](Zombie a){
		return !a.isAlive();
	});

	print(data, 0, 5);

	cout << "-----------------------------------------------------" << endl;
	cout << "[문제 6]" << endl;
	cout << "-----------------------------------------------------" << endl;

	ofstream out("좀비저장.txt");
	out << data;
	out.close();

	data.clear();
	cout << endl;
	cout << "현재 좀비 수는 " << data.size() << endl;
	cout << endl;

	cout << "-----------------------------------------------------" << endl;
	cout << "[문제 7]" << endl;
	cout << "-----------------------------------------------------" << endl;

	ifstream in("좀비저장.txt");
	in >> data;
	in.close();

	cout << "파일에서 읽어 다시 만든 리스트" << endl;
	print(data, 0, 10);
}