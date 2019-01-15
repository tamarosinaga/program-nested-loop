#include <iostream>
using namespace std;

int main()
{
cout << "===============================" << endl;
cout << "program inner loop & outer loop" << endl;
cout << "===============================\n\n" << endl;

for (int a = 1; a <= 5; a++)
{
	for (int b = 1; b <= 5; b++)
	{
		cout << a << "*" << b << "= ";
		cout << a*b << " ";
	}
	cout << endl;
}

cout << "\nsudah selesai :)" << endl;

return 0;
}
