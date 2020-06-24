#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;

  cin >> n >> k;

  int arr[51];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int ans = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] && arr[k - 1] <= arr[i])
      ans++;
  }

  cout << ans << endl;

  return 0;
}
