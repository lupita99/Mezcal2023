#include <cstdio>
 #include <iostream>
 using namespace std;
int main(int argc, char *argv[]){
	 int Opc;
	 cout << "	MENÚ PRINCIPAL\n" << endl;
	 cout << "Elija una opcion: " << endl;
	 cout << "1. Programa 1. Piramide de Asteriscos" << endl;
	 cout << "2. Programa 2. Numero menor y mayor " << endl;
	 cout << "3. Programa 3. Numeros Ordenados " << endl;
	 cout << "4. Programa 4. Media, Mediana y Moda " << endl;
	 cout << "5. Salir\n" << endl;
	 cin >> Opc;
while(Opc!=5){
if(Opc==1){
	 int num;
	 cout << "Dame el numero: " << endl;
	 cin >> num;
for(int i=num;i>0;i=i-1){
for(int j=0;j<i;j=j+1){
	 cout << "*";}
	 cout << " " << endl;
}
}
if(Opc==2){
	 int X,n,mayor;
	 int Total;
	 int menor;
	 cout << "Ingrese el numero: " << endl;
	 cin >> Total;
X=1;
mayor=0;
menor=0;
while(X<=Total){
	 cout << "\nDame el Número: " << endl;
	 cin >> n;
if(X==1){
mayor=n;
menor=n;
}
else if(n>mayor){
mayor=n;
}
else if(n<menor){
menor=n;
}
X+=1;
}
cout << "\nEl número mayor es: " << mayor << endl;cout << "\nEl núero menor es: " << menor << endl;	 cout << "" << endl;
}
else if(Opc==3){
	 int menor;
	 int numero;
	 int temporal;
int Array[10];
	 cout << "Ingresa 10 Números: \n" << endl;
for(int i=0;i<=9;i=i+1){
	 cout << "Dame el Número: " << endl;
	 cin >> numero;
Array[i]=numero;
}
	 cout << " " << endl;
for(int j=0;j<=9;j=j+1){
	 int n;
n=j+1;
for(int t=0;t<=8;t=t+1){
if(Array[t]<Array[n]){
temporal=Array[n];
Array[n]=Array[t];
Array[t]=temporal;
}
}
}
	 cout << " " << endl;
	 cout << "Ordenados de Menor a Mayor: " << endl;
	 cout << " " << endl;
for(int t=9;t>=0;t=t-1){
cout << Array[t]  << endl;
}
}
else if(Opc==4){
	 int Opc2;
	 cout << "\n Elige una opcion: \n" << endl;
	 cout << "1. Moda" << endl;
	 cout << "2. Mediana" << endl;
	 cout << "3. Media" << endl;
	 cout << "4. Regresar" << endl;
	 cin >> Opc2;
while(Opc2!=4){
if(Opc2==1){
int Array[10];
int Aux[10];
	 int Cont;
	 int Posicion;
	 int Numero;
	 int Cont2;
	 int posMayor;
	 int Num;
	 int NumMayor;
	 int O;
O=0;
	 cout << "Dame 10 Números\n" << endl;
for(int i=0;i<10;i=i+1){
	 cout << "Dame Número" << endl;
	 cin >> Num;
Array[i]=Num;
}
for(int Cont=0;Cont<=9;Cont=Cont+1){
Aux[Cont]=0;
}
for(int Cont=0;Cont<10;Cont=Cont+1){
Numero=Array[Cont];
Posicion=Cont;
for(int Cont2=Cont;Cont2<=9;Cont2=Cont2+1){
if(Array[Cont2]==Numero){
Aux[Posicion]+=1;
}
}
}
NumMayor=Aux[O];
posMayor=0;
for(int Cont=0;Cont<=9;Cont=Cont+1){
if(Aux[Cont]>NumMayor){
posMayor=Cont;
NumMayor=Aux[Cont];
}
}
	 cout << "\nLa MODA es : " << endl;
cout << Array[posMayor]  << endl;
}
else if(Opc2==2){
int Array[10];
	 int Band;
	 int temporal;
Band=0;
	 int n;
	 int Num;
	 cout << "Dame 10 Números\n" << endl;
for(int i=0;i<10;i=i+1){
	 cout << "Dame Número: " << endl;
	 cin >> Num;
Array[i]=Num;
}
for(int j=0;j<=9;j=j+1){
	 int n;
n=j+1;
for(int t=0;t<=8;t=t+1){
if(Array[t]<Array[n]){
temporal=Array[n];
Array[n]=Array[t];
Array[t]=temporal;
}
}
}
	 cout << " " << endl;
	 cout << "Ordenado de Menor a Mayor" << endl;
	 cout << " " << endl;
for(int t=9;t>=0;t=t-1){
cout << Array[t]  << endl;
}
	 cout << "\nLa mediana es: " << endl;
cout << Array[5]  << endl;
	 cout << "y" << endl;
cout << Array[4]  << endl;
}
else if(Opc2==3){
int Array[10];
	 int suma;
	 int numero;
	 float media;
media=0;
suma=0;
numero=0;
	 cout << "Ingrese 10 Números\n" << endl;
for(int i=0;i<=9;i=i+1){
	 cout << "Dame el Número" << endl;
	 cin >> numero;
Array[i]=numero;
}
	 cout << " " << endl;
for(int Cont=0;Cont<=9;Cont=Cont+1){
suma+=Array[Cont];
}
media=(float)suma/10.0;
cout << "La Media es: " << media << endl;}
else{
	 cout << "\nError\n" << endl;

}
	 cout << "\n Elije una Opcion \n" << endl;
	 cout << "1. Moda" << endl;
	 cout << "2. Mediana" << endl;
	 cout << "3. Media" << endl;
	 cout << "4. Regresar\n" << endl;
	 cin >> Opc2;
}
}
else{
	 cout << "\nError\n" << endl;

}
	 cout << "	MENÚ PRINCIPAL\n" << endl;
	 cout << "Elija una opcion: " << endl;
	 cout << "1. Programa 1. Piramide de Asteriscos " << endl;
	 cout << "2. Programa 2. Numero menor y mayor " << endl;
	 cout << "3. Programa 3. Numeros ordenados " << endl;
	 cout << "4. Programa 4. Media, Mediana y Moda " << endl;
	 cout << "5. Salir\n" << endl;
	 cin >> Opc;
}

}

