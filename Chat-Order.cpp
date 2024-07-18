#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	string x;
	stack<string>st;
	vector<string>v;
	for (int i = 0; i < n; i++) {
		cin >> x;
		st.push(x);
	}
	while (!st.empty()) {
		bool isDuplicate = false;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == st.top()) {
				isDuplicate = true;
				break;
			}
		}
		if (!isDuplicate) {
			v.push_back(st.top());
		}
		st.pop();
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i]<<endl;
	}
	return 0;
}
