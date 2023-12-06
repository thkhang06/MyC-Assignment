#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,l,r) for (int i=l;i<=r;++i)
#define FOD(i,r,l) for (int i=r;i>=l;--i)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
using namespace std;
const ll N = 1e5+5;

ll n;

void solve(){
    cin >> n;
    ll dp[1000000];
    dp[1] = 1;
    dp[2] = 2;
    FOR(i,3,n) dp[i] = dp[i-1] + dp[i-2];
    cout << dp[n];
}

int main(){
    fast;
    //freopen("GOSTAIRS.inp","r",stdin);
    //freopen("GOSTAIRS.out","w",stdout);
    /*int t;
    cin >> t;
    while (t--)*/
    solve();
}
