/*
Scheduler Demo

Luiz Felipe Martins Rego
RA:159857

Professor Tavares
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// void selection_sort(int num[], int tam) {
//   int i, j, min, aux;
//   for (i = 0; i < (tam-1); i++)
//   {
//     min = i;
//     for (j = (i+1); j < tam; j++) {
//       if(num[j] < num[min])
//       min = j;
//     }
//     if (num[i] != num[min]) {
//       aux = num[i];
//       num[i] = num[min];
//       num[min] = aux;
//     }
//   }
// }

int main() {
  long int a[5];
  long int i,memory = 0;
  long int cont=0, j=0;
  long int aux=0;
  long int tam=1;
  long int n = 0;

  char buffer[8];
  char notask[]="-\n";
  char end[4];

  //Clean buffer
  buffer[0]='\0';

  //From 0 to 4, is saved the periodicity of each task
  //N is the numbers of repetitions
  scanf("%li %li %li %li %li %li", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  //Initial allocation
    // for(j=0;j<4;j++){
    //   memory[j]=a[j]/n;
    // }

  while(tam<n+1){
    //int aux=0;

    //Clean flag memory
    memory=0;

    for(aux=0;aux<5;aux++){

      if((tam%(a[aux]))==0){

        //Convert int to char
        sprintf(end, "%li", aux);
        strcat(buffer,end);
        memory++;
      }
    }
    tam++;
    //printf("%d\n", tam);
    if(memory==0){
      printf("%s", notask);
    }

    else{
      printf("%s\n", buffer);
    }

    buffer[0]='\0';
  }

  return 0;
}
