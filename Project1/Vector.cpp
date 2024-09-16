#include "Vector.h"
#include<iostream>
#include<Windows.h>
using namespace std;

Vector::Vector()
{
	arr = nullptr;
	size = 0;
}
Vector::Vector(int s)
{
	size = s;
	arr = new int[size] {0};
}
Vector::~Vector()
{
	/*cout << "Destructor" << arr << endl;
	Sleep(3000);*/

	delete[]arr;
	size = 0;
	
}
void Vector::InputRand()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%41 - 20; // [-20 +20]
	}
}
void Vector::Print()
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n---------------------------------------------------\n";
}

void Vector::PushBack(int a)
{
	int* temp = new int[size + 1];  // ������ ����� ������ (��� ������ +1)

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i]; // �������� ������� �������� ������� ������� � ����� ������
	}
	temp[size] = a; // ������������� ���������� �������� ���������� ������

	delete[] arr; // �������� ������� �������!

	arr = temp; // �������������� ��������� � ������� �� ����� ���. ������
	size++;

}

int Vector::PopBack()
{
	int* temp = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	int el = arr[size - 1]; // ������� ��������� ������� ������� ������� �� ��������

	delete[] arr;
	arr = temp;
	size--;

	return el;
}

void Vector::AddFirst(int value)
{
	int* temp = new int[size + 1];
	
	for (int i = 0; i < size; i++)
	{
		temp[i + 1] = arr[i];
	}
	temp[0] = value;

	delete[] arr;
	arr = temp;
	size++;
}

void Vector::AddElement(int index, int value)
{
	int* temp = new int[size + 1];

	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}

	for (int i = index; i < size; i++)
	{
		temp[i + 1] = arr[i];
	}

	temp[index] = value;

	delete[] arr;
	arr = temp;
	size++;
}

void Vector::Remove(int index)
{
	int* temp = new int[size - 1];
	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}

	for (int i = index; i < size; i++)
	{
		temp[i] = arr[i + 1];
	}

	delete[] arr;
	arr = temp;
	size--;
}

void Vector::RemoveFirst()
{
	int* temp = new int[size - 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i + 1];
	}

	delete[] arr;
	arr = temp;
	size--;
}

void Vector::Concat(int * add, int AddSize)
{
	int* temp = new int[size + AddSize];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = 0; i < AddSize; i++)
	{
		temp[size + i] = add[i];
	}

	delete[] arr;
	arr = temp;
	size += AddSize;
}
