#include<stdio.h>
#include<stdlib.h>


int main() {

 int idade , peso , altura;

float imc;

 // Entrada de Dados.
  printf("Digite seu peso!\n");
  printf("Digite sua altura!\n");
  scanf("%d",&peso);
  scanf("%f",&altura);

  //Processamento

  imc = peso/(altura*altura);
  scanf("Seu IMC é de : %d",imc);

  // Saída de Dados

  if (imc<16)
  {
    printf("Voce esta com magreza grave por favor procure um nutricionista!",imc);
  }
  else if ((imc >= 16) && (imc <= 17) ){
     printf(" Voce esta com magreza moderada tome cuidado",imc);
  }
  else if ((imc >= 17) && (imc <= 18.5)) {
    printf(" Voce este com magreza leve",imc);
  }
  else if ((imc >= 18.5) && (imc <= 25)){
    printf("Parabens voce esta saudavel!",imc);
  }
  else if ((imc >= 25) && (imc <= 30) ){
  printf("Voce esta com sobrepeso voce pode morrer tome cuidado!",imc);  
  }
  else if((imc >= 30)&& (imc <= 35)){
    printf("Voce esta com obesidade grau I",imc);
  }

  else if((imc >= 35) && (imc <= 40)){
    printf("Voce esta com obesidade grau II",imc);
  }

  else if ((imc >= 40)){
    printf("Voce esta com Obesidade Morbida animal",imc);
  }
  
  system("pause");
  return 0;
}
