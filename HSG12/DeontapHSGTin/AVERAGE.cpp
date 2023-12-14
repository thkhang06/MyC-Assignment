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

ll n, k;
ll a[N];

void solve(){
    cin >> n >> k;
    FOR(i,1,n) cin >> a[i];
    double s = 0, maxn = 0;
    FOR(i,1,k) s += a[i];
    s /= k;
    maxn = s;
    int i = 1, j = k;
    while (i <= n-k+1) {
        j++;
        s = s*(j-i+1) + a[j];
        s /= (j-i+1);
        if (maxn <= s) maxn = s;
        else {
            s = s*(j-i+1) - a[i];
            ++i;
            j = i+k-1;
        }
    }
    cout << setprecision(3) << fixed << maxn;
}

int main(){
    fast;
    // freopen("ROWFIGUV.inp","r",stdin);
    // freopen("ROWFIGUV.out","w",stdout);
    solve();
    return 0;
}
