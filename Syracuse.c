//RAMON LEO
//GUILLE-PHOTIN EUGÉNIE

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void fonctionS(int);

int main(){

FILE* out;

int u0;
scanf("%d", &u0);

int i=1;
int umax=0;


int un=u0;

out = fopen("Syracuse.txt","w");

while(un!=1){

	if(un%2==0){ //un est pair
		
		un=un/2;
		fprintf(out,"%d %d\n",i, un);}
	else{
		un=3*un+1;
		fprintf(out,"%d %d\n",i, un);}
	
	if (un>umax){
		umax=un;}
	
	i++;
	
	}
	
fclose(out);

printf("%d\n",umax);

fonctionS(u0);

}

void fonctionS(int u0){
int i=0;
int umax=0;
int un=u0;


while(un!=1){
	i++;
	if(un%2==0){
		un=un/2;}
	else{
		un=3*un+1;}
	if (un>umax){
		umax=un;}	
	
	}

printf("Altitude : %d\n",umax);
printf("Temps de vol : %d\n",i);





}
