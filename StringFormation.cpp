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

    bool flag = false;
    string S;
    cin >> S;

    deque<char> dq;
    rep (i, S.size()) {
        dq.push_back(S[i]);
    }

    ll Q;
    cin >> Q;
    rep (i, Q) {
        ll T;
        cin >> T;

        if (T == 1) {
            if (flag) {
                flag = false;
            } else {
                flag = true;
            }
        } else if (T == 2) {
            ll F;
            char C;
            cin >> F >> C;
            if (F == 1) {
                if (flag) {
                    dq.push_back(C);
                } else {
                    dq.push_front(C);
                }
            } else if (F == 2) {
                if (flag) {
                    dq.push_front(C);
                } else {
                    dq.push_back(C);
                }
            }
        }
    }

    if (flag) {
        for(auto itr = dq.rbegin(); itr != dq.rend(); ++itr) {
            cout << *itr;
        }
        cout << endl;
    } else {
        for(auto itr = dq.begin(); itr != dq.end(); ++itr) {
            cout << *itr;
        }
        cout << endl;
    }
    return 0;
}