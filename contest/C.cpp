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

    vector<int> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    /*
    int aokiindex = 0;
    for (int i = 0; i < N; i++) {
        int score = 0;
        for (int j = i+2; j < N; j++) {
            vector<int> tmp(a.begin(), a.end());
            tmp.erase(tmp.begin()+i, tmp.begin()+j);        

            int tmpscore = 0;
            for (int k = 0; k < tmp.size(); k++) {
                if (k % 2 != 0) {
                    tmpscore += tmp[k];
                }
            }
            score = max(score, tmpscore);
        }
    }
    */
    return 0;
}