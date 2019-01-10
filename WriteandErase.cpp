#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007

using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::set<int> values;
    for (int i = 0; i < N; i++) {
        if (values.count(A[i]) == 0) {
            values.insert(A[i]);
        } else {
            values.erase(A[i]);
        }
    }

    std::cout << values.size() << std::endl;
    return 0;
}