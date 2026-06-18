#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=9) cout<<n<<endl;
        else if(n>45) cout<<-1<<endl;
        else{
            int sum=0;
            int val=0;
            for(int i=9;i>=1;i--){
                if(sum+i<=n){
                    val=val*10+i;
                    sum+=i;
                }

            }
            int rev=0;

            while(val>0){
                rev=rev*10+val%10;
                val/=10;
            }
            cout<<rev<<endl;
        }
    }
}