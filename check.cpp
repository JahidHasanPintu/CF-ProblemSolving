#include <bits/stdc++.h>
using namespace std;

void descing_quickSort(int arr[], int left, int right) {
  int i = left, j = right;
  int temp;
  int pivot = arr[(left + right) / 2];

  while (i <= j) {
    while (arr[i] > pivot)
      i++;
    while (arr[j] < pivot)
      j--;
    if (i <= j) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }
  };

  if (left < j)
    descing_quickSort(arr, left, j);
  if (i < right)
    descing_quickSort(arr, i, right);
}

int main() {
  int n;
  cin >> n;
int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  descing_quickSort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
