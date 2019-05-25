#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

int N;
std::cin >> N;

std::vector<int> A(N);
for (int i = 0; i < N; i++) {
    std::cin >> A[i];
}

int k = 0;
std::cin >> k;

bool dfs(int i, int sum) {
    if (i == n) {
        return sum == k;
    }

    if (dfs(i+1, sum)) {
        return true;
    }

    if (dfs(i+1, sum+A[i])) {
        return true;
    }

    return false;
}
 
int main(int argc, char *argv[])
{

    if (dfs(0, 0)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }

    return 0;
}