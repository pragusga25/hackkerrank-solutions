#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int first;
  long second;
  char third;
  float fourth;
  double fifth;

  scanf("%d %ld %c %f %lf", &first, &second, &third, &fourth, &fifth);
  printf("%d \n%ld \n%c \n%f \n%lf", first, second, third, fourth, fifth);

  return 0;
}
