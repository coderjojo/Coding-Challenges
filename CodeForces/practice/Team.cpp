#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;

  cin >> tc;
  int a, b, c, ans = 0;
  for (int i = 0; i < tc; i++) {
    cin >> a >> b >> c;

    if ((a && b) || (a && c) || (b && c))
      ans++;
  }

  cout << ans << endl;
  return 0;
}
