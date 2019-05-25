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

    string s;
    cin >> s;

    map<char, int> m;
    rep (i, s.size()) {
        m[s[i]]++;
    }

    bool flag = true;
    for (map<char, int>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        if (it->second % 2 != 0) {
            flag = false;
        }
    }
    
    if (flag) {
        Yes
    } else {
        No;
    }
    return 0;
}