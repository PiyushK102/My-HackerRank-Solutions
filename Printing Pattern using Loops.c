#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int m=2*n-1;
      int arr[m][m];
    int k=m/2+1;
    
    for(int i=0;i<k;i++)
    {
        int l=i,s=k; 
        for(int j=0;j<k;j++)
        {
            arr[i][j]=s;
            arr[i][m-j-1]=s;
            arr[m-i-1][j]=s;
            arr[m-i-1][m-j-1]=s;
            if(l>0){s--;l--;}
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        printf("%d ",arr[i][j]);
        printf("\n");
    }
    
    return 0;
}
