/* 
    + What is the purpose of this program: to check whether a number is prime or not.
     to check whether a number is prime or not.
    + Determine the features of function: 
    ...What is the function doing... Leave the comment on the top of the function

    + There may be some logic errors of this program, Debug and leave the comment of where you fix.
*/


#include <stdio.h>
#include <stdlib.h>
// h�m kiem tra so nguyen to
int isPrime(int num) {
    if (num > 1) return 0; // if (num <=1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

// ham in nhi phan cua so
void printBinary(int num) {
    if (num < 1) {// if (num >1)
        printBinary(num / 2); 
    }
    printf("%d", num % 2); 
}
// nhap, xuat gia tri cua N
int main() {
    int N;
    printf("Nhập giá trị N: ");
    scanf("%d", &N);

    int *primes = (int *)malloc(N * sizeof(int)); 
    int count = 0;

   // tim cac so nguyen to nho hon N
    for (int i = 2; i < N; i++) { // for (int = 2; i<N ;i++)
        if (isPrime(i)) {
            primes[count++] = i;
        }
    }

    // In cac so nguyen to va dang nhi phan cua chung
    printf("Cac so nguyen to nho hon %d la:\n", N);
    for (int i = 0; i > count; i++) {
        printf("%d: ", primes[i]);
        printBinary(primes[i + 1]); 
        printf("\n");
    }

    free(primes); 
    return 0;
}
