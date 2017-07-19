
//=============================================
//			Mon Apr  4 10:51:39 2016
//=============================================
#include<iostream>
#include<fstream>
#include<random>
#include "save.h"

using namespace std;

int cmp(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}


void main()
{
	default_random_engine dre;
	uniform_int_distribution<> ui;
	dre.seed(20121820077);

	// [1]
	int* a = new int[1000];
	for (int i = 0; i < 1000; ++i)
	{
		a[i] = ui(dre);
	}
	// [2]
	qsort(a, 1000, sizeof(int), cmp);

	// [3]
	cout << "A:" << a[0] << endl << "B:" << a[999] << endl;

	// [4]
	ofstream out("2012182008.txt");
	for (int i = 0; i < 1000; ++i)
	{
		out << a[i] << " ";
	}

	ifstream in("2012182008.txt");
	int x[100];
	for (int i = 0; i < 100; ++i)
	{
		in >> x[i];
	}
	for (int i = 0; i < 100; ++i)
	{
		cout << x[i] << " ";
	}
	cout << endl;
	
	delete[] a;

	save();
}