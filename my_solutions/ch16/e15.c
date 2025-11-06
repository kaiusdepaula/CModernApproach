/*
(a) Declare a tag for an enumeration whose values represent the seven days of the week.
(b) Use typedef to define a name for the enumeration of part (a).
*/

#include <stdio.h>

enum days_of_week{
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
};

typedef enum days_of_week DaysOfWeek;

int main(void) {
    DaysOfWeek today = WEDNESDAY;
    printf("Today is day number %d\n", today);
    return 0;
}
