
/*LIBRERIAS UTILIZADAS*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* PROTOTIPOS DE LAS FUNCIONES*/
void menu();
void filmsPerUser();
void addUser();
void addMovie();
void historialMovie();

/*ESTRUCTURA PARA CREAR USUARIO*/
struct datosUsuarios{
	char idUsuario[5];
	char nombre[15];
	int edadUser;
	char edadUsuario[4];/*para almacenar la conversion*/
	char paisOrigen[30];
}usuarios;


typedef struct tiempoPelicula{
	int hora,minuto,segundo;
}duracionPelicula;

struct datosPelicula{
	char idPelicula[5];
	char nombre[30];
	char idioma[12];
	char genero[12];
	int  ano;
	char anoEmision[5];
	duracionPelicula duracion;
 char duracionPel[8]; /*almacenar*/
	char resolucion[3];
}peliculas;
/*----------------*/

struct historialUsuario{
  char idUsuario[5];
	char idPelicula[5];
	char completada[2];

}historial;

/**DECLARON DE ARCHIVOS - PUNTEROS*/
FILE *fUsuarios;
FILE *fPeliculas;
FILE *fHistorial;

	char registroUsuario[]="C:\\Users\\Anthony\\Desktop\\PROYECTO FINAL ALGORITMO\\Datos registro de usuarios.txt";  /*cambiar direccion de donde se guarde el archivo .txt*/
  char registroPelicula[]="C:\\Users\\Anthony\\Desktop\\PROYECTO FINAL ALGORITMO\\Datos registro de pelicula.txt";  /*cambiar direccion de donde se guarde el archivo .txt*/
  char registroHistorial[]="C:\\Users\\Anthony\\Desktop\\PROYECTO FINAL ALGORITMO\\Historial de usuarios.txt";
/* ---------------------------------------------- MAIN------------------------------------------------ */
int main()
{
	menu();
	return 0;
}

/* ------------------------------------FUNCION PARA MOSTRAR MENU ---------------------------------------- */
void menu(){

	int opcion=0;

	printf("----------------------------------------------\n");
	printf("\t Sistema Control Streaming\n");
	printf("----------------------------------------------\n");
	printf("1.-> Agregar Usuario.\n");
	printf("2.-> Registrar Pel%ccula.\n",161);
	printf("3.-> Registrar Historial de Pel%cculas por Usuario.\n",161);
	printf("4.-> Listado Pel%cculas Vistas Usuario/G%cnero.\n",161,130);
	printf("5.-> Listado Pel%cculas por G%cnero.\n",161);
	printf("6.-> Salir.\n");
	scanf("%d", &opcion);

	switch(opcion)
	{
		case 1:
		system("cls");
		printf("\t\t\t\t...:AGREGANDO USUARIO A ARCHIVO DE REGISTRO DE USUARIOS:...\n\n");
		addUser();
		fflush(stdin);
		system("cls");
		menu();break;

		case 2:
		system("cls");
		printf("\t\t\t\t...:REGISTRANDO PELICULAS A ARCHIVO DE REGISTRO DE PELICULAS:...\n\n");
		addMovie();
		system("cls");
		menu();
		break;

		case 3:
		system("cls");
		printf("\t\t\t\t...:REGISTRANDO HISTORIAL DE PELICULAS A USUARIOS:...\n\n");
		addMovie();
		system("cls");
		menu();break;

		case 4:
		system("cls");
		filmsPerUser();break;

		case 5:
		system("@cls||clear");
		system("cls");
		menu();break;

		case 6:
		system("exit");
		system("@cls||clear");break;

		default :
		printf("\nOpci%cn invalida\n",162);
	}
}

