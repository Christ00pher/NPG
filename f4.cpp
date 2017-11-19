// Zliczanie wyrazów w łańcuchu tekstowym
// Data:  5.07.2008
// (C)2012 mgr Jerzy Wałaszek
//-----------------------------

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  int i,ls,n;
  unsigned char c;
  bool t;

  getline(cin,s);
  n = s.length(); t = false; ls = 0;
  for(i = 0; i < n; i++)
  {
    c = s[i];
    if(((c >= '0') && (c <= '9')) || (c == '_') || (c == '-')  ||
       ((c >= 'A') && (c <= 'Z')) ||((c >= 'a') && (c <= 'z')) ||
        (c == 164) || (c == 165)  || (c == 143) || (c == 134)  ||
        (c == 168) || (c == 169)  || (c == 157) || (c == 136)  ||
        (c == 227) || (c == 228)  || (c == 224) || (c == 162)  ||
        (c == 151) || (c == 152)  || (c == 141) || (c == 171)  ||
        (c == 189) || (c == 190))
    {
      if(!t)
      {
        t = true; ls++;
      }
    }
    else t = false;
  }
  cout << ls << endl << endl;
  return 0;
} 
