#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;

  cin >> n;

  while (n--) {

    string s;

    cin >> s;

    if (s.length() <= 10)
      cout << s;

    else

      cout << s.front() << s.length() - 2 << s.back();

    cout << endl;
  }

  return 0;
}
