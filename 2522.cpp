#include<iostream>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {

		for (int a = i; a < N; a++) {
			cout << " ";
		}
		for (int a = 1; a <= i; a++) {
			cout << "*";
		}
		cout << "\n";
	}////////////n줄까지
	for (int i = 1; i < N; i++) {
		for (int a = 1; a <= i; a++) {
			cout << " ";
		}
		for (int a = i; a < N;a++) {
			cout << "*";
		}
		cout << "\n";
	}



}
