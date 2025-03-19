

#ifndef _OUTROS_H
#define _OUTROS_H

#define MAX_TAM_DESC 500
#define MAX_TAM_LOCAL 100

typedef struct Outros Outros;

Outros *criaOutros(char *descricao, char *local, int nivelDificuldade);
Outros *lerOutros();
int getTempoEstimadoOutros(void *dado);
char getTipoOutros();
void desalocaOutros(void *dado);
void notificaOutros(void *dado);

#endif