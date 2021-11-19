#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main()
{
    float dollar;
    int count=0;
    do{
         dollar=get_float("Change owed: ");

         if(dollar>0)
         {
             int cents = round(dollar*100);
             while(cents>0)
             {
                if(cents>=25)
                {
                   ++count;
                   cents=(cents-25);
                }
                if(cents>=10 && cents<25)
                {
                    ++count;
                    cents=(cents-10);
                }
                if(cents>=5 && cents<10)
                {
                    ++count;
                    cents=(cents-5);
                }
                if(cents>=1 && cents<5)
                {
                    ++count;
                    cents=(cents-1);
                }
             }
         }
    }while(dollar<0);
    printf("%d",count);
    return 0;
}