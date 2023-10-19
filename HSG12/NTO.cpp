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


void primefactors(ll n,set<int> a){
    while (n%2 == 0) {
        a.insert(2);
        n = n/2;
    }
    for(int i = 3; i <= sqrt(n); i = i+2) {
        while (n%i == 0) {
            a.insert(i);
            n = n/i;
        }
    }
    if (n > 2) a.insert(n);
}

int demuoc(int n) {
    int cnt = 0;
    FOR(i,1,sqrt(n)){
        if (n%i == 0) {
            if (n/i == i) cnt++;
            else cnt += 2;
        }
    }
    return cnt;
}

void solve(){
    int M;
    cin >> M;
    set<int> a;
    primefactors(M, a);
    cout << demuoc(M) << " ";
    cout << *a.begin();
    a.erase(0);
    set<int>::iterator i;
    for( i = a.begin(); i != a.end(); i++) cout << "*" << *i;
    cout << '\n';
}

int main(){
    fast;
    //freopen("NTO.inp","r",stdin);
    //freopen("NTO.out","w",stdout);
    int t;
    cin >> t;
    while (t--) solve();
}
