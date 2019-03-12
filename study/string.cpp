#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::string str = "abcdefghijklmnopqrstuvwxyz";
    std::string str2("my string");

    str2 += " extended";

    std::cout << str.size() << std::endl;

    std::cout << str[0] << std::endl;
    std::cout << str.at(0) << std::endl;

    int pos = str.find("abc");

    int start_pos = 1;
    pos = str.find("xyz", start_pos);

    pos = str.rfind("abc");

    int len = 3;
    str.substr(pos, len);
    str.substr(pos); // to last

    std::string s1 = str;
    std::string s2 = str;

    str.replace(pos, len, "...");
    str.insert(pos, "INSERT");
    str.erase(pos, len);
    str.erase(pos); // to last

    strcmp(s1.c_str(), s2.c_str());

    return 0;
}