# First-REP
#This is just the simple calculator program for two integer basic operation.

print('''Note:-
1.for addition type '+'.
2.for substraction type '-'.
3.for multiplication type '*'.
4.for Division type '/'. \n''')

inp=input('The operation want to perform ')
if inp=='+':
    a=int(input('Enter first digit '))
    b=int(input('Enter second digit '))
    ot=a+b
    print('a',inp,'n = ',ot)
    
elif inp=='-':
    a=int(input('Enter first digit '))
    b=int(input('Enter second digit '))
    ot=a-b
    print('a',inp,'n = ',ot)
    
elif inp=='*':
    a=int(input('Enter first digit '))
    b=int(input('Enter second digit '))
    ot=a*b
    print('a',inp,'n = ',ot)
    
elif inp=='/':
    a=int(input('Enter first digit '))
    b=int(input('Enter second digit '))
    if b==0:
        print('It cannot be Zero.')
    else:
        ot=a/b
        print('a',inp,'n = ',ot)
    
else:
    print('Please enter valid operation.')
