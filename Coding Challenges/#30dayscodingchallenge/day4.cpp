#include <iostream>
using namespace std;
 
void rotate(int arr[], int size, int rot);
 
int main()
{
	int testcase;
	cin>>testcase;
	for(int i=0;i<testcase;i++){
		int size;
		cin>>size;
		int rotation;
		cin>>rotation;
		int array[size];
		for(int j=0;j<size;j++){
			int num;
			cin>>num;
			array[j]=num;
		}
		rotate(array,size,rotation);
		for(int k=0;k<size;k++){
			cout<<array[k]<<" ";
		}
		cout<<"\n";			
	}
	
    return 0;
}

void rotate(int arr[], int size, int rot){
	for(int j=0;j<rot;j++){
	for(int i=0;i<size-1;i++){
		swap(arr[i],arr[i+1]);
	}
	}
}

void swap(int a, int b){
	int c= a;
	a=b;
	b=c;
}
