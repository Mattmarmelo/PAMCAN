#include <stdio.h>
#include <windows.h> // For Sleep function

void clearScreen() {
    system("cls");
}

void displayArtLineByLine(char *art) {
    clearScreen();
    int lineLength = 0;
    for (int i = 0; art[i] != '\0'; i++) {
        putchar(art[i]);
        lineLength++;
        if (art[i] == '\n' || lineLength >= 21) {
            lineLength = 0;
            Sleep(100); // Adjust the delay between lines (in milliseconds)
        }
    }
    Sleep(1000); // Delay after displaying the entire art (1 second)
}

int main() {
    char titleArt[] =
        "8b,dPPYba,  ,adPPYYba,  ,adPPYba, 88,dPYba,,adPYba,  ,adPPYYba, 8b,dPPYba,   \n"
        "88P'    \"8a \"\"     `Y8 a8\"     \"\" 88P'   \"88\"    \"8a \"\"     `Y8 88P'   `\"8a  \n"
        "88       d8 ,adPPPPP88 8b         88      88      88 ,adPPPPP88 88       88  \n"
        "88b,   ,a8\" 88,    ,88 \"8a,   ,aa 88      88      88 88,    ,88 88       88  \n"
        "88`YbbdP\"'  `\"8bbdP\"Y8  `\"Ybbd8\"' 88      88      88 `\"8bbdP\"Y8 88       88  \n"
        "88                                                                         \n"
        "88                                                                         \n";

    displayArtLineByLine(titleArt);

    return 0;
}

