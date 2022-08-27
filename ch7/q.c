/*q) Elaborar um programa que leia dez elementos do tipo cadeia em uma matriz A e apresenta-los utilizando pesquisa binaria.
*/
#include<stdio.h>
#include<string.h>

int searchIndex(char compChar){
  char abc[]={"abcdefghijklmnopqrstuvwxyz"};
  for (int i=0;i<26;i++){
      if(abc[i]==compChar){
        return i;
      }
  }
return 0;
}

int binarySearch(char vector[], int indexTotal,char value){
  // int index,previousIndex;
  int index;
  int start=0;
  do{
    // previousIndex=index;
    index=((indexTotal)+start)/2;
    if(vector[index]==value){
      return index;
    } 
    if(searchIndex(vector[index])<searchIndex(value)){
      start=index +1;
    }else{
      indexTotal=index -1;
    }
  }while(start<=indexTotal);
  return -1;
}

void sortingAll(char vector[]){
  int len=strlen(vector);
  int temp;
  for(int i=0;i<len-1;i++){
    for(int j=0;j<(len-1)-i;j++){
      if(searchIndex(vector[j])>searchIndex(vector[j+1])){
        temp=vector[j];
        vector[j]=vector[j+1];
        vector[j+1]=temp;
      }
    }
  }
}


int main(){
  char A[100];
  int len,index;
  char value;
  
  printf("Type a something below:\n");
  scanf("%s",A);
  sortingAll(A);
  printf("\nSorted :D\n");
  len=strlen(A);
 do{
  printf("Search a character: ");
  scanf("%c",&value);
  scanf("%c",&value);
  index=binarySearch(A,len,value);
  if(index>=0){
    printf("\nposition: %d\n",index+1);  
    for(int i=0;i<len;i++){
      if(i==index){ printf("v"); break; }
      else{ printf(" "); }      
    }
    printf("\n");
  }else{printf("\nchar was not found\n");}
  for(int i=0;i<len;i++){
    printf("%c",A[i]);
  }
   
printf("\n");  
 }while(index==-1); 
return 0;
}