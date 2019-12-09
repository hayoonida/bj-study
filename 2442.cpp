  #include<iostream>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		
		for (int b = i; b < N; b++) {
			cout << " ";
		}

		for (int a = 1; a <= i;a++) {
			cout << "*";
		}
		for (int c = 2; c <= i;c++) {
			cout << "*";
		}


		cout << "\n";
	}


}
