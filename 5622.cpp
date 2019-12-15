#include<iostream>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string input;
	cin >> input;
	int time = 0;
	int sum = 0;


	for (int i = 0; i < input.length(); i++) {



		if (input.at(i) == 'D' || input.at(i) == 'E' || input.at(i) == 'F')
			time = 4;
		else if (input.at(i) == 'A' || input.at(i) == 'B' || input.at(i) == 'C')
			time = 3;

		else if (input.at(i) == 'G' || input.at(i) == 'H' || input.at(i) == 'I')
			time = 5;
		else if (input.at(i) == 'J' || input.at(i) == 'K' || input.at(i) == 'L')
			time = 6;
		else if (input.at(i) == 'M' || input.at(i) == 'N' || input.at(i) == 'O')
			time = 7;
		else if (input.at(i) == 'P' || input.at(i) == 'Q' || input.at(i) == 'R' || input.at(i) == 'S')
			time = 8;
		else if (input.at(i) == input.at(i) == 'T' || input.at(i) == 'U' || input.at(i) == 'V')
			time = 9;
		else if (input.at(i) == 'W' || input.at(i) == 'X' || input.at(i) == 'Y' || input.at(i) == 'Z')
			time = 10;

		sum = sum+ time;
	}
	cout << sum;
}
	
	
	
