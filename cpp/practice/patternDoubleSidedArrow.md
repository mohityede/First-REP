## Problem statement

Problem Constraints: N is odd number. <br>
Problem Description: Take N as input. For a value of N=7, we wish to draw the following pattern :
          
                                1 
                            2 1   1 2 
                        3 2 1       1 2 3 
                    4 3 2 1           1 2 3 4 
                        3 2 1       1 2 3 
                            2 1   1 2 
                                1 
<i>Input Format:</i> <br> Take N as input.

<i>Output Format:</i> <br>Pattern should be printed with a space between every two values.

<b>Example</b> <br>
- Sample Input: 
 
      7
- Sample Output: 

                  1 
              2 1   1 2 
          3 2 1       1 2 3 
      4 3 2 1           1 2 3 4 
          3 2 1       1 2 3 
              2 1   1 2 
                  1 
      
      
## Solution

```cpp
#include <iostream>
using namespace std;

int main()
{
    int N = 7;

    int firstSpace = (N - 1);
    int i = 1;
    int secSpace = (-1);
    int val = 1;

    for (i; i <= N; i++)
    {
        for (int j = firstSpace; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = val; j > 0; j--)
        {
            cout << j;
        }
        for (int j = 0; j < secSpace; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= val; j++)
        {
            if (val > 1)
                cout << j;
        }
        if (i <= N / 2)
        {
            firstSpace -= 2;
            val++;
            secSpace += 2;
        }
        else
        {
            firstSpace += 2;
            val--;
            secSpace -= 2;
        }
        cout << endl;
    }
    return 0;
}
```
