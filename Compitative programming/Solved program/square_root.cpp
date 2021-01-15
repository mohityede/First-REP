#include <iostream>
#include <climits>
using namespace std;

// using bruteforce algorithm
int main()
{
	int n,p;
	cout<<"Enter the number and decimal : ";
	cin>>n;
	cout<<"Enter the decimal : ";
	cin>>p;
	float sqr=0; 
	float inc=1; // increment variable
	
	for(int y=0;y<p+1;y++){
		for(float i=sqr;i<n;i=i+inc){
		
		if(i*i<=n){
			sqr=i;
		}else break;
	}
	inc=inc/10;
	}
	
	cout<<"The root is "<<sqr<<endl;	
	
	return 0;
}
