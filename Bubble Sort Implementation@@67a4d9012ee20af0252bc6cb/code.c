// Your code here...
void bubbleSort(int a[], int n)
{
    int p,c,temp;
    for(p=1;p<n;p++)
    {
        for(c=0;c<n-p;c++)
        {
            if(a[c]>a[c+1])
            {
                temp = a[c];
                a[c] = a[c+1];
                a[c+1] = temp;
            }
        }
    }

    
}
void printArray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}