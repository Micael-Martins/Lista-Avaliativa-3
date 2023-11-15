#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Inicie criando uma variavel que seja capaz de ler a entrada dos numeros romanos e transforme em um numero decimal

int roma_deci(char *entrada ){
    int deci = 0;
    int i;

    for (i = 0; i < strlen(entrada); i++) {
        if (entrada[i] == 'M') {
            deci += 1000;
        } else if (entrada[i] == 'D') {
            deci += 500;
        } else if (entrada[i] == 'C') {
            if (entrada[i + 1] == 'M') {
                deci += 900;
                i++;
            } else if (entrada[i + 1] == 'D') {
                deci += 400;
                i++;
            } else {
                deci += 100;
            }
        } else if (entrada[i] == 'L') {
            deci += 50;
        } else if (entrada[i] == 'X') {
            if (entrada[i + 1] == 'C') {
                deci += 90;
                i++;
            } else if (entrada[i + 1] == 'L') {
                deci += 40;
                i++;
            } else {
                deci += 10;
            }
        } else if (entrada[i] == 'V') {
            deci += 5;
        } else if (entrada[i] == 'I') {
            if (entrada[i + 1] == 'X') {
                deci += 9;
                i++;
            } else if (entrada[i + 1] == 'V') {
                deci += 4;
                i++;
            } else {
                deci += 1;
            }
        }
    }

    return deci;
}
// Agora faça a leitura dos numeros binarios
void deci_bin(int deci) {
    int bin[32];
    int i = 0;

    while (deci > 0) {
        bin[i] = deci % 2;
        deci = deci / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}
// Por fim, faça o hexadecimal
void deci_Hexa(int deci) {
    char hexa[32];
    int i = 0;

    while (deci != 0) {
        int temp = 0;
        temp = deci % 16;

        if (temp < 10) {
            hexa[i] = temp + 48;
            i++;
        } else {
            hexa[i] = temp + 55;
            i++;
        }

        deci = deci / 16;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", tolower(hexa[j]));
    }
}

int main() {
    char entrada[13];
    int deci;

    scanf("%s", entrada);

    deci = roma_deci(entrada);

    printf("%s na base 2: ", entrada);
    deci_bin(deci);
    printf("\n");

    printf("%s na base 10: %d\n", entrada, deci);

    printf("%s na base 16: ");
    deci_Hexa(deci);
    printf("\n");

    return 0;
}    
