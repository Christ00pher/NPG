// Badanie pierwszoœci
// Data   : 3.04.2008
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

#include <iostream>
#include <cmath>

using namespace std;

typedef unsigned long long ulong;

int main()
{
  ulong g,i,p;
  bool t = true;

  cin >> p;
  if(p > 2)
  {
    if(p % 2 == 0) t = false;
    else
    {
      g = (ulong)sqrt(p);
      for(i = 3; i <= g; i += 2)
        if(p % i == 0)
        {
          t = false;
          break;
        }
    }
  }
  cout << (t ? "TAK" : "NIE") << endl;
  return 0;
} 