#include <array>
#include <iostream>
#include <algorithm>
using namespace std;

/*  Sappiamo che gli elementi dell'array sono compresi tra 0 e 10^5 (inclusi), quindi possiamo
    riempire un istogramma con le frequenze dei singoli elementi.
    Successivamente basterà calcolare l'elemento più grande, che grazie a max_element sarà garantito anche essere
    il primo trovato.
    Visto che gli elementi sono "ordinati" naturalmente dagli indici dell'array, il primo massimo sarà quello numericamente
    più piccolo.
    
    Variante: trovare l'elemento più frequente, numericamente più grande.
    Soluzione: scansione al contrario.
    
    Compromesso: occupiamo 400 KB sullo stack.
    Variazioni: possiamo usare degli short per risparmiare 2 B ad elemento. Possiamo usare un vector per allocare sull'heap.
*/

int main() 
{
   int elem; cin >> elem;
   array<int, 100000+1> histogram{}; // we know i is within [0, 10^5]
   while (cin >> elem)
      histogram[elem]++;
   auto maxElem = std::max_element(begin(histogram), end(histogram));
   cout << std::distance(begin(histogram), maxElem);
}
