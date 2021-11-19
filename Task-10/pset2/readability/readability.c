#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main()
{
    int countlett=0,countword=0,countsent=0;
    string S = get_string("Text: ");
    for(int i=0;S[i]!='\0';i++)
    {
        if((S[i]>='a' && S[i]<='z') || (S[i]>='A' && S[i]<='Z'))
        {
            ++countlett;
        }
        else if(S[i]== ' ')
          ++countword;
        else if(S[i]=='.' || S[i]=='!' || S[i]=='?')
           ++countsent;
    }
    float l=(countlett/(float)(countword+1))*100;
    float s=(countsent/(float)(countword+1))*100;
    int index=round(((0.0588*l)-(0.296*s)-15.8));




    if(index>=16)printf("Grade 16+");
    else if(index<1)printf("Before Grade 1");
    else printf("Grade %d",index);
    return 0;
}