/* ----------------------------------------FUNCION PARA OPCION 1 ------CREACION USUARIOS-------  ---------------------------*/
void addUser(){
	char masUsuario;

	fUsuarios=fopen(registroUsuario,"at");
	if (fUsuarios == NULL) {
		printf("%s","ERROR CREANDO USUARIO");
	}

	fprintf(fUsuarios, "\t...:%s:...\n","DATOS USUARIOS REGISTRADOS" );
	fprintf(fUsuarios,"%s\t","ID");fprintf(fUsuarios,"%s\t","NOMBRE");fprintf(fUsuarios,"%s\t","EDAD");fprintf(fUsuarios,"%s\t\n","PAIS DE ORIGEN");

	do {
		fflush(stdin);
		printf("%s","DIGITE SU ID (U###): ");
		fflush(stdin);
		gets(usuarios.idUsuario);
		printf("%s","DIGITE SU NOMBRE: ");
		fflush(stdin);
		gets(usuarios.nombre);
		printf("%s","DIGITE SU EDAD: ");
		fflush(stdin);
		scanf("%02d",&usuarios.edadUser);
		itoa(usuarios.edadUser,usuarios.edadUsuario,10);
		printf("%s","DIGITE SU PAIS DE ORIGEN: ");
		fflush(stdin);
		gets(usuarios.paisOrigen);
		fflush(stdin);

		fwrite(usuarios.idUsuario,1,strlen(usuarios.idUsuario),fUsuarios);
		fprintf(fUsuarios,"\t");
		fwrite(usuarios.nombre,1,strlen(usuarios.nombre),fUsuarios);
		fprintf(fUsuarios, "\t");
		fwrite(usuarios.edadUsuario,1,strlen(usuarios.edadUsuario),fUsuarios);
		fprintf(fUsuarios, "\t");
		fwrite(usuarios.paisOrigen,1,strlen(usuarios.paisOrigen),fUsuarios);
		fprintf(fUsuarios,"\n");

		printf("\n%cDesea agregar mas usuarios(s/n)?",168);
		fflush(stdin);
		scanf("%c",&masUsuario);

	} while(masUsuario=='s');

	printf("\nUsuarios agregado con exito, redireccionado al menu principal en 2 segundos...\n");
	sleep(2);
	fclose(fUsuarios);
}
/* ------------------------------------------ FUNCION PARA REGISTAR PELICULAS -------------------------------------------------------*/
void addMovie(){
	char masPelicula, twopoint[2]=":";
	char cHora[3],cMinuto[3],cSegundo[3];

	fPeliculas=fopen(registroPelicula,"at");
	if (fPeliculas == NULL) {
		printf("%s","ERROR REGISTRANDO PELICULA");
	}


	fprintf(fPeliculas, "\t...:%s:...\n","DATOS PELICULAS REGISTRADAS" );
	fprintf(fPeliculas,"%s\t","ID");fprintf(fPeliculas,"%s\t","Nombre");fprintf(fPeliculas,"%s\t","Idioma");fprintf(fPeliculas,"%s\t","Genero");
	fprintf(fPeliculas,"%s\t","Ano Emision");fprintf(fPeliculas,"%s\t","Duracion");fprintf(fPeliculas,"%s\t\n","Alta Resolucion");

	do {
		fflush(stdin);
		printf("%s","ID PELICULA (P###): ");
		fflush(stdin);
		gets(peliculas.idPelicula);
		printf("%s","NOMBRE: ");
		fflush(stdin);
		gets(peliculas.nombre);
		printf("%s","IDIOMA: ");
		fflush(stdin);
		gets(peliculas.idioma);
		printf("%s","GENERO: ");
		fflush(stdin);
		gets(peliculas.genero);
		printf("A%cO EMISION: ",165);
		fflush(stdin);
		scanf("%04d",&peliculas.ano);
		itoa(peliculas.ano,peliculas.anoEmision,10);
		printf("DURACION (HH:MM:SS): ");
		fflush(stdin);

		scanf("%d:%d:%d",&peliculas.duracion.hora,&peliculas.duracion.minuto,&peliculas.duracion.segundo); /*si es con typedef*/

		strcpy(cHora,itoa(peliculas.duracion.hora,peliculas.duracionPel,10));
		strcpy(cMinuto,itoa(peliculas.duracion.minuto,peliculas.duracionPel,10));
		strcpy(cSegundo,itoa(peliculas.duracion.segundo,peliculas.duracionPel,10));

		printf("%s","ALTA RESOLUCION (si/no): ");
		fflush(stdin);
		gets(peliculas.resolucion);

		fwrite(peliculas.idPelicula,1,strlen(peliculas.idPelicula),fPeliculas);
		fprintf(fPeliculas,"\t");
		fwrite(peliculas.nombre,1,strlen(peliculas.nombre),fPeliculas);
		fprintf(fPeliculas,"\t");
		fwrite(peliculas.idioma,1,strlen(peliculas.idioma),fPeliculas);
		fprintf(fPeliculas,"\t");
		fwrite(peliculas.genero,1,strlen(peliculas.genero),fPeliculas);
		fprintf(fPeliculas,"\t");
		fwrite(peliculas.anoEmision,1,strlen(peliculas.anoEmision),fPeliculas);
		fprintf(fPeliculas,"\t");
		fwrite(cHora,1,strlen(cHora),fPeliculas);
		fwrite(twopoint,1,strlen(twopoint),fPeliculas);
		fwrite(cMinuto,1,strlen(cMinuto),fPeliculas);
		fwrite(twopoint,1,strlen(twopoint),fPeliculas);
		fwrite(cSegundo,1,strlen(cSegundo),fPeliculas);
		fprintf(fPeliculas,"\t");
		fwrite(peliculas.resolucion,1,strlen(peliculas.resolucion),fPeliculas);
		fprintf(fPeliculas,"\n");


		printf("\n%cDesea agregar mas peliculas(s/n)?",168);
		fflush(stdin);
		scanf("%c",&masPelicula);

	} while(masPelicula=='s');

	printf("\nPeliculas agregadas con exito, redireccionado al menu principal en 2 segundos...\n");
	sleep(2);
	fclose(fPeliculas);
}

