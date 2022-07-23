
int  sum (int count,...) {
    int i, sum=0;
    va_list p;
    va_start(p, count);
    for(i=0;i<count;i++)
    {
        sum=sum+va_arg(p, int);
    }
    va_end(p);
    return sum;
}

int min(int count,...) {
   int j,mini;
    va_list m;
    va_start(m,count);
    mini=va_arg(m, int);
    
    for(j=0;j<=count;j++)
    {
        int t=va_arg(m, int);
        if(t<mini)
        {
            mini=t;
        }
    }
    va_end(m);
    return mini;
     
}

int max(int count,...) {
    int j,maxi;
    va_list m;
    va_start(m,count);
    maxi=va_arg(m, int);
    
    for(j=0;j<=count;j++)
    {
        int t=va_arg(m, int);
        if(t>maxi)
        {
            maxi=t;
        }
    }
    va_end(m);
    return maxi;

}

