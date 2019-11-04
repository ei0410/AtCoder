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

    ll N;
    cin >> N;

    vector<string> W(N);
    rep (i, N) {
        cin >> W[i];
    }

    ll index1 = -1;
    rep (i, N-1) {
        if (W[i].back() != W[i+1].front()) {
            index1 = i;
            break;
        }
    }

    //index1 == 1 firstwin
    //index1 == 2 firstlose

    map<string, ll> m1;
    map<string, ll> m2;
    ll index2 = -1;
    rep (i, N) {
        if (i%2) {
            if (m1.count(W[i]) == 0) {
                m1[W[i]]++;
            } else {
                index2 = i;
                break;
            }
        } else {
            if (m2.count(W[i]) == 0) {
                m2[W[i]]++;
            } else {
                index2 = i;
                break;
            }
        }
    }

    if (min(index1, index2) != -1) {
        if (min(index1, index2)%2 == 0) {
            cout << "LOSE" << endl;
            return 0;
        } else {
            cout << "WIN" << endl;
            return 0;
        }
    }

    cout << "DRAW" << endl;
    return 0;
}