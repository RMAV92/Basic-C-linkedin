#include <stdio.h>
#define PRECIO_HORAS_EXTRA 60
#define BONIFICACION_DEPARTAMENTO_A 2750

int anioActual= 2020;

float calcularSueldoAnual(float ingresosMensualesDuranteUnAnio[]);

int main(){

  int edad,anioNacimiento,horasExtraTrabajadas,haRealizadoHorasExtra;
  float sueldoAnual, totalHorasExtraAPagar,ingresosMensualesDuranteUnAnio[12],sueldoTotalAnual;
  char departamento;

  printf("\n\n A continuación vamos a pedirle algunos datos personales:\n\n");
  printf("¿Que edad tiene?:");
  scanf("%d", &edad);

  for (int mes = 0; mes < 12; mes++){
    printf("¿Cual es su sueldo para el mes %d?:", mes+1);
    scanf("%f", &ingresosMensualesDuranteUnAnio[mes]);
  }

  printf("¿A que departamento pertenece?:");
  scanf(" %c", &departamento);

  printf("¿Cuantas horas extra has trabajado este año?: ");
  scanf("%d", &horasExtraTrabajadas);

  anioNacimiento = anioActual - edad;
  totalHorasExtraAPagar = horasExtraTrabajadas * PRECIO_HORAS_EXTRA;
  haRealizadoHorasExtra = totalHorasExtraAPagar;

  sueldoAnual = calcularSueldoAnual(ingresosMensualesDuranteUnAnio);
  
  if(departamento == 'A' || departamento == 'a'){
      sueldoTotalAnual = sueldoAnual + BONIFICACION_DEPARTAMENTO_A;
  }

  printf("¡Gracias por confiar en este programa! A continuacion le mostraremos los calculos realizados\n");
  printf("-Su año de nacimiento fue :%d\n",anioNacimiento);
  printf("-Tu sueldo total anual(incluyendo bonificaciones) es de : %.2f\n", sueldoTotalAnual);
  printf("-Además, se abonarán %2.f€ en concepto de horas extra trabajadas\n", totalHorasExtraAPagar);
  return 0;
}

float calcularSueldoAnual(float ingresosMensualesDuranteUnAnio[]){

  float sueldoAnual=0;
  for(int mes=0; mes < 12 ; mes++)
  {
    sueldoAnual = sueldoAnual + ingresosMensualesDuranteUnAnio[mes];
  }
}