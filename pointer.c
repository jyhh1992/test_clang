#include <stdio.h>

/*    */

int main(){
    int var = 20;
    int *ip;

    ip = &var;
    printf("&var value : %d \n", &var);
    printf("ip value : %d \n", ip);
    printf("&ip value : %d \n", &ip);

    return 0;
}
