#include <stdio.h>
#include <string.h>

int main()
{
    char quiz[20] = "asia";
    char ans[20];

    printf("Which continent is singapore located: ");
    gets(ans);

        int i = 1;
        while (i <= 2)
        {   
            if(strcmp(quiz, ans) == 0)
            {
                break;
            }
            else
            {
                if(i == 2)
                {
                    printf("your last chance!!\n");
                }
                printf("Which continent is singapore located: ");
                gets(ans);
            }
            i++;
        }
        if(strcmp(quiz, ans) != 0)
        {
            printf("Failed..");
        }
        else
        {
            printf("correct answer!!");
        }    
    }
