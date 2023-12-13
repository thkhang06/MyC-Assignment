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

int Xa, Ya, Xc, Yc, Xm, Ym, Xn, Yn;

void solve(){
    cin >> Xa >> Ya;
    cin >> Xc >> Yc;
    cin >> Xm >> Ym;
    cin >> Xn >> Yn;
    int kq = 0;
    if (max(Xa, Xc) > Xm && Xm > min(Xa, Xc)) {
        if (max(Ya, Yc) > Ym && Ym > min(Ya, Yc)) kq = 1;
    } else if (max(Xa, Xc) <= Xm || Xm <= min(Xa, Xc) || max(Ya, Yc) <= Ym || Ym <= min(Ya, Yc)) kq = 0;
    if (max(Xa, Xc) > Xn && Xn > min(Xa, Xc)) {
        if (max(Ya, Yc) > Yn && Yn > min(Ya, Yc)) if (kq == 1) kq = 2; else kq = 1;
    } else if (max(Xa, Xc) <= Xn || Xn <= min(Xa, Xc) || max(Ya, Yc) <= Yn || Yn <= min(Ya, Yc)) kq = 0;
    cout << kq;
}

int main(){
    fast;
    freopen("HDBAI1.inp","r",stdin);
    freopen("HDBAI1.out","w",stdout);
    solve();
    return 0;
}
