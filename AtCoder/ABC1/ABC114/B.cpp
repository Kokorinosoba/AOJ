#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int ans = 1000;
  for (int i = 0; i < s.size() - 2; i++) {
    int n = stoi(s.substr(i, 3));
    ans = min(ans, abs(753 - n));
  }
  cout << ans << endl;
}
