#include <iostream>
using namespace std;
bool palindrome(string &str, int i, int len) {
  if (i >= len / 2) {
    return true;
  }
  if (str[i] != str[len - i - 1]) {
    return false;
  }
  return palindrome(str, i + 1, len);
}
int main() {
  string str = "malayalamq";
  int len = strlen(str.c_str());
  cout << palindrome(str, 0, len) << endl;
  // cout << strlen(str.c_str()) << endl;
}