#include <stdio.h>

int main(){
  float nota1, nota2, nota3, media;

  nota1 = 10.0;
  nota2 = 5.3;
  nota3 = 8.9;
  media = (nota1 + nota2 + nota3)/3;

  printf("a media é: %.2f\n", media);

  if(media >=7.0){
    printf("Aprovado!\n");
  }
  else if(media >=4.0){
    printf("Recuperação!\n");
  }
  else {
  printf("Reprovado!\n");
}

  return 0;


}