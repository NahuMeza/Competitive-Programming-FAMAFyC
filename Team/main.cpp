#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    int amountex = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int n1,n2, n3;
        cin >> n1 >> n2 >> n3;
        if (n1 + n2 + n3 >= 2){
            amountex++;
        }
    }
    cout << amountex << "\n";
}
