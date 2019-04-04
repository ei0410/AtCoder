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

    int C, T;
    cin >> C >> T;

    vector<int> S(C), E(C);
    rep (i, C) {
        cin >> S[i] >> E[i];
    }

    vector<int> table(T, 0);
    rep (i, C) {
        table[S[i]]++;
        table[E[i]]--;
    }

    rep (i, T) {
        if (0 < i) {
            table[i] += table[i-1];
        }
    }

    int M = 0;
    rep (i, T) {
        if (M < table[i]) {
            M = table[i];
        }
    }

    cout << M << endl;
    return 0;
}