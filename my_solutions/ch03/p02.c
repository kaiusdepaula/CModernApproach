/*
Write a program that formats product information entered by the user. A session with the
program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
Item Unit Purchase
Price Date
583 $ 13.50 10/24/2010
The item number and date should be left justified; the unit price should be right justified.
Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
*/

#include <stdio.h>

int main(void){
    int item_number;
    float item_price;
    int day, month, year;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &item_price);

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d /%d /%d", &day, &month, &year);

    // Printing it all
	printf("\nItem\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
    printf(
        "%d\t\t$%8.2f\t%d/%d/%d\n", 
        item_number, 
        item_price, 
        month, 
        day, 
        year
    );

    return 0;
}