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
vector<ll> seq, seq1, dp(1000000);

void solve(){
    cin >> n >> k;
    ll maxn = 0;
    FOR(i,1,n) cin >> a[i];
    FOR(i,1,k-1) if (a[i] < a[k]) seq.pub(a[i]);
    seq.pub(a[k]);
    FOR(i,k+1,n) if (a[i] > a[k]) seq.pub(a[i]);
    seq1.pub(seq[0]);
    for(int i = 1; i < seq.size(); ++i) {
        if (seq1.back() < seq[i]) seq1.pub(seq[i]);
        else {
            int ix = lower_bound(seq1.begin(), seq1.end(), seq[i]) - seq1.begin();
            seq1[ix] = seq[i];
        }
        dp[i] = seq1.size();
        maxn = max(maxn, dp[i]);
    }
    cout << maxn;
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
