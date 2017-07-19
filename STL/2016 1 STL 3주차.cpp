	
//=============================================
//			Mon Mar 21 10:44:49 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

void main()
{
	string s("abcdefghijklmnopqrstuvwxyz");

	cout << s << endl;

	save();
}
//=============================================
//			Mon Mar 21 10:48:13 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 


void main()
{
	string s("abcdefghijklmnopqrstuvwxyz");
	string t = move(s);

	cout << s << endl;
	cout << t << endl;

	save();
}
//=============================================
//			Mon Mar 21 11:06:31 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.
		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b = move(a);

	save();
}
//=============================================
//			Mon Mar 21 11:07:22 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.
		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(a);

	save();
}
//=============================================
//			Mon Mar 21 11:07:44 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.
		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b((Model&&)a);

	save();
}
//=============================================
//			Mon Mar 21 11:10:06 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.
		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(1234);

	a = b;

	save();
}
//=============================================
//			Mon Mar 21 11:30:59 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (Model&& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.
		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

		other.data = nullptr;
		other.size = 0;

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(1234);

	a = move(b);

	save(); // 내가 한 것.
}
//=============================================
//			Mon Mar 21 11:35:12 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.
		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
	// 함수오버로딩으로 2개 생성.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(1234);

	a = move(b);
	save(); // 교수님 작품
}
//=============================================
//			Mon Mar 21 11:38:03 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
	// 함수오버로딩으로 2개 생성.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;

		// 내가 원래 할당한 메모리가 있다면 지우자.
		if (data != nullptr)
			delete[] data;

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(1234);

	a = move(b);

	save(); // 교수님 작품 + 오류 수정
}
//=============================================
//			Mon Mar 21 11:38:36 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
	// 함수오버로딩으로 2개 생성.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;

		// 내가 원래 할당한 메모리가 있다면 지우자.
		if (data != nullptr)
			delete[] data;

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(move(a));

	save();
}
//=============================================
//			Mon Mar 21 11:38:47 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
	// 함수오버로딩으로 2개 생성.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;

		// 내가 원래 할당한 메모리가 있다면 지우자.
		if (data != nullptr)
			delete[] data;

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(a);

	save();
}

// 이동생성자가 생기면 이동 대입 연산자도 같이 프로그래밍.
// 이것이 클래스.
// 이동생성자는 프로그래머 니가 명시적으로 사용하는게 아니다.
// 앞으로 STL에서 3가지 컴포넌트,컨테이너,이터레이터,알고리즘
// STL에서 엮어가는겁니다. 컨테이너는 자료구조이다.
// 11 이후에 자료구조에서는 STL 컨테이너를 사용하는 프로그래머라면
// 내가 클래스를 만들었다면, 거기다가 동적 메모리를 관리하고
// 있다면 C++ 11에서 새로 도입된 이동 생성을 프로그래밍을 구현해서
// 아주 효율적으로 프로그래밍을 구현할 수 있다.
// 대표적인 STL 컨테이터 자료구조 (vector - 동적 배열)를
// 사용해서 이동의미론 어떻게 사용하지는 알아보자.
//=============================================
//			Mon Mar 21 11:50:18 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<vector>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
	// 함수오버로딩으로 2개 생성.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;

		// 내가 원래 할당한 메모리가 있다면 지우자.
		if (data != nullptr)
			delete[] data;

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	//Model a[];
	// 빨간줄의 이유는 동적이 아니여서 이다.
	// 동적은 - 프로그래밍이 실현되는 동안.
	// 동적 반의어 - 컴파일 타임
	
	vector<Model> v;

	v.push_back(Model(100));

	save();
}
//=============================================
//			Mon Mar 21 12:00:59 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<vector>
#include"save.h"

using namespace std;

int gid{ 1 }; // global id 

class Model
{
private:
	char* data{ nullptr };	// 동적할당 메모리
	size_t size{ 0 };// 메모리의 크기
	int id; // 희생되는 메모리 ( 생성자가 호출 될때마다 id를 증가 )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default 생성자" << endl;
		// default 생성자.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " 인자 1개 생성자 " << size << endl;
		// 인자 1개 생성자.
	}
	Model(const Model& other) // 복사생성자
		: size{ other.size }
	{
		//// 할당
		//data = new char[size];
		//// 데이터를 복사해온다.
		//memcpy(data, other.data, size);

		// 대입연산자를 만들었다면 복사생성자를 간단하게
		// 사용 할 수 있다.
		*this = other;
		id = gid++;
		cout << id << " 복사생성 " << size << endl;
	}

	Model(Model&& other) // 이동생성자 ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동생성 " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " 소멸 " << size << endl;
	}
