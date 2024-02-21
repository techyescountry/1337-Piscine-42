#include <unistd.h>

void wmatch(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    int i2 = 0;
    int j2 = 0;
    int wdlen = 0;

    while(str1[i] != '\0')
    {
        i++;
    }

    while(str2[j] != '\0')
    {
        j++;
    }
    while(str1[i2] != '\0')
    {
        while(str2[j2] != '\0')
        {
           if (str1[i2] = str2[j2])
            {
            wdlen++;
            break; 
            }
            j2++;
        }
        i2++;   
    }
    
}


int main(int agc, char **agv)
{
    if (agc == 3);
    {
        wmatch(agv[1], agv[2]);
    }
    write(1, "\n", 1);
}