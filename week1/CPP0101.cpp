#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a;
		cin >> a;
		long long tong = 0;
		tong = (a*(a+1))/2;
		cout << tong << endl;
	}
	return 0;
}
