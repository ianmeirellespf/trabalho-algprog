#include <stdio.h>
#include <math.h>


int aa[80]={0,0,0,1,0,0,0,0,0,0};
int bb[80]={1,3,1,0,2,1,1,1,1,1};
int neuA[30] = {0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
int neuB[30];
int neuC[30];
int neuD[30];
int neuE[30];
int neuF[30];
int neuG[30];
int neuH[30];
int neuI[30];
int neuJ[30];
int neuL[30];
int neuM[30];
int neuN[30];
int neuO[30];
int neuP[30];
int neuQ[30];
int neuR[30];
int neuS[30];
int neuT[30];
int neuU[30];
int neuV[30];
int neuX[30];
int neuZ[30];
int matrizA1[30]={0,1,1, 1,0,1, 0,0,0, 1,1,0, 0,0,1, 1,1,1, 1,1,1, 0,0,0, 1,1,0, 0,0,1};

void Zera(int *ma){
    for(int i=0; i< 30; i++){
        ma[i] = 0;
    }
}

void CriaDiscriminante(int *neuronio, int *tupla){
    int contador = 0;
    int a, b, c = 0;
    int valor = 0;
    for(int i = 0; i < 30; i = i + 3){
        a = tupla[i];
        b = tupla[i + 1];
        c = tupla[i + 2];
        valor  = (pow(2, 0) * a) + (pow(2, 1) * b) + (pow(2, 2) * c) + contador;  
        contador += 8;
        neuronio[valor]++;
    }

    // for (int  i = 0; i < 30; i++)
    // {
    //     printf("%d", neuronio[i]);
    // }
    
}
int comparardiscriminante(int neuroletra[], int neuroalfabeto[]){
  int i;
  
  int contadorigualdade=0;
  for(i=0;i<80;i++){
    if(neuroletra[i]>0 && neuroalfabeto[i]>0){
      contadorigualdade=contadorigualdade +1; 
      }


  }
  return contadorigualdade;
}
int comblending(int neuroletra[], int neuroalfabeto[], int n){
  int i;
  int contadorigualdade=0;
  
  for(i=0;i<80;i++){
    if(neuroletra[i]>0 && neuroalfabeto[i]>n){
      contadorigualdade=contadorigualdade + 1; 
      }
  

  }
  return contadorigualdade;
}




int main(){
    int cont = 0;
   int aux,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,X,W,Y,Z;
    int j,y,x,i,n=0;
    Zera(neuA);
    CriaDiscriminante(neuB, matrizA1);
    char vet[26];
    for(n=0;n<2;n++){ 
       vet[0]=comblending(aa,bb,n);
       vet[1]=comblending(aa,bb,n);
       vet[2]=comblending(aa,bb,n);
       vet[3]=comblending(aa,bb,n);
       vet[4]=comblending(aa,bb,n);
       vet[5]=comblending(aa,bb,n);
       vet[6]=comblending(aa,bb,n);
       vet[7]=comblending(aa,bb,n);
       vet[8]=comblending(aa,bb,n);
       vet[9]=comblending(aa,bb,n);
       vet[10]=comblending(aa,bb,n);
       vet[11]=comblending(aa,bb,n);
       vet[12]=comblending(aa,bb,n);
       vet[13]=comblending(aa,bb,n);
       vet[14]=comblending(aa,bb,n);
       vet[15]=comblending(aa,bb,n);
       vet[16]=comblending(aa,bb,n);
       vet[17]=comblending(aa,bb,n);
       vet[18]=comblending(aa,bb,n);
       vet[19]=comblending(aa,bb,n);
       vet[20]=comblending(aa,bb,n);
       vet[21]=comblending(aa,bb,n);
       vet[22]=comblending(aa,bb,n);
       vet[23]=comblending(aa,bb,n);
       vet[24]=comblending(aa,bb,n);
       vet[25]=comblending(aa,bb,n);
         
         
         for(x=0;x<26;x++){
           for(y=x+1;y<26;y++){
             if(vet[x]>vet[y]){
               j=x;
               aux=vet[x];
               vet[x]=vet[y];
               vet[y]=aux;
             }
           }
              if(vet[25]>vet[24]){
                printf("%i", j);
                break;
              }
          

         
       }
       
    }
    for(int i = 0; i < 80; i++){
        
        printf("%d", neuB[i]);
        cont++; 
        if(cont % 8 == 0){
            printf("\n");
            cont = 0;
        }
    }

  return 0;}
