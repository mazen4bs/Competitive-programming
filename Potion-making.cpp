#include <iostream>
using namespace std;
int greatest(int a, int b) 
{
    while (b !=0) {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int t;
    cin>> t;
    while(t--){
        int k,g,num;
        cin>>k;
        g= greatest(k,100 - k);
        num=(k/g)+((100-k)/g);
        cout<<num<< endl;
    }
    return 0;
}
