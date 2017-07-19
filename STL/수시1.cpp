//1¹ø

#include <iostream>
using namespace std;

template <class T>
void f(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

int main()
{
	int a(1), b(2);
	string c("C++"), d("STL");

	f(a, b);
}


////////////////////////////////////////////////////////////////

//2¹ø


#include <iostream>
using namespace std;

class Test{};

int main()
{
	Test a, b;
	Test c = b;
	Test d(move(a));
	b = static_cast<Test&&>(d);
}




////////////////////////////////////////////////////////////////


//3¹ø


#include <iostream>
using namespace std;

class Test{
public:
	int operator() (int a, int b){
		return a > b ? a : b;
	}
};

int main()
{
	Test t;

	cout << t(4, 2) << endl;
}


/////////////////////////////////////////////////////////////////


//4¹ø


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef pair<string, string> Data;

ostream& operator<<(ostream& os, const Data& d)
{
	os << d.first << "--->" << d.second;
	return os;
}
int main()
{
	vector<Data> v;

	v.push_back(Data(make_pair("Ã¶¼ö", "password")));
	v.push_back(Data(make_pair("¿µÈñ", "1234")));
	v.push_back(Data(make_pair("³ªºñ", "korea")));

	sort(v.begin(), v.end(), [](const Data &a, const Data &b){
		return a.second < b.second;
	});

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;
}