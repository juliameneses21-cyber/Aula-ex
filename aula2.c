#include <stdio.h>
#include <stdbool.h>

int main() {
  int ano_nascimento, ano_atual, idade;
  ano_atual = 2026;
  printf("Digite seu ano de nascimento: ");
  scanf("%d", &ano_nascimento);

  idade = ano_atual - ano_nascimento;
  printf("Sua idade é: %d\n", idade);

  bool atingiu_16, atingiu_18, atingiu_21;
  atingiu_16 = idade >= 16;
  atingiu_18 = idade >= 18;
  atingiu_21 = idade >= 21;

  printf("O QUE VOCE PODE FAZER:\n");

  if(idade<16){
    printf("Você depende dos responsáveis legais, mas pode trabalhar como jovem aprendiz a partir dos 14 anos.\n");
  }
  else if(idade>=16 && idade<18){
    printf("Você já pode votar opcionalmente, trabalhar com carteira assinada e casar com autorização dos pais.\n");
  }
  else if(idade>=18 && idade<21){
    printf("Você atingiu a maioridade plena, podendo tirar CNH, consumir álcool e assinar contratos livremente.\n");
  }
  else{
    printf("Você já pode dirigir veículos pesados, atuar como juiz de paz e candidatar-se a prefeito ou deputado.\n");
  }


  return 0;
}