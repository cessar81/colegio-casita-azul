#include <stdio.h>
int main()
{
	long long IDdestudiante;
	long long IDestudiantes[] = {57389123456,57389123925,57389123352};
	double listanotas1[] = {5.0, 4.5, 4.4, 3.9, 5.0};
	double listanotas2[] = {3.5,3.5,4.6,2.3,3.0};
	double listanotas3[] = {0.5,1.0,3.2,1.5,4.0};
	int num_IDestudiantes = sizeof(IDestudiantes) / sizeof(IDestudiantes[0]);
	
	printf("Estimado estudiante, para consultar sus notas y el promedio obtenido durante el semestre, digite el ID otorgado por el colegio: ");
	
	while (1){
			if(scanf("%lld", &IDdestudiante)==1) {
				
				int i;
				int codigo=-1;
				for (i=0; i<num_IDestudiantes;i++){
					if(IDdestudiante==IDestudiantes[i]){
						codigo=i;
						break;
					}
				}
				
				if (codigo != -1){
                double *notas;
                if (IDdestudiante == 57389123456) {
                    notas = listanotas1;
                } else if (IDdestudiante == 57389123925) {
                    notas = listanotas2;
                } else {
                    notas = listanotas3;
                }

				char *nombre;
				if (IDdestudiante == 57389123456){
					nombre="Cesar Orjuela";
				} else if (IDdestudiante == 57389123925){
					nombre="Antonio Susa";
				} else {
					nombre="Sofia Castro";
				}
				
				double promedio =0.0;

                printf("Notas de el/la estudiante '%s' con el ID '%lld':\n", nombre, IDdestudiante);
                for (i = 0; i < 5; i++) {
                	promedio += notas[i];
                    printf("Nota %d: %.1lf\n", i + 1, notas[i]);
                }
                
                promedio /=5;
                printf("Promedio obtenido: %.2lf\n", promedio);

			break;
			

				} else {			
					printf("El ID que proporcionaste no se encuentra en el sistema: ");
			}
			} else {
			printf("El ID que proporcionaste no se encuentra en el sistema: ");
			while (getchar() !='\n');
			}
	}
	return 0;	 
}	
