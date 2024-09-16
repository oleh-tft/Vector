#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
	srand(time(0));
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	obj1.PushBack(100);
	obj1.Print();
	obj1.PushBack(200);
	obj1.Print();

	int last = obj1.PopBack();
	obj1.Print();
	cout << "Last = " << last << endl;
	last = obj1.PopBack();
	obj1.Print();
	cout << "Last = " << last << endl;

	obj1.AddFirst(96);
	obj1.Print();

	obj1.AddElement(5, 999);
	obj1.Print();

	obj1.RemoveFirst();
	obj1.Print();

	obj1.Remove(3);
	obj1.Print();

	int size = 8;
	int* ar = new int[size] {-4, 1, 7, 4, 0, 10, 41, 4};
	obj1.Concat(ar, size);
	obj1.Print();
	delete[] ar;

}