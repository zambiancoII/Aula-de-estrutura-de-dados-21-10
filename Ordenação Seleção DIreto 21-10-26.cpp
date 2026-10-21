#include <iostream>
using namespace std;
//selecao direta
int main(){
	int x[8]={5,8,3,1,2,6,4,7},i,
	aux, //variavel utilizada na troca de posicao de elementos
	pass,//nro de passagens pelo vetor-quantas vezes vou percorrer o vetor
	maior,pos,
	N=8; //quantidade de elementos do vetor
	
	for(pass=0;pass<(N-1);pass++){
		//encontrar o maior valor
		maior=x[0];
		pos=0;
		for(i=0;i<(N-pass);i++){
			if(x[i]>maior){
				maior=x[i];
				pos=i;
			}
		
		}
		//colocar o maior no final(entre os nao ordenados)
	x[pos]=x[N-pass-1];
	x[N-pass-1]=maior;
	
	for(i=0;i<N;i++)
		cout<< "  "<<x[i];
	cout<<endl;
	}
}