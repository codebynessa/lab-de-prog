#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main() {
    int i, j, k;
    char c;
    char *str1 = "   VANESSA_____\n /____/\\\n \\/__/\n";
    char *str2 = "  LINDA\n /____/\\\n/____/\\\n";
    char *str3 = " PERFEITA_____\n/____/\\\n\\____/\\\n";
    char *str4 = "__  <3 __\n\\ \\ / /\n \\ V /\n  \\_/";

    for (i = 0; i < 10; i++) {
        system("cls");
        for (j = 0; j < i; j++) {
            printf("%s", str1);
            Sleep(100);
        }
        for (; j < 10; j++) {
            printf("%s", str2);
            Sleep(100);
        }
    }

    for (i = 0; i < 10; i++) {
        system("cls");
        for (j = 0; j < 10; j++) {
            printf("%s", str2);
            Sleep(100);
        }
        for (; j > i; j--) {
            printf("%s", str1);
            Sleep(100);
        }
    }

    for (i = 0; i < 10; i++) {
        system("cls");
        for (j = 0; j < 10; j++) {
            printf("%s", str2);
        }
        printf("%s", str3);
        Sleep(500);
    }

    for (i = 0; i < 10; i++) {
        system("cls");
        for (j = 0; j < 10; j++) {
            printf("%s", str3);
        }
        printf("%s", str4);
        Sleep(500);
    }

    return 0;
}
