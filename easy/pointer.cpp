#include <iostream>

using namespace std;

void update(int *a, int *b){
  *a = (*a) + (*b);
  *b = (*a) - 2*(*b);

  if((*b) < 0) *b = (*b) * (-1);
}

int main(int argc, char const *argv[]){
  int a, b;
  int *pa = &a, *pb = &b;
  
  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}
