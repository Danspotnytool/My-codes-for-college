
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *a[6] = {
    "    /\\    ",
    "   /  \\   ",
    "  /----\\  ",
    " |      | ",
    " |      | ",
    " |      | "
};
char *b[6] = {
    " |-----\\  ",
    " |     |  ",
    " |------\\ ",
    " |      | ",
    " |      | ",
    " |------/ "
};
char *c[6] = {
    "  /-----\\  ",
    " /       \\ ",
    " |         ",
    " |         ",
    " \\       / ",
    "  \\-----/  "
};
char *d[6] = {
    " |-----\\  ",
    " |     |  ",
    " |     |  ",
    " |     |  ",
    " |     |  ",
    " |-----/  "
};
char *e[6] = {
    " |------\\  ",
    " |         ",
    " |----\\    ",
    " |         ",
    " |         ",
    " |------/  "
};
char *f[6] = {
    " |------\\ ",
    " |       ",
    " |----\\   ",
    " |       ",
    " |       ",
    " |       "
};
char *g[6] = {
    "  /-----\\  ",
    " /       \\ ",
    " |         ",
    " |     /-- ",
    " \\      \\  ",
    "  \\-----|  "
};
char *h[6] = {
    " |      |  ",
    " |      |  ",
    " |------|  ",
    " |      |  ",
    " |      |  ",
    " |      |  "
};
char *i[6] = {
    " |--+--| ",
    "    |    ",
    "    |    ",
    "    |    ",
    "    |    ",
    " |--+--| "
};
char *j[6] = {
    "      |  ",
    "      |  ",
    "      |  ",
    "      |  ",
    " |    |  ",
    "  \\--/   "
};
char *k[6] = {
    " |  /  ",
    " | /   ",
    " |\\    ",
    " | \\   ",
    " |  \\  ",
    " |   \\ "
};
char *l[6] = {
    " |       ",
    " |       ",
    " |       ",
    " |       ",
    " |       ",
    " |------ "
};
char *m[6] = {
    " |\\    /|  ",
    " | \\  / |  ",
    " |  \\/  |  ",
    " |      |  ",
    " |      |  ",
    " |      |  "
};
char *n[6] = {
    " |\\     |  ",
    " | \\    |  ",
    " |  \\   |  ",
    " |   \\  |  ",
    " |    \\ |  ",
    " |     \\|  "
};
char *o[6] = {
    "  /-----\\  ",
    " /       \\ ",
    " |       | ",
    " |       | ",
    " \\       / ",
    "  \\-----/  "
};
char *p[6] = {
    " |-----\\  ",
    " |     |  ",
    " |-----/  ",
    " |        ",
    " |        ",
    " |        "
};
char *q[6] = {
    "  /-----\\  ",
    " /       \\ ",
    " |       | ",
    " |       | ",
    " \\    \\  / ",
    "  \\----\\/  "
};
char *r[6] = {
    " |-----\\  ",
    " |     |  ",
    " |-----/  ",
    " |   \\    ",
    " |    \\   ",
    " |     \\  "
};
char *s[6] = {
    "  /-----\\  ",
    " /       \\ ",
    " \\-----\\   ",
    "         \\ ",
    " \\       / ",
    "  \\-----/  "
};
char *t[6] = {
    " |---+---| ",
    "     |     ",
    "     |     ",
    "     |     ",
    "     |     ",
    "     |     "
};
char *u[6] = {
    " |      |  ",
    " |      |  ",
    " |      |  ",
    " |      |  ",
    " \\      /  ",
    "  \\----/   "
};
char *v[6] = {
    " |     |  ",
    " |     |  ",
    " |     |  ",
    " \\     /  ",
    "  \\   /   ",
    "   \\-/    "
};
char *w[6] = {
    " |      |  ",
    " |      |  ",
    " |      |  ",
    " |  /\\  |  ",
    " \\ /  \\ /  ",
    "  /    \\   "
};
char *x[6] = {
    " |     |  ",
    "  \\   /   ",
    "   \\ /    ",
    "   / \\    ",
    "  /   \\   ",
    " |     |  "
};
char *y[6] = {
    " |       | ",
    "  \\     /  ",
    "   \\   /   ",
    "    \\ /    ",
    "     |     ",
    "     |     "
};
char *z[6] = {
    " |------| ",
    "      /   ",
    "   --/--  ",
    "    /     ",
    "   /      ",
    " |------| "
};
char *dot[6] = {
    "     ",
    "     ",
    "     ",
    "     ",
    "     ",
    " [#] "
};
char *comma[6] = {
    "     ",
    "     ",
    "     ",
    "     ",
    " [#] ",
    " _#] "
};
char *colon[6] = {
    "     ",
    " [#] ",
    " [#] ",
    "     ",
    " [#] ",
    " [#] "
};
char *semicolon[6] = {
    "     ",
    " [#] ",
    " [#] ",
    "     ",
    " [#] ",
    " _#] "
};
char *exclamation[6] = {
    " [#] ",
    " [#] ",
    " [#] ",
    " [#] ",
    "     ",
    " [#] "
};
char *question[6] = {
    "  /--\\  ",
    " /    \\ ",
    "      | ",
    "     /  ",
    "        ",
    "   [#]  "
};

