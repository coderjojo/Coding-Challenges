#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;

  cin >> tc;

  while (tc--) {
    int a, b;

    cin >> a >> b;

    int value = max(2 * min(a, b), max(a, b));
    cout << value * value << endl;
  }

  return 0;
}
