#include <stdio.h>
#include <math.h>
void cargar(int v[2]);
float distancia(int v1[2],int v2[2]);
int main()
{
	int v1[2];int v2[2];
	cargar(v1);
	cargar(v2);
	float de=distancia(v1,v2);
	printf("Distancia es %f",de);
	return 0;
}
void cargar(int v[2])
{
	int i;
	for(i=0;i<2;i++){
	printf("Introduce las cordenadas %d \n",i+1);
	scanf("%d",&v[i]);
	}
}
float distancia(int v1[2],int v2[2])
	{
	int resta1=v2[0]-v1[0];
	int resta2=v2[1]-v1[1];
	float raiz=sqrt(pow(resta1,2)+pow(resta2,2));
return raiz;
}
