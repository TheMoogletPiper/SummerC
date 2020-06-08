#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define USER "TheMoogletPiper"
int main()
{
    //Basic time display

    time_t currentTime; //Variable time type, exclusive to C, called currentTime
    time(&currentTime); //Function that gives us the time and stores it in the currentTime variable address as a Unix epoch time
    printf("%s\n", ctime(&currentTime)); //print the time as a readable time format in a string with ctime. Automatically adds a \n at the end

    struct tm *myTime = localtime(&currentTime); //localtime transforms the value of currentTime into a struct tm variable type. In this case, we already store it into the pointer variable *myTime
    printf("%i\n\n", myTime->tm_mon); //Display the month value associated to the *myTime variable. %i means display integer. x->y lets us chain variable calls in the struct tm variable type
                                      //In the month case, it will return a number less than the current month as it's 0 based (January being month 0), so we should add a +1 to get the exact value
    printf("%d/%d/%d\n\n", myTime->tm_mon+1, myTime->tm_mday, myTime->tm_year+1900); //Adding 1900 to the year, as it gives us the number of years that has passed since 1900


    time_t t = time(NULL);
    printf("The current Unix epoch time is %ld\n\n", t); //Print the number of seconds that has passed since the Unix timestamp (00:00 Jan 1 1900)

    struct tm tm = *localtime(&t); //struct tm variable but with pointer in localtime
    printf("%s\tat %02d:%02d:%02d GMT+1 in the %d/%d/%d\n\n", USER, tm.tm_hour, tm.tm_min, tm.tm_sec, tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900); //A basic user + timestamp model
    return 0;
}
