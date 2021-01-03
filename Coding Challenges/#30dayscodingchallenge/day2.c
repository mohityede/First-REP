#include<stdio.h>

void answer(){
	int sizeOfMartix;
	int matrix[sizeOfMartix][sizeOfMartix];
	scanf("%d",&sizeOfMartix);
	for(int i=0;i<sizeOfMartix;i++){
		for(int j=0;j<sizeOfMartix;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	int result=0;
	
	for(int i=0;i<sizeOfMartix;i++){
		for(int j=0;j<sizeOfMartix;j++){
			int currCell=matrix[i][j];
			for(int p=0;p<sizeOfMartix;p++){
				for(int q=0;q<sizeOfMartix;q++){
			if(currCell>matrix[p][q]){
				if(i<=p && j<=q){
					result=result+1;
						}
					}
			}
	}
	}
}
	
	printf("%d\n",result);
}

int main(){
	int testcase;
	scanf("%d",&testcase);
	for(int g=0;g<testcase;g++){
		answer();
	}
	return 0;
}
