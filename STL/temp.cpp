#include "stdafx.h"
int main(void){
	ifstream ifs("셜록홈즈의+모험.txt");
	vector<string> v({ istream_iterator<string>(ifs), istream_iterator<string>() });
	ifs.close();

	cout << "STL기말 시험입니다" << endl;

	cout << endl;
	cout << "모두 : " << v.size() << "개의 단어를 읽었습니다" << endl;

	//문제1
	//map<unsigned char, int > m1;   
	//
	//auto s = v.begin();
	//while (s != v.end()){
	//   char *p = (char*)(s->data());
	//   int size = strlen(p);      

	//   for (int i = 0; i < size; ++i){
	//      m1.insert(make_pair(p[i], m1[p[i]]++));//c의 키값에 값이 ++댐
	//   }
	//   s++;      
	//}

	//cout << endl << endl;
	//cout << "[문제1]의 결과" << endl;
	//for (auto d : m1)
	//   cout << d.first << "-->" << d.second << endl;

	//문제2      
	//multimap<int, unsigned char, greater<int>> m2;
	//
	//auto b = m1.begin();
	//while (b != m1.end()){
	//   m2.insert(make_pair(b->second, b->first));//c의 키값에 값이 ++댐      
	//   b++;
	//}
	//cout << endl << endl;
	//cout << "[문제2]의결과" << endl;
	//for (auto d : m2)
	//   cout << d.first << "-->" << d.second << endl;


	//3번
	sort(v.begin(), v.end(), [](string a, string b){
		return a.size() > b.size();//이렇게하면 긴게 앞으로
		//return a.size() < b.size();//이렇게하면 짧은게 앞으로
	});

	/*cout << endl << endl;
	cout << "[문제3]의 결과 - 100000번째에서 20개" << endl;
	for (int i = 10000; i < 10020; ++i)
	cout << v[i] << endl;*/


	//4번
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	sort(v.begin(), v.end(), [](string a, string b){
		return a.size() > b.size();//이렇게하면 긴게 앞으로      
	});

	cout << endl << endl;
	cout << "[문제 4]의 결과" << endl;
	cout << "중복된 단어를 지운 후 벡터의 원소:" << v.size() << endl;
	cout << "1000번째부터 10개의 단어" << endl;

	for (int i = 1000; i < 1010; ++i)
		cout << v[i] << endl;

	cout << endl << endl;
	cout << "제일 뒤에서 부터 20개의 단어" << endl;

	for (auto i = v.rbegin(); i <= v.rbegin() + 10; ++i)
		cout << *i << endl;


	//문제5      
	int n{ 0 };

	/*auto temp = v.begin();
	while (temp != v.end()){
	if (temp->size() == 7)   n++;
	temp++;
	}

	cout << endl << endl;
	cout << "[문제 5]의 결과" << endl;
	cout << "길이가 7인 단어의 수 : " << n << endl;*/


	//문제 6//7이상을 v2에

	/*vector<string> v2;
	vector<string> v3;
	v2.reserve(n);


	partition_copy(v.begin(), v.end(), back_inserter(v2), back_inserter(v3), [](string &a) {
	return (a.size() == 7);
	});

	cout << endl << endl;
	cout << "[문제 6]의 결과" << endl;
	cout << "길이가 7인 단어의 수" << v2.size() << endl;

	cout << "앞에서 부터 20개 출력 " << endl;
	for (int i = 0; i < 20; ++i)
	cout << v2[i] << endl;
	cout << endl;*/


	//3.1 보너스//사전순으로 나누기!-----------------------------------------------
	/*sort(v.begin(), v.end(), [](string a, string b){
	return a < b;
	});


	cout << endl << endl;
	cout << "[문제3]의 결과 - 100000번째에서 20개" << endl;
	for (int i = 10000; i < 10120; ++i)
	cout << v[i] << endl;*/
}