char *empty[6] = {
    "",
    "",
    "",
    "",
    "",
    ""
};

// A function that returns an array of strings
// This function requires two arguments:
// first: array of strings
// second: array of strings
// returns: array of strings from both arguments
char **merge(char **a, char **b) {
    char **result = malloc(sizeof(char *) * 6);
    for (int i = 0; i < 6; i++) {
        result[i] = malloc(sizeof(char) * 100);
        strcpy(result[i], a[i]);
        strcat(result[i], " ");
        strcat(result[i], b[i]);
        strcat(result[i], " ");
    };
    return result;
};

void main() {
    // Merch n, a, m, and e
    char **nameOpening = merge(empty, n);
    nameOpening = merge(nameOpening, a);
    nameOpening = merge(nameOpening, m);
    nameOpening = merge(nameOpening, e);

    // List all allowed characters
    char *allowed = "abcdefghijklmnopqrstuvwxyz.,:;!";
    // Get the length of the allowed characters
    int allowedLength = strlen(allowed);

    // Save all the letters in an array of arrays
    char ***lettersArt = malloc(sizeof(char **) * allowedLength);
    lettersArt[0] = a; lettersArt[1] = b; lettersArt[2] = c;
    lettersArt[3] = d; lettersArt[4] = e; lettersArt[5] = f;
    lettersArt[6] = g; lettersArt[7] = h; lettersArt[8] = i;
    lettersArt[9] = j; lettersArt[10] = k; lettersArt[11] = l;
    lettersArt[12] = m; lettersArt[13] = n; lettersArt[14] = o;
    lettersArt[15] = p; lettersArt[16] = q; lettersArt[17] = r;
    lettersArt[18] = s; lettersArt[19] = t; lettersArt[20] = u;
    lettersArt[21] = v; lettersArt[22] = w; lettersArt[23] = x;
    lettersArt[24] = y; lettersArt[25] = z; lettersArt[26] = dot;
    lettersArt[27] = comma; lettersArt[28] = colon; lettersArt[29] = semicolon;
    lettersArt[30] = exclamation;

    char name[] = "The instability of C language kinda sucks";
    // Convert the name to lowercase
    for (int i = 0; i < strlen(name); i++) {
        name[i] = tolower(name[i]);
    };
    // Separate to words
    char *words[10];
    int wordCount = 0;
    char *word = strtok(name, " ");
    while (word != NULL) {
        words[wordCount] = word;
        printf("%s ", word);
        wordCount++;
        word = strtok(NULL, " ");
    };
    // Remove all characters that are not allowed and print the words
    // Loop for the words
    for (int i = 0; i < wordCount; i++) {
        // Loop for the letters
        char **word = merge(empty, empty);

        for (int j = 0; j < strlen(words[i]); j++) {
            if (strchr(allowed, words[i][j]) == NULL) {
                words[i][j] = ' ';
            } else {
                // Get the index of this character in the allowed characters
                int index = strchr(allowed, words[i][j]) - allowed;
                // Get the art of this character
                char **art = lettersArt[index];
                // Merge the art
                word = merge(word, art);
            };
        };

        // Print the word
        for (int i = 0; i < 6; i++) {
            printf("\n");
            printf("%s", word[i]);
        };

        printf("\n");
    };
};