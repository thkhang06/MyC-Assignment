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

ll n, k;
ll a[100000];
vector<ll> seq, seq1, dp(100000), dp1(100000);

void solve(){
    cin >> n >> k;
    FOR(i,0,n-1) cin >> a[i];
    ll maxn = 0, max1 = 0;
    seq.pub(a[k-1]);
    FOD(i,k-2,0) {
        if (seq.back() > a[i]) seq.pub(a[i]);
        else {
            int idx = lower_bound(seq.begin(),seq.end(),a[i]) - seq.begin();
            if (idx != 0) seq[idx] = a[i];
        }
        dp[i] = seq.size();
        maxn = max(maxn, dp[i]);
    }
    seq1.pub(a[k-1]);
    FOR(i,k,n-1) {
        if (seq1.back() < a[i]) seq1.pub(a[i]);
        else {
            int idx = lower_bound(seq1.begin(),seq1.end(),a[i]) - seq1.begin();
            if (idx != 0) seq1[idx] = a[i];
        }
        dp1[i] = seq1.size();
        max1 = max(max1, dp1[i]);
    }
    //cout << maxn << " " << max1 << '\n';
    ll kq = maxn + max1;
    if (k == 1 || k == n) ++kq;
    cout << kq-1;
}

int main(){
    fast;
    //freopen("LINETREEK.inp","r",stdin);
    //freopen("LINETREEK.out","w",stdout);
    /*int t;
    cin >> t;
    while (t--)*/
    solve();
}
