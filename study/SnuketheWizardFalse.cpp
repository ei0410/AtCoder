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

    int N, Q;
    cin >> N >> Q;

    string s;
    cin >> s;

    vector<char> t(Q), d(Q);
    for (int i = 0; i < Q; i++) {
        cin >> t[i] >> d[i];
    }

    vector<int> mmax(26);
    vector<int> mmin(26);
    for (int i = 0; i < Q; i++) {
        if (d[i] == 'L') {
            mmin[t[i] - 'A']++;
        } else {
            mmax[t[i] - 'A']++;
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if ((i + mmax[s[i] - 'A']) > N || (i - mmin[s[i] - 'A']) < 0) {
            ;
        } else {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}