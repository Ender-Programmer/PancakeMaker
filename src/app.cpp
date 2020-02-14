#include <iostream>
#include <thread>
using namespace std;

void foo()
{
	while (true){}
}

int main()
{
	cout << "Number of Cores";
	int x;
	cin >> x;
	thread threads[x];
	for (int i = 0; i < x; i++)
	{
		threads[i] = Hello(foo);
	}
	return 0;
}
