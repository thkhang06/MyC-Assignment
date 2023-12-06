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
ll a;
bool prime[1000000];
vector<ll> seq, dp(1000000), b;

void sieve() {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i = 2; i*i <= 1000000; i++)
        if (prime[i])
            for(int j = i*i; j <= 1000000; j += i) prime[i] = false;
}

void solve(){
    cin >> n;
    sieve();
    FOR(i,0,n-1) {cin >> a; if (prime[a]) b.pub(a);}
    ll maxn = 0;
    n = b.size();
    seq.pub(b[n-1]);
    FOD(i,n-2,0) {
        if (seq.back() > b[i]) seq.pub(b[i]);
        else {
            int idx = lower_bound(seq.begin(),seq.end(),b[i]) - seq.begin();
            seq[idx] = b[i];
        }
        dp[i] = seq.size();
        maxn = max(maxn, dp[i]);
    }
    cout << maxn;
}

int main(){
    fast;
    //freopen("SPECPACK.inp","r",stdin);
    //freopen("SPECPACK.out","w",stdout);
    /*int t;
    cin >> t;
    while (t--)*/
    solve();
}
