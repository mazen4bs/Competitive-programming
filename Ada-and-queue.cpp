#include <iostream>
#include <deque>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    deque<int> deq;
    bool reversed = false;

    for (int i = 0; i < Q; ++i) {
        string command;
        cin >> command;

        if (command == "back") {
            if (deq.empty()) {
                cout << "No job for Ada?" << endl;
            }
            else {
                if (reversed) {
                    cout << deq.front() << endl;
                    deq.pop_front();
                }
                else {
                    cout << deq.back() << endl;
                    deq.pop_back();
                }
            }
        }
        else if (command == "front") {
            if (deq.empty()) {
                cout << "No job for Ada?" << endl;
            }
            else {
                if (reversed) {
                    cout << deq.back() << endl;
                    deq.pop_back();
                }
                else {
                    cout << deq.front() << endl;
                    deq.pop_front();
                }
            }
        }
        else if (command == "reverse") {
            reversed = !reversed;
        }
        else if (command == "push_back") {
            int N;
            cin >> N;
            if (reversed) {
                deq.push_front(N);
            }
            else {
                deq.push_back(N);
            }
        }
        else if (command == "toFront") {
            int N;
            cin >> N;
            if (reversed) {
                deq.push_back(N);
            }
            else {
                deq.push_front(N);
            }
        }
    }

    return 0;
}
