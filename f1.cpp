// Wyszukiwanie wzorca algorytmem BM
// Data:  6.06.2008
// (C)2012 mgr Jerzy Wałaszek
//----------------------------------

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

const int N  = 80;  // długość łańcucha s
const int M  =  5;  // długość wzorca p
const int zp = 65;  // kod pierwszego znaku alfabetu
const int zk = 66;  // kod ostatniego znaku alfabetu

int main()
{
  string s,p;
  int Last[zk - zp + 1],i,j,pp;

  srand((unsigned)time(NULL));

  // generujemy łańcuch s

  s = "";
  for(i = 0; i < N; i++) s += zp + rand() % (zk - zp + 1);

  // generujemy wzorzec

  p = "";
  for(i = 0; i < M; i++) p += zp + rand() % (zk - zp + 1);

  // wypisujemy wzorzec

  cout << p << endl;

  // wypisujemy łańcuch

  cout << s;

  // dla wzorca obliczamy tablicę Last[]

  for(i = 0; i <= zk - zp; i++) Last[i] = -1;
  for(i = 0; i < M; i++) Last[p[i] - zp] = i;

  // szukamy pozycji wzorca w łańcuchu

  pp = i = 0;
  while(i <= N - M)
  {
    j = M - 1;
    while((j > -1) && (p[j] == s[i + j])) j--;
    if(j == -1)
    {
      while(pp < i)
      {
        cout << " "; pp++;
      }
      cout << "^"; pp++;
      i++;
    }
    else i += max(1,j - Last[s[i + j] - zp]);
  }
  cout << endl << endl;
  return 0;
} 
