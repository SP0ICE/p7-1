#define rows 2
#define cols 3
#include <stdio.h>
int main(){
int a[cols][rows]={ {11,12},{21,22},{31,32}};
int i=0;
int j=0;
for (i=0;i<cols;i++){
  for (j=0;j<rows;j++){
    printf(" %d",a[i][j]);}
  printf("\n");}}
