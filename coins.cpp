#include <iostream>
using namespace std;

bool can_form_exact_value(int a, int b, int n, int S) {
    // Maximum number of n-value coins we can use
    int max_n_coins = min(a, S / n);
    // Remaining value to be covered by 1-value coins
    int remaining_value = S - max_n_coins * n;
    // Check if remaining value can be covered by 1-value coins
    return remaining_value <= b;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int a, b, n, S;
        cin >> a >> b >> n >> S;
        if (can_form_exact_value(a, b, n, S)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
