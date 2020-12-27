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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    bool flag = true;
    if (S[0] != 'A') {
        flag = false;
    }

    ll memo = 0;
    ll count = 0;
    for (ll i = 2; i < S.size()-1; i++) {
        if (S[i] == 'C') {
            count++;
            memo = i;
        }
    }

    if (count != 1 || S[S.size()-1] == 'C') {
        flag = false;
    }

    rep (i, S.size()) {
        if (i == 0 || i == memo) {
            ;
        } else {
            if(!islower(S[i])) {
                flag = false;
            }
        }
    }

    if (flag) {
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }
    return 0;
}