#include<stdio.h>
int main()
{
    int height;
    do{
        printf("Height: ");
        scanf("%d",&height);
        if(height>=1 && height<=8)
        {
            for(int i=height;i>0;i--)
            {
                for(int j=1;j<=height;j++)
                {
                    if(j>=i)printf("#");
                    else printf(" ");
                }
                printf("\n");
            }
        }
    }while(height<1 || height>8);

    return 0;
}