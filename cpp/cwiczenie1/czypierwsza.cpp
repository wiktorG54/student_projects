#include <iostream>

using namespace std;

int main(){
int x;
cout<<"podaj liczbe";
cin>>x;

bool czypierwsza = true;
if(x <2){
czypierwsza = false;
}
for(int i =2;i<x;i++){
if(x % i ==0){
czypierwsza = false;
}
}
if(czypierwsza){
cout<<"liczba jest pierwsza";
}else{ cout<<"licba nie jest pierwsza";
}

	return 0;
}
