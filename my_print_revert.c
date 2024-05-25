#include <unistd.h>
void print_char(char c);
int my_strlen(char *text);

void my_print_revert(char *toRevert){

    int length = my_strlen(toRevert);

    int n = length;

    while (n>=0){
        print_char(toRevert[n]);
        n-=1;

    }

}