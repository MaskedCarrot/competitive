#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"


ll power(ll x, ll y) {
    ll res = 1;
     
    while (y)
    {
        if (y % 2 == 1)
            res = res * x%mod;
            
        y = y/2;
        
        x = (x * x)%mod;
    }
    return res;
}

bool isPerfectSquare(ll x) { 
    ll left = 1, right = x;
   
    while (left <= right) {
        ll mid = (left + right) / 2;
        
        if (mid * mid == x) {
            return true;
        }
         
        if (mid * mid < x) {
            left = mid + 1;
        }
       
        else {
            right = mid - 1;
        }
    }
    return false;
}


long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
  

void solve() {
     ll n, k;
     cin>>n>>k;
     ll freq[k] = {0};
     ll arr[n] = {0};
     for(int i =0;i<n;i++) {
         if(i < k) {
             arr[i] = i+1;
         } else {
             arr[i] = k-(i-k+ 1); 
         }
    }
    ll index = n;
    ll p[k];
    //cout<<k<<endl;
    for(ll i = k-1;i>-1;i--) {
        index--;
        //cout<<"k = "<<k<<"i = "<<i<<endl;
        //cout<<"INDEx = "<<index<<" arr[ind] = "<<arr[index]<<" freq[arr[index]-1] = "<<freq[arr[index]-1]<<endl;
        if(freq[arr[index]-1] != 0) {
            i++;
            continue;
        }
        p[i] = arr[index];
        freq[arr[index]-1]++;
    }
    for(int i=0;i<k;i++) {
        cout<<p[i]<<' ';
    }
    cout<<endl;
    
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    ll a = 0;
    cin >> t;
    while (t--)
    {
        //std::cout << "Case #" << a+1 <<": ";
        //a++;
        solve();
    }
    return 0;
}

//                     __  __           _            _    ____                     _
//                    |  \/  | __ _ ___| | _____  __| |  / ___|__ _ _ __ _ __ ___ | |_
//                    | |\/| |/ _` / __| |/ / _ \/ _` | | |   / _` | '__| '__/ _ \| __|
//                    | |  | | (_| \__ \   <  __/ (_| | | |__| (_| | |  | | | (_) | |_
//                    |_|  |_|\__,_|___/_|\_\___|\__,_|  \____\__,_|_|  |_|  \___/ \__|
//                  =====================================================================
