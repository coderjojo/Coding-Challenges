#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  while (tc--) {
    int n;

    string arr;
    cin >> arr;

    n = arr.length();

    int x = 0, y = 0, ans = 0;
    for (int i = 0; i < n; i++) {
      if (arr[i] == 'x')
        x++;
      if (arr[i] == 'y')
        y++;
    }
    while (x && y) {
      ans++;
      x--;
      y--;
    }

    cout << ans << endl;
  }

  return 0;
}
