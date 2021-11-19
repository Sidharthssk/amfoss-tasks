#include<stdio.h>
#include<cs50.h>

#include<ctype.h>
#include<string.h>
#include<stdlib.h>

bool checkstring(string s)
{
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        char ch=s[i];
        if(!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}



int main(int argc, string argv[])
{
    if(argc!=2 || !checkstring(argv[1]) )
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    string S = get_string("Plain text: ");
    int k=atoi(argv[1]);
    int len=strlen(S);
    char ciptxt[len+1];
    for(int i=0;i<len;i++)
    {
        char ch=S[i];
        if(isalpha(S[i]))
        {
        char m='A';
        if(islower(ch)) m='a';
        ciptxt[i]=(((S[i]-m)+k)%26)+m;
        }
        else
        {
            ciptxt[i]=ch;
        }
    }
    printf("Ciphertext: %s",ciptxt);
    return 0;
}