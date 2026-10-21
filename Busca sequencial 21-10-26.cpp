#include <iostream>
using namespace std;
//busca binaria

int main(){
	int x[8]={5,8,3,1,2,6,4,7},i,chave,pos,N=8,achou;
	
	
	
	cout<<endl<<"Vetor    :";
	for(i=0;i<N;i++){
		cout<<"   "<<x[i];
	}
	
	//BUSCA SEQUENCIAL
	cout<<endl<<"chave de busca:";
	cin>>chave;
	
	//realizar a bsca da "chave" no vetor
	pos=-1;
	achou=0;
	for(i=0;i<N and achou==0;i++){
		cout<<endl<<"passou no "<<i;
		if(x[i]==chave){
			pos=i;
			achou=1;
			
		}
		
	}
	if(pos>=0){
		cout<<endl<<"Chave na posicao "<<pos;
		
	}
	else{
		cout<<endl<<"Chave nao encontrada";
	}
}