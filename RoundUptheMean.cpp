#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int a, b;
    std::cin >> a >> b;

    std::cout << int(std::round(float(a+b)/2)) << std::endl;
    return 0;
}