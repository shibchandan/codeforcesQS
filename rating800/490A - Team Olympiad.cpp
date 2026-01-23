// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> p, m, pe;
//     for(int i=1; i<=n; i++){
//         int x;
//         cin>>x;
//         if(x==1) p.push_back(i);
//         else if(x==2) m.push_back(i);
//         else pe.push_back(i);
//     }
//     int ans=min({p.size(), m.size(), pe.size()});
//     cout<<ans<<endl;
//     for(int i=0; i<ans; i++){
//         cout<<p[i]<<" "<<m[i]<<" "<<pe[i]<<endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;

vector<int> in[4];
int c[4];

int main() {
    int n, t, w;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> t;
        in[t].push_back(i);
        c[t]++;
    }

    w = min(c[1], min(c[2], c[3]));
    cout << w << endl;

    for (int i = 0; i < w; i++) {
        cout << in[1][i] << " " << in[2][i] << " " << in[3][i] << endl;
    }
}