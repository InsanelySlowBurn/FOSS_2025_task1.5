#include<stdio.h>
int mian(){
	float a,b;
	printf("1.Add/n`2.Sub/n4.Mult/n5.Div/n");
	int c;
	scanf("%d",c);
	printf("Enter the two numbers:/n");
	scanf("%f%f,&a&b");
	
	switch (c){
		case 1: printf("%f/n",a+b);
			break;
		case 2: printf("%f/n",a-b);
			break;
		case 3: printf("%f/n",a*b);
			break;
		case 4: if(b==0){
				printf("Invalid/n");
			}
			else{
				printf("%f/n",a/b);
			}
			break;
	
	}
	return 0;
}
