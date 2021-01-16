#include <iostream>
using namespace std;


// Oparators in c++ :
int main(){
	// 1. Assignment opearator (=)
	int x=5; // use for assign valau
	x=8; // use for update value
	cout<<x<<endl;
	
	// 2. bitwise opearator (&(Bitwise AND), |(Bitwise OR), ^(Bitwise XOR), ~(Bitwise NOT))	
	int y=6;
	cout<<"AND "<<(x&y)<<endl;
	cout<<"OR "<<(x|y)<<endl;
	cout<<"XOR "<<(x^y)<<endl;
	
	x= x<<2;
	cout<<"x= "<<x<<endl;
	cout<<"y= "<<y<<endl;
	cout<<"y>>2= "<<(y>>2)<<endl;
	
	// 3. Shift operator (<<(left shift), >>(right shift))	
	
	// 4. Unery operator 
	/* def : Unery operators are the opearator thos has only signal oparotor.
		1. &(address of oparator)
		2. *(Dereferancing using in pointer)
		3. new
		4. delete
		5. ~(Logical not)
		6. -(Unary minus)
		7. +(unary plus) */
	cout<<"&x= "<<&x<<endl; // its prints address of x
	int *p=&x;
	cout<<"*p= "<<*p<<endl;	
	int z=-6; // asign negative six
	y=+6; // assign positive six
		
	// 5. Ternery operator (?,:)
	y%2==0?cout<<"even":cout<<"odd";
	int time=9;	
	string wish = (time<=12)?"Morning":"Afternoon";
	cout<<wish<<endl;
	
	// 6. Comma (,)
	int a,b,c;
	
	// 7. Relational (<,>,<=,>=,==,!=)
	
	// 8. Logical (and(&&), or(||))	
	
	// 9. Mathmatical (+,-,*,/,%)
	int sum=y-x;
	int sub=sum-y;
	int mul=x*y;
	int div=sum/x;
	int mod=sum%y;
	
	// 10. inc/dec oparator (++,--)
	cout<<"sum= "<<sum<<endl;
	cout<<"prefix sum= "<<++sum<<endl;
	cout<<"postfix sum= "<<sum++<<endl;
	
	// 11. compound oparator (+=,-=,*=,/=,%=,<<=,>>=)	
	int q=8;
	q+=5; //same as q=q+5
	
	return 0;
}
