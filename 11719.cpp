#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n=0;
	string str;
	while (true) {
		getline(cin, str);//한 줄을 입력받아 저장하는 함수
		if (n > 100)
			break;
		//if (str.length()<=0)
			//break;
		cout << str << "\n";
		n = n + 1;
	}
	return 0;
	
	
}
