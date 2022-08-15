#include <stdio.h>
#include <string.h>
int main(){
	char str1[1000];
	printf("Enter string S1: ");
	scanf("%s",str1);
	char str2[1000];
	printf("Enter string S2: ");
	scanf("%s",str2);
	if(strstr(str1,str2)!=0 || strstr(str2,str1)!=0){
		printf("Yes");
	}else{
		printf("No");
	}
}