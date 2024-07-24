#include <iostream>
using namespace std;
int main()
{
	int t,a, b;
	cin>>t;
	while (t--) {
		int min = 0;
		cin >> a>> b;
		if (a == b) { cout << min<<endl; }
		else{
		if (a != b) {
			while (b > (a + 10)) { 
				a = a+10;
				min++;
			}
			while (b < (a - 10)) {
				a = a-10;
				min++;
			}	
		}
		min++;
		cout << min<<endl;
		}
	}
}
