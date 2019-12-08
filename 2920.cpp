#include<iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int arr[8];
	int asce=0,desc=0;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 7; i++) {
		if (arr[i + 1] == arr[i] + 1)
			++asce;
		if (arr[i + 1] == arr[i] - 1)
			++desc;
	}

	if (asce == 7)
		cout << "ascending";
	else if (desc == 7)
		cout << "descending";
	else
		cout << "mixed";
}
