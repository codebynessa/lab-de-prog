#include<iostream>
using namespace std;
int main(){

int small{0};
int large{0};

cout<<"\nBem vindos ao servico Carpet";
cout<<"Quantos quartos pequenos vc gostaria de limpar?";
cin>>small;
cout<<"Quantos quartos grandes vc gostaria de limpar?";
cin>>large;

cout<<"numero de quartos pequenos: "<<small<<endl;
cout<<"numero de quartos grandes: "<<large<<endl;

cout<<"Preco por quarto pequeno: "<<25*small;
cout<<"\nPreco por quarto grande: "<<35*large;
cout<<"\nCusto: "<< (small*25)+(large*35);


return 0;  
}