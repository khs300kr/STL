//=============================================
//			Wed Jun 08 10:38:09 2016
//=============================================
// 2016. 6. 8. 수 23(월수) (14주)1
// 14주 2 알고리즘/애너그램 종강
// 15주 1 기말고사
// 15주 2 점수확인

// 10. STL 함수 객체와 람다 사용.

#include<iostream>
#include<set>
#include"save.h"

// 10장 함수 객체와 람다 사용.
using namespace std;

class Game
{
private:
	int level{ 19 };
public:
	Game(int n)
		: level(n) {}
	bool operator<(const Game& other) const
	{
		return level < other.level;
	}
	int get_n() const {return level;}
		
};

void main()
{
	// 정렬의 기준으로 함수 객체를 사용할수 있다.
	set<Game> s;			

	s.insert({ 1, 10, 5, 3, 19 });
	save();
}
//=============================================
//			Wed Jun 08 10:47:57 2016
//=============================================
// 2016. 6. 8. 수 23(월수) (14주)1
// 14주 2 알고리즘/애너그램 종강
// 15주 1 기말고사
// 15주 2 점수확인

// 10. STL 함수 객체와 람다 사용.

#include<iostream>
#include<set>
#include"save.h"

// 10장 함수 객체와 람다 사용.
using namespace std;

class Game
{
private:
	int level{ 19 };
public:
	Game(int n)
		: level(n) {}
	bool operator<(const Game& other) const
	{
		return level < other.level;
	}
	int get_n() const {return level;}
		
};

// 함수 객체는 어떤 클래스이다.
class XXX
{
public:
	bool operator()(const Game& a, const Game& b)
	{
		return a.get_n() < b.get_n();
	}
};

void main()
{
	// 정렬의 기준으로 함수 객체를 사용할수 있다.
	set<Game, XXX> s;			
	// 입력에따라서 함수객체 YYY로 내림차순으로도 
	// 함수객체를 대체할수있다.
	s.insert({ 1, 10, 5, 3, 19 });
	
	for (Game d : s)
		cout << d.get_n() << endl;
	save();
}
//=============================================
//			Wed Jun 08 10:58:13 2016
//=============================================
#include<iostream>
#include<set>
#include"save.h"

using namespace std;
// 540쪽 상태를 갖는 함수객체
class IntSequence
{
private:
	int value;
public:
	IntSequence(int val) 
		: value(val) {}
	int operator() ()
	{
		return ++value;
	}
};
void main()
{
	IntSequence i(10);
	i();
	i();
	i();
	// 함수의 값을 삭제하는것이아니라
	// 상태를 갖고 증가한다.

	save();
}
//=============================================
//			Wed Jun 08 11:06:58 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include"save.h"

using namespace std;

// 함수객체를 이용하여 542쪽과 같은 프로그램을 할 수 있다.
template<class Iter,class Call>
Call foreach(Iter b, Iter e, Call c)
{
	while (b != e)
		c(*b++);
	return c;
}

class MeanValue
{
private:
	int iSum { 0 };
	int iCount { 0 };
public:
	void operator()(int n)
	{
		iSum += n;
		iCount++;
	}
	double value()
	{
		return iSum / iCount;
	}
};

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8 };

	// 평균값을 계산하여 출력한다.
	MeanValue ave = for_each(v.begin(), v.end(), MeanValue());

	cout << "평균값은" << ave.value() << endl;
	save();
}
//=============================================
//			Wed Jun 08 11:17:55 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

// 함수객체를 이용하여 542쪽과 같은 프로그램을 할 수 있다.
template<class Iter,class Call>
Call foreach(Iter b, Iter e, Call c)
{
	while (b != e)
		c(*b++);
	return c;
}

class MeanValue
{
private:
	int iSum { 0 };
	int iCount { 0 };
public:
	void operator()(int n)
	{
		iSum += n;
		iCount++;
	}
	double value()
	{
		return (double)iSum / iCount;
	}
};

void main()
{
	vector<int> v{ istream_iterator<int>(cin),
		istream_iterator<int>()};
	

	cout << "평균값은 " 
		<< foreach(v.begin(),v.end(),MeanValue()).value() << endl;
	save();
}
//=============================================
//			Wed Jun 08 11:19:21 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

