#include <stdio.h>
int main(){
int nilai;
printf("masukkan nilai 0-100:");
scanf("%d", &nilai);
int angka = nilai / 10;

switch (angka) {
  case 10:
  case 9:
  printf("grade : A\n");
  break;
  case 8:
  printf("grade :B\n");
  break;
  case 7:
  printf("grade : C\n");
  break;
  case 6:
  printf("grade : D\n");
  break;
  default:
  printf("grade : E\n");
}
}
