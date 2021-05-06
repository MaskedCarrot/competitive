#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t ;
    cin>>t;
    while(t--) {
    long long a, b, c;
    cin>>a>>b>>c;
    long long d = (a>c)?a-c:c-a;
    if(d == 0)
        cout<<b<<endl;
    else {
        long long ans = sqrt(d*d + b*b);
        cout<<ans<<endl;
    }
    }

}