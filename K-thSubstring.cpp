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

    ll K;
    cin >> K;

    set<string> st;
    for (ll i = 0; i < s.size(); i++) {
        for (ll j = 1; j <= K; j++) {
            st.insert(s.substr(i, j)); 
        }
    }

    set<string>::iterator itr = next(st.begin(), K-1);
    cout << *itr << endl;
    return 0;
}