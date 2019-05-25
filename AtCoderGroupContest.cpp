#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> a(3*N);
    for (int i = 0; i < 3*N; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end(), std::greater<int>());

    double sum = 0;
    for (int i = 0; i < 2*N; i++) {
        if (i % 2 != 0) {
            sum += a[i];
        } else {
            ;
        }
    }
    
    std::string s = std::to_string(sum);

    for (int i = 0; i < 7; i++) {
        s.pop_back();
    }

    std::cout << s << std::endl;

    return 0;
}