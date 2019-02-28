#include<stdio.h>
main()
{
	int m1,m2,m3;
	printf("Enter marks in 3 subjects : ");
	scanf("%d\n%d\n%d",&m1,&m2,&m3);
	int sum= m1+m2+m3;
	float avg=sum/3;float rem=sum%3;
	printf("The sum is: %d\n The average is: %f",sum,(avg+rem));
}
