#include <stdio.h>

int main(){
	int num[3][4];
	int i,j,pick;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			scanf("%d",&num[i][j]);
		}
	}
	int *row1 = &num[0][0];
	printf("There are 4 numbers in row 1 and pick (1-4) for specfic number at row 1.\n");
	scanf("%d",&pick);
	if(pick > 4 || pick < 1){
		while(pick != 1 || pick != 2 || pick != 3 || pick != 4){
			printf("Pick number from 1 to 4.\n");
			scanf("%d",&pick);
			break;
		}
	}
	for(i = 0; i < 4; i++){
		if(i == (pick - 1)){
			i = pick - 1;
			printf("The number at row 1 column %d is %d.\n",i+1, (row1[i]));
			break;
		}
	}
	int *row2 = &num[1][0];
	printf("Pick any number from [-3,4] to print value.\n");
	scanf("%d",&pick);
	for(i = 0; i < 4; i++){
		if(pick < 0 && pick > -4){
			printf("The value at index %d is %d\n",pick,row2[pick]);
			break;
		}
		else if(pick > -1 && pick == i){
			printf("The value at index %d of row 1 is %d\n",i,row2[i]);
			break;	
		}
	}
	int *p = &num[0][0];
	for(i = 0; i < 12; i++){
		if(p[i] % 3 == 0){
			printf("The value divisible by 3 is %d.\n",p[i]);
		}
	}
	int *row3 = &num[0][0];
	printf("The last value is %d\n",row3[11]); 
	return 0;
}
