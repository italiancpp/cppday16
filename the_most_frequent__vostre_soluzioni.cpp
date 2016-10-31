#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;

// soluzione con vettore di occorrenze (solo un'iterazione)
int main() 
{
    std::vector<int> v(100001);
    int count;
    std::cin >> count;
    int num;
    int max=std::numeric_limits<int>::min();
    int index = 0;
   
    while (std::cin >> num)
    {
        ++v[num];
        if (v[num] > max)
        {
            max = v[num];
            index = num;
        }
        else if (v[num] == max)
            {
            index = std::min (num, index);
        }
        
    }
    std::cout << index << "\n";
}

// soluzione con hash map per memorizzare le occorrenze
int main() 
{
    unordered_map<int, int> dataset;
    int count;
    cin >> count;
    for(int x=0; x < count; x++) {
        int value;
        cin >> value;
        dataset[value] += 1;
    }
    
    int occurs = 0;
    int key = 100001;
    for (auto it : dataset) {
        if (it.second > occurs) {
            occurs = it.second;
            key = it.first;
        } else if(it.second == occurs && it.first < key) {
            key = it.first;
        }
    }
    
    cout << key;
}
