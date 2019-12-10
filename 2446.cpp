#include<iostream>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	for (int a = 1; a <= N; a++) {
		for (int i = 1; i <a; i++) {
			cout<<" ";
		}
		for (int i = a; i < N; i++) {
			cout << "*";
		}
		cout << "*";//middle
		for (int i = a; i < N; i++) {
			cout << "*";
		}
		cout << "\n";
	}/////n까지
	for (int a = 1; a < N; a++) {
		for (int i = a; i < N-1; i++) {
			cout << " ";
		}
		for (int i = 1; i <= a; i++) {
			cout << "*";
		}
		cout << "*";//middle
		for (int i = 1; i <= a; i++) {
			cout << "*";
		}
		cout << "\n";
	}

}
