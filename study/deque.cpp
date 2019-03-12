#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::deque<int> dq;

    dq.push_back(0);
    dq.push_back(1);
    std::cout << dq.size() << std::endl;
    std::cout << dq.at(0) << std::endl;
    std::cout << dq[1] << std::endl;
    std::cout << dq.front() << std::endl;
    std::cout << dq.back() << std::endl;
    
    dq.push_front(-1);
    dq.pop_back();
    std::cout << dq.size() << std::endl;
    std::cout << dq.at(0) << std::endl;
    std::cout << dq[1] << std::endl;
    std::cout << dq.front() << std::endl;
    std::cout << dq.back() << std::endl;

    dq.push_back(1);
    dq.pop_front();
    std::cout << dq.size() << std::endl;
    std::cout << dq.at(0) << std::endl;
    std::cout << dq[1] << std::endl;
    std::cout << dq.front() << std::endl;
    std::cout << dq.back() << std::endl;

    dq.clear();
    std::cout << dq.size() << std::endl;
    std::cout << std::boolalpha << dq.empty() << std::endl;
    return 0;
}