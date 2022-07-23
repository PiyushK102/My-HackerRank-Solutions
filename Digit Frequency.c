#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char *str;
   char num[11]={'0','1','2','3','4','5','6','7','8','9'};
   str=(char *)malloc(100*sizeof(char));
    scanf("%s",&*str);
    int i,j, count[10]={};
    for(i=0;i<=strlen(str);i++)
    {
     
    
    if(str[i]=='1')
    {count[1]++;}
    else if(str[i]=='2')
    {count[2]++;}
    else if(str[i]=='3')
    {count[3]++;}
    else if(str[i]=='4')
    {count[4]++;}
    else if(str[i]=='5')
    {count[5]++;}
    else if(str[i]=='6')
    {count[6]++;}
    else if(str[i]=='7')
    {count[7]++;}
    else if(str[i]=='8')
    {count[8]++;}
    else if(str[i]=='9')
    {count[9]++;}
    else if(str[i]=='0')
    {count[0]++;}
    else
     {continue;}
    }
    
    
    
    for(i=0;i<10;i++)
    {
        printf("%d ",count[i]);
    }
    
       
    return 0;
}
