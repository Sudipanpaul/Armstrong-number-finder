# Armstrong-number-finder
You may be familiar with the Armstrong number detector program but may not be familiar with a program </br>
That finds the specified number of Armstrong numbers, ex, the first 50 Armstrong numbers.

### what is an Armstrong number?

An Armstrong number, also known as a narcissistic number, is a number that is equal to the sum of its own digits each raised to the power of the number of digits in the number. For example, in the case of a three-digit number, if the sum of each digit raised to the power of three equals the number itself, then it is an Armstrong number. A classic example is 153, since 
<strong>1^3+5^3+3^3 =153.</strong>

## code for supporting functions
To test the Armstrong number we need to find <strong>the length of numbers</strong> accordingly the <br> <strong> the power</strong>
to which each digit needs to be raised and summed up.

### The length function
Using the knowledge about how integer arithmetic takes place in C++ <br> 
We have used a for loop to write the length function.
```
int len(int a)
{
    int count = 0;
    while (a!=0)
    {
        a/=10;
        count ++;
    }
    
 return count;
}

```
<strong>Let's illustrate with an example</strong>: Consider 153 <br>
for loop 1 :
 a becomes 15 and count = 1 <br>
for loop 2: a becomes 1 and count = 2 <br>
for loop 3: a becomes 0 and count = 3 <br>

and the 4th loop doesn't satisfy a! = 0 and it stop returning length as 3. 

### The power function
This is a very simple application of for-loop:<br>
it multiplies the given number with itself while running the loop (p-1) times. where p denotes the power.
```

long int power(int n,int p)
{
    int result = n;
    for (int i =1;i<p;i++)
    {
        result *= n;
    }
    return result;
}
```



### The armstrong number generator function
This uses the previously created length and power function to generate armstrong numbers.
```
int findarm(int num)
{
    int count = 1,l,rem,q;
    int n =1;
    while(count != num)
    {
        int s =0;
        l = len(n);
        q = n;
        
        
        
        do{
            rem = q%10;
            s+= power(rem,l);
            q/=10;
        }while(q!=0);
        
        if(s == n)
    {
        cout<<n<<"is armstrong"<<endl;
        count++;
        
    }
    n++;
    }
    cout<<1<<"to"<<n<<"has"<<num<<"armstrong nos"<<endl;
    
  return n;  
}

```
<strong>Lets discuss the structure </strong><br>
There is a do-while loop followed by an if-else statement inside the while loop.<br><br>

<strong>The first while loop</strong> : Runs until the count becomes equivalent to num,<br>
num is the function parameter representing the no of armstrong numbers to be generated.<br>
<strong> The do while loop</strong> :
```
do{
            rem = q%10;
            s+= power(rem,l);
            q/=10;
        }while(q!=0);
```
rem:= is the remainder after div by 10, which is the last digit of the number n<br>
q/=10:= after the power calculation is done and added to s,the number is divided by 10 to ignore the last digit<br>
In the next loop we again find  the second last digitof the actual number,which is the last digit of the new q<br>
This goes on until q becomes zero and all summation of digits raised to their length is completed.<br><br>

<strong> if else statement</strong> :
```
 if(s == n)
    {
        cout<<n<<"is armstrong"<<endl;
        count++;
        
    }
```
This condition makes sure to check that the sum is equal to the number or not, ie if it's an Armstrong number or not.<br>
It also adds one to the count indicating we have found one more armstrong number,this count plays an essential role in the outer most while loop.<br>
The program will stop when we reach our goal of getting num nos of armstrong numbers.

### ----------- follow my code.cpp for full code --------------

