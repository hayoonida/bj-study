#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int T, A, B;
	char c; //comma
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> A >> c >> B;
		cout << A + B << "\n";
	}
}
