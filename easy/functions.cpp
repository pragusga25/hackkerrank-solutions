#include <iostream>

using namespace std;

int max_of_four(int a, int b, int c, int d) {
  int arr[4] = {a, b, c, d};
  int largest = -9999;

  for(int i = 0; i < 4; i++){
    if(arr[i] > largest){
      largest = arr[i];
    }
  }

  return largest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
