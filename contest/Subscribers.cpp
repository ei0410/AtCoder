#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N, A, B;
    std::cin >> N >> A >> B;

    int max = 0;
    int min = 0;
    max = std::min(A, B);
    if (N < A+B) {
        min = A+B-N;
    } else {
        min = 0;
    }

    std::cout << max << " " << min << std::endl;
    return 0;
}
