// Rozk³ad na czynniki pierwsze
// Data   : 21.03.2008
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

program prg;

var p,i,g : longword;

begin
  readln(p);
  g := round(sqrt(p));
  for i := 2 to g do
  begin
    while p mod i = 0 do
    begin
      write(i,' ');
      p := p div i;
    end;
    if p = 1 then break;
  end;
  if p > 1 then write(p);
  writeln; 
end. 



// Rozk³ad na czynniki pierwsze
// Data   : 21.03.2008
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------


