#include<iostream>
using namespace std;
//dado un dia de 1 a 30 y
//dado un string "enero","febrero",...,"diciembre"
//Determinar que estacion del a�o representa en el hemisferio sur
//sabiendo que 
//21 diciembre a 20 marzo es VERANO
//21 de marzo a 20 de junio es OTO�O
//21 de junio a 20 de septiembre es INVIERNO
//21 de septiembre a 20 de diciembre es PRIMAVERA

int main()
{
	int dia=0;
	string mes;
	cout<<"Ingrese dia\n";
	cin>>dia;
	cout<<"Ingrese un mes\n";
	fflush(stdin);
	getline(cin,mes);
	if(mes.compare("enero")==0 ||mes.compare("febrero")==0 || (mes.compare("diciembre")==0 && dia>=21) 
	||(mes.compare("marzo")==0 && dia<=20))
		cout<<"Verano";
	if(mes.compare("abril")==0 ||mes.compare("mayo")==0 || (mes.compare("marzo")==0 && dia>=21) 
	||(mes.compare("junio")==0 && dia<=20))
		cout<<"Otono";
	if(mes.compare("julio")==0 ||mes.compare("agosto")==0 || (mes.compare("junio")==0 && dia>=21) 
	||(mes.compare("septiembre")==0 && dia<=20))
		cout<<"Invierno";
	if(mes.compare("octubre")==0 ||mes.compare("noviembre")==0 || (mes.compare("septiembre")==0 && dia>=21) 
	||(mes.compare("diciembre")==0 && dia<=20))
		cout<<"Primavera";
		
		
		return 0;
			
}
