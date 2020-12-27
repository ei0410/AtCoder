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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    map<char, int> m;
    for (int i = 0; i < N; i++) {
        if (S[i][0] == 'M' || S[i][0] == 'A' || S[i][0] == 'R' || S[i][0] == 'C' || S[i][0] == 'H') {
            m[S[i][0]]++;
        }
    }

    ll ans = 1;
    if (m.size() <= 2) {
        ans = 0;
    } else {
        if (m.size() == 3) {
            for (map<char, int>::iterator it = m.begin(), end = m.end(); it != end; it++) {
                ans *= it->second;
            }
        } else if (m.size() == 4) {
            vector<ll> tmp;
            for (map<char, int>::iterator it = m.begin(), end = m.end(); it != end; it++) {
                tmp.push_back(it->second);
            }

            ans = 0;
            ans += (tmp[0] * tmp[1] * tmp[2]);
            ans += (tmp[0] * tmp[1] * tmp[3]);
            ans += (tmp[0] * tmp[2] * tmp[3]);
            ans += (tmp[1] * tmp[2] * tmp[3]);
        } else {
            vector<ll> tmp;
            for (map<char, int>::iterator it = m.begin(), end = m.end(); it != end; it++) {
                tmp.push_back(it->second);
            }

            ans = 0;
            ans += (tmp[0] * tmp[1] * tmp[2]);
            ans += (tmp[0] * tmp[1] * tmp[3]);
            ans += (tmp[0] * tmp[1] * tmp[4]);
            ans += (tmp[0] * tmp[2] * tmp[3]);
            ans += (tmp[0] * tmp[2] * tmp[4]);
            ans += (tmp[0] * tmp[2] * tmp[5]);
            ans += (tmp[0] * tmp[3] * tmp[4]);
            ans += (tmp[0] * tmp[3] * tmp[5]);
            ans += (tmp[0] * tmp[4] * tmp[5]);
            ans += (tmp[1] * tmp[2] * tmp[3]);
            ans += (tmp[1] * tmp[2] * tmp[4]);
            ans += (tmp[1] * tmp[2] * tmp[5]);
            ans += (tmp[1] * tmp[3] * tmp[4]);
            ans += (tmp[1] * tmp[3] * tmp[5]);
            ans += (tmp[1] * tmp[4] * tmp[5]);
            ans += (tmp[2] * tmp[3] * tmp[4]);
            ans += (tmp[2] * tmp[3] * tmp[5]);
            ans += (tmp[2] * tmp[4] * tmp[5]);
            ans += (tmp[3] * tmp[4] * tmp[5]);
        }
    }

    cout << ans << endl;
    return 0;
}