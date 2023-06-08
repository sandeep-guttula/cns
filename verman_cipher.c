#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
void encrypt(char *plaintext, char *key, char *ciphertext) {
    int i;
    for (i = 0; i < strlen(plaintext); i++) { 
        ciphertext[i] = plaintext[i] ^ key[i];
    }
}
void decrypt (char *ciphertext, char *key, char *plaintext) {
    int i;
    for (i = 0; i < strlen(ciphertext); i++) { 
        plaintext[i] = ciphertext[i] ^ key[i];
    }
}
int main(int argc, char *argv[]) {
    char key[100];
    char ciphertext[100];
    char plaintext[100]; 
    printf("Enter plaintext: "); 
    scanf("%s", plaintext); 
    printf("Enter key: ");
    scanf("%s", key); 
    encrypt(plaintext, key, ciphertext); 
    printf("Ciphertext: %s\n", ciphertext); 
    decrypt (ciphertext, key, plaintext); 
    printf("Plaintext: %s\n", plaintext);
    return 0;
}