#include<iostream>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string A, B,newA,newB;
	int finA, finB;
	newA = ""; newB = "";

	cin >> A >> B;

	
	for (int i = 0; i < 3; i++) {
		newA.append(1, A.at(2 - i));
		newB.append(1, B.at(2 - i));	
	}
	finA = stoi(newA); finB = stoi(newB);

	if (finA > finB)
		cout << finA;
	else
		cout << finB;

	
}
	
	
	
