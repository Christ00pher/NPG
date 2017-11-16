// System Fibonacciego
// Data:   22.04.2008
// (C)2012 mgr Jerzy Wa³aszek
//---------------------------

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string c;
  unsigned long long w,f,f1,f2;
  int i,n;

  cin >> c;
  n  = c.length() - 1;
  w  = 0;
  f1 = f2 = 1;
  for(i = n; i >= 0; i--)
  {
    if(i >= n - 1) f = 1;
    else
    {
      f  = f1 + f2;
      f1 = f2;
      f2 = f;
    }
    if(c[i] == '1') w += f;
  }
  cout << w << endl;
  return 0;
} 