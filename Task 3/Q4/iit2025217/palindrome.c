#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	scanf("%s",str);
	int flag=0, n=strlen(str);
	for(int i=0;i<n;i++){
		if(str[i]!=str[n-i-1]){
			flag =1;
			break;
		}
	}
	if(flag==1){
		printf("not palindrome\n");
	}
	else{
		printf("palindrome\n");
	}
	return 0;
}
