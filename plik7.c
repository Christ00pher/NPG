	// Ca³kowity pierwiastek
// Data:   10.05.2008
// (C)2012 mgr Jerzy Wa³aszek
//---------------------------
//additional comment

#include <iostream>

using namespace std;

int main()
{
  double x;
  unsigned int i,a,r1,r2;

  cin >> x;
  a = 0; r1 = 1; r2 = 2;
  for(i = 0; a <= x; i++)
  {
    a += r1; r1 += r2;
  }
  i--;
  cout << i << endl
       << i * i << endl
       << endl;
  return 0;
}

	// Ca³kowity pierwiastek
// Data:   10.05.2008
// (C)2012 mgr Jerzy Wa³aszek
//---
