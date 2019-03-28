/* 
López Monroy Luis Daniel
Cuenta: 311309649
*/
   
#include "definiciones.h"

float triangulo(float base, float altura){
  return formulaTriangulo(base,altura);
}

float circulo(float radio){
  return formulaCirculo(radio);
}

float cuadrado(float lado){
  return formulaCuadrado(lado);
}

float rectangulo(float base, float altura){
  return formulaRectangulo(base,altura);
}

int main (int argc, char ** argv){	
  if(argc > 4 && argc < 3){	
	printf("Argumentos inválidos\n");
	printf("Revisa las siguientes opciones:\n");
	printf("Circulo: -c <radio>\n");
	printf("Cuadrado: -dc <lado>\n");
	printf("Triangulo: -t <base> <altura>\n");
	printf("Rectangulo: -dr <base> <altura>\n");
		
  } else if (argc == 3){
	if(strcmp(argv[1], "-c") == 0){
	  printf("** Area del circulo: %f \n", circulo(atoi(argv[2])));
	} else if (strcmp(argv[1], "-dc") == 0){
	  printf("** Area del cuadrado: %f \n", cuadrado(atoi(argv[2])));
	} else{
	  printf("Argumentos inválidos\n");
	  printf("Revisa las siguientes opciones:\n");
	  printf("Circulo: -c <radio>\n");
	  printf("Cuadrado: -dc <lado>\n");
	  printf("Triangulo: -t <base> <altura>\n");
	  printf("Rectangulo: -dr <base> <altura>\n");			
	}
  } else if (argc == 4){
	if(strcmp(argv[1], "-t") == 0){
	  printf("** Area del triangulo: %f \n", triangulo(atoi(argv[2]), atoi(argv[3])));
	} else if (strcmp(argv[1], "-dr") == 0){
	  printf("** Area del rectangulo: %f \n", rectangulo(atoi(argv[2]), atoi(argv[3])));
	} else {	
	  printf("Argumentos inválidos\n");
	  printf("Revisa las siguientes opciones:\n");
	  printf("Circulo: -c <radio>\n");
	  printf("Cuadrado: -dc <lado>\n");
	  printf("Triangulo: -t <base> <altura>\n");
	  printf("Rectangulo: -dr <base> <altura>\n");	
	}
  }  
}
