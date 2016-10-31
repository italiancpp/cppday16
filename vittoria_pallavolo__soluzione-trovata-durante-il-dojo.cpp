#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() 
{
    std::array<int, 5> score1;
    for (auto & s : score1)
        cin >> s;
    int score;
    int sum = 0;
    for (int i = 0; i < 5; ++i)
    {    
        cin >> score;
        sum += score - score1[i] < 0 ? -1 : 1;
    }
    std::cout << (sum < 0 ? "Locali" : "Ospiti") << endl; 
}
