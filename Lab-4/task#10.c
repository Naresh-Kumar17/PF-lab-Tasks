#include<stdio.h>
#include<stdlib.h>
int main(){
	int AkhlaqManners,HonestyTrustworthiness,PrayerRegularity,
	Fasting,ZakatCharity,SocialBehavior,ConflictSkills;

	printf("-----------------x---------------------x------------\n");
	printf("We are Calculating the Character of a man as per Islam\n");
	printf("-----------------x---------------------x------------\n");

	printf("Enter Akhlaq & Manners range 0-10:  ");
	scanf("%d",&AkhlaqManners);
	// system(cls);
	printf("Enter Honesty &Trustworthiness range 0-10:  ");
	scanf("%d",&HonestyTrustworthiness);
	printf("Enter Prayer Regularity range \n0 for Irregular,\n 1 for Regular: ");
	scanf("%d",&PrayerRegularity);
	printf("Enter Fasting range \n0 for Never,\n1 for Somtimes\n2 for Always : ");
	scanf("%d",&Fasting);
	printf("Enter Zakat & Charity range 0-10:  ");
	scanf("%d",&ZakatCharity);
	printf("Enter Social Behavior range 0-10:  ");
	scanf("%d",&SocialBehavior);
	printf("Enter Conflict Skills range 0-10:  ");
	scanf("%d",&ConflictSkills);
	if (PrayerRegularity == 0) {
    PrayerRegularity = 0;
	} else {
    PrayerRegularity = 10;
	}

	if (Fasting == 0) {
    Fasting = 0;
	} else if (Fasting == 1) {
    Fasting = 5;
	} else {
    Fasting =10;
	}

		system("cls");
		printf("-----------------x---------------------x------------\n");
		printf("Character of a man as per Islam\n");
		printf("-----------------x---------------------x------------\n");

	float CharacterIndex= (AkhlaqManners * 2.5)+(HonestyTrustworthiness*2.0)+(PrayerRegularity*1.0)+(Fasting*1.5)+(ZakatCharity*1.0)+(SocialBehavior*1.0)+(ConflictSkills*1.0);



	if(CharacterIndex>=85&&CharacterIndex<=100){
		printf("Character: Excellent Muslim Character. \n");
		printf("Remarks: Role Mode for society");
		return 0;
	}else if(CharacterIndex>=70&&CharacterIndex<85){
		printf("Character: Good Muslim Character. \n");
		printf("Remarks: Practicing Believer.");
		return 0;
	}else if(CharacterIndex>=50&&CharacterIndex<70){
		printf("Character: Average Muslim Character. \n");
		printf("Remarks: Needs minor improvement.");
		return 0;
	}else if(CharacterIndex>=30&&CharacterIndex<50){
		printf("Character: Needs Improvement. \n");
		printf("Remarks: Work on Akhlaq and Ibadad.");
		return 0;
	}else if(CharacterIndex<30){
		printf("Character: Weak Character. \n");
		printf("Remarks: Require serious guidance");
		return 0;
	}else{
		printf("Invalid Input");
	}
return 0;
	
	
}

