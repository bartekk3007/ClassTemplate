#include <iostream>

template <class T>
class Container
{
	private:
	int size;
	T display;
	T* elements;// = new T[size];
	public:
	Container(int size, T display) : size(size), display(display), elements(new T[size]())
	{

	}
	~Container()
	{
		delete[] elements;
	}
};