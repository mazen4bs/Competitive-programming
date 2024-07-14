#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> operations(n);
    vector<int> values(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> operations[i];
        if (operations[i] != "removeMin") {
            cin >> values[i];
        }
    }

    priority_queue<int, vector<int>, greater<int>> minHeap;
    vector<string> result;

    for (int i = 0; i < n; ++i) {
        if (operations[i] == "insert") {
            minHeap.push(values[i]);
            result.push_back("insert " + to_string(values[i]));
        }
        else if (operations[i] == "getMin") {
            while (!minHeap.empty() && minHeap.top() < values[i]) {
                minHeap.pop();
                result.push_back("removeMin");
            }
            if (minHeap.empty() || minHeap.top() > values[i]) {
                minHeap.push(values[i]);
                result.push_back("insert " + to_string(values[i]));
            }
            result.push_back("getMin " + to_string(values[i]));
        }
        else if (operations[i] == "removeMin") {
            if (minHeap.empty()) {
                result.push_back("insert 0");
                minHeap.push(0);
            }
            minHeap.pop();
            result.push_back("removeMin");
        }
    }

    cout << result.size() << endl;
    for (const string& op : result) {
        cout << op << endl;
    }

    return 0;
}
