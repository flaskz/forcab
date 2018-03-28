#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define INI 65
#define FIM 122

int main(int argc, char **argv){
  char usuario[5], senha[5];
  int a, i, j, k, l;//char usuario
  int m, n, o, p, q, r, s, t;//char senha
  memset(usuario, 0, 5);
  memset(senha, 0, 5); 
  for(i=INI; i<=FIM; ++i){
    if(i<=90 || i>=97){
      usuario[0] = i;
      //printf("Usuario: %s\n", usuario);
    }
    for(j=INI; j<=FIM; ++j){
      if(j<58 || (j>=65 && j<=90) || (j>=97 && j<=122)){
	usuario[1] = j;
      }
      for(k=INI; k<=FIM; ++k){
	if(k<58 || (k>=65 && k<=90) || (k>=97 && k<=122)){
	  usuario[2] = k;
	}
	for(l=INI; l<=FIM; ++l){
	  if(l<58 || (l>=65 && l<=90) || (l>=97 && l<=122)){
	    usuario[3] = l;
	    printf("Usuario: %s\n", usuario);
	  }
	}            
      }
    }
  }
  strcpy(senha, usuario);
}
