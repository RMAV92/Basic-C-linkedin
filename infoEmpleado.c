#include <stdio.h>
int anioActual= 2020;
#define PRECIO_HORAS_EXTRA 60;
int main(){

  int edad;
  int anioNacimiento;
  int horasExtraTrabajadas;
  int haRealizadoHorasExtra;
  
  float sueldoAnual;
  float totalHorasExtraAPagar;
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


  return 0;

}