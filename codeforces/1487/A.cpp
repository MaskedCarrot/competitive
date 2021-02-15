
#include <bits/stdc++.h>  
using namespace std;


void solve() {
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    std::sort(arr , arr+n);
    int win = n-1;
    int cand = arr[0];
    for(int i=1;i<n;i++) {
        if(cand < arr[i])
            break;
        win--;
    }
    std::cout<<win<<endl;
}


int main() {
    int t;
    cin >> t;
    for(int it=1;it<=t;it++) {
     //cout << "Case #" << it+1 << ": ";
        solve();
    }
    return 0;
}