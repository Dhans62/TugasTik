#include <stdio.h>
int main(){
  float total;
  
  printf ("masukkan total belanjaan: ");
  scanf ("%f", &total);
  
  if
      (total >= 100000){
      printf ("selamat anda mendapatkan hadiah!");
      }
  else if
      (total <= 100000){
      printf ("terimakasih sudah membeli");
      }
  else{
      printf ("tidak valid");
      }
  return 0;
}
