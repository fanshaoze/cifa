program a;  {commends}
    var m, n: integer;
    procedure gcd(m, n): integer;  
        begin
            if n > m then return(gcd(n, m))
                else if n = 0 then return(m)
                    else return(gcd(n, rem(m, n)));
        end;
    begin
        read(m, n);
        gcd(m, n);
    end

program you(input, output);
var a, b, c, i: integer;
var d : string;
begin
    readln(a, b);
    c:=a**b;
    inc(c);
    write(a:5.88, b:5 .. 6, c:5);
    write(d:'23adf');
    writeln();
    for i:=1 to 100 do
        writeln(i);
    readln;
end.