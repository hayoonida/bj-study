#include<iostream>
#include<string>

using namespace std;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;

	for (int i = 1; i <= str.length(); i++) {
		cout << str[i-1];
		if (i % 10 == 0) {
			cout << "\n";
		}
	}
}
