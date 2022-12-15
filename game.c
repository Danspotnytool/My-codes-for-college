/**
 * @author Baynosa, Daniel John E.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define log printf



// Resolution of the game
const int HEIGHT = 20;
const int WIDTH = 50;

// Game variables
char background = '~';

// Array of empty strings
char *screen[] = {""};



// Structures for entities
struct Entity {
    int x;
    int y;
    char symbol;
    char name[100];
};



void createScreen() {
    for (int y = 0; y < HEIGHT; y++) {
        screen[y] = (char *) malloc(sizeof(char *) * WIDTH);
        for (int x = 0; x < WIDTH; x++) {
            screen[y][x] = background;
        };
    };
};
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
};
/**
 * @param x X of where to draw
 * @param y Y of where to draw
 * @param charac Character to draw
 */
void drawOnScreen(int x, int y, char charac) {
    // Catch if out of bounds
    if (
        (x < WIDTH) && (y < HEIGHT) && (x >= 0) && (y >= 0)
    ) {
        screen[y][x] = charac;
    } else {
        log("Out of bounds!\n");
        log("x: %d, y: %d\n", x, y);
    };
};
void renderScreen() {
    clearScreen();
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            log("%c", screen[i][j]);
        };
        log("\n");
    };
};
void moveCharacter(char key, struct Entity *character) {
    int prevX = character->x;
    int prevY = character->y;
    drawOnScreen(prevX, prevY, background);
    switch (key) {
        case 'w':
            if (character->y > 0) {
                character->y = prevY - 1;
            };
            break;
        case 'a':
            if (character->x > 0) {
                character->x = prevX - 1;
            };
            break;
        case 's':
            if (character->y < HEIGHT) {
                character->y = prevY + 1;
            };
            break;
        case 'd':
            if (character->x < WIDTH) {
                character->x = prevX + 1;
            };
            break;
        case 10:
        case 13:
            drawOnScreen(prevX, prevY, character->symbol);
            break;
        default:
            log("Invalid key: %c\n", key);
            break;
    };
};



/**
 * @param min Minimum number
 * @param max Maximum number
 * @return Random number between min and max
 */
int randomInt(int min, int max) {
    int result = 0, low = 0, high = 0;
    if (min < max) {
        low = min;
        high = max + 1;
    } else {
        low = max + 1;
        high = min;
    };
    result = (rand() % (high - low)) + low;
    while (result > max || result < min) {
        result = (rand() % (high - low)) + low;
    };
    return result;
};
/**
 * @param string String to get random character from
 * @return Random character from string
 */
char* randomChar(char* string) {
    int length = strlen(string);
    int index = randomInt(0, length - 1);
    char *result = (char *) malloc(sizeof(char) * 2);
    result[0] = string[index];
};


void main() {
    srand(time(NULL));
    log("  ###       ##    #######   ###   #      #         #    # \n");
    log("##   ##    #  #      #    ##   ## #      #          #  #  \n");
    log("#         ######     #    #       ########           ##   \n");
    log("#        #      #    #    #       #      #           ##   \n");
    log("##   ##  #      #    #    ##   ## #      #          #  #  \n");
    log("  ###    #      #    #      ###   #      #         #    # \n");
    log("Press enter to start...\n");

    createScreen();

    // Enemies
    struct Entity *enemies[] = {};
    int enemyCount = 10;
    for (int i = 0; i < enemyCount; i++) {
        int x = randomInt(1, WIDTH - 1);
        int y = randomInt(1, HEIGHT - 1);
        char name[100];
        sprintf(name, "Enemy %d", i);
        struct Entity *enemy = (struct Entity *) malloc(sizeof(struct Entity));
            enemy->x = x;
            enemy->y = y;
            enemy->symbol = 'X';
            strcat(enemy->name, name);
        enemies[i] = enemy;
        drawOnScreen(x, y, enemy->symbol);
    };

    // Player
    struct Entity player;
        player.x = WIDTH / 2;
        player.y = HEIGHT / 2;
        player.symbol = '@';
        strcpy(player.name, "Player");
    drawOnScreen(player.x, player.y, player.symbol);

    getchar();
    renderScreen();

    char key = 0;
    while (key != 'q' || key != 'Q' || key != 27) {
        log("Current position: %d, %d\n", player.x, player.y);
        // Check if player collides with enemy coordinates
        for (int i = 0; i < enemyCount; i++) {
            if (player.x == enemies[i]->x && player.y == enemies[i]->y) {
                log("You died!\n");
                return;
            };
        };
        key = getchar();
        moveCharacter(key, &player);
        renderScreen();
    };
};