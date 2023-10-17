#include<stdio.h>
void main(){
    float package1[0];
    float package2[1];
    float package3[2];
    float package4[3];
    float package5[4];

    int sum;

    printf("enter data\n");
    scanf("%f",&package1[0]);
    scanf("%f",&package2[1]);
    scanf("%f",&package3[2]);
    scanf("%f",&package4[3]);
    scanf("%f",&package5[4]);
    
    sum = package1[0]+package2[1]+package3[2]+package4[3]+package5[4] ;

    printf("friend 1 package:%f\n",package1[0]);
    printf("friend 2 package:%f\n",package2[1]);
    printf("friend 3 package:%f\n",package3[2]);
    printf("friend 4 package:%f\n",package4[3]);
    printf("friend 5 package:%f\n",package5[4]);
    printf("sum :%d\n",sum);


}