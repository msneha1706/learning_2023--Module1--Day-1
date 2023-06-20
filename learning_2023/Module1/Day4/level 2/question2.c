#include <stdio.h>
#include <time.h>

int main() {
    struct tm start_date = {0};  // Initialize start date struct
    struct tm end_date = {0};    // Initialize end date struct

    // Set the values for the start date
    start_date.tm_year = 2022 - 1900;  // Year (subtract 1900)
    start_date.tm_mon = 0;             // Month (0-11, January is 0)
    start_date.tm_mday = 1;            // Day of the month (1-31)

    // Set the values for the end date
    end_date.tm_year = 2022 - 1900;  // Year (subtract 1900)
    end_date.tm_mon = 11;            // Month (0-11, December is 11)
    end_date.tm_mday = 31;           // Day of the month (1-31)

    // Convert both dates to time_t representation
    time_t start_time = mktime(&start_date);
    time_t end_time = mktime(&end_date);

    // Calculate the number of seconds elapsed
    time_t elapsed_seconds = end_time - start_time;

    // Convert seconds to days
    int elapsed_days = elapsed_seconds / (24 * 60 * 60);

    printf("Number of days elapsed: %d\n", elapsed_days);

    return 0;
}