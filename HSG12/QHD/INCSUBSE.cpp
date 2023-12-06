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
ll a[10000];
vector<ll> seq, dp(10000);

void solve(){
    cin >> n;
    FOR(i,0,n-1) cin >> a[i];
    ll maxn = INT_MIN;
    seq.pub(a[0]);
    FOR(i,1,n-1) {
        if (seq.back() < a[i]) seq.pub(a[i]);
        else {
            int idx = lower_bound(seq.begin(),seq.end(),a[i]) - seq.begin();
            seq[idx] = a[i];
        }
        dp[i] = seq.size();
        maxn = max(maxn, dp[i]);
    }
    cout << maxn;
}

int main(){
    fast;
    //freopen("INCSUBSE.inp","r",stdin);
    //freopen("INCSUBSE.out","w",stdout);
    /*int t;
    cin >> t;
    while (t--)*/
    solve();
}

