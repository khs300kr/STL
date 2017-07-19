	
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.
		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " ���� ������ " << size << endl;
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.
		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " ���� ������ " << size << endl;
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.
		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " ���� ������ " << size << endl;
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.
		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " ���� ������ " << size << endl;
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (Model&& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.
		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

		other.data = nullptr;
		other.size = 0;

//		cout << id << " ���� ������ " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(1234);

	a = move(b);

	save(); // ���� �� ��.
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.
		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " ���� ������ " << size << endl;
		return *this;
	}
	// �Լ������ε����� 2�� ����.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵� ���� ������ " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(1234);

	a = move(b);
	save(); // ������ ��ǰ
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " ���� ������ " << size << endl;
		return *this;
	}
	// �Լ������ε����� 2�� ����.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;

		// ���� ���� �Ҵ��� �޸𸮰� �ִٸ� ������.
		if (data != nullptr)
			delete[] data;

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵� ���� ������ " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(1234);

	a = move(b);

	save(); // ������ ��ǰ + ���� ����
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " ���� ������ " << size << endl;
		return *this;
	}
	// �Լ������ε����� 2�� ����.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;

		// ���� ���� �Ҵ��� �޸𸮰� �ִٸ� ������.
		if (data != nullptr)
			delete[] data;

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵� ���� ������ " << size << endl;
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " ���� ������ " << size << endl;
		return *this;
	}
	// �Լ������ε����� 2�� ����.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;

		// ���� ���� �Ҵ��� �޸𸮰� �ִٸ� ������.
		if (data != nullptr)
			delete[] data;

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵� ���� ������ " << size << endl;
		return *this;
	}
};

void main()
{
	Model a(1000);
	Model b(a);

	save();
}

// �̵������ڰ� ����� �̵� ���� �����ڵ� ���� ���α׷���.
// �̰��� Ŭ����.
// �̵������ڴ� ���α׷��� �ϰ� ��������� ����ϴ°� �ƴϴ�.
// ������ STL���� 3���� ������Ʈ,�����̳�,���ͷ�����,�˰���
// STL���� ����°̴ϴ�. �����̳ʴ� �ڷᱸ���̴�.
// 11 ���Ŀ� �ڷᱸ�������� STL �����̳ʸ� ����ϴ� ���α׷��Ӷ��
// ���� Ŭ������ ������ٸ�, �ű�ٰ� ���� �޸𸮸� �����ϰ�
// �ִٸ� C++ 11���� ���� ���Ե� �̵� ������ ���α׷����� �����ؼ�
// ���� ȿ�������� ���α׷����� ������ �� �ִ�.
// ��ǥ���� STL �������� �ڷᱸ�� (vector - ���� �迭)��
// ����ؼ� �̵��ǹ̷� ��� ��������� �˾ƺ���.
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " ���� ������ " << size << endl;
		return *this;
	}
	// �Լ������ε����� 2�� ����.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;

		// ���� ���� �Ҵ��� �޸𸮰� �ִٸ� ������.
		if (data != nullptr)
			delete[] data;

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵� ���� ������ " << size << endl;
		return *this;
	}
};

