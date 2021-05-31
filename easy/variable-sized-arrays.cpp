#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int n, q;
  
  scanf("%d %d", &n, &q);

  int arr[n][2];

  for(int i=0; i<n; i++){
    for(int j=0; j<2; j++) scanf("%d", &arr[i][j]);
  }

  return 0;
}
