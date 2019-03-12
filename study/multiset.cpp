#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::multiset<int> ms;

    // add elements
    // s.insert("key");
    ms.insert(0);
    ms.insert(std::multiset<int>::value_type(0));
    std::cout << ms.size() << std::endl;

    // output value
    for (std::multiset<int>::iterator it = ms.begin(), end = ms.end(); it != end; it++) {
        std::cout << *it << std::endl;
    }

    std::cout << ms.count(0) << std::endl; // number of elements in a key

    // search for value
    std::multiset<int>::iterator it = ms.find(0);
    if (it != ms.end()) {
        std::cout << "found:" << *it << std::endl;
    }

    // erase 
    std::cout << ms.erase(0) << std::endl; // erased number of elements
    std::cout << ms.erase(-1) << std::endl; // if you pick no exist key, return value 0
    std::cout << ms.size() << std::endl;

    // clear
    ms.clear();
    std::cout << std::boolalpha << ms.empty() << std::endl;
    return 0;
}