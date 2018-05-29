#include "Queue.cpp"
#include "List.h"

int main()
{
	int fg;
	do {
		system("cls");
		cout << "List(1) or Queue(2) : ";
		cin >> fg;
	
	
		switch (fg)
		{
		case 1:
		{
			NodeQueue<int> lis;
			lis.enqueue(10);
			lis.enqueue(20);
			lis.enqueue(30);
			lis.enqueue(40);
			cout << "Elements do: ";
			lis.print();
			lis.dequeue();
			lis.dequeue();
			cout << "Elements posle: ";
			lis.print();
			system("pause");
		}break;
		case 2:
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
		}break;
		default:
		{
			cout << "Number error!\n";
			system("pause");
		}	break;
	
		}
	} while (fg != 999);
	
	system("pause");

	return 0;
}