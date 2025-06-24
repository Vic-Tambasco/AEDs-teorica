/*#include <stdio.h>

exercício 4
struct veiculo{
    char proprietario[30];
    int combustivel; // 0 = alcool, 1 = gasolina, 2 = flex
    char modelo[20];
    char cor[20];
    struct{
        int dia, mes, ano;
    } data;
    char placa[7];
}tabela[100];

    
int main(){

int n;//numero de veiculos
printf("quantos veiculos voce deseja fazer a listagem?\n");
scanf("%d", &n);

for(int i=0; i<n; i++){
    printf("\nveiculo %d:\n", i+1);

    printf("qual o nome do proprietario?\n");
    scanf(" %29[^\n]", tabela[i].proprietario);

    printf("qual tipo de combustivel é usado?(0-alcool, 1-gasolina, 2-flex)\n");
    scanf("%d", &tabela[i].combustivel);

    printf("qual é o modelo do veiculo?\n");
    scanf(" %19[^\n]", tabela[i].modelo);

    printf("qual a cor do veiculo?\n");
    scanf(" %19[^\n]", tabela[i].cor);

    printf("qual a data?(dia, mes, ano)\n");
    scanf("%d %d %d", &tabela[i].data.dia, &tabela[i].data.mes, &tabela[i].data.ano);
   

    printf("qual a placa do veiculo?\n");
    scanf("%6s", tabela[i].placa);
}
printf("\nlistagem dos veiculos e suas informações\n");
for(int i=0; i<n; i++){
printf("\nveiculo %d\n", i+1);
 printf("nome do proprietario: %s\n ", tabela[i].proprietario);
 printf("tipo de combustivel(0-alcool, 1-gasolina, 2-flex): %d\n", tabela[i].combustivel);
 printf("modelo do veiculo: %s\n", tabela[i].modelo);
 printf("cor do veiculo: %s\n", tabela[i].cor);
 printf("data: %d %d %d\n", tabela[i].data.dia, tabela[i].data.mes, tabela[i].data.ano);
 printf("placa do veiculo: %s\n", tabela[i].placa); 
}

exercicio 5(continuação do codigo do exercício 4)
int i;
for(int i=0; i<n; i++){
 if(tabela[i].cor[0] == 'b' &&
           tabela[i].cor[1] == 'r' &&
           tabela[i].cor[2] == 'a' &&
           tabela[i].cor[3] == 'n' &&
           tabela[i].cor[4] == 'c' &&
           tabela[i].cor[5] == 'o' &&
           tabela[i].cor[6] == '\0') {
            printf("- %s\n", tabela[i].placa);
}
}
    return 0;
}*/
//_____________________________________________________________________________________________

/*exercício 6
#include <stdio.h>

void mesExtenso(int dia, int mes, int ano) {  // Corrigida a ordem dos parâmetros
    printf("Data: %d de ", dia);  // Imprime o dia uma vez só
    
    switch (mes) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("março");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
        default:
            printf("mês inválido");
    }
    
    printf(" de %d\n", ano);  // Imprime o ano no final
return mes
}

int main() {
    int dia, mes, ano;
    printf("Escreva uma data (dia mes ano):\n");
    scanf("%d %d %d", &dia, &mes, &ano);  // Removido o \n desnecessário
    
    mesExtenso(dia, mes, ano);  // Passando os 3 parâmetros na ordem correta
    
    return 0;
}
*/
/*
#include <stdio.h>
//exercício 7
void tudoSegundos(float horas, float minutos, float segundos){
float soma;
horas = horas*3600;
minutos = minutos*60;
soma += horas + minutos + segundos;
printf("o valor digitado em segundo é: %.2f segundos", soma);


}
int main(){
float horas, minutos, segundos;

printf("escreva horas minutos e segundos para saber o valor de todos em segundos:\n");
scanf("%f %f %f", &horas, &minutos, &segundos);

tudoSegundos(horas, minutos, segundos);

return 0;
}
*/
/*
#include <stdio.h>
//exercicio 9
void maiorNumero(int num1, int num2, int num3){
int vNum[3] = {num1, num2, num3};
int maior =-5000;
for(int i=0; i<4; i++){
    if(maior < vNum[i]){
        maior = vNum[i];
    }
}
printf("O maior numero dos tres recebidos é: %d", maior);
}
int main(){
int num1, num2, num3;
printf("escreva tres numeros : ");
scanf("%d %d %d", &num1, &num2, &num3);

maiorNumero(num1, num2, num3);

return 0;
}
*/
/*
exercício 10
#include <stdio.h>
void somaV(int N,int V[]){
    int soma;
    for(int i=0; i< N; i++){
        soma += V[i];
    }
}
int main(){
    int resultado, N, i;
    
    printf("defina do tamanho do vetor que sera criando ");
    scanf("%d", &N);

    int V[N];
    printf("defina os valores dentro do vetor: ");
    for(i=0; i < N; i++){
        printf("valor %d: ", i+1);
        scanf("%d", &V[i]);
    }
    
    
    resultado = somaV(N, V);
    printf("a soma de todos os elementos do vetor é: %d", resultado);
    return 0;
}*/

#include <stdio.h>
int tam;
struct agenda{
    char nome[30];
    struct{
        int dia;
        int mes;
        int ano;
    }data;
}coisas[100];

int main(){
    int nDados;
    const int tam = 100;
    FILE *arq;
    arq = fopen("C:\Users\ Asus\ OneDrive\ Trabalhos do Bressan\bressan \ lista AEDs teorica\ src\ dados.txt", "w");
    if (arq == NULL){
        printf("seu arquivo não pode ser encontrado");
        return 1;
    }
    printf("defina a quantidade de dados que voce quer salvar: ");
    scanf("%d", &nDados);
   
    for(int i = 0; i<nDados; i++){
        printf("digite o nome: ");
        scanf(" %29[^\n]", coisas[i].nome);
        printf("digite o dia, mes e ano: ");
        scanf("%d %d %d", &coisas[i].data.dia, &coisas[i].data.mes, &coisas[i].data.ano);
        fprintf(arq, "nome: %s\n ",coisas[i].nome);
        fprintf(arq, "Data: %02d/%02d/%04d\n\n",  // Formato dd/mm/aaaa
                coisas[i].data.dia, coisas[i].data.mes, coisas[i].data.ano);
    }
    fclose(arq);
    return 0;
}