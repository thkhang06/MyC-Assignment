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
const ll N = 1e12;

ll n;

bool check(ll n){
    if (n < 2) return false;
    FOR(i,2,sqrt(n)) if (n%i == 0) return false;
    return true;
}

ll findn(ll n){
    FOR(i,2,sqrt(n)) if (n%i == 0) return n/i;
    return 1;
}

void solve(){
    cin >> n;
    if (check(n)) cout << "YES"; else cout << findn(n);
}

int main(){
    fast;
    //freopen("ISPRIME.inp","r",stdin);
    //freopen("ISPRIME.out","w",stdout);
    solve();
}
