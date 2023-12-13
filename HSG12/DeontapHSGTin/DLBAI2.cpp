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

int n;
string s;

bool prime(int n) {
    if (n < 2) return false;
    FOR(i,2,sqrt(n)) if (n%i == 0) return false;
    return true;
}

void solve(){
    cin >> s;
    map<int,int> mp;
    FOR(i,0,s.size()-1) {
        int num = (int)s[i] - '0';
        if (prime(num) && mp[num] == 0) cout << num << " ";
        mp[num]++;
    }
}

int main(){
    fast;
    freopen("DLBAI2.inp","r",stdin);
    freopen("DLBAI2.out","w",stdout);
    solve();
    return 0;
}
