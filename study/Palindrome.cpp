#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

bool pali (string s) {
    ll N = s.size();
    bool flag = false;

    rep (i, N/2) {
        if (s[i] != s[N-(i+1)]) {
            break;
        }
        if (i == N/2-1) {
            flag = true;
        }
    }

    return flag;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;
    
    if (pali(S)) {
        Yes;
    } else {
        No;
    }
    return 0;
}