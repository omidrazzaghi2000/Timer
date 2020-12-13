#include <stdio.h>
#include <time.h>

int main()
{
    clock_t begin;
    int time_spent;
    unsigned int i;
    int former_time=31;
    /* Mark beginning time */
    begin = clock();
    for (i = 0; 1; i++)
    {
        
        //printf("hello\n");
        /* Get CPU time since loop started */
        time_spent = (int)(clock() - begin) / CLOCKS_PER_SEC;
        int time_left = 30 - time_spent;
       
        if (time_left != former_time)
        {
            system("CLS");
            printf("%d\n", time_left);
            former_time = time_left;
        }
        if (time_spent >= 30)
            break;
    }
    return(0);
}