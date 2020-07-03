// link : https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;

  string s;
  cin >> s;

  std::set<char> st;

  for (auto i : s) {

    st.insert(i);
  }

  cout << ((st.size() % 2) ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;

  return 0;
}
