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

int gcd(int a, int b) 
{
    if (a > b) {
        if (a%b==0) {
            return b;
        } else {
            return gcd(b, a%b);
        }
    } else {
        if (b%a==0) {
            return a;
        } else {
            return gcd(a, b%a);
        }
    }
}

int main(int argc,a char *argv[])
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}