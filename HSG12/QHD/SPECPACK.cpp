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
ll a[N], d[N];
bool prime[1000000];
vector<ll> l2, dp2(100000);

void sieve(int n) {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i = 2; i*i <= n; i++)
        if (prime[i]) for(int j = i*i; j <= n; j += i) prime[j] = false;
}

void solve(){
    cin >> n;
    sieve(1000000);
    ll m = -1, maxn = 0;
    FOR(i,1,n) {
        ll x;
        cin >> x;
        if (prime[x]) {
            m++;
            a[m] = x;
        }
    }
    cout << m << " ";
    FOR(i,0,m-1) cout << a[i] << " ";
    l2.pub(a[m-1]);
    FOD(i,m-2,0) {
        if (l2.back() < a[i]) l2.pub(a[i]);
        else {
            int inx = lower_bound(l2.begin(),l2.end(),a[i])-l2.begin();
            l2[inx] = a[i];
        }
        dp2[i] = l2.size();
        maxn = max(maxn, dp2[i]);
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
