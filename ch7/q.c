/*q) Elaborar um programa que leia dez elementos do tipo cadeia em uma matriz A e apresenta-los utilizando pesquisa binaria.
*/
#include<stdio.h>
#include<string.h>
#define TAM 10

struct String{
  char value[100];
};

int searchCharSize(char compChar){
  char abc[]={"'` ,[]{}.?~!@#$%^*=+-AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"};
    for (int i=0;i<74;i++){
       if(abc[i]==compChar){
        return i;
      }
  }
return 0;
}

int binarySearch(struct String vector[], int indexTotal,char value[]){
  int index;
  int start=0;
  do{
    index=((indexTotal)+start)/2;
    if(strcmp(vector[index].value,value)==0){
      return index;
    } 
    if(searchCharSize(vector[index].value[0])<searchCharSize(value[0])){
      start=index +1;
    }else{
      indexTotal=index -1;
    }
  }while(start<=indexTotal);
  return -1;
}


int main(){
  struct String A[TAM];
  int index;
  char temp[100];
  
  
  printf("Type something below to fulfill A:\n");
  for(int i=0;i<TAM;i++){
    fgets(temp,100,stdin);
    strcpy(A[i].value,temp);
  }
  
  for(int i=0;i<TAM-1;i++){
    for(int j=0;j<(TAM-1)-i;j++){
      if(searchCharSize(A[j].value[0])>searchCharSize(A[j+1].value[0])){
        strcpy(temp,A[j].value);
        strcpy(A[j].value,A[j+1].value);
        strcpy(A[j+1].value,temp);
      }
    }
  }
  printf("\nSorted :D\n");
 do{
  printf("Search a The words that you had typed: ");
  fgets(temp,100,stdin);
  index=binarySearch(A,TAM,temp);
  if(index>=0){
    printf("\nposition: %d\n",index+1);  
    for(int i=0;i<TAM;i++){
      if(i==index){ 
        printf("found > "); 
        printf("%s",A[i].value);
        }
      else{ 
        printf(" ");
        printf("%s",A[i].value);
        }      
    }
    printf("\n");
  }else{printf("\nword was not found\n");}
   
printf("\n");  
 }while(index==-1); 
return 0;
}