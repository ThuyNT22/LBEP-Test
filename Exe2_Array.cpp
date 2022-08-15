#include <stdio.h>
bool checkPrimeNumber(int z){
	if(z<2){
		return false;
	}
	for(int i=2;i<=z/2;i++){
		if(z%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	printf("Enter number intergers of array n = ");
	scanf("%d",&n);

	int ar[n];
	printf("Enter %d array\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	int x=0;
	for(int i=0;i<n;i++){
		if(checkPrimeNumber(ar[i])){
			printf("Prime number: %d\n",ar[i]);
			x++;
		}
	}
	if(x==0){
		printf("No prime number");
	}
}