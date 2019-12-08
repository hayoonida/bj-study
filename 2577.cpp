#include<iostream>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int A, B, C;
	int arr[10] = {0};//배열초기화 
	string result;

	cin >> A;
	cin >> B;
	cin >> C;
	
	result = to_string(A * B*C); //int-> string 변환방식


	//cout << result<<"\n";
	
	
	for (int i = 0; i <result.length() ; i++) {
		
		int a = result[i]-'0'; //result[i]는 char형인데, char->int 변환방식! 
		++arr[a];
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i]<<"\n";

}
