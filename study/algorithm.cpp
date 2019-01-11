#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::vector<int> a, dummy;
    
    int N = 10;
    for (int i = 0; i < N; i++) {
        a.push_back(i);
    }

    //std::sort(a, a + N);
    //std::sort(a, a + N, greater<int>());
    std::sort(a.begin(), a.end());
    std::sort(a.rbegin(), a.rend());
    //std::sort(a.begin(), a.end(), greater<int>());

    //std::reverse(a, a + N);
    std::reverse(a.begin(), a.end());

    //std::copy(a, a + N, dummy.begin());
    std::copy(a.begin(), a.end(), back_inserter(dummy));

    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << std::endl;
    }

    for (int i = 0; i < dummy.size(); i++) {
        std::cout << dummy[i] << std::endl;
    }

    //std::fill(a, a + N, 0);
    std::fill(a.begin(), a.end(), 0);

    return 0;
}