#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char placa[9];
    int tipo;
    char dia[15];

    scanf("%s", placa);
    getchar();

    fgets(dia, sizeof(dia), stdin);
    dia[strcspn(dia, "\n")] = '\0';

    if (isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && strncmp(placa + 3, "-", 1) == 0 && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])) {
        tipo = 1;
    } else if (isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])) {
        tipo = 2;
    } else {
        tipo = 3;
    }

    if (tipo == 3) {
        if (strcmp(dia, "SEGUNDA-FEIRA") != 0 && strcmp(dia, "TERCA-FEIRA") != 0 && strcmp(dia, "QUARTA-FEIRA") != 0 && strcmp(dia, "QUINTA-FEIRA") != 0 && strcmp(dia, "SEXTA-FEIRA") != 0 && strcmp(dia, "SABADO") != 0 && strcmp(dia, "DOMINGO") != 0) {
            printf("Placa invalida\n");
            printf("Dia da semana invalido\n");
            return 0;
        } else if (strcmp(dia, "SEGUNDA-FEIRA") == 0 || strcmp(dia, "TERCA-FEIRA") == 0 || strcmp(dia, "QUARTA-FEIRA") == 0 || strcmp(dia, "QUINTA-FEIRA") == 0 || strcmp(dia, "SEXTA-FEIRA") == 0 || strcmp(dia, "SABADO") == 0 || strcmp(dia, "DOMINGO") == 0) {
            printf("Placa invalida\n");
            return 0;
        }
    } else if (tipo != 3 && (strcmp(dia, "SEGUNDA-FEIRA") != 0 && strcmp(dia, "TERCA-FEIRA") != 0 && strcmp(dia, "QUARTA-FEIRA") != 0 && strcmp(dia, "QUINTA-FEIRA") != 0 && strcmp(dia, "SEXTA-FEIRA") != 0 && strcmp(dia, "SABADO") != 0 && strcmp(dia, "DOMINGO") != 0)) {
        printf("Dia da semana invalido\n");
        return 0;
    }

    if (tipo == 1)  {
        if (strcmp(dia, "SEGUNDA-FEIRA") == 0) {
            if (placa[7] == '0' || placa[7] == '1') {
                printf("%s nao pode circular segunda-feira\n", placa);
                return 0;
            } else {
                printf("%s pode circular segunda-feira\n", placa);
                return 0;
            }
        }
    

    if (strcmp(dia, "TERCA-FEIRA") == 0) {
        if (placa[7] == '2' || placa[7] == '3') {
            printf("%s nao pode circular terca-feira\n", placa);
            return 0;
        } else {
            printf("%s pode circular terca-feira\n", placa);
            return 0;
        }
    }

    if (strcmp(dia, "QUARTA-FEIRA") == 0) {
        if (placa[7] == '4' || placa[7] == '5') {
            printf("%s nao pode circular quarta-feira\n", placa);
            return 0;
        } else {
            printf("%s pode circular quarta-feira\n", placa);
            return 0;
        }
    }

    if (strcmp(dia, "QUINTA-FEIRA") == 0) {
        if (placa[7] == '6' || placa[7] == '7') {
            printf("%s nao pode circular quinta-feira\n", placa);
            return 0;
        } else {
            printf("%s pode circular quinta-feira\n", placa);
            return 0;
        }
    }

    if (strcmp(dia, "SEXTA-FEIRA") == 0) {
        if (placa[7] == '8' || placa[7] == '9') {
            printf("%s nao pode circular sexta-feira\n", placa);
            return 0;
        } else {
            printf("%s pode circular sexta-feira\n", placa);
            return 0;
        }
    }

    if (strcmp(dia, "SABADO") == 0 || strcmp(dia, "DOMINGO") == 0) {
        printf("Nao ha proibicao no fim de semana\n");
        return 0;
    }
}

    if (tipo == 2) {
        if (strcmp(dia, "SEGUNDA-FEIRA") == 0) {
            if (placa[6] == '0' || placa[6] == '1') {
                printf("%s nao pode circular segunda-feira\n", placa);
                return 0;
            } else {
                printf("%s pode circular segunda-feira\n", placa);
                return 0;
            }
        }   if (strcmp(dia, "TERCA-FEIRA") == 0) {
            if (placa[6] == '2' || placa[6] == '3') {
                printf("%s nao pode circular terca-feira\n", placa);
                return 0;
            } else {
                printf("%s pode circular terca-feira\n", placa);
                return 0;
            }
        }   if (strcmp(dia, "QUARTA-FEIRA") == 0) {
            if (placa[6] == '4' || placa[6] == '5') {
                printf("%s nao pode circular quarta-feira\n", placa);
                return 0;
            } else {
                printf("%s pode circular quarta-feira\n", placa);
                return 0;
            }
        }   if (strcmp(dia, "QUINTA-FEIRA") == 0) {
            if (placa[6] == '6' || placa[6] == '7') {
                printf("%s nao pode circular quinta-feira\n", placa);
                return 0;
            } else {
                printf("%s pode circular quinta-feira\n", placa);
                return 0;
            }
        }   if (strcmp(dia, "SEXTA-FEIRA") == 0) {
            if (placa[6] == '8' || placa[6] == '9') {
                printf("%s nao pode circular sexta-feira\n", placa);
                return 0;
            } else {
                printf("%s pode circular sexta-feira\n", placa);
                return 0;
            }
        }   if (strcmp(dia, "SABADO") == 0 || strcmp(dia, "DOMINGO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
            return 0;
        }
    }

    return 0;
}
