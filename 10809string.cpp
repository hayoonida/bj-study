#include<iostream>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;

	int idx;
	for (char a = 'a'; a <= 'z'; a++) {
		idx = str.find(a);
		cout << idx << " ";
	}//string- find method

	cout << endl;
	return 0;

}
	
	
	
