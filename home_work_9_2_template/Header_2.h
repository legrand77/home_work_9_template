#pragma once
template <class T>
class Table
{
public:
	Table(int elements_a, int elements_b) : elements(new T* [elements_a]), a(elements_a), b(elements_b)

	{
		for (int i = 0; i < a; ++i)
		{
			elements[i] = new T[b];
		}
	}

    Table(Table& other) // ����������� �����������
	{
		a = other.a;
		b = other.b;
		elements = new T * [other.a];
		for (int i = 0; i < other.a; ++i)// �������� ���. ������� ����� �� �����������
		{
			elements[i] = new T[other.b];
		};

		for (int i = 0; i < other.a; i++)

		{
			for (int j = 0; j < other.b; j++)

			{
				elements[i][j] = other[i][j];

			}; // ���������� �������
		};
	}
 
	~Table()
	{
		for (int i = 0; i < a; ++i)
		{
			delete[] elements[i];
		}

		delete[] elements;
	}
	
	 T* operator[](int i)
	{
		return elements[i];
	}

	 T* operator[](int i) const
	{
		return elements[i];
	}
	int Size() const
	{
	 return a*b;

	}
	
	Table& operator=(Table& other) // ���������� ��������� =
	{
		a = other.a;
		b = other.b;
		for (int i = 0; i < a; ++i)// �������� ��������� ������������� �������
		{
			delete[] elements[i];
		}

		delete[] elements; 

		elements = new T* [other.a];
		for (int i = 0; i < other.a; ++i)// �������� ���. ������� ����� �� �����������
		{
			elements[i] = new T[other.b];
		}; 

		for (int i = 0; i < other.a; i++)

		{
			for (int j = 0; j < other.b; j++)

			{
				elements[i][j] = other[i][j];

			}; // ���������� �������
		};

		return* this;
	}
	

private:
	T** elements = nullptr;
	int a = 0;
	int b = 0;
};


