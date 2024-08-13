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




