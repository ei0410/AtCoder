#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N = 10;
    std::set<int> s;

    for (int i = 0; i < N; i++) {
        s.insert(i+1);
    }

    for (auto itr = s.begin(); itr != s.end(); itr++) {
        std::cout << *itr << std::endl;
    }

    std::cout << s.size() << std::endl;

    std::cout << s.count(0) << std::endl; // check an element

    s.erase(0); // erase an element
    s.clear();

    return 0;
}