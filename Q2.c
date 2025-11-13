#include <stdio.h>

void mark(float Marks[3]){
	int i;
	for(i = 0; i < 3; i++){
		scanf("%f",&Marks[i]);
		if(Marks[i] < 0 || Marks[i] > 100){
			printf("Marks should be 0-100\n");
			scanf("%f",&Marks[i]);
		}
	}
}
float Avg(float Marks[3]){
	float avg;
	float sum = 0;
	int i;
	for(i = 0; i < 3; i++){
		sum = sum + Marks[i];
	}  
	avg = sum / 3;
	return avg;
}
void Grade(float marks[3],float avg){
	int i;
	for(i = 0; i < 3; i++){
		if(avg < 50){
			printf("Fail! beacuse average of all 3 subjects is %3f.\n",avg);
			break;
		}
		else if(marks[i] < 40){
			printf("Fail! due to %3f mark in Subject %d\n",marks[i],i+1);	
		}
		else{
			printf("Pass! because %3f mark in Subject %d\n",marks[i],i+1);
		}	
	}
}
								//Main func
int main(){
	float marks[3];
	float avg;
	int i;
	
	printf("Enter marks for three subjects.\n");
	mark(marks);
	for(i = 0; i < 3; i++){
		printf("Subject %d's marks %3f",i+1, marks[i]);
		printf("\n");
	} 
	avg = Avg(marks);
	printf("The average is %3f\n",avg);
	printf("Checking whether a Student is pass or fail.\n");
	Grade(marks,avg);
	
	return 0;
}
