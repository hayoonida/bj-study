#include<iostream>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {

		for (int b = N-1; b > N-i;b--) {
			cout << " ";
		}
		
		for (int a = 0; a <= N-i; a++) {
			cout << "*";
		}
		cout << "\n";
	}


}
