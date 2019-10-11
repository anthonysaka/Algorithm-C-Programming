
/*LIBRERIAS UTILIZADAS*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <unistd.h>

/* PROTOTIPOS DE LAS FUNCIONES*/
void menu();
void filmsPerUser();
void addUser();
void addMovie();
void historialMovie();
void films(char idUsuario[]);
void pushFilm(char idUsuario[], char idPelicula[], char genero[]);
void categorySupport(char nombreP[],char cat[]);
void nose();
void categoryAc();
void categoryD();
void categoryT();
void categoryA();
void categoryO();
void categoryAccion(char nombreP[],char cat[]);
void categoryDrama(char nombreP[],char cat[]);
void categoryAventura(char nombreP[],char cat[]);
void categoryOtro(char nombreP[],char cat[]);
void categoryTerror(char nombreP[],char cat[]);

/*ESTRUCTURA PARA CREAR USUARIO*/
struct datosUsuarios{
	char idUsuario[5];
	char nombre[15];
	int edadUser;
	char edadUsuario[4];/*para almacenar la conversion*/
	char paisOrigen[30];
}usuarios;

/*ESTRUCTURA PARA VARIABLE DURACION PELICULA*/
typedef struct tiempoPelicula{
	int hora,minuto,segundo;
}duracionPelicula;

/*ESTRUCTURA PARA CREAR PELICULAS*/
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

/*ESTRUCTURA PARA CREAR HISTORIAL USUARIO*/
struct historialUsuario{
	char idUsuario[5];
	char idPelicula[5];
	char completada[2];
}historial;

/**DECLARON DE ARCHIVOS - PUNTEROS*/
FILE *fUsuarios;
FILE *fPeliculas;
FILE *fHistorial;
FILE *fcat;

    /*DIRECCION DE ARCHIVOS DONDE SE ENCUENTRAN*/
	char registroUsuario[]="C:\\Users\\Anthony\\Desktop\\PROYECTO FINAL ALGORITMO\\Datos registro de usuarios.txt";  /*cambiar direccion de donde se guarde el archivo .txt*/
	char registroPelicula[]="C:\\Users\\Anthony\\Desktop\\PROYECTO FINAL ALGORITMO\\Datos registro de pelicula.txt";  /*cambiar direccion de donde se guarde el archivo .txt*/
	char registroHistorial[]="C:\\Users\\Anthony\\Desktop\\PROYECTO FINAL ALGORITMO\\Historial de usuarios.txt"; /*cambiar direccion de donde se guarde el archivo .txt*/

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
	printf("5.-> Listado Pel%cculas por G%cnero.\n",161,130);
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
		printf("\t\t\t\t...:REGISTRANDO HISTORIAL A ARCHIVO DE REGISTRO DE HISTORIAL:...\n\n");
		historialMovie();
		system("cls");
		menu();
		;break;

		case 4:
		system("cls");
		filmsPerUser();break;

		case 5:
		system("@cls||clear");
		nose();
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
void addUsersupport()
{
	char masUsuario;
	fUsuarios=fopen(registroUsuario,"at");
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
	} while(masUsuario=='s' || masUsuario=='S');

	printf("\nUsuarios agregado con exito, redireccionado al menu principal en 2 segundos...\n");
	sleep(2);
	fclose(fUsuarios);
}

/* VERIFICA SI EL ARCHIVO DE USUARIO EXISTE PARA AGREGAR EL EMCABEZADO*/
void addUser(){

	if (access(registroUsuario, F_OK)!=-1)
	{
		addUsersupport();
	}

	else
	{
		fUsuarios=fopen(registroUsuario,"at");
		fprintf(fUsuarios, "\t...:%s:...\n","DATOS USUARIOS REGISTRADOS" );
		fprintf(fUsuarios,"%s\t","ID");fprintf(fUsuarios,"%s\t","NOMBRE");fprintf(fUsuarios,"%s\t","EDAD");fprintf(fUsuarios,"%s\t\n","PAIS DE ORIGEN");
		fclose(fUsuarios);
		addUsersupport();
	}
}

