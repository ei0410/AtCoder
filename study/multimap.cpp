#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::multimap<std::string, int> mm;

    // add elements
    // cannot use []
    mm.insert(std::multimap<std::string, int>::value_type("one", 1));
    mm.insert(std::multimap<std::string, int>::value_type("one", -1));
    std::cout << mm.size() << std::endl;

    // output value
    for (std::multimap<std::string, int>::iterator it = mm.begin(), end = mm.end(); it != end; it++) {
        std::cout << it->first << ":" << it->second << std::endl;
    }

    std::cout << mm.count("one") << std::endl; // number of element in a key

    // search for value
    std::multimap<std::string, int>::iterator it = mm.find("one");
    if (it != mm.end()) {
        std::cout << "found: (" << it->first << "," << it->second << ")" << std::endl;
    }

    // erase
    std::cout << mm.erase("one") << std::endl; // erased number of element
    std::cout << mm.erase("not_exist") << std::endl; // if you pick no exist key, return value 0
    std::cout << mm.size() << std::endl; 

    // clear
    mm.clear();
    std::cout << std::boolalpha << mm.empty() << std::endl;
    return 0;
}