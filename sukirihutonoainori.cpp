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

    int N;
    cin >> N;

    vector<int> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    vector<int> m(5, 0);
    rep (i, N) {
        m[A[i]]++;
    }

    int ans = 0;
    ans += m[4];

    if (m[3] >= m[1]) {
        ans += m[3];
        ans += (m[2]+1)/2;
    } else {
        ans += m[3];
        m[1] -= m[3];

        if (m[1] >= m[2]*2) {
            ans += m[2];
            m[1] -= m[2]*2;
            ans += (m[1]+3)/4;
        } else {
            ans += m[2]/2;
            if (m[2]%2 == 0) {
                ans += (m[1]+3)/4;
            } else {
                m[1] += 2;
                ans += (m[1]+3)/4;
            }
        }
    }

    cout << ans << endl;
    return 0;
}