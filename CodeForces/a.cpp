#include <bits/stdc++.h>
using namespace std;

int main() {

  int tc;

  cin >> tc;

  while (tc--) {
    int x, y, n;

    cin >> x >> y >> n;

    cout << (n - ((n - y) % x)) << endl;
  }
}
