#include <stdio.h>

int main() {
    char x;
    printf("enter the charecter:");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        printf("the given letter is vowel");
        }
        else{
            printf("the given charecter is not a vowel");
        }

    return 0;
}
