#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Inicie o código criando as váriaveis que guardarão os valores 
double vf, am, tax, temp;
int i;


int main(){
//  Crie o espaço para inserir o valor de cada variáriavel 
scanf("%lf", &temp);
scanf("%lf", &am);
scanf("%lf", &tax);
// Crie um espaço que consiga repetir os mêses e gerar prints diferentes para cada Mês
for(i = 1; i <= temp; i++){

vf = am * (1 + tax) * (((pow(1 + tax, i)) - 1) / tax);

printf("Montante ao fim do mes %d: R$ %.2lf\n", i, vf);
}
}
