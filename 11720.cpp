#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N = 0, sum = 0;
	char c; //숫자를 문자로 입력받기 (한 문자씩 끊어서)

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> c;
		sum += (c - '0');
	}

	cout << sum << "\n";
	
}
