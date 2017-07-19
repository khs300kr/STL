#include "stdafx.h"
int main(void){
	ifstream ifs("�ȷ�Ȩ����+����.txt");
	vector<string> v({ istream_iterator<string>(ifs), istream_iterator<string>() });
	ifs.close();

	cout << "STL�⸻ �����Դϴ�" << endl;

	cout << endl;
	cout << "��� : " << v.size() << "���� �ܾ �о����ϴ�" << endl;

	//����1
	//map<unsigned char, int > m1;   
	//
	//auto s = v.begin();
	//while (s != v.end()){
	//   char *p = (char*)(s->data());
	//   int size = strlen(p);      

	//   for (int i = 0; i < size; ++i){
	//      m1.insert(make_pair(p[i], m1[p[i]]++));//c�� Ű���� ���� ++��
	//   }
	//   s++;      
	//}

	//cout << endl << endl;
	//cout << "[����1]�� ���" << endl;
	//for (auto d : m1)
	//   cout << d.first << "-->" << d.second << endl;

	//����2      
	//multimap<int, unsigned char, greater<int>> m2;
	//
	//auto b = m1.begin();
	//while (b != m1.end()){
	//   m2.insert(make_pair(b->second, b->first));//c�� Ű���� ���� ++��      
	//   b++;
	//}
	//cout << endl << endl;
	//cout << "[����2]�ǰ��" << endl;
	//for (auto d : m2)
	//   cout << d.first << "-->" << d.second << endl;


	//3��
	sort(v.begin(), v.end(), [](string a, string b){
		return a.size() > b.size();//�̷����ϸ� ��� ������
		//return a.size() < b.size();//�̷����ϸ� ª���� ������
	});

	/*cout << endl << endl;
	cout << "[����3]�� ��� - 100000��°���� 20��" << endl;
	for (int i = 10000; i < 10020; ++i)
	cout << v[i] << endl;*/


	//4��
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	sort(v.begin(), v.end(), [](string a, string b){
		return a.size() > b.size();//�̷����ϸ� ��� ������      
	});

	cout << endl << endl;
	cout << "[���� 4]�� ���" << endl;
	cout << "�ߺ��� �ܾ ���� �� ������ ����:" << v.size() << endl;
	cout << "1000��°���� 10���� �ܾ�" << endl;

	for (int i = 1000; i < 1010; ++i)
		cout << v[i] << endl;

	cout << endl << endl;
	cout << "���� �ڿ��� ���� 20���� �ܾ�" << endl;

	for (auto i = v.rbegin(); i <= v.rbegin() + 10; ++i)
		cout << *i << endl;


	//����5      
	int n{ 0 };

	/*auto temp = v.begin();
	while (temp != v.end()){
	if (temp->size() == 7)   n++;
	temp++;
	}

	cout << endl << endl;
	cout << "[���� 5]�� ���" << endl;
	cout << "���̰� 7�� �ܾ��� �� : " << n << endl;*/


	//���� 6//7�̻��� v2��

	/*vector<string> v2;
	vector<string> v3;
	v2.reserve(n);


	partition_copy(v.begin(), v.end(), back_inserter(v2), back_inserter(v3), [](string &a) {
	return (a.size() == 7);
	});

	cout << endl << endl;
	cout << "[���� 6]�� ���" << endl;
	cout << "���̰� 7�� �ܾ��� ��" << v2.size() << endl;

	cout << "�տ��� ���� 20�� ��� " << endl;
	for (int i = 0; i < 20; ++i)
	cout << v2[i] << endl;
	cout << endl;*/


	//3.1 ���ʽ�//���������� ������!-----------------------------------------------
	/*sort(v.begin(), v.end(), [](string a, string b){
	return a < b;
	});


	cout << endl << endl;
	cout << "[����3]�� ��� - 100000��°���� 20��" << endl;
	for (int i = 10000; i < 10120; ++i)
	cout << v[i] << endl;*/
}