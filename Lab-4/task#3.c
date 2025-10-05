#include<stdio.h>
int main (){
	int WaterLevel;
	printf("Enter the water level:");
	scanf("%d",&WaterLevel);
	if(WaterLevel>6){
		printf("Evacuation Required");
	return 0;
	}else if(WaterLevel<6 && WaterLevel>4){
		printf("Medium Relief Package");
		return 0;
	}else if(WaterLevel<4 && WaterLevel>2){
		printf("Small Relief Package");
		return 0;
	}else{
		printf("No Relief Required!");
	}
	return 0;
}
