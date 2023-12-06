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
ll d[10001];
ll a[10001][10001];
void solve(){
    cin >> n;
    int i,j;
    while (cin >> i >> j) {
        if (i < j) a[i][j] = 1;
    }
    d[1] = 1;
    FOR(i,1,n-1) {
        FOR(j,i+1,n) if (a[i][j] == 1) d[j] += d[i];
    }
    cout << d[n];
}

int main(){
    fast;
    //freopen("WAYSHUGO.inp","r",stdin);
    //freopen("WAYSHUGO.out","w",stdout);
    /*int t;
    cin >> t;
    while (t--)*/
    solve();
}