// 함수객체를 이용하여 542쪽과 같은 프로그램을 할 수 있다.
template<class Iter,class Call>
Call foreach(Iter b, Iter e, Call c)
{
	while (b != e)
		c(*b++);
	return c;
}

class MeanValue
{
private:
	int iSum { 0 };
	int iCount { 0 };
public:
	void operator()(int n)
	{
		iSum += n;
		iCount++;
	}
	double value()
	{
		return (double)iSum / iCount;
	}
	operator double() { return value(); }
};

void main()
{
	vector<int> v{ istream_iterator<int>(cin),
		istream_iterator<int>()};
	

	cout << "평균값은 " 
		<< foreach(v.begin(),v.end(),MeanValue()) << endl;
	save();
}
//=============================================
//			Wed Jun 08 11:47:56 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{1, 3, 5};

	cout << all_of(v.begin(), v.end(), [](int n){
		return n & 1;
	}) << endl;// 너 전부 홀수니?
	
	save();
}
//=============================================
//			Wed Jun 08 12:04:37 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 1, 2, 2, 2, 3 };

	v.erase(unique(v.begin(), v.end()), v.end());
	for (int d : v)
		cout << d << endl;
	
	save();
}
//=============================================
//			Wed Jun 08 12:05:01 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 1, 2, 2, 2, 3,1 };

	v.erase(unique(v.begin(), v.end()), v.end());
	for (int d : v)
		cout << d << endl;
	// 인접한녀석만 지운다. 즉 정렬이 되어있어야함.
	save();
}
//=============================================
//			Wed Jun 08 12:11:13 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// 갈라치기 하는 알고리즘.
	partition(v.begin(), v.end(), [](int n){
		return !(n & 1);
	});

	for (int d : v)
		cout << d << " ";
	save();
}
//=============================================
//			Wed Jun 08 12:14:53 2016
//=============================================
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"save.h"

using namespace std;

void main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// 갈라치기 하는 알고리즘.
	auto p = stable_partition(v.begin(), v.end(), [](int n){
		return !(n & 1);
	});

	for (int d : v)
		cout << d << " ";
	cout << endl;

	save();
}
//=============================================
//			Mon Jun 13 10:51:59 2016
//=============================================
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"save.h"

using namespace std;

void main()
{
	cout << "Anagram을 찾는 프로그램" << endl;

	cout << "사전 파일을 입력하세요 : " << flush;

	string dictionary_name;
	cin >> dictionary_name;

	ifstream ifs(dictionary_name);
	if (!ifs.is_open())	// 파일이 잘 열렸니?
	{
		cout << dictionary_name << "을 읽을 수 없습니다" << endl;
		exit(0);
	}

	vector<string> v;
	
	string s;
	while (ifs >> s)
	{
		v.push_back(s);
	}
	save();
}

//=============================================
//			Mon Jun 13 10:57:55 2016
//=============================================
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include"save.h"

using namespace std;

void main()
{
	cout << "Anagram을 찾는 프로그램" << endl;

	ifstream ifs("diction");
	if (!ifs.is_open())	// 파일이 잘 열렸니?
	{
		cout << "파일 diction을 읽을 수 없습니다" << endl;
		exit(0);
	}

	vector<string> v;

	copy(istream_iterator<string>(ifs), istream_iterator<string>(),
		back_inserter(v));

	cout << "모두 " << v.size() << "개의 단어를 읽었습니다" << endl;

	save();
}

//=============================================
//			Mon Jun 13 11:17:50 2016
//=============================================
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include"save.h"

using namespace std;

struct PS : pair<string, string>
{
	PS() : pair<string, string>(string(), string()) {}
	PS(const string& s) : pair<string, string>(s, s){
		sort(first.begin(), first.end());
	}
};

