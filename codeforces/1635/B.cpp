/*

                            ``````````````````````````````````````````````````
                            ``````````````````````````````````````````````````
                            ```````````````````````````.-:///:-.``````````````
                            ```````````````````````./-:+o+oooooo/.````````````
                            ```````````````````````:++ssoooossss/`````````````
                            `````````````````````..:+oo/-:----:/.`````````````
                            ``````````````````.-:///++/:-..```````````````````
                            `````````````````-/++///////++:.``.```````````````
                            ````````````````:++++////+////++-///:`````````````
                            ```````````````-yyyysssoosoooooos+::s-```.````````
                            ````````````....osyyyyyyyyyyyyyys-..+s+//+....````
                            ``....`````....-++++ooossooooo++:....o+-.`.....```
                            ``............../////////::--+//-...`..........```
                            `...............-///+///:---:+/......`..........`.
                            .................:///////////:....................
                            ..................-/++++///:......................
                            ...............-.-+:--:+:..-+/....................
                            ``````````````.++o.````./://-/:```````````````````
                            ````````````````.........-.....```````````````````
                            ``````````````````.............```````````````````
                            ``````````````````````````````````````````````````
                            ``````````````````````````````````````````````````

                     __  __           _            _  ____                     _
                    |  \/  | __ _ ___| | _____  __| |/ ___|__ _ _ __ _ __ ___ | |_
                    | |\/| |/ _` / __| |/ / _ \/ _` | |   / _` | '__| '__/ _ \| __|
                    | |  | | (_| \__ \   <  __/ (_| | |__| (_| | |  | | | (_) | |_
                    |_|  |_|\__,_|___/_|\_\___|\__,_|\____\__,_|_|  |_|  \___/ \__|
                  ===================================================================

*/

#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

//#define TEST


ll power(ll x, ll y) {
    ll res = 1;
    
    while (y) {
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

ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

void solve() {
    int n;
    cin>>n;

    vector<int> arr(n);

    queue<int> s;

    for (int i =0;i<n;i++) {
        int x;
        cin>>x;
        arr[i] = x;
    }

    for (int i =0;i<n;i++) {
        if (i >= 1 && i <= n-2) {
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                //cout<<"pushing i "<<i<<" "<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i-1]<<endl;
                s.push(i);
            } else {
                //cout<<"not pushing i "<<i<<" "<<arr[i]<<' '<<arr[i+1]<<' '<<arr[i-1]<<endl;
            }
        }
    }

    if (s.size() == 0) {
        cout<<0<<endl;
    } else {
        int c = 0;
        while (!s.empty()) {
            if (s.size() == 1) {
                arr[s.front()] = max(arr[s.front()-1], arr[s.front()+1]);
                c++;
                s.pop();
            } else {
                int a = s.front();
                s.pop();
                if (s.front() - a == 2) {
                    arr[a+1] = max(arr[s.front()], arr[a]);
                    c++;
                    s.pop();
                } else {
                    c++;
                    arr[a] = max(arr[a-1], arr[a+1]);
                }
            }
        }

        cout<<c<<endl;
    }


    for (int i =0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;



}


int main() {
    #ifdef TEST
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("errors.txt", "w", stderr);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    ll a = 1;
    cin >> t;
    while (t--) {
        //std::cout << "Case #"<<a<<": ";
        a++;
        solve();
    }
    return 0;
}
