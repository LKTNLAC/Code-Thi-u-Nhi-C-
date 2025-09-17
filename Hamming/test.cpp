const fi='test.inp';
fo='test.out';
ti=1000000000;
var f,ff:text;
m,n,i,d,j,k,max3:longint;
a:array[1..100000] of longint;
b:array[1..10000] of int64;
m2:array[0..30] of int64;
m3:array[0..19] of int64;
m5:array[0..13] of int64;
{=====================================}
procedure QS(L,R:longint);
var i,j,g,tg:longint;
begin
i:=L;
j:=R;
g:=b[(i+j) div 2];
while i<=j do
begin
while b[i]<g do
inc(i);
while b[j]>g do
dec(j);
if i<=j then
begin
if i<j then
begin
tg:=b[i];
b[i]:=b[j];
b[j]:=tg;
end;
inc(i);
dec(j);
end;
end;
if i<R then QS(i,R);
if j>L then QS(L,j);
end;
{===================================}
begin
m2[0]:=1;
for i:=1 to 30 do
m2[i]:=m2[i-1]*2;
m3[0]:=1;
for i:=1 to 19 do

for i:=1 to 19 do
m3[i]:=m3[i-1]*3;
m5[0]:=1;
for i:=1 to 13 do
m5[i]:=m5[i-1]*5;
d:=0;
for i:=0 to 29 do
begin
m:=ti div m2[i];
max3:=0;
while m3[max3]<=m do
inc(max3);
for j:=0 to max3-1 do
begin
m:=ti div (m2[i]*m3[j]);
k:=0;
while m5[k]<=m do
begin
inc(d);
b[d]:=m2[i]*m3[j]*m5[k];
inc(k);
end;
end;
end;
QS(1,d);
assign(f,fi);
reset(f);
readln(f,n);
assign(ff,fo);
rewrite(ff);
k:=1;
for i:=1 to n do
begin
readln(f,m);
for j:=1 to d do
if b[j]=m then
break;
if b[j]=m then
writeln(ff,j)
else
writeln(ff,-1);
end;
close(f);
close(ff);
end.
