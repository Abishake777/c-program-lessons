#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

bool isConsonant(char ch) {
    ch = toupper(ch);
    return isalpha(ch) && !(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}
void swapConsonants(char str[]) {
    for (int left = 0, right = strlen(str) - 1; left < right;) {
        if (!isConsonant(str[left])) { left++; continue; }
        if (!isConsonant(str[right])) { right--; continue; }
        char temp = str[left];
        str[left++] = str[right];
        str[right--] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Note: gets() is unsafe, consider using fgets() in real applications
    swapConsonants(str);
    printf("String after swapping consonants: %s\n", str);
    return 0;
}