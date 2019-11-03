#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>


void Entrada(float *n1, float *pB);
void Menu();
float Adicao(float n, float m);
float Subtracao(float n , float m);
float Multiplicacao(float n, float m);
float Divisao(float n, float m);
float RaizQ(float x);
void Par_Impar(float x, float y);
float Maior(float *n1, float *n2);
float Menor(float *n1, float *n2);
float Media(float *n1, float *n2);
void ExibirEntreValores(float *n1, float *n2);

int main (){
    int opcao = 0;

    float resultado, a, b;

    while (opcao != 20){
        Menu();
        scanf("%d", &opcao);

        if(opcao != 20){
            Entrada(&a, &b);
        }

        switch(opcao){
            case 1:
            resultado = Adicao(a, b);
            printf("\n\tA + B = %.2f",  resultado);
            getch();
            break;

            case 2:
            resultado = Subtracao(a, b);
            printf("\n\tA - B = %.2f",  resultado);
            getch();
            break;

            case 3:
            printf("\n\tA * B = %.2f",  Multiplicacao(a, b));
            getch();
            break;

            case 4:
            printf("\n\tA / B = %.2f",  Divisao(a, b));
            getch();
            break;

             case 5:
            printf("\n\tRaiz de A: %.2f",  RaizQ(a));
            printf("\n\tRaiz de B: %.2f",  RaizQ(b));
            getch();
            break;

            case 6:
            Par_Impar(a, b);
            getch();
            break;

            case 7:
            resultado = Maior(&a, &b);
            printf("\n\tMaior valor = %.2f", resultado);
            getch();
            break;

            case 8:
            resultado = Menor(&a, &b);
            printf("\n\tMenor valor = %.2f", resultado);
            getch();
            break;

            case 9:
            resultado = Media(&a, &b);
            printf("\n\tMedia entre A e B = %.2f", resultado);
            getch();
            break;

            case 10:
            ExibirEntreValores(&a, &b);
            getch();
            break;

            default:
                printf("\nEsta operação não existe", setlocale(LC_ALL,NULL))
        }
    }
        void Entrada (float *n1, float *n2){
            printf("\n\tDigite o primeiro valor (a): ");
            scanf("%f", n1);
            printf("\n\tDigite o segundo valor (b): ");
            scanf("%f", n2);
        }

        float Adicao(float n, float m){
            return (n + m);
        }

        float Subtracao(float n, float m){
            return (n - m);
        }

        float Multiplicacao(float n, float m){
            return (n * m);
        }
        float Divisao(float n, float m){
            return (n / m);
        }
        float RaizQ(float x){
            return sqrt(x);
        }

        void Par_Impar(float x, float y){
            int iA, iB;
            iA = x;
            iB = y;

            if(iA%2==0){
                printf("\n\tA: Par\n");
            }
            else{
                printf("\n\tA: Impar\n")
            }

            if(iB%2==0){
                 printf("\n\tA: Par\n");
            }
            else{
                 printf("\n\tB: Impar\n")
            }
        }

        float Maior(float *n1, float *n2){
            if(*n1 > *n2){
                return *n1;
            }
            else{
                return *n2;
            }
        }

        float Menor(float *n1, float *n2){
            if(*n1 < *n2){
                return *n1;
            }
            else{
                return *n2;
            }
        }

        float Media(float *n1, float *n2, float r){
             return r = (*n1 + float *n2) / 2.0;
         }

        void ExibirEntreValores(float *n1, float *n2){
            int i, menor, maior;
            float resto;

            menor = Menor(n1, n2);
            maior = Maior(n1, n2);
            resto = Menor(n1, n2) - menor;

            printf("\n\tExibir os valores entre A e B: ");
            
            for (i = menor + 1; i <= maior - 1; i++)
            {
                printf("\n\t%.2f", i + resto);
            }
            
        }

        void Menu(){
            system("cls");
            printf(" --------------------------------------- \n");
            printf("\n\t1 - Adição", setlocale(LC_ALL,NULL));
            printf("\n\t2 - Subtração", setlocale(LC_ALL,NULL));
            printf("\n\t3 - Multiplição", setlocale(LC_ALL,NULL));
            printf("\n\t4 - Divisão", setlocale(LC_ALL,NULL));
            printf("\n\t5 - Raiz Quadrada");
            printf("\n\t6 - Par ou Ímpar", setlocale(LC_ALL,NULL));
            printf("\n\t7 - Maior valor");
            printf("\n\t8 - Menor valor");
            printf("\n\t9 - Mádia", setlocale(LC_ALL,NULL));
            printf("\n\t10 - Exibir valores");
            printf("\n\t20 - Sair");
            printf("\n --------------------------------------- \n");

            printf("\n\n\tEscolha uma opção: ", setlocale(LC_ALL,NULL));
        }

}