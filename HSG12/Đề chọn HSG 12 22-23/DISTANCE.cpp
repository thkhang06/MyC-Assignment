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

double x, y, maxx, maxy, s;

void solve(){
    int n;
    cin >> n;
    FOR(i,1,n) {
        cin >> x >> y;
        maxx = max(maxx, x);
        maxy = max(maxy, y);
    }
    s = sqrt(maxx*maxx + maxy*maxy);
    cout << setprecision(5) << fixed << s;
}

int main(){
    fast;
    // freopen("DISTANCE.inp","r",stdin);
    // freopen("DISTANCE.out","w",stdout);
    solve();
    return 0;
}
