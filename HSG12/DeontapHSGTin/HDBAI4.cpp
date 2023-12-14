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

ll n, m;
int a[N];
map<int, int> mp;

void solve(){
    cin >> n >> m;
    FOR(i,1,n) cin >> a[i];
    int i = 1, j = 1;
    int dem = 1, minn ;
    mp[a[1]] = 1;
    while (i <= n) {
        if (mp[a[i]] == 0) {dem++;
        mp[a[i]]++;}
        if (dem == m) {
            minn = min(minn, i - j + 1);
            if (minn == m) break;
            ++j;
            if (mp[a[j-1]] == 1) dem--;
            mp[a[j-1]]--;
        } else {
            ++i;
            if (mp[a[i]] == 0) dem++;
            mp[a[i]]++;
        }
    }
    //cout << mp.size() << " " << m1.size() << " ";
    //cout << i << " " << j << " ";
    cout << minn;
}

int main(){
    fast;
    freopen("HDBAI4.inp","r",stdin);
    freopen("HDBAI4.out","w",stdout);
    solve();
    return 0;
}
