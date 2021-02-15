
#include <bits/stdc++.h>  
using namespace std;


void solve() {
    int n;
    cin>>n;
    int t = n/2020;
    int c = n%2020;
    if(c<=t)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    
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