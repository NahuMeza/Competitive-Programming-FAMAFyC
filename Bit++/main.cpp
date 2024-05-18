#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n; cin >> n;
    int res = 0;
    for(int i = 0; i < n; i++){
        string in;
        cin >> in;
        if(in == "X++" || in == "++X" || in == "X--" || in == "--X"){
            res = (in[1] == '+') ? res+1 : res-1;
        }
    }
    cout << res << "\n";
}


