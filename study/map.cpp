#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::map<std::string, int> m;

    // add elements
    // m["key"] = value;
    m["one"] = 1;
    m["two"] = 2;
    m.insert(std::map<std::string, int>::value_type("two", 2)); // same mean
    std::cout << m.size() << std::endl;

    std::cout << m["one"] << std::endl; // output value
    for (std::map<std::string, int>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        std::cout << it->first << ":" << it->second << std::endl;
    }

    std::cout << m.count("one") << std::endl; // number of element in a key

    // search for value
    std::map<std::string, int>::iterator it = m.find("one");
    if (it != m.end()) {
        std::cout << "found: (" << it->first << "," << it->second << ")" << std::endl;
    }

    // erase
    std::cout << m.erase("one") << std::endl; // erased number of element
    std::cout << m.erase("not_exist") << std::endl; // if you pick no exist key, return value 0
    std::cout << m.size() << std::endl; 

    // clear
    m.clear();
    std::cout << std::boolalpha << m.empty() << std::endl;
    return 0;
}