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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    ll cnt1 = 0;
    ll cnt2 = 0;
    ll cnt3 = 0;
    ll cnt4 = 0;
    
    rep (i, S.size()) {
        if (S[i] == 'N') {
            cnt1++;
        }
        if (S[i] == 'S') {
            cnt2++;
        }
        if (S[i] == 'W') {
            cnt3++;
        }
        if (S[i] == 'E') {
            cnt4++;
        }
    }

    bool flag1 = false;
    bool flag2 = false;

    if ((cnt1 == 0 && cnt2 == 0) || (cnt1 != 0 && cnt2 != 0)) {
        flag1 = true;
    }
    if ((cnt3 == 0 && cnt4 == 0) || (cnt3 != 0 && cnt4 != 0)) {
        flag2 = true;
    }

    if (flag1 && flag2) {
        Yes;
    } else {
        No;
    }
    return 0;
}