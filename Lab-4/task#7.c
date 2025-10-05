#include<stdio.h>
int main(){
	int ElectricUnit;
	printf("Enter your electricity Unit: ");
	scanf("%d",&ElectricUnit);
	if(ElectricUnit<=100){
		printf("Your electricity bill is: %d",ElectricUnit*10);
	}else if(ElectricUnit>101 &&ElectricUnit<=300){
		printf("Your electricity bill is: %d",ElectricUnit*15);
	}else if(ElectricUnit>301 && ElectricUnit<=500){
		printf("Your electricity bill is: %d",ElectricUnit*20);
	}else if(ElectricUnit>=500){
		printf("Your electricity bill is: %d",ElectricUnit*25);
	}
	return 0;
}
