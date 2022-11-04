#include <stdio.h>
#include <unistd.h>
int matrix_loopin = 6;
int main()
{
  //versão para rodar no windows 
  system("arts_prompt.bat");
  while(matrix_loopin < 10){
  system("poin.bat");
  char strings_for_windows[100];
  fgets(strings_for_windows, 100,stdin);
  system(strings_for_windows);
  }
}