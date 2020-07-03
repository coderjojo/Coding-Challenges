#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin >> n;

  int arr[n], arr1[n];

  for (int i = 0; i < n; i++) {
    cin >> arr1[i];

    arr[i] = arr1[i] % 2;
  }

  int falg = 0;

  for (int i = 0; i < n - 2; i++) {
    if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2])
      continue;
    else if (arr[i] != arr[i + 1] && arr[i] == arr[i + 2]) {
      cout << i + 1 + 1;
      break;
    } else if (arr[i] != arr[i + 1] && arr[i + 1] == arr[i + 2]) {
      cout << i + 1;
      break;
    } else {
      cout << i + 2 + 1;
      break;
    }
  }

  return 0;
}
