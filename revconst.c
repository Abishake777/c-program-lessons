#include<stdio.h>
#include<stdbool.h>
bool isVowel(char ch){
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
bool isConsonant(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        return !isVowel(ch);
    }

}
int main(){
    char str[100];
    scanf("%s", str);

    return 0;
}