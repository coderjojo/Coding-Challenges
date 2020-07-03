#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;

  cin >> tc;

  while (tc--) {
    int n;

    cin >> n;

    vector<int> v(n);

    int ev = 0, od = 0;

    for (int i = 0; i < n; i++) {
      cin >> v[i];
      if (v[i] % 2)
        od++;
      else
        ev++;
    }
    bool flag = false;

    if (od % 2 == 0 && ev % 2 == 0) {
      cout << "YES" << endl;
      continue;
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < n && !flag; i++) {
      if ((v[i] - v[i - 1]) == 1)
        flag = true;
    }

    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
