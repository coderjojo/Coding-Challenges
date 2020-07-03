#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n], cn = 1, val = 0;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];

    if (arr[i - 1] <= arr[i])
      cn++;
    else
      cn = 1;
    val = max(cn, val);
  }

  cout << val << endl;

  return 0;
}
