#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(2 * n);
        int nodd=0,neven=0;

        for (int i=0; i <2*n;++i) {
            cin >> a[i];
            if(a[i] % 2 == 0){
                neven++;
            }else nodd++;
        }
        if(nodd ==n){
            cout << "Yes" << endl;

        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}