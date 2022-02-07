#include <stdio.h>
#include <stdbool.h>

int main ()
{
  bool isFound;
  int index, value;
  int vector[10] = {1, 7, 13, 19, 25, 31, 37, 43, 49, 55};
  
  printf("Insira um valor:");
  scanf("%d", &value);
  
  for(int i = 0; i < 10; i++){
      if(vector[i] == value){
        isFound = true;
        index = i;
        break;
      } else {
        isFound = false;
      }
  }
  
  if(isFound){
    printf("A posição de %d no vetor é %d.", value, ++index);
  } else {
    printf("ERRO -1: NOT FOUND!!!");
  }

  return 0;
}
