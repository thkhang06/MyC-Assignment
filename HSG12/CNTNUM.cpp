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
const int N = 1e6+5;

ll a, b, c, d;

ll bcnn(ll a, ll b) {
    return a*b/__gcd(a,b);
}

void solve() {
    cin >> a >> b >> c >> d;
    ll xc = b/c - (a-1)/c;
    ll xd = b/d - (a-1)/d;
    ll xcd = b/bcnn(c,d) - (a-1)/bcnn(c,d);
    cout << b-a+1 - (xc + xd - xcd);
}

int main(){
    fast;
    freopen("CNTNUM.inp","r",stdin);
    freopen("CNTNUM.out","w",stdout);
    solve();
}
