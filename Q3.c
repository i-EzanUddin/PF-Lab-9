#include <stdio.h>

void temp1(){
	printf("HEAT! Avoid getting out of home.\n");
}
void temp2(){
	printf("COLD!\n");
}
void temp3(){
	printf("Chill\n");
}
void temp4(){
	printf("Normal Temperature\n");
}

int main(){
	float temp;
	
	printf("Enter the current temperature(in Celcius) in your room: ");
	scanf("%f",&temp);
	if(temp > 35){
		temp1();
	}
	else if(temp < 10){
		temp2();
	}
	else if(temp > 15 && temp < 25){
		temp3();
	}
	else{
		temp4();
	}
	return 0;
}
