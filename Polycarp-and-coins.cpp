#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,c2,c1;
        cin>>n;

        if(n%3==0){
           c1=c2=n/3;
        }
        else if(n%3==1){
            c1=n/3+1;
            c2=n/3;

        }
        else{
            c1=n/3;
            c2=n/3+1;
        }
        cout<<c1<<" "<<c2<<endl;
    }
    return 0;
}
