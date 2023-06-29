#include <stdio.h>
#include <locale.h>
#include "encryption.h"
#include <string.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    char text[100];
    int num, i = 0;
    char c;
    printf("Введіть текст з пробілами: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  // Видаляємо символ нового рядка
    char* string = text;
    printf("Введіть число та напрямок (вліво -число, вправо +число): ");
    scanf("%c", &c);
    scanf("%d", &num);
    CaesarCode(string, c, num);
    printf("%s", text);
    return 0;
}

