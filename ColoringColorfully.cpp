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

    int ans0 = 0;
    rep (i, S.size()) {
        if (i % 2 == 0) {
            if (S[i] == '1') {
                ans0++;
            }
        } else {
            if (S[i] == '0') {
                ans0++;
            }
        }
    }

    int ans1 = 0;
    rep (i, S.size()) {
        if (i % 2 == 0) {
            if (S[i] == '0') {
                ans1++;
            }
        } else {
            if (S[i] == '1') {
                ans1++;
            }
        }
    }

    cout << min(ans0, ans1) << endl;
    return 0;
}