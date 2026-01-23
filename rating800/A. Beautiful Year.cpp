#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    n=n+1;
    while(true){
        int d1=n%10;
        int d10=(n/10)%10;
        int d100=(n/100)%10;   
        int d1000=(n/1000)%10;
        if(d1!=d10 && d1!=d100 && d1!=d1000 && d10!=d100 && d10!=d1000 && d100!=d1000){
            cout<<n<<endl;
            break;
        }else{
            n++;
        }
    }
    return 0;
}