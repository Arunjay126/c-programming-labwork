#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    CYAN,
    MAGENTA
};

void displayColorCode(enum Color color) {
    switch (color) {
        case RED:
            printf("RED: #FF0000\n");
            break;
        case GREEN:
            printf("GREEN: #00FF00\n");
            break;
        case BLUE:
            printf("BLUE: #0000FF\n");
            break;
        case YELLOW:
            printf("YELLOW: #FFFF00\n");
            break;
        case CYAN:
            printf("CYAN: #00FFFF\n");
            break;
        case MAGENTA:
            printf("MAGENTA: #FF00FF\n");
            break;
        default:
            printf("Unknown color\n");
    }
}

int main() {
    enum Color myColor = BLUE;
    
    displayColorCode(myColor);
    
    return 0;
}
