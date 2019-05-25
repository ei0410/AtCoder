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
    vector<vector<int>> vv(5, vector<int>(4, 0));

    /*
    vector<vector<int>> vv;
    vv.resize(5);
    for (int i = 0; i < vv.size(); i++) {
        vv[i].resize(4);
    }

    for (int i = 0; i < vv.size(); i++) {
        for (int j = 0; j < vv[i].size(); j++) {
            vv[i][j] = 0;
        }
    }
    */

    /*
    vector<vector<int>> vv;
    vv.resize(5);
    for (int i = 0; i < vv.size(); i++) {
        vv.push_back(i);
    }
    */

    for (int i = 0; i < vv.size(); i++) {
        for (int j = 0; j < vv[i].size(); j++) {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}