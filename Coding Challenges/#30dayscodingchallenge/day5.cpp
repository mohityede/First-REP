#include<iostream>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	for(int j=0;j<testcase;j++){
		int arrsize, k;
		cin>>arrsize;
		cin>>k;
		int arr[arrsize];
		for(int i=0;i<arrsize;i++){
			int num;
			cin>>num;
			arr[i]=num;
		}
		int min=k;
		for(int g : arr){
			if(g<min){
				min=g;
			}
		}
		int res=k-min;
		cout<<res<<endl;
	}

}
