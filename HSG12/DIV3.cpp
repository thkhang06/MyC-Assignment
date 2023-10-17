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
const int N = 1e5+5;

int n;
int a[N];
map<ll,int> mp;

void solve(){
    cin >> n;
    FOR(i,1,n) cin >> a[i], mp[a[i]%3]++;
    int kq = 0;
    kq = mp[0]*(mp[0]-1)/2 + mp[1]*mp[2];
    cout << kq;
}

int main(){
    fast;
    //freopen("DIV3.inp","r",stdin);
    //freopen("DIV3.out","w",stdout);
    solve();
}
