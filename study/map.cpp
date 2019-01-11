#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::map<int, int> m;

    for (int i = 0; i < N; i++) {
        m[i] = i+1; // substitute an element
    }

    for (std::map<int, int>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        std::cout << it->first << " " << it->second << std::endl;
    }

    std::cout << m.size() << std::endl;

    std::cout << m.count(0) << std::endl; // search key

    m.erase(0); // erase an element
    m.clear();

    return 0;
}