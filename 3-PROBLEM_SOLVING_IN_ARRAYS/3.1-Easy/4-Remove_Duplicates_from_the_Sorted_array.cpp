#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
  // Input array
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("o.txt", "w", stdout);
#endif
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // Create a map to store the frequency of each element
  std::unordered_map<int, int> freq;
  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }

  // Sort the array in descending order based on frequency
  std::sort(arr, arr + n, [&](int a, int b) {
    // If the frequency of a is greater than b, a should come before b
    if (freq[a] > freq[b]) return true;
    // If the frequency of a is equal to the frequency of b, compare the values of a and b
    if (freq[a] == freq[b]) return a > b;
    // Otherwise, b should come before a
    return false;
  });

  // Print the sorted array
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
