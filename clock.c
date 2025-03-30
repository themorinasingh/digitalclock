#include <stdio.h>
#include <time.h>
#include <unistd.h>

void get_date(char buffer[50]);
void get_time_12(char buffer[100]);
void get_time_24(char buffer[100]) ;

int main() {
    
    char time[100];
    char date[50];
    get_date(date);
    int format;
    printf("Choose the time format: \n");
    printf("1. 24 Hour Format\n");
    printf("2. 12 Hour Format\n");
    scanf("%d", &format);
    
    do {
        printf("\e[1;1H\e[2J");
        if (format == 1) 
            get_time_24(time);
        else 
            get_time_12(time);
        
        printf("Current Time: %s\nDate: %s\n", time, date);
        fflush(stdout);
        sleep(1);
    } while (1);
    return 0;
}

void get_time_12(char buffer[100]) {
    time_t rawtime;
    struct tm *current_time;
    time(&rawtime);
    current_time = localtime(&rawtime);
    strftime(buffer, 50, "%I:%M:%S %p", current_time);
}

void get_time_24(char buffer[100]) {
    time_t rawtime;
    struct tm *current_time;
    time(&rawtime);
    current_time = localtime(&rawtime);
    strftime(buffer, 50, "%H:%M:%S", current_time);
}

void get_date(char buffer[50]) {
    time_t rawtime;
    struct tm *current_time;
    time(&rawtime);
    current_time = localtime(&rawtime);
    strftime(buffer, 50, "%A %B %d %Y", current_time);
}