/*PARA SELECCIONAR UN GENERO DE PELICULA AL MOMENTO DE REGISTRAR PELICULAS*/
void generos()
{
	printf("-----------------------------------------------------------------------\n");
	printf("1.Drama\t\t2.Acci%cn\t3.Terror\t4.Aventura\t5.Otros\n", 162);
	printf("-----------------------------------------------------------------------\n");
}

/* ------------------------------------------ FUNCION PARA REGISTAR PELICULAS -------------------------------------------------------*/
void addMoviesupport()
{
	int opcion=0;
	char masPelicula, twopoint[2]=":";
	char cHora[3],cMinuto[3],cSegundo[3];
	fPeliculas=fopen(registroPelicula,"at");

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
		printf("%s","GENEROS: \n");
		fflush(stdin);
		generos();
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
			strcpy(peliculas.genero,"Drama");
			break;

			case 2:
			strcpy(peliculas.genero,"Accion");
			break;

			case 3:
			strcpy(peliculas.genero,"Terror");
			break;

			case 4:
			strcpy(peliculas.genero,"Aventura");
			break;

			case 5:
			strcpy(peliculas.genero,"Otros");
			break;

			default:
			printf("no selecionaste una opcion valida.\n");
			break;
		}
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

/* VERIFICA SI EL ARCHIVO DE PELICULA EXISTE PARA AGREGAR EL EMCABEZADO*/
void addMovie(){

	if (access(registroPelicula, F_OK) !=-1)
	{
		addMoviesupport();
	}
	else
	{
		fPeliculas=fopen(registroPelicula,"at");
		fprintf(fPeliculas, "\t...:%s:...\n","DATOS PELICULAS REGISTRADAS" );
		fprintf(fPeliculas,"%s\t","ID");fprintf(fPeliculas,"%s\t","Nombre");fprintf(fPeliculas,"%s\t","Idioma");fprintf(fPeliculas,"%s\t","Genero");
		fprintf(fPeliculas,"%s\t","Ano Emision");fprintf(fPeliculas,"%s\t","Duracion");fprintf(fPeliculas,"%s\t\n","Alta Resolucion");
		fclose(fPeliculas);
		addMoviesupport();
	}


}

/* ------------------------------------- FUNCION PARA OPCION 3 -------HISTORIAL PELICULAS POR USUARIO-------  ------------*/
void historialMovieSupport()
{
	int i=0;
	fUsuarios=fopen(registroUsuario,"r");
	fPeliculas=fopen(registroPelicula,"r");
	fHistorial=fopen(registroHistorial,"at");
	do {
		fflush(stdin);
		printf("%s","ID USUARIO (U###): ");
		fflush(stdin);
		gets(historial.idUsuario);
		printf("%s\n","Listado de peliculas: " );
		films(historial.idUsuario);
		sleep(2);

	} while(i>0);
	printf("\nHistorial del usuario %s agregado con exito, redireccionado al menu principal en 2 segundos...\n",historial.idUsuario);
	sleep(2);
	fclose(fUsuarios);
	fclose(fPeliculas);
	fclose(fHistorial);

}

/* VERIFICA SI EL ARCHIVO DE HISTORIAL EXISTE PARA AGREGAR EL EMCABEZADO*/
void historialMovie()
{

	if (access(registroHistorial, F_OK) !=-1)
	{
		historialMovieSupport();
	}
	else
	{
		fHistorial=fopen(registroHistorial,"at");
		fprintf(fHistorial, "\t...:%s:...\n","Datos peliculas registradas" );
		fprintf(fHistorial,"%s\t","ID Usuario");
		fprintf(fHistorial,"%s\t","ID Pelicula");
		fprintf(fHistorial,"%s\n","Genero");
		fclose(fHistorial);
		historialMovieSupport();
	}

}

/* ------------------------------------- FUNCION PARA OPCION 4 -------LISTADO PELICULAS POR USUARIO-------  ------------*/

