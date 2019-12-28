#include<iostream>
#include<cstring>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	

	int sum = 0, result = 0;
	char input[80];
	
	for (int i = 1; i <= N; i++) {
		
		
		cin >> input;

		for (int a = 0; a < strlen(input); a++) {
			if (input[a] == 'O') {
				sum++;
				result = result + sum;
			}
			else
				sum = 0;
			
		}
		cout << result<<"\n";
		sum = 0; result = 0;
	}
	
	

}