public:
	// Assignment operator(대입연산자).
	// return 값이 존재한다.
	Model& operator = (const Model& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;
		
		// 내가 만든 메모리를 먼저 지워야 한다.
		if (data != nullptr)
			delete[] data; // 이미 뭐가 있으면 지워라.

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " 대입 연산자 " << size << endl;
		return *this;
	}
	// 함수오버로딩으로 2개 생성.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// 자기 자신을 대입한다면 아무것도 안해도 된다.
		if (this == &other)
			return *this;	// 아무것도 안하고 나 자신을 return;

		// 내가 원래 할당한 메모리가 있다면 지우자.
		if (data != nullptr)
			delete[] data;

		// 대입할 때 메모리와 같은 내용으로 만든다.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " 이동 대입 연산자 " << size << endl;
		return *this;
	}
};

void main()
{
	//Model a[];
	// 빨간줄의 이유는 동적이 아니이여서 이다.
	// 동적은 - 프로그래밍이 실현되는 동안.
	// 동적 반의어 - 컴파일 타임
	
	vector<Model> v;
	v.push_back(Model(100));
	v.push_back(Model(200));
	v.push_back(Model(300));
	save();	// 메모리를 쫒아가서 할수있으면 훌륭한 이해
	/*
	vector<Model> v;
	// 이동하는버전의 삽입.
	v.push_back(Model(100));
	v.push_back(Model(200));
	// 이동연산,이동생성자를 지우고서 관찰해보자.
	// 이책은 3장 이동과 r-value를 처음부터 설명하고자
	// 57쪽 같은 내용은 전혀 몰라도 된다.
	*/
}
//=============================================
//			Mon Mar 21 12:11:21 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

class Test
{
private:
	/*
	Test(const Test&) 
		// 복사생성을 막는 구식 코드.
		// 컴파일 단계에서 거부.
	{	}
	*/
public:
//	void f() override final; // 더이상 오버라이드 하지마 final.
	Test() = default;
	// 현대 방식의 복사생성을 막는 코드.
	Test(const Test&) = delete;	
//	Test(const Test&) = default;

};

void main()
{
	Test a;
//	Test b(a);
	save();
}

// 3장 람다는 집에가서 읽어보세요.
//=============================================
//			Mon Mar 21 12:18:52 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

// 람다 : 이름없는 함수

void main()
{
	auto f =[]() { cout << "안녕 반가워 나는 람다야}"; };
	
	save();
}
//=============================================
//			Wed Mar 23 10:41:04 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

// 람다 : 이름없는 함수
// 함수를 프로그래머가 호출할 일은 없지만
// 함수의 기능(body)을 필요로 하는 곳에 사용함

void main()
{
	auto f =[]() { cout << "안녕 반가워 나는 람다야"<< endl; };
	
	f();

	save();
}
//=============================================
//			Wed Mar 23 10:49:47 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<algorithm>
#include"save.h"

using namespace std;

// 람다 : 이름없는 함수
// 함수를 프로그래머가 호출할 일은 없지만
// 함수의 기능(body)을 필요로 하는 곳에 사용함

bool f(int a, int b)
{
	return a > b;
}

void main()
{
	int a[]{ 1,3,5,7,9,2,4,6,8 };		// POD(Plain Old Type)
	sort(begin(a), end(a),f);			// f가 정렬해주는대로 하는것.

	for (auto d : a)
		cout << d << endl;
	save();
}
//=============================================
//			Wed Mar 23 10:56:13 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<algorithm>
#include"save.h"

using namespace std;

// 람다 : 이름없는 함수
// 함수를 프로그래머가 호출할 일은 없지만
// 함수의 기능(body)을 필요로 하는 곳에 사용함

