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

    char arare;
    bool gflag = false;
    bool wflag = false;
    bool pflag = false;
    bool yflag = false;
    for (int i = 0; i < N; i++) {
        cin >> arare;
        if (arare == 'G') {
            gflag = true;
        }
        if (arare == 'W') {
            wflag = true;
        }
        if (arare == 'P') {
            pflag = true;
        }
        if (arare == 'Y') {
            yflag = true;
        }
    }

    if (gflag && wflag && pflag && yflag) {
        cout << "Four" << endl;
    } else {
        cout << "Three" << endl;
    }
    return 0;
}