using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h> //Observe que seguimos utilizando las librerías básicas

int main()
{
float prom,suma=0;// Declaramos una variable para guardar la suma y otra para calcular el promedio
float alturas[10];//Declaramos el arreglo de 10 posiciones
float aux;
		for(int i=0;i<10;i++)// Con este for hacemos el llenado del arreglo
		{
			cout<<"CAPTURE ALTURA NO:"<<i+1<<endl;
			cin>>alturas[i];
				
		}
cout<<"DESPLEGANDO ALTURAS CAPTURADAS"<<endl;	
		for(int i=0;i<10;i++)//Con este for desplegamos las calificaciones capturadas
		{
			cout<<alturas[i]<<endl;
			suma=suma+alturas[i];// En la variable suma vamos acumulando la sumatoria de todos los valores
		}
		for(int i=0;i<10;i++){
		for(int j=0;j<9;j++){
			if(alturas[j] > alturas[j+1]){
				aux = alturas[j];
				alturas[j] = alturas[j+1];
				alturas[j+1] = aux;
			}
		}
	}
	cout<<"LOS VALORES ORDENADOS DE MENOR A MAYOR SON: "<<endl;
	for(int i=0;i<10;i++){
		cout<<alturas[i]<<" "<<endl;
	}
		
system("pause");
}

