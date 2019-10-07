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
	cout << "1부터 " << 5 << " 까지 홀수 합계는 " << total << "입니다" << endl;
}