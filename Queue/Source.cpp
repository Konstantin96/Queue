#include "Queue.cpp"

int main()
{
	cout << "Enter number chisel: ";
	int count;
	cin >> count;
	Queue<char> qu(count);
	int i = 0;
	char c;
	while (i++ < count)
	{
		cin >> c;
		qu.enqueue(c);
	}

	cout << "Do : ";
	qu.print();

	//delete stack
	qu.dequeue();
	qu.dequeue();
	qu.dequeue();

	cout << "Later : ";
	qu.print();

	system("pause");
	return 0;
}