#include<stdio.h>
int main()
{

    int str[]={};
    int tempo=0,size,i,k;
    printf("Enter the no of urls present");
    scanf("%d\n",&size);
    for( i=0;i<size;i++)
    {
    scanf("%d",&str[i]);
    }
    for(i=0;i<size;i++)
    {
        for(k=i+1;k<size;k++)
        {
            if(str[i]>str[k])
            {
                tempo=str[i];
                str[i]=str[k];
                str[k]=tempo;
            }
        }
    }
    printf("\n");
    printf("urls are arranged in ascending order ");
    for(i=0;i<size;i++)
    {
        printf("%d\n",str[i]);
    
    }
    return 0;
}