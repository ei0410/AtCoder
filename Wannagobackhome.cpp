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

    string S;
    cin >> S;

    bool Nflag = false;
    bool Sflag = false;
    bool Wflag = false;
    bool Eflag = false;
    rep (i, S.size()) {
        if (S[i] == 'N') {
            Nflag = true;
        }
        if (S[i] == 'S') {
            Sflag = true;
        }
        if (S[i] == 'W') {
            Wflag = true;
        }
        if (S[i] == 'E') {
            Eflag = true;
        }
    }

    if (Nflag == Sflag && Wflag == Eflag) {
        Yes;
    } else {
        No;
    }
    return 0;
}