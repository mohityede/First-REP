// Cost of balloons

#include <stdio.h>

int main(){
	int testCase;
	scanf("%d",&testCase);
	for(int j=1;j<testCase+1;j++){
		if(j%2==1){
			answer1();
		}
		else{
			answer2();
		}
	}
} 	 

void answer1(){
	int greenBalloon, purpleBalloon;
	int numOfParti;
	
	scanf("%d", &purpleBalloon);
	scanf("%d", &greenBalloon); 
	scanf("%d", &numOfParti);         			
	
	int firstQ;
	int secondQ;
	int sum=0;
	for(int i=0;i<numOfParti;i++){
		scanf("%d",&firstQ);
		if(firstQ==1){
			sum=sum+purpleBalloon;
		}
		scanf("%d",&secondQ);
		if(secondQ==1){
			sum=sum+greenBalloon;
		}
}
printf("%d\n",sum);
}

void answer2(){
	int greenBalloon, purpleBalloon;
	int numOfParti;
	
	scanf("%d", &greenBalloon);
	scanf("%d", &purpleBalloon); 
	scanf("%d", &numOfParti);         			

	int firstQ;
	int secondQ;
	int sum=0;
	for(int i=0;i<numOfParti;i++){
		scanf("%d",&firstQ);
		if(firstQ==1){
			sum=sum+purpleBalloon;
		}
		scanf("%d",&secondQ);
		if(secondQ==1){
			sum=sum+greenBalloon;
		}
}
printf("%d\n",sum);
}
