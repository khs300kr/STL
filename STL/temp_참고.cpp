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
	int x, y;	// 2D ȭ����� ��ġ
	int hp;		// ü��
	bool alive;	// true: ����ִ� ����? , false : ü���� �ٴڳ� ����
public:
	explicit Zombie(int x, int y, int hp) : x(x), y(y), hp(hp), alive(true){
		//		cout << "�������" << endl;
		// ���� �����ϴ� ������
		// x�� 0~1023 y�� 0~767������ ����, hp�� 100���� ����.(��� ��谪 ����)
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
	cout << "������ ��: " << z.size() << endl;
	auto i = z.begin();
	int a = 0;
	for (; i != z.end(); ++i){
		if (a >= b&&a <= b + c)
			cout << "X,Y��ǥ (" << i->getXY().first << ", " << i->getXY().second << ") " << "HP�� : " << i->getHP() << " �������� : " << i->isAlive() << endl;
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
	cout << "[���� 2] ����Ʈ�� ���Ҹ� �����(10���� �ǳʶٰ� 5��)" << endl;
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
	cout << "[���� 4] ����Ʈ�� ���Ҹ� �����(0��° ���Һ��� 10��)" << endl;
	cout << "-----------------------------------------------------" << endl;

	print(data, 0, 10);

	cout << "-----------------------------------------------------" << endl;
	cout << "[���� 5]" << endl;
	cout << "-----------------------------------------------------" << endl;

	data.remove_if([](Zombie a){
		return !a.isAlive();
	});

	print(data, 0, 5);

	cout << "-----------------------------------------------------" << endl;
	cout << "[���� 6]" << endl;
	cout << "-----------------------------------------------------" << endl;

	ofstream out("��������.txt");
	out << data;
	out.close();

	data.clear();
	cout << endl;
	cout << "���� ���� ���� " << data.size() << endl;
	cout << endl;

	cout << "-----------------------------------------------------" << endl;
	cout << "[���� 7]" << endl;
	cout << "-----------------------------------------------------" << endl;

	ifstream in("��������.txt");
	in >> data;
	in.close();

	cout << "���Ͽ��� �о� �ٽ� ���� ����Ʈ" << endl;
	print(data, 0, 10);
}