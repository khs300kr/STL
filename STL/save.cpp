//----------------------------------------------------
//	2016.1.STL ��23 ��23
//
//	3. 7 �� (2����/1��)
//----------------------------------------------------
// �ҽ����� �ϵ忡 ����, ��¥ �ٿ���, CPP ���� �и�
// ����,���� �ѹ� ����
//----------------------------------------------------

#pragma warning(disable:4996)
#include<iostream>
#include<fstream>
#include<chrono>	// �ð� ���õ� �Լ��� ��ü
#include<string>
#include<ctime>
using namespace std;

void save()
{
	// ���� �ð��� �о�´�.
	chrono::system_clock::time_point tp =
		chrono::system_clock::now();
	// �ð��� ��¥�� �ٲ۴�.
	time_t tt = chrono::system_clock::to_time_t(tp);
	string date = ctime(&tt);
	date.resize(date.length() - 1);

	// ��� ������ ����.
	ofstream out("2016 1 STL 14����.cpp", ios::app);
	out << endl << "//=============================================" << endl;
	out << "//\t\t\t" << date << endl;
	out << "//=============================================" << endl;

	// ��� ���Ͽ� ������ ����Ѵ�.
	// �Է�����(�ҽ�.cpp)�� ����.
	ifstream in("�ҽ�.cpp");
	// �Է������� ��� ������ ������Ͽ� ����.
	char c;
	while (in.get(c))
		out.put(c);
}