void main()
{
	int a[]{ 1,3,5,7,9,2,4,6,8 };		// POD(Plain Old Type)
	sort(begin(a), end(a), [](int a, int b) -> bool {
		return a < b;
	});			// f가 정렬해주는대로 하는것.
	// [] : 람다 도입부
	for (auto d : a)
		cout << d << endl;

	save();

}
//=============================================
//			Wed Mar 23 11:02:56 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include"save.h"

using namespace std;

// 람다 : 이름없는 함수
// 함수를 프로그래머가 호출할 일은 없지만
// 함수의 기능(body)을 필요로 하는 곳에 사용함

class Happy {
public:
	Happy(int) {}
	operator int() { return 333; }
};
void main()
{
	Happy a[]{ 1,3,5,7,9,2,4,6,8 };		// POD(Plain Old Type)
	sort(begin(a), end(a), [](int a, int b) -> bool {
		return a < b;
	});			// f가 정렬해주는대로 하는것.
	// [] : 람다 도입부
	for (auto d : a)
		cout << d << endl;

	save();
}

//=============================================
//			Wed Mar 23 11:03:59 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include"save.h"

using namespace std;

// 람다 : 이름없는 함수
// 함수를 프로그래머가 호출할 일은 없지만
// 함수의 기능(body)을 필요로 하는 곳에 사용함

class Happy {
public:
	Happy(int) {}
	operator int() { return 333; }
};
void main()
{
	vector<Happy> a{ 1,3,5,7,9,2,4,6,8 };		// POD(Plain Old Type)
	sort(a.begin(), a.end() , [](int a, int b) -> bool {
		return a < b;
	});			// f가 정렬해주는대로 하는것.
	// [] : 람다 도입부
	for (auto d : a)
		cout << d << endl;

	save();
}

//=============================================
//			Wed Mar 23 12:07:57 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

// STL은 속도에 최적화된 라이브러리입니다.
// 이 말은 예외처리 따위는 하지 않는다는 의미입니다.
// 예외처리가 필요하다면 그렇게 해주는 특별버전의 라이브러리나 함수를 사용해야 합니다.

class SafeArray{};

void main()
{	
	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };

	int num;
	while (true)
	{
		cout << "원하는 번호는 ? :";
		cin >> num;
		try {	// 예외처리 가능성이 있는 코드.
			cout << v.at(num) << endl;
		}
		catch(exception& e){	// ... 타원들 : 던지는거 다 받는다.
			cout << e.what()<< endl;
		}
		save();
	}
}
//=============================================
//			Wed Mar 23 12:13:16 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

// STL은 속도에 최적화된 라이브러리입니다.
// 이 말은 예외처리 따위는 하지 않는다는 의미입니다.
// 예외처리가 필요하다면 그렇게 해주는 특별버전의 라이브러리나 함수를 사용해야 합니다.

class Animal
{
private:
public:
	virtual void move() = 0;
};

class Dog :public Animal
{
private:
public:
	virtual void move() override final	{		cout << "개 뛴다" << endl;	}
};

class Bird :public Animal
{
private:
public:
	virtual void move() override final { cout << "새 난다" << endl; }
};

void main()
{
	Animal* a[3]{ new Dog,new Bird, new Dog };

	for (Animal*d : a)
		d->move();

	save();
}
//=============================================
//			Wed Mar 23 12:18:33 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include"save.h"

using namespace std;

// STL은 속도에 최적화된 라이브러리입니다.
// 이 말은 예외처리 따위는 하지 않는다는 의미입니다.
// 예외처리가 필요하다면 그렇게 해주는 특별버전의 라이브러리나 함수를 사용해야 합니다.

class Animal
{
private:
public:
	virtual void move() = 0;
};

class Dog :public Animal
{
private:
public:
	virtual void move() override final	{		cout << "개 뛴다" << endl;	}
};

class Bird :public Animal
{
private:
public:
	virtual void move() override final { cout << "새 난다" << endl; }
};

void main()
{
	Animal* a[3]{ new Dog,new Bird, new Dog };

	// for loop를 개만 돌린다.
	for (Animal*d : a)
	{
		// 업캐스팅(자유), 다운캐스팅(명시적 표현)
		if (dynamic_cast<Dog*>(d) != nullptr)
		d->move();
	}
	// p.81쪽 Dynamic Cast를 설명하기위해서.
	save();
}