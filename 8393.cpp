#include<iostream>
using namespace std;

int main() {
	auto n = 0,sum=0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}
	cout << sum;
}
