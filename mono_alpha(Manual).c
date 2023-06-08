#include<stdio.h>
char monocipher_encr(char);
char monocipher_deencr(char);
char alpha[27][3] = { { 'a', 'f' }, { 'b', 'a' }, { 'c', 'g' }, { 'd', 'u' }, {'e', 'n' }, { 'f', 'i' }, { 'g', 'j' }, {'h', 'k' }, { 'i', 'l' },
    {'j', 'm' }, { 'k', 'o' }, { 'l', 'p' }, { 'm', 'q' }, { 'n', 'r' },
    {'o', 's' }, { 'p', 't' }, { 'q', 'v' }, { 'r', 'w' }, {'s', 'x' }, 
    {'t', 'y' }, {'v','b' }, { 'u', 'z' }, { 'w', 'c' }, { 'x', 'd' }, 
    {'y', 'e' }, { 'z', 'h' }
};
char str[20];
char str3[20];
int main() {
    char str[20], str2[20];
    int i, j;
    printf("Enter string: ");
    scanf("%s", str);
    for(i = 0; i < str[i] != '\0'; i++) {
        str2[i] = monocipher_encr(str[i]);
    }
    str[i] = '\0';
    printf("Before encryption : %s", str);
    printf("\nAfter encryption : %s", str2);
    for(j = 0; j < str2[j] != '\0'; j++) {
        str3[j] = monocipher_deencr(str2[j]);
    }
    str3[j] = '\0';
    printf("\nAfter decryption : %s", str3);
}
char monocipher_encr(char a) {
    int i;
    for(i = 0; i < 26; i++) {
        if(a == alpha[i][0]) {
          break;
        }
    }
    return alpha[i][1];
}
char monocipher_deencr(char a) {
    int i;
    for(i = 0; i < 26; i++) {
        if(a == alpha[i][1]) {
        break;
        }
    }
    return alpha[i][0];
}
