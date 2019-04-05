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
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (N % 15 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (N % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (N % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}