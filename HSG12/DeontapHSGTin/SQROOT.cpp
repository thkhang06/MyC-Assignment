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

ll n;

void solve(){
    cin >> n;
    ll s = (n%2021)*((n+1)%2021)*((2*n+1)%2021)*337;
    cout << s%2021;
}

int main(){
    fast;
    freopen("SQROOT.inp","r",stdin);
    freopen("SQROOT.out","w",stdout);
    solve();
    return 0;
}
