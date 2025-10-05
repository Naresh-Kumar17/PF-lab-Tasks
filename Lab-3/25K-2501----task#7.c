    #include<stdio.h>
    int main(){
    int name[1000],age,qualification[1000],weight;
    float height;
    printf("Enter Name: ");
    scanf("%s",name);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter weight: ");
    scanf("%d",&weight);
    printf("Enter Height: ");
    scanf("%f",&height);
    printf("Enter Qualification: ");
    scanf("%s",qualification);
    printf(" Name: %s \n Age: %d years \n Weight: %d  Kg \n Height: %f feet \n Qualification: %s ",
     name,age,weight,height,qualification);
    return 0;

   }
