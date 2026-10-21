#include <iostream>
using namespace std;


int main(){
	int x[8]={5,8,3,1,2,6,4,7},i,
	aux, //variavel utilizada na troca de posicao de elementos
	pass,//nro de passagens pelo vetor-quantas vezes vou percorrer o vetor
	troca=1,
	N=8; //quantidade de elementos do vetor
	
	for(pass=1;pass<(N-1) and troca==1;pass++){
		troca=0;
		for(i=0;i<(N-pass);i++){
			if(x[i]>x[i+1]){
				aux=x[i];
				x[i]=x[i+1];
				x[i+1]=aux;
				troca=1;
				
			}
		}
		if (troca==1){
			cout<<endl<<"Passagem "<< pass<< ": ";
			for(i=0;i<N;i++){
				cout<< "  "<<x[i];
			
			}
			
		}
	}
		
	

}