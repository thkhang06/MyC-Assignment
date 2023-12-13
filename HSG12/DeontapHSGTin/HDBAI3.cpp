#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
using namespace std;
const int N = 1e6+5;

ll n;

bool prime(ll n) {
    if (n < 2) return false;
    FOR(i,2,sqrt(n)) if (n%i == 0) return false;
    return true;
}

void solve(){
    cin >> n;
    if (prime((int)sqrt(n)) && (int)sqrt(n) * (int)sqrt(n) == n) {
        cout << n;
        return;
    }
    ll i = (ll)sqrt(n)+1;
    while (!prime(i)) i++;
    ll kq = ((ll)i) * ((ll)i);
    cout << kq;
}

int main(){
    fast;
    freopen("HDBAI3.inp","r",stdin);
    freopen("HDBAI3.out","w",stdout);
    solve();
    return 0;
}
