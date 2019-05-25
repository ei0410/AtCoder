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

    string s;
    cin >> s;

    int red = 0;
    int blue = 0;

    for (int i = 0; i < N; i++) {
        if (s[i] == 'R') {
            red++;
        } else {
            blue++;
        }
    }

    if (red > blue) {
        Yes;
    } else {
        No;
    }

    return 0;
}