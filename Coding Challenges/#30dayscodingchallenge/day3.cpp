#include <iostream>
using namespace std;
 
void merge(int arr1[], int arr2[], int n, int m);
 
int main()
{
    int n=4;
	int m=5;
	int arr1[]={1,3,5,7};
	int arr2[]={0,2,6,8,9};
	
	cout << "array1 = " << arr1[0] <<" " << arr1[1] <<" " << arr1[2] <<" " << arr1[3]<<"\n";
	cout << "array2 = " << arr2[0] <<" " << arr2[1] <<" " << arr2[2] <<" " << arr2[3] <<" " << arr2[4]<<"\n";
 	
 	merge(arr1, arr2, n, m);
 	
 	cout << "After merge array1 = " << arr1[0] <<" " << arr1[1] <<" " << arr1[2] <<" " << arr1[3]<<"\n";
	cout << "After merge array2 = " << arr2[0] <<" " << arr2[1] <<" " << arr2[2] <<" " << arr2[3] <<" " << arr2[4];
	
    return 0;
}

void merge(int arr1[], int arr2[], int n, int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(arr1[i]>arr2[j]){
				swap(arr1[i],arr2[j]);
			}
		}
	}
	for(int k=0;k<m-2;k++){
		if(arr2[k]>arr2[k+1]){
			swap(arr2[k],arr2[k+1]);
		}
	}	
}

void swap(int a, int b){
	int c= a;
	a=b;
	b=c;
}
