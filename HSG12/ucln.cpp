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

int n;
ll a, luu;

void solve() {
    cin >> n;
    cin >> luu;
    ll s = 0;
    FOR(i,2,n) {
        cin >> a;
        s += __gcd(luu, a);
        luu = a;
    }
    cout << s;
}

signed main(){
    fast;
    //freopen("UCLN.inp","r",stdin);
    //freopen("UCLN.out","w",stdout);
    solve();
}
