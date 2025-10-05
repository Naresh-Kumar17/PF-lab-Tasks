#include<stdio.h>;
int main(){
	int RainFall=1445,RiverFlow=5450;
	
	if(RainFall<50 && RiverFlow<200){
		printf("Low Risk");
		return 0;
	}else if(RainFall>50 && RainFall<100 && RiverFlow>200 && RiverFlow<500){
		printf("Moderate Risk");
		return 0;
	}else if(RainFall>100 && RainFall<150 && RiverFlow>500 && RiverFlow<800){
		printf("High Risk");
		return 0;
	}else if(RainFall>150 && RiverFlow>800 ){
		printf("Severe Risk  -Evacuate!");
	}
	return 0;
}
