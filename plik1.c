// Sito Atkina-Bernsteina
// Data   : 21.03.2008
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------
//additional comment

program prg;

type
  Tbarray = array of boolean;

var n,g,x,y,xx,yy,z,i : longword;
    S : Tbarray;

begin
  readln(n);
  setlength(S,n+1);
  for i := 5 to n do S[i] := false;
  g := round(sqrt(n));
  for x := 1 to g do
  begin
    xx := x * x;
    for y := 1 to g do
    begin
      yy := y * y;
      z := (xx shl 2) + yy;
      if (z <= n) and ((z mod 12 = 1) or (z mod 12 = 5)) then S[z] := not S[z];
      dec(z,xx);
      if (z <= n) and (z mod 12 = 7) then S[z] := not S[z];
      if (x > y) then
      begin
        dec(z,yy shl 1);
        if (z <= n) and (z mod 12 = 11) then S[z] := not S[z];
      end; 
    end;
  end;
  for i := 5 to g do
    if S[i] then
    begin
      xx := i * i;
      z := xx;
      while z <= n do
      begin
        S[z] := false;
        inc(z,xx);
      end;
    end;
  write(2,' ',3,' ');
  for i := 5 to n do
    if S[i] then write(i,' ');
  writeln;
end. 