void main()
{
	cout << "Anagram을 찾는 프로그램" << endl;

	ifstream ifs("diction");
	if (!ifs.is_open())	// 파일이 잘 열렸니?
	{
		cout << "파일 diction을 읽을 수 없습니다" << endl;
		exit(0);
	}

	vector<PS> v;
	v.reserve(20159);

	copy(istream_iterator<string>(ifs), 
		istream_iterator<string>(),	back_inserter(v));
	cout << "모두 " << v.size() << "개의 단어를 읽었습니다" << endl;

	// 아이디어
	// 읽은 단어와 그 단어를 정렬한 단어를 하나의 쌍으로 만든다.

	// 화면에 v를 출력해보자
	for (int i = 10000; i < 10100; ++i)
	{
		cout << v[i].first << " --- " << v[i].second << endl;
	}
	save();
}

//=============================================
//			Mon Jun 13 11:18:57 2016
//=============================================
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include"save.h"

using namespace std;

struct PS : pair<string, string>
{
	PS() : pair<string, string>(string(), string()) {}
	PS(const string& s) : pair<string, string>(s, s){
		sort(first.begin(), first.end());
	}
};

void main()
{
	cout << "Anagram을 찾는 프로그램" << endl;

	ifstream ifs("diction");
	if (!ifs.is_open())	// 파일이 잘 열렸니?
	{
		cout << "파일 diction을 읽을 수 없습니다" << endl;
		exit(0);
	}

	vector<PS> v;
	v.reserve(20159);

	copy(istream_iterator<string>(ifs), 
		istream_iterator<string>(),	back_inserter(v));
	cout << "모두 " << v.size() << "개의 단어를 읽었습니다" << endl;

	// 아이디어
	// 읽은 단어와 그 단어를 정렬한 단어를 하나의 쌍으로 만든다.
	// v의 first 기준으로 정렬한다.
	sort(v.begin(), v.end(), [](const PS&a, const PS&b){
		return a.first < b.first;
	});
	// 화면에 v를 출력해보자
	for (int i = 10000; i < 10100; ++i)
	{
		cout << v[i].first << " --- " << v[i].second << endl;
	}
	save();
}

//=============================================
//			Mon Jun 13 11:59:04 2016
//=============================================
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include"save.h"

using namespace std;

struct PS : pair<string, string>
{
	PS() : pair<string, string>(string(), string()) {}
	PS(const string& s) : pair<string, string>(s, s){
		sort(first.begin(), first.end());
	}
	operator string() const { return second; }
};

void main()
{
	cout << "Anagram을 찾는 프로그램" << endl;

	ifstream ifs("diction");
	if (!ifs.is_open())	// 파일이 잘 열렸니?
	{
		cout << "파일 diction을 읽을 수 없습니다" << endl;
		exit(0);
	}

	vector<PS> v;
	v.reserve(20159);

	copy(istream_iterator<string>(ifs), 
		istream_iterator<string>(),	back_inserter(v));
	cout << "모두 " << v.size() << "개의 단어를 읽었습니다" << endl;

	// 아이디어
	// 읽은 단어와 그 단어를 정렬한 단어를 하나의 쌍으로 만든다.
	// v의 first 기준으로 정렬한다.
	sort(v.begin(), v.end(), [](const PS&a, const PS&b){
		return a.first < b.first;
	});

	//// 화면에 v를 출력해보자
	//for (int i = 0; i < 10100; ++i)
	//{
	//	cout << v[i].first << " --- " << v[i].second << endl;
	//}

	// 처음부터 끝까지 정렬해 놓은 단어를 기준으로
	// 현재 위치와 다음 윙치의 단어가 같은 것을 찾는다
	// if (발견했다)
	//		발견한 위치부터 같지 않은 단어가 나오는 위치를 찾는다.

	int i = 1;
	vector<PS>::const_iterator j = v.begin(),
		end = v.end(), k;

	while (true)
	{
		j = adjacent_find(j, end, [](const PS& a, const PS& b){
			return a.first == b.first;
		});

		if (j == end)
			break;
		k = find_if_not(j + 1, end, [j](const PS& a){
			return a.first == j->first;
		});

		// 구간 [j,k)는 anagram이다.
		cout << "[" << i++ << "] ";
		copy(j, k, ostream_iterator<string>(cout, " "));
		cout << endl;
		j = k;
	}
	save();
}