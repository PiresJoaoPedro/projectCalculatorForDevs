#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printBinario(int num) {
    int tamanhoInt = sizeof(int) * 8;
    
    for (int i = tamanhoInt - 1; i >= 0; i--) {
        if (num & (1 << i))
            printf("1");
        else
            printf("0");

        if (i % 4 == 0)
            printf(" ");
    }
    printf("\n");
}

int main(void)
{
  char operation;
  float num1,num2,resultado;
  printf("Insira a operação a ser realizada:(+,-,*,/) \n");
  scanf("%c",&operation);
  printf("Insira o primeiro valor a ser computado: \n");
  scanf("%f",&num1);
  printf("Insira o segundo valor a ser computado: \n");
  scanf("%f",&num2);
  
  switch (operation)
  {
  case '+':
      resultado = num1 + num2;
      printf("Resultado: %.2f \n",resultado);
      printf("Resultado em binario: \n");
      printBinario((int)resultado);
      break;
  case '-':
      resultado = num1 - num2;
      printf("Resultado: %.2f \n",resultado);
      printf("Resultado em binario: \n");
      printBinario((int)resultado);    
      break;
  case '*':
      resultado = num1 * num2;
      printf("Resultado: %.2f \n",resultado);
      printf("Resultado em binario: \n");
      printBinario((int)resultado);
      break;
  case '/':
      if (num2 == 0) 
      {
            printf("Divisão por zero, impossível calcular");
      }else 
      {
            resultado = num1 / num2;
            printf("Resultado: %.2f \n",resultado);
            printf("Resultado em binario: \n");
            printBinario((int)resultado); 
      }
      break;    
  default:
      break;
  }
}