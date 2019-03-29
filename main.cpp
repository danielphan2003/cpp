#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

void runSieve(int upperBound) {
  int upperBoundSquareRoot = (int)sqrt((double)upperBound);
  bool *isComposite = new bool[upperBound + 1];
  memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
  for (int m = 2; m <= upperBoundSquareRoot; m++) {
    if (!isComposite[m]) {
      cout << m << " ";
      for (int k = m * m; k <= upperBound; k += m)
        isComposite[k] = true;
    }
  }
  for (int m = upperBoundSquareRoot; m <= upperBound; m++)
    if (!isComposite[m])
      cout << m << " ";
  delete [] isComposite;
}

int main() {
  cout << "Primes under 100: ";
  runSieve(10000000000000l);
  cout << "\n";
}