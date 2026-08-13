# include <stdio.h>

# include <time.h>
# include <stdbool.h>
# include <unistd.h>
# include <windows.h>

int main(void){
    time_t rawtime = 0;
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){
        time(&rawtime);
        printf("%ld\n",rawtime);
        Sleep(1000);
    }
}