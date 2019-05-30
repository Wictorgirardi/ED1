#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {

  char str1[100];
  char str2[100];

  scanf("%s", str1);
  scanf("%s", str2);

  for (int i = 0; i < 100; i++) {
    if(str1[i]>str2[i]){
    printf("1\n");
    break;
  }
    else if(str1[i]<str2[i]){
    printf("-1\n");
    break;
  }}
  return 0;
}
