#include<stdio.h>
main()
{
	int rp,eu,wu,et,wt,at;
	//Roomprice = rp
	//Electric unit = eu
	//Water unit = wu
	//Electric Total = et
	// Water Total = wt
	// All total = at
	printf("Electric unit 7 Baht/month\n");
	printf("Water unit 15 Baht/month\n\n\n");
	printf("Enter your Room price : ",rp);
	scanf("%d",&rp);
	printf("Enter your Electric unit : ",eu);
	scanf("%d",&eu);
	printf("Enter your Water unit : ",wu);
	scanf("%d",&wu);
	et = eu * 7;
	printf("\nAmount of Electric price : %d Baht",et);
	wt = wu * 15;
	printf("\nAmount of Water price : %d Baht",wt);
	at = rp + et + wt;
	printf("\nAll total price : %d Baht",at);
	
}
