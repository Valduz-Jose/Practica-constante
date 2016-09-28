#include <stdio.h>
#include <stdlib.h>
#define constante 0.001
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 float kilobyt,bytes;
	 int continuar;
	 system("cls");
	 system("color F0");
	 fflush(stdin);
	 do{
	 	printf("\t\t\t\tConvertidor de Bytes a Kilobytes\t\t\t\t");
		printf("\n\n\t\tIntrodusca los bytes para llevar a kilobyte= ");
		scanf("%f",&bytes);
		kilobyt=bytes*constante;
		printf("\n\t\tKilobytes= %.3f",kilobyt);	
		printf("\n\n\t\t\tIntrodusca (0) para continuar= ");
		scanf("%d",&continuar);
		system("cls");
	 }while(continuar==0);
	printf("\t\t\t\tConvertidor de Bytes a Kilobytes\t\t\t\t");
	printf("\n\n\t\t\tHASTA LUEGO");
	 
	return 0;
}
