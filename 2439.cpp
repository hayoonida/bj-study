#include<iostream>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		
		for (int b = N;b>i;b-- ){
			cout << " ";
		}
		for (int a = 1; a <= i; a++) {
			cout << "*";
		}
		//cout << "*";
		cout << "\n";
	}
}
