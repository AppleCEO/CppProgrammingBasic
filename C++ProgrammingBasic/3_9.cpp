#include <iostream>

using namespace std;
void example3_9()
{
	int total = 0;
	for (int i = 1; i <= 5; i+=2) {
		cout << "i = " << i << endl;
		total += i;
		cout << "total = " << total << endl;
	}
	cout << "1���� " << 5 << " ���� Ȧ�� �հ�� " << total << "�Դϴ�" << endl;
}