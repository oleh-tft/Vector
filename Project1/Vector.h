#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();


	Vector(int s);
	void InputRand(); // инициализаци€ случ числами
	void Print();// вывод на консоль

	void PushBack(int a);
	int PopBack();

	void AddFirst(int value);
	void AddElement(int index, int value);
	void Remove(int index);
	void RemoveFirst();
	void Concat(int* add, int size);
};

/*
ƒобавл€ем следующие методы:
ƒобаление 1 значени€ на начало массива
ƒобавление по индексу, индекс и значение передаем как параметр
”даление по индексу
удаление первого элемента

ƒобавление массива в конец текущего массива!


*/