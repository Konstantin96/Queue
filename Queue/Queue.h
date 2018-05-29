#include "Libery.h"

class Ex
{
public:
	Ex(int er)
	{
		switch (er)
		{
		case 1: {cerr << "\nError: Queue is full\n"; break; }
		case 2: {cerr << "\nError: Queue is empty\n"; break; }
		}
	}
};

template <typename T>
class Queue
{
public:
	Queue(size_t = 10);
	Queue(const Queue&);
	void enqueue(const T);
	T dequeue();
	void print() const;
	~Queue()
	{
		delete[] ptr;
	}
private:
	T* ptr;
	size_t sze;
	size_t bgn, en, elCT;
};

