#include <stdio.h>
#include <stdiolib>
#define SIZE 1024
int main(int argc, char** argv){
    char* str = (char*)malloc(sizeof(char)*SIZE);
<<<<<<< HEAD
    printf("ВВЕДИТЕ СВОЕ ИМЯЯЯЯЯЯЯЯЯЯЯЯ: \n");
    scanf("%s", str);
=======
    printf("ВВЕДИТЕ СВОЕ ИМЯЯЯЯЯЯЯЯЯЯЯЯ:\n");
    str=gets(str);
>>>>>>> main
    printf("привет, %s", str);
    return 0;
}