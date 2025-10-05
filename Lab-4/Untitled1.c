#include<stdio.h>
int main(){
	int i=3,j=7,k=5;
	if(i<j){
		if(j<k){
			i=j;
			printf("%d %d %d \n",i,j,k);
		printf("inside first if inside if");
		}
	}else{
		j=k;
		if(j>k){
			j=i;
				printf("%d %d %d \n",i,j,k);
		printf("inside else inside if \n");
		}else{
			i=k;
		printf("%d %d %d \n",i,j,k);
		printf("inside else inside else\n");
		}
	}
	printf("nothing maatch");
	return 0;
}


	
