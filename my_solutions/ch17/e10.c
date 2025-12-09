/*
Modify the print_part function of Section 16.2 so that its parameter is a pointer to a
part structure. Use the -> operator in your answer
*/

#define NAME_LEN 100

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};

void print_part(struct part *p);

int main(void){
    return 0;
}

void print_part(struct part *p) {
    printf("Part number: %d\n", p->number);
    printf("Part name: %s\n", p->name);
    printf("Quantity on hand: %d\n", p->on_hand);
}
