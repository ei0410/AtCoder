#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::set<int> s;

    // add elements
    // s.insert("key");
    s.insert(0);
    s.insert(std::set<int>::value_type(0));
    s.insert(1);
    std::cout << s.size() << std::endl;

    // output value
    for (std::set<int>::iterator it = s.begin(), end = s.end(); it != end; it++) {
        std::cout << *it << std::endl;
    }

    std::cout << s.count(0) << std::endl; // number of elements in a key

    // search for value
    std::set<int>::iterator it = s.find(0);
    if (it != s.end()) {
        std::cout << "found:" << *it << std::endl;
    }

    // erase 
    std::cout << s.erase(0) << std::endl; // erased number of elements
    std::cout << s.erase(-1) << std::endl; // if you pick no exist key, return value 0
    std::cout << s.size() << std::endl;

    // clear
    s.clear();
    std::cout << std::boolalpha << s.empty() << std::endl;
    return 0;
}