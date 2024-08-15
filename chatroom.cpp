#include <iostream>
#include <queue>
using namespace std;
int main()
{
	string n;
	cin >> n;
	char c;
	queue<char>qu;
	qu.push('h');
	qu.push('e');
	qu.push('l');
	qu.push('l');
	qu.push('o');
	for (auto c : n) {
		if (c == qu.front()) {
			qu.pop();
		}
	}
	if (qu.empty()) {
		cout << "YES";
	}
	else { cout << "NO"; }
}
