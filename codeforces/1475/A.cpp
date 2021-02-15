
#include <bits/stdc++.h>  
using namespace std;


void solve() {
    long long n;
    cin>>n;
    while(n%2 == 0)
        n = n/2;
    if(n == 1)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
    
}


int main() {
    long long t;
    cin >> t;
    for(long long it=1;it<=t;it++) {
     //cout << "Case #" << it+1 << ": ";
        solve();
    }
    return 0;
}