## Problem Statement

A A washing machine works on the principle of Fuzzy System, the weight of clothes put inside it for washing is uncertain But based on weight measured by sensors, it decides time and water level which can be changed by menus given on the machine control area. <br>
For low level water, the time estimate is 25 minutes, where approximately weight is between 2000 grams or any nonzero positive number below that. <br>
For medium level water, the time estimate is 35 minutes, where approximately weight is between 2001 grams and 4000 grams. <br>
For high level water, the time estimate is 45 minutes, where approximately weight is above 4000 grams. <br>


Assume the capacity of machine is maximum 7000 grams <br>
Where approximately weight is zero, time estimate is 0 minutes. <br>
Write a function which takes a numeric weight in the range [0,7000] as input and produces estimated time as output is: “OVERLOADED”, and for all other inputs, the output statement is <br>
“INVALID INPUT”. <br> <br>

<i>Input should be in the form of integer value – </i>
<br>

<b>&lt;Integer&gt;</b>
 <br>
 

<i>Output must have the following format –</i>
<br>

Time Estimated: <b>&lt;Integer&gt;</b> Minutes <br> <br>

<b>Example:</b> <br>    
- Input value

        2000
- Output value

        Time Estimated: 25 Minutes
   
   
 ## Solution

```cpp
#include <iostream>
using namespace std;

void timeRequired(int weight)
{
    if (weight == 0)
        cout << "Time Estimated : 0min";
    else if (weight > 0 && weight <= 2000)
        cout << "Time Estimated : 25min";
    else if (weight > 2000 && weight <= 4000)
        cout << "Time Estimated : 35min";
    else if (weight > 4000 && weight <= 7000)
        cout << "Time Estimated : 45min";
    else
        cout << "INVALID INPUT";
}
int main()
{
    int machineweight;
    cin >> machineweight;

    timeRequired(machineweight);
    return 0;
}
```
