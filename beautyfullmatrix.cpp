#include <iostream>
using namespace std;

int main()
{
  // cout << "enter arrays!\n";
  int arr[5][5];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  cout << "printing array \n";
  // Finding 1 in the array
  int row, col;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (arr[i][j] == 1)
      {
        row = i - 2;
        col = j - 2;
      }

      // printf("%d ", arr[i][j]);
    }
    // printf("\n");
  }
  if (row < 0)
  {
    row = row * (-1);
  }
  if (col < 0)
  {
    col = col * (-1);
  }
  printf("%d", row + col);
}
