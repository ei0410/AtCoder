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

    string SA, SB, SC;
    cin >> SA >> SB >> SC;

    // 0 A, 1 B, 2 C
    int state = 0;
    bool flag = false;
    char ans;
    while(true) {
        switch(state) {
            case 0:
                if (SA.empty()) {
                    flag = true;
                    ans = 'A';
                    break;
                }
                if (SA[0] == 'a') {
                    state = 0;
                } else if (SA[0] == 'b') {
                    state = 1;
                } else if (SA[0] == 'c') {
                    state = 2;
                }
                SA.erase(SA.begin());
                break;
            case 1:
                if (SB.empty()) {
                    flag = true;
                    ans = 'B';
                    break;
                }
                if (SB[0] == 'a') {
                    state = 0;
                } else if (SB[0] == 'b') {
                    state = 1;
                } else if (SB[0] == 'c') {
                    state = 2;
                }
                SB.erase(SB.begin());
                break;
            case 2:
                if (SC.empty()) {
                    flag = true;
                    ans = 'C';
                    break;
                }
                if (SC[0] == 'a') {
                    state = 0;
                } else if (SC[0] == 'b') {
                    state = 1;
                } else if (SC[0] == 'c') {
                    state = 2;
                }
                SC.erase(SC.begin());
                break;
            default:
                break;
        }
        if (flag) {
            break;
        }
    }

    cout << ans << endl;
    return 0;
}