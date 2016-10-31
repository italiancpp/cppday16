#include <array>
#include <iterator>
#include <iostream>
#include <algorithm>
using namespace std;

/*  Una soluzione consiste nel "contare" se la prima squadra ha vinto almeno 3 set.
    Con inner_product (leggi anche map_reduce o zip_with) possiamo "contare" quante volte la prima
    ha totalizzato più punti della seconda:
    
    a1 a2 a3 a4 a5
    b1 b2 b3 b4 b5
    
    (a1 > b1) + (a2 > b2) + (a3 > b3) + (a4 > b4) + (a5 > b5)
*/

int main() 
{
    array<int, 5> a, b;
    copy_n(istream_iterator<int>(cin), 5, begin(a));
    copy_n(istream_iterator<int>(cin), 5, begin(b));
    if (inner_product(begin(a), end(a), begin(b), 0, plus<int>(), greater<int>()) >= 3)
        cout << "Locali";
    else cout << "Ospiti";
}

// senza leggere il secondo array
int main() 
{
    array<int, 5> a;
    copy_n(istream_iterator<int>(cin), 5, begin(a));
    if (inner_product(begin(a), end(a), istream_iterator<int>(cin), 0, plus<int>(), greater<int>()) >= 3)
        cout << "Locali";
    else cout << "Ospiti";
}
