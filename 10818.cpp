#include<iostream>


using namespace std;

int arr[1000001];
int i_max = -1000001, i_min = 1000001;
//지역변수의 선언은 스택에서 이뤄짐 -> 오버플로우조심
//namespace std안에  min, max있어서 전역변수로 처리하면 자꾸 오류발생함-> 이름 변경

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (i_min > arr[i])
			i_min = arr[i];
		if (i_max < arr[i])
			i_max = arr[i];
	}
	cout << i_min << " " << i_max << "\n";

}
