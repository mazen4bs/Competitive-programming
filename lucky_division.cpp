#include <iostream>
#include<vector>
using namespace std;
bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}
int main(){
	int n;
	cin >> n;
    vector<int>luckyNumbers;
    for (int i = 1; i <1000; ++i) {
        if (isLucky(i)) {
            luckyNumbers.push_back(i);
        }
    }
    for (int i = 0; i < luckyNumbers.size(); i++) {
        if (n % luckyNumbers[i] == 0) {
            cout<<"YES";
            return 0;
        }
    }
    cout << "NO";
}