/* ------------------------------------- FUNCION PARA OPCION 3 -------HISTORIAL PELICULAS POR USUARIO-------  ------------*/

void historialMovie(){

		fUsuarios=fopen(registroUsuario,"r");
		fPeliculas=fopen(registroPelicula,"r");

	//	fHistorial=fopen(registroHistorial,"at");
/*
do {
	fflush(stdin);
	printf("%s","ID USUARIO (U###): ");
	fflush(stdin);
	gets(historial.idUsuario);
/*	printf("%s","ID USUARIO (U###): ");
	fflush(stdin);
	gets(historial.idUsuario);*/
/* printf("%s\n","Listado de peliculas: " );


} while();*/
}


/* ------------------------------------- FUNCION PARA OPCION 4 -------LISTADO PELICULAS POR USUARIO-------  ------------*/

void filmsPerUser()
{
	int i=0;
	char test[43],*cortador,limit[]="\t", registroUsuario[]="C:\\Users\\Anthony\\Desktop\\PROYECTO FINAL ALGORITMO\\Datos registro de usuarios.txt";  /*cambiar direccion de donde se guarde el archivo .txt*/
	printf("----------------------------------------------\n");
	printf("   Listado Pel%cculas Vistas Usuario/G%cnero\n",161,130);
	printf("----------------------------------------------\n");
	/*printf("\t%s\t%s\t%s\t%s\tTotal\n");*/
	printf("Usuario --------------------------------------\n");
	if ((fUsuarios = fopen(registroUsuario,"r"))==NULL)
	{
		printf("Error accediendo al archivo.\n");
	}
	while(fgets(test,43,fUsuarios)!=NULL)
	{
		/*fscanf(fUsuarios,"%[^\n]", test);*/
		cortador=strtok(test,limit);
		while(cortador != NULL)
		{
			if (i==0)
			{
				strcpy(usuarios.idUsuario,cortador);
			}
			else if (i==1)
			{
				strcpy(usuarios.nombre,cortador);
			}
			else if (i==2)
			{
				strcpy(usuarios.edadUsuario,cortador);
			}
			else if (i==3)
			{
				strcpy(usuarios.paisOrigen,cortador);
			}
			cortador = strtok(NULL,limit);
			i++;
		}
		i=0;
		printf("%3s\n", usuarios.nombre);
	}


	fclose(fUsuarios);
}
