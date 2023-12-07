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

ll n, s;
ll w[200], t[200][200];

void solve(){
    cin >> n >> s;
    FOR(i,1,n) cin >> w[i];
    for(int j = 0; j <= s; j++)
        if (w[1] <= j) t[1][j] = w[1];
        else t[1][j] = 0;
    for(int i = 2; i <= n; i++)
        for(int j = 1; j <= s; j++)
            if (w[i] > j) t[i][j] = t[i-1][j];
            else t[i][j] = max(t[i-1][j], t[i-1][j-w[i]] + w[i]);
    cout << t[n][s];
}

int main(){
    fast;
    // freopen("ROWFIGUV.inp","r",stdin);
    // freopen("ROWFIGUV.out","w",stdout);
    solve();
    return 0;
}
