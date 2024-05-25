void print_char(char c);

void my_print_n_ascii(int howMany) {
    int i = 0;
    howMany += 32;
    for(i=32; i<= howMany; i++){
        
        print_char(i);
    }
}