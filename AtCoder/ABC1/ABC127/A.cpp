#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  cout << (a > 12 ? b : (a > 5 ? b / 2 : 0)) << endl;
}
