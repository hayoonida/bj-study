#include<iostream>


using namespace std;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int arr[9];
	int max=0,num=0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] >= max) {
			max = arr[i];
			num = i+1;
		}
	}
	cout << max << "\n" << num << "\n";
	
	
}