void filmsPerUser()
{
	int i=0,c=0,lines=0;
	char p[100],*cortador,limit[]="\t",drama[6]="Drama",accion[7]="Accion",terror[7]="Terror",aventura[9]="Aventura",otros[6]="Otros";
	printf("-------------------------------------------------\n");
	printf("   Listado Pel%cculas Vistas Usuario/G%cnero\n",161,130);
	printf("-------------------------------------------------\n");
	printf("\t%7s %7s %7s %7s %7s   Total\n",drama,accion,terror,aventura,otros);
	printf("Usuario -----------------------------------------\n");
	if ((fUsuarios = fopen(registroUsuario,"r"))==NULL)
	{
		printf("Error accediendo al archivo.\n");
	}
	fUsuarios=fopen(registroUsuario,"r");
	while(!feof(fUsuarios))
	{
		i = fgetc(fUsuarios);
		if(i == '\n')
		{
			lines++;
		}
		if (lines == 2)
		{

			while(fgets(p,43,fUsuarios)!=NULL)
			{
				cortador=strtok(p,limit);
				while(cortador != NULL)
				{
					if (c==0)
					{
						strcpy(usuarios.idUsuario,cortador);
					}
					else if (c==1)
					{
						strcpy(usuarios.nombre,cortador);
					}
					else if (c==2)
					{
						strcpy(usuarios.edadUsuario,cortador);
					}
					else if (c==3)
					{
						strcpy(usuarios.paisOrigen,cortador);
					}
					cortador = strtok(NULL,limit);
					c++;
				}
				c=0;
				printf("%7s %5s %6s %7s %9s %7s\n", usuarios.nombre,"1","2","3","4","21");
			}
			fclose(fUsuarios);
		}
	}
}


void films(char idUsuario[]){
	int i=0,c=0,lines=0;
	char test[100],*cortador,limit[]="\t",opcion,r[5];
	strcpy(r,idUsuario);
	if ((fHistorial = fopen(registroHistorial,"r"))==NULL)
	{
		printf("Error accediendo al archivo.\n");
	}
	fPeliculas=fopen(registroPelicula,"r");
	while(!feof(fPeliculas))
	{
		i = fgetc(fPeliculas);
		if(i == '\n')
		{
			lines++;
		}
		if (lines == 2)
		{

			while(fgets(test,100,fPeliculas)!=NULL)
			{
				cortador=strtok(test,limit);
				while(cortador != NULL)
				{
					if (c==0)
					{
						strcpy(peliculas.idPelicula,cortador);
					}
					else if (c==1)
					{
						strcpy(peliculas.nombre,cortador);
					}
					else if (c==3)
					{
						strcpy(peliculas.genero,cortador);
					}
					cortador = strtok(NULL,limit);
					c++;
				}
				c=0;
				printf("%3s || %3s----->", peliculas.nombre, peliculas.genero);
				fflush(stdin);
				printf("Ha visto esta pelicula S/N\n");
				fflush(stdin);
				scanf("%c",&opcion);
				if (opcion =='S' || opcion == 's')
				{
					pushFilm(r,peliculas.nombre,peliculas.genero);
				}
			}
			fclose(fPeliculas);
		}
	}
	fclose(fUsuarios);
}


void pushFilm(char idUsuario[], char idPelicula[], char genero[])
{
	FILE *push;

	push = fopen(registroHistorial,"at");

	fprintf(push, "%s\t%s\t%s\n", idUsuario,idPelicula,genero);
	fclose(push);
}


void nose(){

	printf("-------------------------------------------------\n");
	printf("   Listado Pel%cculas Por G%cnero\n",161,130);
	printf("-------------------------------------------------\n");
	printf("\n");
	printf("Acci%cn:\n",162);
	printf("------------------------\n");
	categoryAc();

	printf("\n");
	printf("Drama:\n",162);
	printf("------------------------\n");
	categoryD();

	printf("\n");
	printf("Terror:\n",162);
	printf("------------------------\n");
	categoryT();

	printf("\n");
	printf("Aventura:\n",162);
	printf("------------------------\n");
	categoryA();

	printf("\n");
	printf("Otros:\n",162);
	printf("------------------------\n");
	categoryO();

}

void categoryAccion(char nombreP[],char cat[])
{
	char accion[7]="Accion";

	if(strcmp(cat,accion)==0)
	{
		printf("  + %s \n", nombreP);
	}
}

void categoryDrama(char nombreP[],char cat[])
{

	char drama[6]="Drama";

	if(strcmp(cat,drama)==0)
	{
		printf("  + %s \n", nombreP);
	}
}

void categoryTerror(char nombreP[],char cat[])
{
	char terror[7]="Terror";

	if(strcmp(cat,terror)==0)
	{
		printf("  + %s \n", nombreP);
	}
}

