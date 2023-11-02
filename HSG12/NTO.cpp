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



void fact(long long n)
{
 long long j,d=0,i=2,t;
 while(n>1 && i<=sqrt(n))
       {
           if (n%i==0)
           {
                n/=i;
                if (n==1) cout << i << "*";
                 else cout << i << "*";
           }
               else i++;
       }
       if (n>1){cout<<n<<"\n";}
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
    cout << demuoc(M) << " ";
    fact(M);
}

int main(){
    fast;
    freopen("NTO.inp","r",stdin);
    freopen("NTO.out","w",stdout);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
