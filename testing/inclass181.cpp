/*GCD's with recursion:
for a,b elements of Z, gcd(a,b)= max{d element of Z, sth, d|a # d|b}
in c++: a%d==0
a%b=r
(d|a # d|b) === d|(r)
.... notes


gcd(a,b) = [gcd(b,r)] -> getting smaller
what if b=0? gcd(a,0)=a.

Finally a program:




*/
int gcd(int a,int b)
{
  if (b==0) return a;
  return gcd(b, a%b);
}

/* example traces:
gcd(12,18) = gcd(18,12) = gcd(12,6) = gcd(6,0) = 6