#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::vector<std::vector<int>> A(37, std::vector<int>(6));

    std::ifstream ifs("text.txt");

    if (!ifs) {
        std::cout << "No such file" << std::endl;
        return 1;
    }

    std::string str;

    int line = 0;
    int i = 0;
    int j = 0;
    while (getline(ifs, str)) {
        std::string token;
        std::istringstream stream(str);
        while (getline(stream, token, ' ')) {
            int temp = std::stoi(token);
            i = line / 2;
            j = line % 2;
            A[i][j] = temp;
            line++;
        }
    }

    for (int temp_i = 0; temp_i <= i; temp_i++) {
        for (int temp_j = 0; temp_j <= j; temp_j++) {
            std::cout << A[temp_i][temp_j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}