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
    int H = 3;
    int W = 3;

    vector<vector<int>> vv(H, vector<int>(W, 0));
    //vector<vector<int>> vv(H, vector<int>(W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> vv[i][j];
        }
    }

    /*
    for (int i = 0; i < vv.size(); i++) {
        for (int j = 0; j < vv[0].size(); j++) {
            cout << vv[i][j];
        }
        cout << endl;
    }
    */

    for (auto v1: vv) {
        for (auto v2: v1) {
            cout << v2;
        }
        cout << endl;
    }

    return 0;
}