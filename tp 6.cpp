#include<bits/stdc++.h>
using namespace std;
string CalcularDDD(int codigo);
int main(){
	int codigo;
	cout<<"Ingrese el DDD:"<<endl;
	cin>>codigo;
	string C=CalcularDDD(codigo);
	cout<<"Destino:"<<C<<endl;
    return 0;
}
string CalcularDDD(int codigo){
	string DDD;
	if(codigo==61){
	DDD="Brasilia";	
	}
	if(codigo==71){
		DDD="Salvador";
	}
	if(codigo==11){
		DDD="Sao Paulo";
	}
	if(codigo==21){
		DDD="Rio de Janeiro";
	}
	if(codigo==32){
		DDD="Juiz de Fora";	
	}
	if(codigo==19){
		DDD="Campinas";	
		}
	if(codigo==27){
		DDD="Victoria";	
		}
	if(codigo==31){
		DDD="Bello horizonte";	
		}
	if(codigo!=61 && codigo!=71 && codigo!=11 && codigo!=21  && codigo!=32 &&  codigo!=19 && codigo!=27 && codigo!=31 ){
		DDD="DDD NO ENCONTRADO";	
		}
		return DDD;
	}
