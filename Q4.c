#include <stdio.h>

int sumAmount(int Amount[],int size){
	int finalAmount = 0;
	int i;
	for(i = 0; i < size; i++){
		finalAmount = finalAmount + Amount[i];
	}
	return finalAmount;
}
	float sumWeight(float Weight[],int size){
	int i;
	float finalWeight = 0;
	 for(i = 0; i < size; i++){
		finalWeight = finalWeight + Weight[i];
	}
	return finalWeight;
}
float shipment(int charges,float weight){
	float finalAmount;
	if(charges > 100){
		printf("Congrats! There is no shipment charges for customer who's total amount for itmes is more than $100.\n");
		finalAmount = charges;
	}
	else{
		if(weight < 2){
			printf("$10 dollors extra for shipment because the weight of items are %fkg.\n",weight);
			finalAmount = 10 + charges;
		}
		else if(weight >= 2 && weight <= 5){
			printf("$15 dollors extra for shipment because the weight of items are %fkg.\n",weight);
			finalAmount = 15 + charges;
		}
		else if(weight > 5){
			printf("$20 dollors extra for shipment because the weight of items are %fkg.\n",weight);
			finalAmount = 20 + charges;
		}
		else{
			printf("No Charges.\n");
		}
	}
	return finalAmount;
}


int main(){
	
	int items,i,j;
	
	printf("How many itmes did you buy?\n");
	scanf("%d",& items);
	
	int amount[items];
	float weight[items];
	
	printf("Enter amount of your items.\n");
	for(i = 0; i < items; i++){
		printf("Amount of Item %d: $",i+1);
		scanf("%d",&amount[i]);
	}
	printf("Enter weight[kg] of your items.\n");
	for(i = 0; i < items; i++){
		printf("Weight of Item %d: ",i+1);
		scanf("%f",&weight[i]);
	}
							   //price,size of items
	int totatAmount = sumAmount(amount,items);
	printf("Your total Amount: $%d\n",totatAmount);
							//Total weight
							
	float totalWeight = sumWeight(weight,items);
	printf("Your Items Weight: %3fkg\n",totalWeight);
	
	printf("Extra charges for shipment.\n");
	float ShipmentCharge = shipment(totatAmount,totalWeight);
	printf("Your Final Charges with shipment: %3f.\n",ShipmentCharge);
	return 0;
}
