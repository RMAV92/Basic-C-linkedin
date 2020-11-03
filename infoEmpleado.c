#include <stdio.h>
#define PRECIO_HORAS_EXTRA 60;
#define BONIFICACION_DEPARTAMENTO_A 2750;

int anioActual= 2020;

int main(){

  int edad,anioNacimiento,horasExtraTrabajadas,haRealizadoHorasExtra,sueldoTotalAnual;
  float sueldoAnual, totalHorasExtraAPagar;
  char departamento;


  printf("\n\n A continuación vamos a pedirle algunos datos personales:\n\n");
  printf("¿Que edad tiene?:");
  scanf("%d", &edad);

  printf("¿Cual es su sueldo anual?:");
  scanf("%f", &sueldoAnual);

  printf("¿A que departamento pertenece?:");
  scanf(" %c", &departamento);

  printf("¿Cuantas horas extra has trabajado este año?: ");
  scanf("%d", &horasExtraTrabajadas);

  anioNacimiento = anioActual - edad;
  totalHorasExtraAPagar = horasExtraTrabajadas * PRECIO_HORAS_EXTRA;
  haRealizadoHorasExtra = totalHorasExtraAPagar;

  if(departamento == 'A' || departamento == 'a'){sueldoTotalAnual = sueldoAnual + BONIFICACION_DEPARTAMENTO_A;}

  return 0;

}