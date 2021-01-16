
int main()
{
	int n;
	cout<<"Enter the number and decimal : ";
	cin>>n;
	int i=2;
	for(i;i<n;i++){
		if(n%i==0){
			cout<<n<<" is not prime."<<endl;
			break;
		}
	}	
	if(n==i){
		cout<<n<<" is prime.";
	}
	return 0;
}
