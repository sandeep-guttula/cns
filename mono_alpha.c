#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

// Function to encrypt the plaintext using mono-alphabetic substitution cipher
void encrypt(char* plaintext, char* key)
{
    int i = 0;
    char ch;

    while (plaintext[i] != '\0') {
        ch = plaintext[i];

        // Encrypt uppercase letters
        if (isupper(ch)) {
            ch = key[ch - 'A'];
        }

        // Encrypt lowercase letters
        else if (islower(ch)) {
            ch = tolower(key[ch - 'a']);
        }

        plaintext[i] = ch;
        i++;
    }
}

// Function to decrypt the ciphertext using mono-alphabetic substitution cipher
void decrypt(char* ciphertext, char* key)
{
    int i = 0;
    char ch;

    while (ciphertext[i] != '\0') {
        ch = ciphertext[i];

        // Decrypt uppercase letters
        if (isupper(ch)) {
            int index = 0;
            while (toupper(key[index]) != ch) {
                index++;
            }
            ch = 'A' + index;
        }

        // Decrypt lowercase letters
        else if (islower(ch)) {
            int index = 0;
            while (tolower(key[index]) != ch) {
                index++;
            }
            ch = 'a' + index;
        }

        ciphertext[i] = ch;
        i++;
    }
}

int main()
{
    char plaintext[MAX_SIZE];
    char key[] = "QWERTYUIOPASDFGHJKLZXCVBNM";

    printf("Enter the plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    // Encrypt the plaintext
    encrypt(plaintext, key);
    printf("Ciphertext: %s\n", plaintext);

    // Decrypt the ciphertext
    decrypt(plaintext, key);
    printf("Decrypted plaintext: %s\n", plaintext);

    return 0;
}
