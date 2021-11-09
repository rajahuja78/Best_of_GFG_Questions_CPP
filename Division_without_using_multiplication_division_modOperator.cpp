#include <iostream>
using namespace std;

//Function Returns the quotient
long long divide(long long dividend, long long divisor) 
{
        //code here
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    
        dividend = abs(dividend);
        divisor = abs(divisor);
        
        int temp=0, quotient=0;
        for(int i=31; i>=0; --i)
        {
            if(temp+(divisor << i) <= dividend)   
            {
                temp += divisor << i;
                quotient |= 1LL<<i;
            }
        }
        if(sign<0)
            quotient = -quotient;
        return quotient;
}
int main()
{
        int a = 10, b = 3;
        cout << divide(a, b) << "\n";

        a = 43, b = -8;
        cout << divide(a, b);
        return 0;
}
