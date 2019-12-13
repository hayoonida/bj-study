#include<iostream>
#include<cstring>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		for (int a = 1; a <= N - i;a++) {
			cout << " ";
		}
		for (int a = 1; a <= 2 * i - 1; a++) {
			if (a % 2 == 0)
				cout << " ";
			else
				cout << "*";
		}

		cout << "\n";
	}

	
	
		
	}
	
	
