#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("enter no: ");
	scanf("%d",&n);
	int i=1,m=n;
	while(m!=0){
		m=m/10;
		i++;
	}
	int sum=0;
	m=n;
	while(n!=0){
		sum+=pow((n%10),i);
		n=n/10;
	}
	if(m==sum){
		printf("ARmstrong\n");
	}
	else{
		printf("not armstrong\n");
	}
	return 0;
}

