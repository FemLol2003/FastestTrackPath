#ifndef __PRINTER_INCLUDED__
#define __PRINTER_INCLUDED__
#include <stdio.h>
#include <stdint.h>
#include "structures.c"
#include "consolemanager.c"
#include <windows.h>

void tblprint(uint8_t palya[36][30], Coord cord[], int ind, int lastc)
{
    // Console.SetCursorPosition(0, 0);
    // Console.CursorLeft = ind;
    console_cursor(ind, 0);
    // Console.CursorVisible = false;
    // Console.Write("  ");
    printf("  ");
    // for (int q = 0; q < a.GetLength(1); q++)
    for (int q = 0; q < 30; q++)
    {
        if (q % 2 == 1)
        {
            // Console.BackgroundColor = ConsoleColor.Black;
            setBackgroundColor(CONSOLECOLOR_BACKGROUND_BLACK);
            // Console.ForegroundColor = ConsoleColor.White;
            setForegroundColor(CONSOLECOLOR_FOREGROUND_WHITE);
        }
        else
        {
            // Console.BackgroundColor = ConsoleColor.White;
            setBackgroundColor(CONSOLECOLOR_BACKGROUND_WHITE);
            // Console.ForegroundColor = ConsoleColor.Black;
            setForegroundColor(CONSOLECOLOR_FOREGROUND_BLACK);
        }
        print_2digit(q);
    }
    // Console.WriteLine();
    // Console.CursorLeft = ind;
    console_cursor(ind, 2);
    printf("a");
    for (int y = 0; y < 36; y++)
    {
        if (y % 2 == 1)
        {
            // Console.BackgroundColor = ConsoleColor.Black;
            setBackgroundColor(CONSOLECOLOR_BACKGROUND_BLACK);
            // Console.ForegroundColor = ConsoleColor.White;
            setForegroundColor(CONSOLECOLOR_FOREGROUND_WHITE);
        }
        else
        {
            // Console.BackgroundColor = ConsoleColor.White;
            setBackgroundColor(CONSOLECOLOR_BACKGROUND_WHITE);
            // Console.ForegroundColor = ConsoleColor.Black;
            setForegroundColor(CONSOLECOLOR_FOREGROUND_BLACK);
        }
        // if (y < 10)
        // Console.Write(' ');
        // Console.Write(y);
        print_2digit(y);

        // Console.ForegroundColor = ConsoleColor.DarkGray;
        setBackgroundColor(CONSOLECOLOR_BACKGROUND_BLACK);
        setForegroundColor(CONSOLECOLOR_FOREGROUND_DARKGRAY);
        for (int x = 0; x < 30; x++)
        {
            // if (cord is not null && cord.Any(z = > z.x == x && z.y == y)) ----------------------------------------------------------------------------
            if (coordsFindIndex(cord, lastc, createCoord(x, y)) != -1)
            {
                // Console.BackgroundColor = ConsoleColor.Red;
                setBackgroundColor(CONSOLECOLOR_BACKGROUND_RED);
            }
            // else if (a[y, x] == 0)
            else if (palya[y][x] == 0)
            {
                if ((x + y) % 2 == 0)
                    // Console.BackgroundColor = ConsoleColor.Black;
                    setBackgroundColor(CONSOLECOLOR_BACKGROUND_BLACK);

                else
                    // Console.BackgroundColor = ConsoleColor.Black;
                    setBackgroundColor(CONSOLECOLOR_BACKGROUND_BLACK);
            }
            // else if (a[y, x] <= 40)
            else if (palya[y][x] <= 40)
            {
                if ((x + y) % 2 == 0)
                    // Console.BackgroundColor = ConsoleColor.DarkYellow;
                    setBackgroundColor(CONSOLECOLOR_BACKGROUND_DARKYELLOW);

                else
                    // Console.BackgroundColor = ConsoleColor.Yellow;
                    setBackgroundColor(CONSOLECOLOR_BACKGROUND_YELLOW);
            }
            // else if (a[y, x] <= 70)
            else if (palya[y][x] <= 70)
            {
                if ((x + y) % 2 == 0)
                    // Console.BackgroundColor = ConsoleColor.DarkGreen;
                    setBackgroundColor(CONSOLECOLOR_BACKGROUND_DARKGREEN);
                else
                    // Console.BackgroundColor = ConsoleColor.Green;
                    setBackgroundColor(CONSOLECOLOR_BACKGROUND_GREEN);
            }
            else
            {
                if ((x + y) % 2 == 0)
                    // Console.BackgroundColor = ConsoleColor.DarkBlue;
                    setBackgroundColor(CONSOLECOLOR_BACKGROUND_DARKBLUE);
                else
                    // Console.BackgroundColor = ConsoleColor.Blue;
                    setBackgroundColor(CONSOLECOLOR_BACKGROUND_BLUE);
            }
            // if (cord is not null && cord.Any(z = > z.x == x && z.y == y))
            if(coordsFindIndex(cord, lastc, createCoord(x, y)) != -1)
            {
                // var c = cord.FindIndex(z = > z.x == x && z.y == y);
                // if (c < 10)
                // Console.Write(' ');
                // Console.Write(c);
                print_2digit(coordsFindIndex(cord, lastc, createCoord(x, y)));
            }
            else
            {
                // if (a[y, x] < 10)
                // Console.Write(' ');
                // Console.Write(a[y, x]);
                print_2digit(palya[y][x]);
            }
        }
        // Console.BackgroundColor = ConsoleColor.Black;
        setBackgroundColor(CONSOLECOLOR_BACKGROUND_BLACK);
        // Console.WriteLine();
        // Console.CursorLeft = ind;
        console_cursor(ind, y + 2);
    }
}

#endif