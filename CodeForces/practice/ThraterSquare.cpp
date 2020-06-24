#include <bits/stdc++.h>

using namespace std;

int main() {

  int a, b, c;

  cin >> a >> b >> c;

  cout << 1LL * ((a + c - 1) / c) * ((b + c - 1) / c) << endl;

  return 0;
}
