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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    ll K;
    cin >> K;

    ll index = 0;
    ll tmp = 1;
    vector<ll> v;
    while (index < S.size()) {
        if (S[index] == S[index+1]) {
            tmp++;
        } else {
            v.push_back(tmp);
            tmp = 1;
        }
        index++;
    }

    ll ans = 0;
    if (v.size() == 1) {
        ans = v[0]*K/2;
    } else {
        if (S[0] != S[S.size()-1]) {
            rep (i, v.size()) {
                ans += (v[i]/2)*K;
            }
        } else {
            rep (i, v.size()) {
                ans += (v[i]/2)*K;
            }
            ans += ((v[0]+v[v.size()-1])/2 - (v[0]/2 + v[v.size()-1]/2))*(K-1);
        }
    }

    cout << ans << endl;
    return 0;
}