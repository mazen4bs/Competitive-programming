#include <iostream>
#include <vector>
using namespace std;

int maxDivisibleBy3(vector<int>& a) {
    int count[3] = { 0, 0, 0 };
    for (int i = 0; i < a.size(); i++) {  
        count[a[i] % 3]++;
    }
    int result = count[0];
    int minCount = min(count[1], count[2]);
    result += minCount;
    count[1] -= minCount;
    count[2] -= minCount;
    result += count[1] / 3;
    result += count[2] / 3;
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << maxDivisibleBy3(a) << endl;
    }
    return 0;
}
