#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int A, B, K;
    std::cin >> A >> B >> K;

    std::set<int> ans;
    for (int i = A; i < A+K; i++) {
        ans.insert(i);
        if (i >= B) {
            break;
        }
    }

    for (int i = B; i > B-K; i--) {
        ans.insert(i);
        if (i <= A) {
            break;
        }
    }

    for (auto itr = ans.begin(); itr != ans.end(); itr++) {
        std::cout << *itr << std::endl;
    }

    return 0;
}