#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int X;
  cin >> X;

  if (X > 0 && X % 100 == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}