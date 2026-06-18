// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n, x, s;
//         cin >> n >> x >> s;

//         string str;
//         cin >> str;

//         vector<int> a(x, 0);   
//         vector<int> e(x, 0);   

//         int c = 0;

//         for(int i = 0; i < n; i++){
//             if(str[i] == 'A'){ // Ambivert
//                 for(int j = 0; j < x; j++){
//                     if(a[j] < s){
//                         a[j]++;
//                         e[j] = 1;
//                         c++;
//                         break;
//                     }
//                 }
//             }
//             else if(str[i] == 'E'){ // Extrovert
//                 for(int j = 0; j < x; j++){
//                     if(a[j] > 0 && a[j] < s){
//                         a[j]++;
//                         c++;
//                         break;
//                     }
//                 }
//             }
//             else{ // Introvert
//                 for(int j = 0; j < x; j++){
//                     if(a[j] == 0){
//                         a[j]++;
//                         e[j] = 1;
//                         c++;
//                         break;
//                     }
//                 }
//             }
//         }

//         cout << c << "\n";
//     }
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, s;
        cin >> n >> x >> s;

        string str;
        cin >> str;

        vector<int> a(x, 0);
        int c = 0;

        int remI = 0;
        for(char ch : str) if(ch == 'I') remI++;

        for(int i = 0; i < n; i++){

            if(str[i] == 'I'){
                remI--;
                for(int j = 0; j < x; j++){
                    if(a[j] == 0){
                        a[j]++;
                        c++;
                        break;
                    }
                }
            }

            else if(str[i] == 'E'){
                for(int j = 0; j < x; j++){
                    if(a[j] > 0 && a[j] < s){
                        a[j]++;
                        c++;
                        break;
                    }
                }
            }

            else{
                bool done = false;

                int empty = 0;
                for(int j = 0; j < x; j++){
                    if(a[j] == 0) empty++;
                }

                if(empty > remI){
                    for(int j = 0; j < x; j++){
                        if(a[j] == 0){
                            a[j]++;
                            c++;
                            done = true;
                            break;
                        }
                    }
                }

                if(!done){
                    for(int j = 0; j < x; j++){
                        if(a[j] > 0 && a[j] < s){
                            a[j]++;
                            c++;
                            done = true;
                            break;
                        }
                    }
                }

                if(!done){
                    for(int j = 0; j < x; j++){
                        if(a[j] == 0){
                            a[j]++;
                            c++;
                            break;
                        }
                    }
                }
            }
        }

        cout << c << "\n";
    }
}