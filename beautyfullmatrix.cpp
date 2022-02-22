#include <iostream>
using namespace std;

int main() {
  cout << "enter arrays!\n";
  int arr[5][5];
  for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  cout<< "printing array \n";
   for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}
