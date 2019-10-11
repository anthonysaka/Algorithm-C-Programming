#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void menu();
void filmsPerUser();
void createUser();
void addUser();

///////ESTRUCTURA PARA CREAR USUARIO/////
struct datosUsuarios{
	char idUsuario[5];
	char nombre[15];
	char edadUsuario[3];
	char paisOrigen[20];
 }usuarios;


FILE *fUsuarios;
////////////   MAIN //////////////////////

int main()
{
	menu();
}


///////////////
void menu(){

	int opcion=0;

	printf("----------------------------------------------\n");
	printf("\t Sistema Control Streaming\n");
	printf("----------------------------------------------\n");
	printf("1.-> Crear Usuario.\n");
	printf("2.-> Agregar Usuario.\n");
	printf("3.-> Registrar Pel%cula.\n",161);
	printf("4.-> Registrar Historial de Pel%culas por Usuario.\n",161);
	printf("5.-> Listado Pel%cculas Vistas Usuario/G%cnero.\n",161,130);
	printf("6.-> Listado Pel%cculas por G%cnero.\n");
	printf("7.-> Salir.\n");
	scanf("%d", &opcion);

	switch(opcion)
	{
		case 1:
		system("cls");
		printf("\t\t\t\t...:CREANDO ARCHIVO DE REGISTRO DE USUARIOS:...\n\n");
		createUser();
		system("cls");
		menu();break;

		case 2:
		system("cls");
		printf("\t\t\t\t...:AGREGANDO USUARIO A ARCHIVO DE REGISTRO DE USUARIOS:...\n\n");
		addUser();
		system("cls");
		menu();break;

		case 3:
			printf("opcion3\n");
			break;
		case 4:
			printf("opcion4\n");
			break;
		case 5:
			system("@cls||clear");
			filmsPerUser();
			break;
		case 6:
			printf("opcion6\n");
			break;
		case 7:
			system("exit");
			system("@cls||clear");
			break;

		default :
			printf("\nOpcion invalida\n");
	}
}
////////////////////////
void createUser(){
char masUsuario;
char registroUsuario[]="C:\\Users\\Anthony\\Desktop\\PROYECTO FINAL ALGORITMO\\Datos registro de usuarios.txt";  //cambiar direccion de donde se guarde el archivo .txt

fUsuarios=fopen(registroUsuario,"wt");
if (fUsuarios == NULL) {
	printf("%s","ERROR CREANDO USUARIO");
 //return 1;
}
fprintf(fUsuarios, "\n\t...:%s\n","DATOS USUARIOS REGISTRADOS" );

fprintf(fUsuarios,"%s\t","ID");fprintf(fUsuarios,"%s\t","NOMBRE");fprintf(fUsuarios,"%s\t","EDAD");fprintf(fUsuarios,"%s\t\n","PAIS DE ORIGEN");

do {
fflush(stdin);
printf("%s","DIGITE SU ID: ");
gets(usuarios.idUsuario);
printf("%s","DIGITE SU NOMBRE: ");
gets(usuarios.nombre);
printf("%s","DIGITE SU EDAD: ");
gets(usuarios.edadUsuario);
printf("%s","DIGITE SU PAIS DE ORIGEN: ");
gets(usuarios.paisOrigen);
fflush(stdin);
////////////aqui
fwrite(usuarios.idUsuario,1,strlen(usuarios.idUsuario),fUsuarios);
fprintf(fUsuarios,"\t");
fwrite(usuarios.nombre,1,strlen(usuarios.nombre),fUsuarios);
fprintf(fUsuarios, "\t");
fwrite(usuarios.edadUsuario,1,strlen(usuarios.edadUsuario),fUsuarios);
fprintf(fUsuarios, "\t");
fwrite(usuarios.paisOrigen,1,strlen(usuarios.paisOrigen),fUsuarios);
fprintf(fUsuarios,"\n");

printf("\n%s","¿Desea registrar mas usaurios (s/n): ");
scanf("%c",&masUsuario);

} while(masUsuario=='s');

	printf("\nUsuarios agregado con exito, redireccionado al menu principal en 3 segundos...\n");
	sleep(3);
	fclose(fUsuarios);
}
///////////////////////////////////////////////////// AGREGAR USUARIO OPCION 2 /////////////////////////////////////////////
void addUser(){
	char masUsuario;
	char registroUsuario[]="C:\\Users\\Anthony\\Desktop\\PROYECTO FINAL ALGORITMO\\Datos registro de usuarios.txt";  //cambiar direccion de donde se guarde el archivo .txt

	fUsuarios=fopen(registroUsuario,"at");
	if (fUsuarios == NULL) {
		printf("%s","ERROR CREANDO USUARIO");
	 //return 1;
	}
	//fprintf(fUsuarios, "\n\t...:%s\n","DATOS USUARIOS REGISTRADOS" );

	//fprintf(fUsuarios,"%s\t","ID");fprintf(fUsuarios,"%s\t","NOMBRE");fprintf(fUsuarios,"%s\t","EDAD");fprintf(fUsuarios,"%s\t\n","PAIS DE ORIGEN");

	do {
	fflush(stdin);
	printf("%s","DIGITE SU ID: ");
	gets(usuarios.idUsuario);
	printf("%s","DIGITE SU NOMBRE: ");
	gets(usuarios.nombre);
	printf("%s","DIGITE SU EDAD: ");
	gets(usuarios.edadUsuario);
	printf("%s","DIGITE SU PAIS DE ORIGEN: ");
	gets(usuarios.paisOrigen);
	fflush(stdin);
	////////////aqui
	fwrite(usuarios.idUsuario,1,strlen(usuarios.idUsuario),fUsuarios);
	fprintf(fUsuarios,"\t");
	fwrite(usuarios.nombre,1,strlen(usuarios.nombre),fUsuarios);
	fprintf(fUsuarios, "\t");
	fwrite(usuarios.edadUsuario,1,strlen(usuarios.edadUsuario),fUsuarios);
	fprintf(fUsuarios, "\t");
	fwrite(usuarios.paisOrigen,1,strlen(usuarios.paisOrigen),fUsuarios);
	fprintf(fUsuarios,"\n");

	printf("\n%s","¿Desea registrar mas usaurios (s/n): ");
	scanf("%c",&masUsuario);

	} while(masUsuario=='s');

		printf("\nUsuarios agregado con exito, redireccionado al menu principal en 3 segundos...\n");
		sleep(3);
		fclose(fUsuarios);
}


///////////////////
void filmsPerUser()
{
	char primera[20]="Drama",segunda[20]="Accion",tercera[20]="Horror", cuarta[20]="Aventura",nombre[10]="Maria",nombre2[10]="Rosa",nombre3[10]="Carmen";
	int maria[5]={10,10,1,10,31},rosa[5]={10,10,1,10,31},carmen[5]={10,10,1,10,31};
	printf("----------------------------------------------\n");
	printf("   Listado Pel%cculas Vistas Usuario/G%cnero\n",161,130);
	printf("----------------------------------------------\n");
	printf("\t%s\t%s\t%s\t%s\tTotal\n",primera,segunda,tercera,cuarta);
	printf("Usuario --------------------------------------\n");
	printf("%*s\t%d\n",3, nombre);
	printf("%*s\t%d\n",3, nombre2);
	printf("%*s\t%d\n",3, nombre3);

}
