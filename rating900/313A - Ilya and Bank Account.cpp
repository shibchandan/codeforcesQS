#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<0){
        int nO=n/10;
        int nT=n%10+n/100*10;
        cout<<max(nO,nT)<<endl;
    }else{
        cout<<n<<endl;
    }
}