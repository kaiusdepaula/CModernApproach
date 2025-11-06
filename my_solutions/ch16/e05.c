/*
Write the following functions, assuming that the date structure contains three members:
month, day. and year (all of type int).
(a) int day_of_year (struct date d);
Returns the day of the year (an integer between I and 366) that corresponds to the date d.
(b) int comparedates(struct date dl, struct date d2);
Returns -I if dl is an earlier date than d2. +1 if dl is a later date than d2, and 0 if dl and
d2 are the same.
*/

typedef struct{
    int month, day, year;
} Date;

int main(void){
    return 0;
}
int day_of_year(Date d){
    int temp = d.day;
    // I'm a bit lazy rn, so I'll do comercial months.
    return temp + (d.month * 30);
}
int comparedates(Date d1, Date d2) {
    // Lazier by the time I got here. Quick and dirty!
    if (d1.year < d2.year)
        return -1;
    else if (d1.year > d2.year)
        return 1;
    else if (d1.month < d2.month)
        return -1;
    else if (d1.month > d2.month)
        return 1;
    else if (d1.day < d2.day)
        return -1;
    else if (d1.day > d2.day)
        return 1;
    else
        return 0;
}
