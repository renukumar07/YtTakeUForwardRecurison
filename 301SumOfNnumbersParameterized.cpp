#include <iostream>
using namespace std;

void sumFunction(int i, int sum) {
  if (i < 1) {
    cout << "sum = " << sum << endl;
    return;
  }
  sumFunction(i - 1, sum + i);
}
int main() {
  int n;
  cin >> n;
  sumFunction(n, 0);
}