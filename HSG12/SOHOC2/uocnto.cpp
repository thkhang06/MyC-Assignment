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
int p[1000005], k[1000005];
bool prime[1000005];

void sieve(int n) {
    memset(prime,true,sizeof(prime));
    for(int i = 2; i*i <= n; ++i)
        if (prime[i])
            for(int j = i*i; j <= n; j += i) prime[j] = false;
    FOR(i,2,n) {
        if (prime[i]){
            p[i] = 1;
            ll t = i;
            for(int j = 1; t <= n; ++j) {
                if (prime[j+1]) p[t] = 1;
                t *= (ll)i;
            }
        }
    }
    k[0] = 0;
    for(int i = 1; i <= n; i++) k[i] = k[i-1] + p[i];
}

void solve(){
    int a,b;
    cin >> a >> b;
    cout << k[b] - k[a-1] << '\n';
}

int main(){
    fast;
    //freopen("SUB.inp","r",stdin);
    //freopen("SUB.out","w",stdout);
    sieve(1000000);
    int t;
    cin >> t;
    while (t--)
    solve();
}
