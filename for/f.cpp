#include<stdio.h>

int main(){
 float nota1,nota2,nota3;
 int aprobo_todo = 0, aprobo1 = 0, aprobo_ultimo = 0, i;

 for(i = 1; i <= 5; i++){
   printf("ALUMNO %d: \n",i);
   printf("\n ingrese la nota del examen 1: "); scanf("%f",&nota1);
   printf("\n ingrese la nota del examen 2: "); scanf("%f",&nota2);
   printf("\n ingrese la nota del examen 3: "); scanf("%f",&nota3);

   if(nota1>=6 && nota2>=6 && nota3>=6){
    aprobo_todo++;
    }
   if(nota1>=6 || nota2>=6 || nota3>=6){
    aprobo1++;
    }
   if(nota3 >= 6 && nota2<6 && nota1<6){
    aprobo_ultimo++;
    }
  }
  printf("Alumnos que aprobaron todo: %d \n",aprobo_todo);
  printf("Alumnos que aprobaron al menos uno: %d \n",aprobo1);
  printf("Alumnos que aprobaron solo el ultimo: %d \n",aprobo_ultimo);

 return 0;
}
