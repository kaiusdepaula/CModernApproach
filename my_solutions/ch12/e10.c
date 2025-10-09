/*
Modify the f ind_middle function of Section 11.5 so that it uses pointer arithmetic to
calculate the return value
int *find_middle (int a[], int n) {
return &a[n/2];
}
*/

int main(void){
    return 0;
}

int *find_middle(int a[], int n){
    return a + n/2;
}