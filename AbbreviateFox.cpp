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

    ll N;
    cin >> N;

    string s;
    cin >> s;

    stack<char> st;
    rep (i, N) {
        st.push(s[i]);
        if (st.size() < 3) {
            continue;
        }

        char x, o, f;
        x = st.top();
        st.pop();
        o = st.top();
        st.pop();
        f = st.top();
        st.pop();
        if (f == 'f' && o == 'o' && x == 'x') {
            continue;
        }

        st.push(f);
        st.push(o);
        st.push(x);
    }

    cout << st.size() << endl;
    return 0;
}