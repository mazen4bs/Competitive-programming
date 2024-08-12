#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m,min;
    cin >> n >> m;
    vector<int> pieces(m);
    for (int i = 0; i < m; i++) {
        cin >> pieces[i];
    }
    sort(pieces.begin(), pieces.end());
    min = 100000;
    for (int i = 0; i+n-1 < m; i++) {
        int current_diff = pieces[i + n-1] - pieces[i];
        if (current_diff < min) {
            min = current_diff;
        }
    }
    cout << min;
 }
    



