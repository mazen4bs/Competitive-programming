#include <iostream>
#include <stack>
#include<queue>
using namespace std;

string isBalanced(string s) {
	bool bal = true;
	stack<char>st;
	queue<char>qu;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
			st.push(s[i]);
		}
		else break;
	}
	for (int j = 0; j < s.size(); j++) {
		if (s[j] == ')' || s[j] == '}' || s[j] == ']') {
			qu.push(s[j]);
		}
	}
	while (!st.empty()) {
		if (qu.empty()) { bal = false;
		break;
		}
		if (!(  (st.top()=='('&& qu.front()==')') ||
			    (st.top()=='{'&& qu.front()=='}') ||
			    (st.top()=='['&& qu.front()==']') 
			    
			)) {
			bal=false;
		}
		st.pop();
		qu.pop();
	}
	if (!qu.empty()) { bal = false; }
	if (bal == true) {
		return"YES";
	}
	else return "NO";
}
int main(){
	int n;
	cin >> n;
	string s, arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		s = arr[i];
		cout << isBalanced(s) << endl;
	}
	return 0;
	
}
