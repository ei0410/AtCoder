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

    char b;
    cin >> b;

    if (b == 'A') {
        cout << 'T' << endl;
    } else if (b == 'T') {
        cout << 'A' << endl;
    } else if (b == 'G') {
        cout << 'C' << endl;
    } else if (b == 'C') {
        cout << 'G' << endl;
    }
    return 0;
}