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

    int N, K;
    cin >> N >> K;

    vector<bool> vec(10, false);
    rep (i, K) {
        int d;
        cin >> d;
        vec[d] = true;
    }

    while (true) {
        string s = to_string(N);
        bool flag = true;
        rep (i, s.size()) {
            if (vec[s[i] - '0']) {
                flag = false;
            }
        }

        if (flag) {
            break;
        }

        N++;
    }

    cout << N << endl;
    return 0;
}