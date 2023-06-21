#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

Time getTime() {
    Time t;
    printf("Enter time (hours minutes seconds): ");
    scanf("%d %d %d", &t.hours, &t.minutes, &t.seconds);
    return t;
}

Time calculateDifference(Time t1, Time t2) {
    Time diff;
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int difference = totalSeconds1 - totalSeconds2;
    
    if (difference < 0)
        difference *= -1;  // convert to positive if negative
    
    diff.hours = difference / 3600;
    diff.minutes = (difference % 3600) / 60;
    diff.seconds = (difference % 3600) % 60;
    
    return diff;
}

int main() {
    Time time1, time2, difference;
    
    printf("Enter time period 1:\n");
    time1 = getTime();
    
    printf("\nEnter time period 2:\n");
    time2 = getTime();
    
    difference = calculateDifference(time1, time2);
    
    printf("\nDifference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);
    
    return 0;
}

