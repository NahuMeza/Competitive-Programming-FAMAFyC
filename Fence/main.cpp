#include <bits/stdc++.h>
using namespace std;

int main (){
    long n, k; cin >> n >> k;
    int a[n+1];
    a[0] = 0;
    for (int i = 1; i <= n; i++){
        int sum;
        cin >> sum;
        a[i] = a[i-1] + sum;
    }
    int min = a[k],index = 1;
    for(int i = k; i <= n; i++){
        int parc_sum = a[i] - a[i-k];
        if(min > parc_sum){
            min = parc_sum;
            index = (i-k) + 1;
        }
    }
    cout << index << "\n";
}