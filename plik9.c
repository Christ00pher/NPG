// Generacja 64-bitwych liczb pseudolosowych
// Data:   18.04.2008
// (C)2012 mgr Jerzy Wa³aszek
//------------------------------------------

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

typedef unsigned long long ulong;

int main()
{
  ulong X;
  int i;
  
  srand((unsigned)time(NULL));
  
  for(i = 1; i <= 20; i++)
  {
    X = (ulong)rand()|((ulong)rand()<<15)|((ulong)rand()<<30)|((ulong)rand()<<45)|((ulong)rand()<<60);
    cout << setw(20) << X << endl;
  }
  cout << endl;
  return 0;
} 