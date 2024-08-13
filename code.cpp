
#include <iostream>
using namespace std;

//length function
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

// power function

long int power(int n,int p)
{
    int result = n;
    for (int i =1;i<p;i++)
    {
        result *= n;
    }
    return result;
}

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

int main() {
   
findarm(10000);

    return 0;
}
