//----------------------------------------------------
//	2016.1.STL 월23 수23
//
//	3. 7 월 (2일차/1주)
//----------------------------------------------------
// 소스파일 하드에 저장, 날짜 붙여서, CPP 파일 분리
// 정렬,랜덤 넘버 생성
//----------------------------------------------------

#pragma warning(disable:4996)
#include<iostream>
#include<fstream>
#include<chrono>	// 시간 관련된 함수와 객체
#include<string>
#include<ctime>
using namespace std;

void save()
{
	// 현재 시각을 읽어온다.
	chrono::system_clock::time_point tp =
		chrono::system_clock::now();
	// 시간을 날짜로 바꾼다.
	time_t tt = chrono::system_clock::to_time_t(tp);
	string date = ctime(&tt);
	date.resize(date.length() - 1);

	// 출력 파일을 연다.
	ofstream out("2016 1 STL 14주차.cpp", ios::app);
	out << endl << "//=============================================" << endl;
	out << "//\t\t\t" << date << endl;
	out << "//=============================================" << endl;

	// 출력 파일에 날씨를 기록한다.
	// 입력파일(소스.cpp)을 연다.
	ifstream in("소스.cpp");
	// 입력파일의 모든 내용을 출력파일에 쓴다.
	char c;
	while (in.get(c))
		out.put(c);
}