void main()
{
	//Model a[];
	// �������� ������ ������ �ƴϿ��� �̴�.
	// ������ - ���α׷����� �����Ǵ� ����.
	// ���� ���Ǿ� - ������ Ÿ��
	
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
	char* data{ nullptr };	// �����Ҵ� �޸�
	size_t size{ 0 };// �޸��� ũ��
	int id; // ����Ǵ� �޸� ( �����ڰ� ȣ�� �ɶ����� id�� ���� )
public:
	Model()
		: data{ nullptr }, size{ 0 }
	{
		id = gid++;
		cout << id << " default ������" << endl;
		// default ������.
	}
	Model(size_t _size)
		: size(_size)
	{
		data = new char[size];
		id = gid++;
		cout << id << " ���� 1�� ������ " << size << endl;
		// ���� 1�� ������.
	}
	Model(const Model& other) // ���������
		: size{ other.size }
	{
		//// �Ҵ�
		//data = new char[size];
		//// �����͸� �����ؿ´�.
		//memcpy(data, other.data, size);

		// ���Կ����ڸ� ������ٸ� ��������ڸ� �����ϰ�
		// ��� �� �� �ִ�.
		*this = other;
		id = gid++;
		cout << id << " ������� " << size << endl;
	}

	Model(Model&& other) // �̵������� ( && - r_value reference )
	{
		data = other.data;
		size = other.size;
		id = gid++;

		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵����� " << size << endl;
	}
	~Model()
	{
		if (data != nullptr)
			delete[] data;
		cout << id << " �Ҹ� " << size << endl;
	}
public:
	// Assignment operator(���Կ�����).
	// return ���� �����Ѵ�.
	Model& operator = (const Model& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;
		
		// ���� ���� �޸𸮸� ���� ������ �Ѵ�.
		if (data != nullptr)
			delete[] data; // �̹� ���� ������ ������.

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = new char[size];
		memcpy(this->data, other.data,  size);

//		cout << id << " ���� ������ " << size << endl;
		return *this;
	}
	// �Լ������ε����� 2�� ����.
	// Move assignment operator
	Model& operator = (Model&& other)
	{
		// �ڱ� �ڽ��� �����Ѵٸ� �ƹ��͵� ���ص� �ȴ�.
		if (this == &other)
			return *this;	// �ƹ��͵� ���ϰ� �� �ڽ��� return;

		// ���� ���� �Ҵ��� �޸𸮰� �ִٸ� ������.
		if (data != nullptr)
			delete[] data;

		// ������ �� �޸𸮿� ���� �������� �����.
		this->size = other.size;
		this->data = other.data;
		
		other.data = nullptr;
		other.size = 0;
		cout << id << " �̵� ���� ������ " << size << endl;
		return *this;
	}
};

void main()
{
	//Model a[];
	// �������� ������ ������ �ƴ��̿��� �̴�.
	// ������ - ���α׷����� �����Ǵ� ����.
	// ���� ���Ǿ� - ������ Ÿ��
	
	vector<Model> v;
	v.push_back(Model(100));
	v.push_back(Model(200));
	v.push_back(Model(300));
	save();	// �޸𸮸� �i�ư��� �Ҽ������� �Ǹ��� ����
	/*
	vector<Model> v;
	// �̵��ϴ¹����� ����.
	v.push_back(Model(100));
	v.push_back(Model(200));
	// �̵�����,�̵������ڸ� ����� �����غ���.
	// ��å�� 3�� �̵��� r-value�� ó������ �����ϰ���
	// 57�� ���� ������ ���� ���� �ȴ�.
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
		// ��������� ���� ���� �ڵ�.
		// ������ �ܰ迡�� �ź�.
	{	}
	*/
public:
//	void f() override final; // ���̻� �������̵� ������ final.
	Test() = default;
	// ���� ����� ��������� ���� �ڵ�.
	Test(const Test&) = delete;	
//	Test(const Test&) = default;

};

void main()
{
	Test a;
//	Test b(a);
	save();
}

// 3�� ���ٴ� �������� �о����.
//=============================================
//			Mon Mar 21 12:18:52 2016
//=============================================
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include"save.h"

using namespace std;

// ���� : �̸����� �Լ�

