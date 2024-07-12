#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <int>a;
	vector <int>c;
	int n,x,c1=1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
	for (int i = 1; i < n; i++) {
		if (a[i] <= a[i-1]) {
			c1=c1+1;
			c.push_back(a[i-1]);
		}
	}
	c.push_back(a[n-1]);
	cout << c1 << endl;
	for (int i = 0; i < c.size(); i++) {
		cout << c[i]<<" ";
	}
}

