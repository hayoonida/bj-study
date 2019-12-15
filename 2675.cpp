#include<iostream>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, R;
	string S;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> R>>S;
		for (int a = 0; a < S.length(); a++) {
			for (int b = 0; b < R; b++) {
				cout << S.at(a);
			}
		}
		cout << "\n";
	
	}


}
	
	
	
