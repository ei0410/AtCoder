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

    ll N;
    cin >> N;

    rep (i, N) {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;

        string head = "";
        string body = "";
        string tail = "";

        if (l == 0) {
            head = "";
        } else {
            head = S.substr(0, l);
        }
        body = S.substr(l, r-l+1);
        if (r == S.size()-1) {
            tail == "";
        } else {
            tail = S.substr(r+1, S.size()-r-1);
        }

        reverse(body.begin(), body.end());
        S = head+body+tail;
    }

    cout << S << endl;
    return 0;
}