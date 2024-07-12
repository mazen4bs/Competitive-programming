#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

long long calculateSum(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (isPowerOfTwo(i)) { 
            sum -= i;
        }
        else {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    vector<long long> results(t);

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        results[i] = calculateSum(n);
    }

    for (int i = 0; i < t; ++i) {
        cout << results[i] << endl;
    }

    return 0;
}
