// Your code here...
int isPrime(int n)
{
    int i, flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }

    }
    
        if(flag==0&&n!=1&&n!=0)
        {
            return 1;
        }
        else
        {
            return 0;
        }


}