void main()
{
	auto f =[]() { cout << "�ȳ� �ݰ��� ���� ���پ�}"; };
	
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

// ���� : �̸����� �Լ�
// �Լ��� ���α׷��Ӱ� ȣ���� ���� ������
// �Լ��� ���(body)�� �ʿ�� �ϴ� ���� �����

void main()
{
	auto f =[]() { cout << "�ȳ� �ݰ��� ���� ���پ�"<< endl; };
	
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

// ���� : �̸����� �Լ�
// �Լ��� ���α׷��Ӱ� ȣ���� ���� ������
// �Լ��� ���(body)�� �ʿ�� �ϴ� ���� �����

bool f(int a, int b)
{
	return a > b;
}

void main()
{
	int a[]{ 1,3,5,7,9,2,4,6,8 };		// POD(Plain Old Type)
	sort(begin(a), end(a),f);			// f�� �������ִ´�� �ϴ°�.

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

// ���� : �̸����� �Լ�
// �Լ��� ���α׷��Ӱ� ȣ���� ���� ������
// �Լ��� ���(body)�� �ʿ�� �ϴ� ���� �����

void main()
{
	int a[]{ 1,3,5,7,9,2,4,6,8 };		// POD(Plain Old Type)
	sort(begin(a), end(a), [](int a, int b) -> bool {
		return a < b;
	});			// f�� �������ִ´�� �ϴ°�.
	// [] : ���� ���Ժ�
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

// ���� : �̸����� �Լ�
// �Լ��� ���α׷��Ӱ� ȣ���� ���� ������
// �Լ��� ���(body)�� �ʿ�� �ϴ� ���� �����

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
	});			// f�� �������ִ´�� �ϴ°�.
	// [] : ���� ���Ժ�
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

// ���� : �̸����� �Լ�
// �Լ��� ���α׷��Ӱ� ȣ���� ���� ������
// �Լ��� ���(body)�� �ʿ�� �ϴ� ���� �����

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
	});			// f�� �������ִ´�� �ϴ°�.
	// [] : ���� ���Ժ�
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

// STL�� �ӵ��� ����ȭ�� ���̺귯���Դϴ�.
// �� ���� ����ó�� ������ ���� �ʴ´ٴ� �ǹ��Դϴ�.
// ����ó���� �ʿ��ϴٸ� �׷��� ���ִ� Ư�������� ���̺귯���� �Լ��� ����ؾ� �մϴ�.

class SafeArray{};

void main()
{	
	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };

	int num;
	while (true)
	{
		cout << "���ϴ� ��ȣ�� ? :";
		cin >> num;
		try {	// ����ó�� ���ɼ��� �ִ� �ڵ�.
			cout << v.at(num) << endl;
		}
		catch(exception& e){	// ... Ÿ���� : �����°� �� �޴´�.
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

// STL�� �ӵ��� ����ȭ�� ���̺귯���Դϴ�.
// �� ���� ����ó�� ������ ���� �ʴ´ٴ� �ǹ��Դϴ�.
// ����ó���� �ʿ��ϴٸ� �׷��� ���ִ� Ư�������� ���̺귯���� �Լ��� ����ؾ� �մϴ�.

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
	virtual void move() override final	{		cout << "�� �ڴ�" << endl;	}
};

class Bird :public Animal
{
private:
public:
	virtual void move() override final { cout << "�� ����" << endl; }
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

// STL�� �ӵ��� ����ȭ�� ���̺귯���Դϴ�.
// �� ���� ����ó�� ������ ���� �ʴ´ٴ� �ǹ��Դϴ�.
// ����ó���� �ʿ��ϴٸ� �׷��� ���ִ� Ư�������� ���̺귯���� �Լ��� ����ؾ� �մϴ�.

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
	virtual void move() override final	{		cout << "�� �ڴ�" << endl;	}
};

class Bird :public Animal
{
private:
public:
	virtual void move() override final { cout << "�� ����" << endl; }
};

void main()
{
	Animal* a[3]{ new Dog,new Bird, new Dog };

	// for loop�� ���� ������.
	for (Animal*d : a)
	{
		// ��ĳ����(����), �ٿ�ĳ����(����� ǥ��)
		if (dynamic_cast<Dog*>(d) != nullptr)
		d->move();
	}
	// p.81�� Dynamic Cast�� �����ϱ����ؼ�.
	save();
}