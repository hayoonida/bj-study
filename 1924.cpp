#include<iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int month=0, day=0, days=0;
	int result;

	cin >> month >> day;
	days = (month-1) * 30 + day;

	if (month == 2)
		++days;
	if (month == 3)
		--days;
	if (month == 6||month==7)
		++days;
	
	if (month == 8)
		days = days + 2;
	if (month == 9||month ==10)
		days = days + 3;
	if (month == 11||month ==12)
		days = days + 4;

	result = days % 7;
	


	if (result == 1)
		cout << "MON";
	else if (result == 2)
		cout << "TUE";
	else if (result == 3)
		cout << "WED";
	else if (result == 4)
		cout << "THU";
	else if (result == 5)
		cout << "FRI";
	else if (result == 6)
		cout << "SAT";
	else
		cout << "SUN";

}
