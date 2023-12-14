#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
using namespace std;
const int N = 1e6+5;

ll a1, a2, a3;

void solve(){
    cin >> a1 >> a2 >> a3;
    if (a1 > max(a2,a3)) {
        cout << 0;
        return;
    }
    cout << max(a2,a3) - a1 + 1;
}

int main(){
    fast;
    // freopen("VOTEMAST.inp","r",stdin);
    // freopen("VOTEMAST.out","w",stdout);
    solve();
    return 0;
}
