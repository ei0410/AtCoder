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

    vector<ll> ans(S.size(), 1);
    rep (i, S.size()-1) {
        if (S[i] == 'R' && S[i+1] == 'R') {
            ans[i+1] += ans[i];
            ans[i] = 0;
        }
    }

    reverse(S.begin(), S.end());
    reverse(ans.begin(), ans.end());
    rep (i, S.size()-1) {
        if (S[i] == 'L' && S[i+1] == 'L') {
            ans[i+1] += ans[i];
            ans[i] = 0;
        }
    }

    reverse(ans.begin(), ans.end());
    reverse(S.begin(), S.end());

    rep (i, ans.size()-1) {
        if (ans[i] != 0 && ans[i+1] != 0 && S[i] == 'R' && S[i+1] == 'L') {
            if ((ans[i]+ans[i+1])%2 == 0) {
                ans[i] = (ans[i]+ans[i+1])/2;
                ans[i+1] = (ans[i]+ans[i+1])/2;
            } else {
                if (ans[i] > ans[i+1]) {
                    if (ans[i]%2 == 0) {
                        swap(ans[i], ans[i+1]);
                    }
                } else {
                    if (ans[i+1]%2 == 0) {
                        swap(ans[i], ans[i+1]);
                    }
                }
            }
        }
    }

    rep (i, S.size()) {
        if (i == S.size()-1) {
            cout << ans[i] << endl;
            break;
        }
        cout << ans[i] << " ";
    }
    return 0;
}