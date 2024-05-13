#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a; cin >> n >> m >> a;
    int div1 = (n%a) != 0 ? (n+a)/a : (n/a);
    int div2 = (m%a) != 0 ? (m+a)/a : (m/a);
    long long res = ((long long)div1 * (long long)div2);
    cout << res << "\n";
}