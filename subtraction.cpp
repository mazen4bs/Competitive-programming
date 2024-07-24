#include <iostream>
using namespace std;
int num(int a, int b) 
{
    int n=0;
    while(a>0 && b> 0){
        if (a>b) {
            n=n+(a/b);
            a =a%b;}
        else 
        {
            n=n+ (b/a);
            b=b% a;
        }

    }
    return n;
}
int main(){
    int a,b,t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<num(a,b)<<endl;
    }

    return 0;
}
