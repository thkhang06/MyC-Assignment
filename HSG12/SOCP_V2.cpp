#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int, int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
using namespace std;
const int N = 1e5+5;


void solve() {
    ll a,b;
    cin >> a >> b;
    if (a >= 0 && a < b) {
        ll start = sqrt(a);
        start = (start*start == a) ? start : start + 1;
        ll endn = sqrt(b);
        ll i;
        for(i = start; i <= endn; ++i) cout << i*i << " ";
    }
}

signed main(){
    fast;
    //freopen("SOCP_V2.inp","r",stdin);
    //freopen("SOCP_V2.out","w",stdout);
    solve();
}
