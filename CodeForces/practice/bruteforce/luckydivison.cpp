#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;
  cin >> a;

  cout << (a % 4 == 0 || a % 7 == 0 || a % 47 == 0 || a % 74 == 0 ||
                   a % 477 == 0
               ? "YES"
               : "NO");

  return 0;
}
