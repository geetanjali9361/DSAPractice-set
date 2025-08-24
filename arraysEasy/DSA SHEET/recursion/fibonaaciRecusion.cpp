#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int fib(int n)
  {
    return func(0, 1, 1,n);
  }
private:
  int func(int a, int b, int i, int n)
  {
    if (i == n) return b;
    int c;
    c = a + b;
    a = b;
    b = c;
    return func(a, b, i + 1, n);
  }
};

int main()
{
  int n;
  cin >> n;
  Solution sol;
  cout << "nth fib is: " << sol.fib(n);
  return 0;
}