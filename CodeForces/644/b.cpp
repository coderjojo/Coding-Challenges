#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;

  cin >> tc;

  while (tc--) {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
      cin >> v[i];

    int mindiff = INT_MAX;

    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++) {
      mindiff = min(mindiff, v[i] - v[i - 1]);
    }
    cout << mindiff << endl;
  }

  return 0;
}
