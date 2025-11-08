/*
Declare a structure with the following members whose tag is pinball machine:
name - a string of up to 40 characters
year - an integer (representing the year of manufacture)
type - an enumeration with the values EM (electromechanical) and SS (solid state)
players - an integer (representing the maximum number of players)
*/

enum type { EM, SS };

struct pinball_machine{
    char name[41];
    int year;
    enum type machine_type;
    int players;
};

int main(void){
    return 0;
}