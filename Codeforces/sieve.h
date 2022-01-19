void sieve(long long int n, long long int *mark)
{

    long long int limit = sqrt(n*1.0) + 2;
    mark[1] = 1;
    mark[2] = 0;
    for(int i=4; i<=n; i+=2)
    {
        mark[i] = 1;
    }

    for(int i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {

            if(i<=limit)
            {
                for(int j= i*i; j<=n; j+=i*2)
                {
                    mark[j] = 1;
                }
            }
        }
    }

}
