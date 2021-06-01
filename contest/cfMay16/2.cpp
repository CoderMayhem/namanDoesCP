/*To solve the problem, it is enough to consider several cases:

1. if the array is already sorted, the answer is 0;
2. if a[1]=1 (or a[n]=n), then you can sort the array in one operation by selecting the subarray [1,n−1] (or [2,n]);
3. if a[1]=n and a[n]=1, you can perform the sequence of operations [1,n−1], [2,n] and [1,n−1] and sort the array on each of them (you can't do it faster since you can't move both n to position n and 1 to position 1 in only 2 operations);
otherwise, the array can be sorted in 2 operations.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (int &x : a) scanf("%d", &x);
    int ans = 2;
    if (is_sorted(a.begin(), a.end()))
      ans = 0;
    else if (a[0] == 1 || a[n - 1] == n)
      ans = 1;
    else if (a[0] == n && a[n - 1] == 1)
      ans = 3;
    printf("%d\n", ans);
  }
}