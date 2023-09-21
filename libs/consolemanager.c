#ifndef __CONSOLEMANAGER_INCLUDED__
#define __CONSOLEMANAGER_INCLUDED__
#include <stdio.h>
#include <stdarg.h>

typedef enum ConsoleColorForeground
{
    // Szöveg színek
    CONSOLECOLOR_FOREGROUND_BLACK = 30,       // \033[0;30m
    CONSOLECOLOR_FOREGROUND_RED = 31,         // \033[0;31m
    CONSOLECOLOR_FOREGROUND_GREEN = 32,       // \033[0;32m
    CONSOLECOLOR_FOREGROUND_YELLOW = 33,      // \033[0;33m
    CONSOLECOLOR_FOREGROUND_BLUE = 34,        // \033[0;34m
    CONSOLECOLOR_FOREGROUND_MAGENTA = 35,     // \033[0;35m
    CONSOLECOLOR_FOREGROUND_CYAN = 36,        // \033[0;36m
    CONSOLECOLOR_FOREGROUND_WHITE = 37,       // \033[0;37m
    CONSOLECOLOR_FOREGROUND_DARKGRAY = 90,    // \033[0;90m (Világos Fekete)
    CONSOLECOLOR_FOREGROUND_DARKRED = 91,     // \033[0;91m (Világos Piros)
    CONSOLECOLOR_FOREGROUND_DARKGREEN = 92,   // \033[0;92m (Világos Zöld)
    CONSOLECOLOR_FOREGROUND_DARKYELLOW = 93,  // \033[0;93m (Világos Sárga)
    CONSOLECOLOR_FOREGROUND_DARKBLUE = 94,    // \033[0;94m (Világos Kék)
    CONSOLECOLOR_FOREGROUND_DARKMAGENTA = 95, // \033[0;95m (Világos Lila)
    CONSOLECOLOR_FOREGROUND_DARKCYAN = 96,    // \033[0;96m (Világos Cián)
    CONSOLECOLOR_FOREGROUND_GRAY = 97,        // \033[0;97m (Világos Fehér)
} ConsoleColorForeground;
typedef enum ConsoleColorBackground
{
    // Háttérszínek
    CONSOLECOLOR_BACKGROUND_BLACK = 40,        // \033[40m
    CONSOLECOLOR_BACKGROUND_RED = 41,          // \033[41m
    CONSOLECOLOR_BACKGROUND_GREEN = 42,        // \033[42m
    CONSOLECOLOR_BACKGROUND_YELLOW = 43,       // \033[43m
    CONSOLECOLOR_BACKGROUND_BLUE = 44,         // \033[44m
    CONSOLECOLOR_BACKGROUND_MAGENTA = 45,      // \033[45m
    CONSOLECOLOR_BACKGROUND_CYAN = 46,         // \033[46m
    CONSOLECOLOR_BACKGROUND_WHITE = 47,        // \033[47m
    CONSOLECOLOR_BACKGROUND_DARKGRAY = 100,    // \033[100m (Világos Fekete Háttér)
    CONSOLECOLOR_BACKGROUND_DARKRED = 101,     // \033[101m (Világos Piros Háttér)
    CONSOLECOLOR_BACKGROUND_DARKGREEN = 102,   // \033[102m (Világos Zöld Háttér)
    CONSOLECOLOR_BACKGROUND_DARKYELLOW = 103,  // \033[103m (Világos Sárga Háttér)
    CONSOLECOLOR_BACKGROUND_DARKBLUE = 104,    // \033[104m (Világos Kék Háttér)
    CONSOLECOLOR_BACKGROUND_DARKMAGENTA = 105, // \033[105m (Világos Lila Háttér)
    CONSOLECOLOR_BACKGROUND_DARKCYAN = 106,    // \033[106m (Világos Cián Háttér)
    CONSOLECOLOR_BACKGROUND_GRAY = 107         // \033[107m (Világos Fehér Háttér)
} ConsoleColorBackground;

// Két globális változó a színek tárolására
static ConsoleColorForeground currentForegroundColor = CONSOLECOLOR_FOREGROUND_WHITE;
static ConsoleColorBackground currentBackgroundColor = CONSOLECOLOR_BACKGROUND_BLACK;

// Függvények a színek beállítására
void setForegroundColor(ConsoleColorForeground color)
{
    currentForegroundColor = color;
}

void setBackgroundColor(ConsoleColorBackground color)
{
    currentBackgroundColor = color;
}
// Függvény a formázott kiíratáshoz a beállított színekkel
void printformatted(const char *format, ...)
{
    va_list args;
    printf("\033[%d;%dm", currentForegroundColor, currentBackgroundColor); // Színek alkalmazása
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("\033[0m"); // Színek visszaállítása
}

void console_reset()
{
    printf("\033[2J");
}
void console_cursor(int x, int y)
{
    printf("\033[%d;%dH", y, x);
    fflush(stdout);
}
void print_2digit(int num)
{
    if (num < 10)
        printformatted(" %d", num);
    else
        printformatted("%d", num);
}


#endif