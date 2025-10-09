/*
Suppose that high, low. and middle are all pointer variables of the same type, and that
low and high point to elements of an array. Why is the following statement illegal, and
how could it be fixed?
middle = (low + high) / 2;

Summing memory spaces doesn't make much sense at all. To make the expression work, 
the following change should be made.

middle = low + (high - low) / 2;

On this case, we calculate the middle point by taking the difference between those
addresses and dividing it by two and after that, summing to the lower end. This will result in
a meaningfull address.
*/
