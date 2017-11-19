// Wyszukiwanie wzorca algorytmem KR
// Data:  4.07.2008
// (C)2012 mgr Jerzy Wałaszek
//-----------------------------

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

const int N  = 80;  // długość łańcucha s
const int M  =  4;  // długość wzorca p
const int zp = 65;  // kod pierwszego znaku alfabetu
const int zk = 67;  // kod ostatniego znaku alfabetu

// Funkcja obliczająca hasz dla łańcucha x
//----------------------------------------
int h(string & x)
{
  int i, hx;

  hx = 0;
  for(i = 0; i < M; i++)
    hx = 3 * hx + (x[i] - 65);
  return hx;
}

int main()
{

  string s,p;
  int pp,i,Hp,Hs;

  srand((unsigned)time(NULL));

  // generujemy łańcuch s

  s = "";
  for(i = 0; i < N; i++)
    s += zp + rand() % (zk - zp + 1);

  // generujemy wzorzec p

  p = "";
  for(i = 0; i < M; i++)
    p += zp + rand() % (zk - zp + 1);

  // wypisujemy wzorzec

  cout << p << endl;

  // wypisujemy łańcuch

  cout << s;
  
  // obliczamy hasz wzorca

  Hp = h(p);

  // obliczamy hasz okna wzorca

  Hs = h(s);

  // szukamy pozycji wzorca w łańcuchu

  pp = i = 0;

  while(true)
  {
    if((Hp == Hs) && (p == s.substr(i,M)))
    {
      while(pp < i)
      {
        cout << " "; pp++;
      }
      cout << "^"; pp++;
    }
    i++;
    if(i == N - M) break;
    Hs = (Hs-(s[i-1]-65)*27)*3+s[i+M-1]-65;
  }
  cout << endl;
  return 0;
} 
