#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b) {
  if (a == 0 || b == 0)
    return 0;
  int sh = 0, sw = 0, ans = 0;

  if (a > b) {
    while (a > 1) {
      a -= 2;
      b -= 1;
      sh++;
    }
  } else {
    while (b > 1) {
      b -= 2;
      a -= 1;
      sw++;
    }
  }

  return max(sh, sw);
}
int main() {
  int tc;
  cin >> tc;

  while (tc--) {
    int a, b;
    cin >> a >> b;

    int ans = solve(a, b);

    cout << ans << endl;
  }
  return 0;
}
