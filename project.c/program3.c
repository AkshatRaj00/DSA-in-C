

int function(intn)
{
    int i;
    if(n<=0)
    {
        return 0;

    }
    else
    {
        i = random(n-1);
        printf("this \n);

            return function(i) + function(n-i-1);
}
        }