void categoryAventura(char nombreP[],char cat[])
{

	char aventura[9]="Aventura";

	if(strcmp(cat,aventura)==0)
	{
		printf("  + %s \n", nombreP);
	}
}

void categoryOtro(char nombreP[],char cat[])
{

	char otros[6]="Otros";

	if(strcmp(cat,otros)==0)
	{
		printf("  + %s \n", nombreP);
	}
}


	void categoryD()
	{
		int c=0,i=0,lines=0;
		char p[100],*cortador,limit[]="\t",cate[20];
		fcat=fopen(registroPelicula,"r");

		while(!feof(fcat))
		{
			i = fgetc(fcat);
			if(i == '\n')
			{
				lines++;
			}
			if (lines == 2)
			{

				while(fgets(p,43,fcat)!=NULL)
				{
					cortador=strtok(p,limit);
					while(cortador != NULL)
					{
						if (c==1)
						{
							strcpy(peliculas.nombre,cortador);
						}
						if (c==3)
						{
							categoryDrama(peliculas.nombre,cortador);

						}
						cortador = strtok(NULL,limit);
						c++;
					}
					c=0;
				}

			}
		}
	}

	void categoryT()
	{
		int c=0,i=0,lines=0;
		char p[100],*cortador,limit[]="\t",cate[20];

		fcat=fopen(registroPelicula,"r");

		while(!feof(fcat))
		{
			i = fgetc(fcat);
			if(i == '\n')
			{
				lines++;
			}
			if (lines == 2)
			{

				while(fgets(p,43,fcat)!=NULL)
				{
					cortador=strtok(p,limit);
					while(cortador != NULL)
					{
						if (c==1)
						{
							strcpy(peliculas.nombre,cortador);
						}
						if (c==3)
						{
							categoryTerror(peliculas.nombre,cortador);
						}
						cortador = strtok(NULL,limit);
						c++;
					}
					c=0;
				}
			}
		}
	}

	void categoryA()
	{
		int c=0,i=0,lines=0;
		char p[100],*cortador,limit[]="\t",cate[20];
		fcat=fopen(registroPelicula,"r");

		while(!feof(fcat))
		{
			i = fgetc(fcat);
			if(i == '\n')
			{
				lines++;
			}
			if (lines == 2)
			{

				while(fgets(p,43,fcat)!=NULL)
				{
					cortador=strtok(p,limit);
					while(cortador != NULL)
					{
						if (c==1)
						{
							strcpy(peliculas.nombre,cortador);
						}
						if (c==3)
						{
							categoryAventura(peliculas.nombre,cortador);

						}
						cortador = strtok(NULL,limit);
						c++;
					}
					c=0;
				}

			}
		}
	}


void categoryAc()
{
	int c=0,i=0,lines=0;
	char p[100],*cortador,limit[]="\t",cate[20];

	fcat=fopen(registroPelicula,"r");

	while(!feof(fcat))
	{
		i = fgetc(fcat);
		if(i == '\n')
		{
			lines++;
		}
		if (lines == 2)
		{

			while(fgets(p,43,fcat)!=NULL)
			{
				cortador=strtok(p,limit);
				while(cortador != NULL)
				{
					if (c==1)
					{
						strcpy(peliculas.nombre,cortador);
					}
					if (c==3)
					{
						categoryAccion(peliculas.nombre,cortador);
					}
					cortador = strtok(NULL,limit);
					c++;
				}
				c=0;
			}
		}
	}
}

void categoryO()
{
	int c=0,i=0,lines=0;
	char p[100],*cortador,limit[]="\t",cate[20];
	fcat=fopen(registroPelicula,"r");

	while(!feof(fcat))
	{
		i = fgetc(fcat);
		if(i == '\n')
		{
			lines++;
		}
		if (lines == 2)
		{

			while(fgets(p,43,fcat)!=NULL)
			{
				cortador=strtok(p,limit);
				while(cortador != NULL)
				{
					if (c==1)
					{
						strcpy(peliculas.nombre,cortador);
					}
					if (c==3)
					{
						categoryOtro(peliculas.nombre,cortador);

					}
					cortador = strtok(NULL,limit);
					c++;
				}
				c=0;
			}
			fclose(fcat);
		}
	}
}
