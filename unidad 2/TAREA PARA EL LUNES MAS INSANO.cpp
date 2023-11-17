#define tope 2023
#define meses 12
#define dias 24
#define horas 60
#define minutos 60
#define segundos 60
//definimos cuanto valen las variables de el codigo cuanto has vivido
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h> 
#include<stdio.h>
//colocamos las librerias que vamos a utilisar
using namespace std;
//acsedemos a todas las funciones
int an,mes,dia,hora,minuto,a,seg;
//declaramos las variantes enteras de el codigo de cuanto has vivido
int multiplica(int a,int b){
	return a*b;
}
int resta(int a,int b){
	return a-b;
	//funciones de el codigo de cuanto has vivido
}
int main (){
system("COLOR B0");
//colocamos en color del fondo
	string user ;
	//declaramos user indefinido 
	string contrasena="";
	//declaamos pasword
	cout<<"\n\n************************************MENU DE CODIGOS************************************ "<<endl;
	//pedimos usuario
	cout<<"  "<<endl;
	//linea libre
	cout<<" Ingresa tu nombre"<<endl;
	cin>>user;
	//guardamos su nombre en user
	cout<<" Escriba la contrasena "<<endl;
	cin>>contrasena;
	//pedimos contraseña
	if(contrasena == "123" ){
		cout<<"************************************Bienvenido senor "<<user<<endl;
		//bienvenida 
			int z;
			//declaramos variable
				cout<<"****************A CONTINUACION SE TE MOSTRARA UNA LISTA DE CODIGOS QUE PUEDES EJECUTAR**************************"<<endl;
			cout<<"\n\n 1)  hola_mundo"<<endl;
			cout<<" 2)  promedio"<<endl;
			cout<<" 3)  tarea portada stdio.h"<<endl;
			cout<<" 4)  variables"<<endl;
			cout<<" 5)  lados de un triangulo"<<endl;
			cout<<" 6)  for del 1 al 100"<<endl;
			cout<<" 7)  for del 100 al 0"<<endl;
			cout<<" 8)  numeros pares del 0 al 100"<<endl;
			cout<<" 9)  numeros impares del 1 al 100"<<endl;
			cout<<" 10) cronometro"<<endl;
			cout<<" 11) tablas multi"<<endl;
			cout<<" 12) switch dia de las semanas"<<endl;
			cout<<""<<endl;
			cin>>z;
			//guardamos la eleccion en z
			
			switch(z)
			//compararemos z
			 {
			 	case 1:{
			 		//ponemos el case 1
			 		cout<<"HOLA MUNDO COMO ESTAMOSSS"<<endl;
					break;
					//seramos el case para que no ejequte todos los case
				  }
				   case 2:{
				   	cout<<"\n****************Promedio**************** "<<endl;
				  	int a,b,c,d,e,suma,promedio;
                 	cout<<"\n\nhola aqui te voy adar tu promedio"<<endl;
	                cout<<"ingresa el primer promedio"<<endl;
	                cin>>a;
                   	cout<<"ingresa el segundo promedio"<<endl;
	                cin>>b;
                  	cout<<"ingresa el tercer promedio"<<endl;
                  	cin>>c;
                 	cout<<"ingresa el cuarto promedio"<<endl;
                 	cin>>d;
	                cout<<"ingresa el quinto promedio"<<endl;
                 	cin>>e;
                 	promedio = (a+b+c+d+e)/5;
	                cout<<"tu promedio general es es de:"<<promedio<<endl;
	                    if(promedio >=7){
	                       cout<<"tu calificacion es aprobatoria"<<endl;
					    }
					    else{
					 	    cout<<"lo lamento tu promedio no es aprobado";
					        }
					        cout<<"gracias por preguntarme por tu promedio";
					         return 0;
					     }
					      break;
					      case 3:{
						  {
						  	cout<<"\n****************Portada**************** "<<endl;
							printf(" \n\nDeyvid Jonathan Cardoso Garcia.\n");
							printf(" /n Marvin Gael Soria Torres .\n");
							printf(" Escuela Conalep Nucalpan 1.\n");
							printf(" Modulo Programacion basica.\n");
							printf(" Maestro Jose Luis Chavez Gomez.\n");
							printf(" Carrera tecnico en bachiller en informatica.\n");
							printf(" Grupo 305.\n");
							printf(" Tercer semestre de bachillerato.\n");
							printf(" Edad 16 años.\n");
							printf(" Correo dcardoso2122@conalepmex.edu.mx.\n");
							
							return 0;
							
							}
							break;
						  }
						  case 4:{
						  	{
						  		cout<<"\n****************Consonante o vocal**************** "<<endl;
						  	char letra1;
						  	cout<<"\nIngresa una letra";
						  	cin>>letra1;
						  	if(letra1 =='a'){
						  	cout<<"es vocal";
							  }
							  if(letra1 == 'e'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'i'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'o'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'u'){
							  	 cout<<"es vocal";
							  }
							 else {
							 	cout<<"es consonante";
							 }
							 
							  }
							break;
						  }
						  case 5:{
						  	{
						  		cout<<"\n****************Tipo de triangulo****************\n "<<endl;
						  	int num1,num2,num3;
						  	cout<<"dame tu primer numero"<<endl;
						  	cin>>num1;
						  	cout<<"\ndame tu segundo numero"<<endl;
						  	cin>>num2;
						  	cout<<"\ndame tu tercer numero"<<endl;
						  	cin>>num3;
						  	
						  	if(num1==num2 and num2==num3){
						  	cout<<"tu triangulo equilatero";
							  }
							else if(num1==num2 and num2==num3){
							cout<<"\ntu triangulo es isoseles";
							}
							else if(num1 != num2 and num2 != num3){
							cout<<"\ntu triangulo es escaleno";
							}
							else{
								cout<<" \nno es un triangulo";
							}
							return 0;
							  }
							break;
						  }
						  case 6:{
						  	{
						  		cout<<"\n****************Numeros de 1 al 100**************** \n"<<endl;
						  	int i;
						  	for(i=1;i<100;i++){
						  		cout<<i<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 7:{
						  	{
						  		cout<<"\n****************Numeros del 100 al 1**************** \n"<<endl;
						  	int e;
						  	for(e=100;e>0;e--){
						  		cout<<e<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 8:{
						  	{
						  		cout<<"\n****************Numeros de 1 al 100(pares)**************** \n"<<endl;
						  	int i;
						  	for(i=0;i<=100;i+=2){
						  		cout<<i<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 9:{
						   {
						   	 	cout<<"\n****************Numeros de 1 al 100(pares)**************** \n"<<endl;
						 int i;
						for(i=1;i<=100;i+=2){
						  	cout<<i<<endl;
								  }
								  return 0;
							  }
							break;
						  }
						  case 10:{
						  	{
						  		 		cout<<"\n****************CRONOMETRO**************** ";
						  	int h = 0, m = 0, s = 0;
							while(1){
							if(s<=60){
							s = 0;
							m++;
							if(m>=60){
							m = 0;
							h++;
							 }
							 }
						     system("cls");
							cout<<h<<":"<<m<<":"<<s;
							Sleep(1000);
							 s++;
							  }
							 cin.get();
							  }
							break;
						  }
						   case 11:{
				         	{
				         		 		cout<<"\n****************tablas de multiplicar**************** "<<endl;
						    int i;
						    int num;
						  	int multiplicacion;
						     cout<<"\n\nInserta el numero de la tabla de multiplicar que deseas"<<endl;
						  	 cin>> num;
						  	 for(i=1;i<=50;i++){
						  	multiplicacion= num*i;
						  	cout<<num<<"x"<<i<<"="<<multiplicacion<<endl;
							   }
							return 0;
							  }
							break;
						  }
						  case 12:{
						  	{
						  		 		cout<<"\n****************Dias de la semana**************** ";
						  	int pro;
						  	cout<<"\n\nDigita el numero del 1 al 7";
						  	cin>> pro;
						  	switch(pro){
						  	case 1:
		                    cout<<"Hoy es lunes -_-";break;
		                    case 2:
	                      	cout<<"Hoy es martes";break;
	                     	case 3:
		                     cout<<"Hoy es miercoles";break;
	                      	case 4:
	                     	cout<<"Hoy es jueves";break;
	                     	case 5:
	                     	cout<<"Hoy es viernes :)";break;
		                     case 6:
		                     cout<<"Hoy es sabado";break;
	                      	case 7:
		                     cout<<"Hoy es domingo";break;
		                     default: cout<<"NO ES UN DIA DE LA SEMANA TONTO";break;
							   }
							   return 0;
							  }
							break;
						  }
						  
				  }
				  	}
	else{
		cout<<" largate "<<user;
    }
		    }
