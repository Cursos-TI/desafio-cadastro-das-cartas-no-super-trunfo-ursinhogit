#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.]
    char estado,código, cidade; 
    int população,PontosTuristicos;
    float área,pib,Cartas,densidadepopulacional,pibpercapito;
     
    // Cadastro  char carta[4],carta[4] estado[80], código [20] ,Cidade[80];
    char carta1[4],carta2[4],estado1[80],estado2[20],código1[20],código2 [20],Cidade1[80],Cidade2[80];
    int população1, população2,Numero1,numero2,PontosTuristicos1,pontosTuristicos2;
    float área1,área2,pib1,pib2;densidadepopulacional,densidadepopulacional2, pibpercapito1,pibpercapito2;
    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("digite a carta1,carta2:\n");
    scanf("%d",&carta1,&carta2);

    printf ("digite o estado1,estado2: \n");
    scanf ("%s",&estado1,&estado2 );

    printf ("digite o código1, código2: \n");
    scanf ("%s", &código1,&código2); 

    printf("digite Cidade1,Cidade2:\n");
    scanf("%s",&Cidade1, &Cidade2);
    
    printf("digite população1,população2:\n");
    scanf ("%d",&população1, &população2);

    printf("digite área1,área2:\n");
    scanf ("%f",&área1,&área2);

    printf("digite pib1,pib2:\n");
    scanf("%f",&pib1, &pib2);
    

    printf("digite pontosTuristicos1, pontosTuristicos2:\n");
    scanf("%d",&PontosTuristicos1, &pontosTuristicos2);  

    
    // Exibição  dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("carta1:%d,carta2:%d - estado1:%s,estado2:%s - código1:%s,código2:%s - cidade1:%s,cidade2:%s" ,carta1,carta2,código1,código2,Cidade1,Cidade2);
    printf("população1:%d, população2:%d - área1:%f, área2:%f- pib1:%f,pib2:%f - PontosTurísticos1:%d,PontosTurísticos1:%d", população1,população2,área1,área2,pib1,pib2,PontosTuristicos);

      // inclusão de variáveis inteiras e variáveis de pontos flutuantes 
      float area1 = 1521.11;
      float população1 =1232500;
      float quociente = (float)área1/população1;

      printf("Quociente: %f.2f\n"quociente);

      float área2 = 1200.25 ;
      float  população2=6748000;
      float quociente = (float)área2 /população2;

      printf("Quociente:%f.2f\n" quociente);

      float pib1 = 699.28 ;
      float população1 =1232500;
      float quociente = (float)pib1/população1;

      printf("Quociente:%f.2f\n" quociente);

      float pib2 = 300.50 ;
      float população2 =1232500;
      float quociente = (float)pib2/população2;

      printf("Quociente:%f.2f\n" quociente);









      
   return 0;
}
