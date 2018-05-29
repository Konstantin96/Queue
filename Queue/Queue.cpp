#include "Queue.h"

template <typename T>
Queue<T>::Queue(size_t n) : sze(n > 0 ? n : 0)
{
	ptr = new T[sze];
	bgn = 0;
	en = 0;
	elCT = 0;
}

template <typename T>
Queue<T>::Queue(const Queue& cpy)
{
	if (sze != cpy.sze)
	{
		delete[] ptr;
		sze = cpy.sze;
		ptr = new T[sze];
	}
	for (int i = 0; i < sze; i++)
		ptr[i] = cpy.ptr[i];
	en = cpy.en;
	bgn = cpy.bgn;
	elCT = cpy.elCT;
}

template <typename T>
void Queue<T>::enqueue(const T el)
{
	if (elCT == sze)
		throw Ex(1);
	ptr[en++] = el;
	if (en == sze)
		en = 0;
	elCT++;
}

template <typename T>
T Queue<T>::dequeue()
{
	if (elCT == 0)
		throw Ex(2);
	if (bgn == sze)
		(bgn = 0);
	elCT--;
	return ptr[bgn++];
}

template <typename T>
void Queue<T>::print() const
{
	for (int i = 0; i < elCT; i++)
		cout <<  ptr[bgn + i >= sze ? bgn + i - sze : bgn + i];
	cout << endl;
}