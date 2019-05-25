#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<ull> lucas(N + 1);
    lucas[0] = 2;
    lucas[1] = 1;

    for (int i = 2; i <= N; i++) {
        lucas[i] = lucas[i-1] + lucas[i-2];
    }

    std::cout << lucas[N] << std::endl;

    return 0;
}