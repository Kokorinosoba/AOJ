#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> v(n);
  vector<int> c(n);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> v.at(i);
  }
  for (int i = 0; i < n; i++) {
    cin >> c.at(i);
    ans += max(0, v.at(i) - c.at(i));
  }
  cout << ans << endl;
}
