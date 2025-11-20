
#include<stdio.h>
int main(){
	float num1;
	float num2;
	float sum;
        printf("Enter Two real numbers\n");
        scanf("%f %f", &num1,&num2);
        sum = num1 + num2;
	printf("The sum is %.2f\n", sum);
        return 0;
}
