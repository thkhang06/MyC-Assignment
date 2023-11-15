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

bool isPerfectSquare(long long n) {
    long long squareRoot = sqrt(n);
    return squareRoot * squareRoot == n;
}

void solve() {
    ll n;
    cin >> n;
    if (isPerfectSquare(n)) cout << 1; else cout << 0;
}

signed main(){
    fast;
    //freopen("SOCP_V1.inp","r",stdin);
    //freopen("SOCP_V1.out","w",stdout);
    solve();
}
