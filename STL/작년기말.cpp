#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<iterator>
#include<map>
#include<functional>

using namespace std;

void main()
{
	ifstream ifs("셜록홈즈의+모험.txt");

	vector<string> v({ istream_iterator<string>(ifs),
		istream_iterator<string>() });
	ifs.close();

	cout << "---------------" << endl;
	cout << "STL 기말시헙입니다 " << endl;
	cout << "---------------" << endl;
	cout << endl;
	cout << "모두" << v.size() << "개의 단어를 읽었습니다" << endl;

	// [문제1]
	//map<unsigned char, int> m1;

	//vector<string>::iterator iter = v.begin();
	//for (; iter != v.end();)
	//{
	//	char* p = (char*)(iter->data());
	//	int size = strlen(p);

	//	for (int i = 0; i < size; ++i)
	//	{
	//		m1.insert(make_pair(p[i], ++m1[p[i]]));
	//	}
	//	++iter;

	//}

	//cout << endl << endl;
	//cout << "[문제 1]의 결과" << endl;
	//for (auto d : m1)
	//	cout << d.first << "-->" << d.second << endl;

	// [문제2]
	//map<int, unsigned char,greater<int>> m2;
	//for (auto& d : m1)
	//{
	//	m2.insert(make_pair(d.second, d.first));
	//}

	//cout << endl << endl;
	//cout << "[문제 2]의 결과" << endl;
	//for (auto d : m2)
	//	cout << d.first << "-->" << d.second << endl;

	// [문제3]
	//int numOfThe = 0;
	//vector<string>::iterator iter = v.begin();
	//for (; iter != v.end(); ++iter)
	//{
	//	if (*iter == "the")
	//		++numOfThe;
	//}

	//cout << endl << endl;
	//cout << "[문제 3]의 결과" << endl;
	//cout << numOfThe << endl;

	// [문제4]
	//map<string, int> m3;
	//vector<string>::iterator iter = v.begin();
	//for (; iter != v.end();)
	//{
	//	m3.insert(make_pair(*iter, ++m3[*iter]));
	//	++iter;
	//}
	//vector<pair<string, int>> temp(m3.begin(), m3.end());
	//sort(temp.begin(), temp.end(), [](pair<string, int>& a,
	//	pair<string, int>& b){
	//	return a.second > b.second;
	//});

	//for (int i = 0; i < 20; ++i)
	//{
	//	cout << temp[i].first << "-->" << temp[i].second << endl;
	//}

	// [문제 5]
	//중복 제거
	sort(v.begin(), v.end());
	auto p = unique(v.begin(), v.end());
	v.erase(p, v.end());

	// 단어의 길이수만큼 정렬.
	sort(v.begin(), v.end(), [](const string& a, const string& b){
		return a.length() > b.length();
	});

	//cout << endl << endl;
	//cout << "[문제5]의 결과" << endl;
	//cout << "중복된 단어를 지운 후 벡터의 수 : " << v.size() << endl;

	//cout << "2000번째부터 10개의 단어" << endl;
	//for (int i = 2000; i < 2010; ++i)
	//	cout << v[i] << endl;

	//cout << endl << endl;
	//cout << "제일 뒤에서 부터 20개 단어" << endl;
	//for (auto i = v.rbegin(); i <= v.rbegin() + 20; ++i)
	//	cout << *i << endl;

	// [문제 6]
	int n = count_if(v.begin(), v.end(), [](const string& s){
		return (s.length() == 10);
	});

	//cout << v.size() << endl;

	vector<string> v2, v3;
	v2.reserve(n);

	partition_copy(v.begin(), v.end(),
		back_inserter(v2), back_inserter(v3),
		[](const string a){
		return a.length() == 10;
	});
	v.clear();
	v = v3;

	//cout << v.size() << endl;
	//cout << v2.size() << endl;
	//cout << v3.size() << endl;

	cout << endl << endl;
	cout << "[문제 6]의 결과 " << endl;
	cout << "길이가 10인 단어의 수" << v2.size() << endl;

	cout << "앞에서 부터 20개 출력" << endl;
	for (int i = 0; i < 20; ++i)
		cout << v2[i] << endl;
	cout << endl;
}
