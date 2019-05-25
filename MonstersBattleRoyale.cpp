#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

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
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    int min = INF;
    int index = 0;
    for (int i = 0; i < N; i++) {
        if (min > A[i]) {
            min = A[i];
            index = i;
        }
    }

    A.erase(A.begin() + index);

    int ans = INF; 
    for (int i = 0; i < A.size(); i++) {
        if (ans > gcd(min, A[i])) {
            ans = gcd(min, A[i]);
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
