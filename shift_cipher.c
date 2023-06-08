#include <stdio.h>

#define MAX_SIZE 100

// Function to encrypt the plaintext using shift cipher
void encrypt(char* plaintext, int shift)
{
    int i = 0;
    char ch;

    while (plaintext[i] != '\0') {
        ch = plaintext[i];

        // Encrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A') + shift) % 26 + 'A';
        }

        // Encrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a') + shift) % 26 + 'a';
        }

        plaintext[i] = ch;
        i++;
    }
}

// Function to decrypt the ciphertext using shift cipher
void decrypt(char* ciphertext, int shift)
{
    int i = 0;
    char ch;

    while (ciphertext[i] != '\0') {
        ch = ciphertext[i];

        // Decrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A') - shift + 26) % 26 + 'A';
        }

        // Decrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a') - shift + 26) % 26 + 'a';
        }

        ciphertext[i] = ch;
        i++;
    }
}

int main()
{
    char plaintext[MAX_SIZE];
    int shift;

    printf("Enter the plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    printf("Enter the shift value: ");
    scanf("%d", &shift);

    // Encrypt the plaintext
    encrypt(plaintext, shift);
    printf("Ciphertext: %s\n", plaintext);

    // Decrypt the ciphertext
    decrypt(plaintext, shift);
    printf("Decrypted plaintext: %s\n", plaintext);

    return 0;
}
