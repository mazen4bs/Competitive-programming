#include <iostream>
#include <vector>
using namespace std;

long long sum_of_digits(long long n, long long m) {
    long long sum = 0;
    long long full_cycles = n / m;
    long long last_digit_sum = 0;

    for (int i = 1; i <= 10; ++i) {
        last_digit_sum += (m * i) % 10;
    }

    sum += (full_cycles / 10) * last_digit_sum;
    for (int i = 1; i <= full_cycles % 10; ++i) {
        sum += (m * i) % 10;
    }

    return sum;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        long long n, m;
        cin >> n >> m;
        cout << sum_of_digits(n, m) << endl;
    }
    return 0;
}
