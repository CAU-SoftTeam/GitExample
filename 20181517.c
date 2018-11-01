#include <stdio.h>

long rfibo(int n);
long sfibo(int n);
//1 1 2 3 5
int main() {
    int n;
    int r;
    for(n = 3; n <= 45; n++){
        if(n % 2 == 1){

            printf("rfibo(%d) = %ld\n", n, rfibo(n));
            printf("sfibo(%d) = %ld\n", n, sfibo(n));

          
        }
    }
    return 0;
}

long rfibo(int n){
    if (n == 1) return 1;
    if (n == 2) return 1;

    return rfibo(n-1) + rfibo(n-2);
}

