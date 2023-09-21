#include <stdio.h>
#include <stdint.h>
#include "libs/printer.c"
#include "libs/structures.c"
#include "libs/crossplatformsleep.c"


int main()
{
    /*printf("Hello Agyagasi Ferenc Attila!\n");

    int a, b;
    printf("Num1: ");
    scanf("%d", &a);
    printf("Num2: ");
    scanf("%d", &b);

    printf("Num3: %d\n", a * b);

    // Piros szöveg
    printf("\033[31mThis is red text!\033[0m\n");

    // Piros háttérrel kék szöveg
    printf("\033[41m\033[34mBlue text on red background!\033[0m\n");

    // Kurzor mozgatása a 10. sor, 5. oszlopra, majd szöveg írása
    printf("\033[10;5HHello at row 10, column 5!\n");
    uint8_t e =2;
    return 0;*/
    scanf("0");
    console_reset();

    uint8_t a[36][30];
    Negyzet filler[] =
        {
            createNegyzet(1, 11, 3, 11, 1),
            createNegyzet(1, 10, 3, 10, 2),
            createNegyzet(1, 9, 3, 9, 3),
            createNegyzet(1, 8, 3, 8, 4),
            createNegyzet(1, 7, 3, 7, 5),
            createNegyzet(1, 6, 3, 6, 6),
            createNegyzet(2, 5, 4, 5, 7),
            createNegyzet(3, 4, 5, 4, 8),
            createNegyzet(4, 3, 6, 3, 9),
            createNegyzet(5, 2, 7, 2, 10),
            createNegyzet(6, 1, 6, 3, 11),
            createNegyzet(7, 1, 7, 3, 12),
            createNegyzet(8, 1, 8, 3, 13),
            createNegyzet(9, 1, 9, 3, 14),
            createNegyzet(10, 1, 10, 3, 15),
            createNegyzet(11, 1, 11, 3, 16),
            createNegyzet(12, 1, 12, 3, 17),
            createNegyzet(13, 1, 13, 3, 18),
            createNegyzet(14, 1, 14, 3, 19),
            createNegyzet(15, 1, 15, 3, 20),
            createNegyzet(16, 1, 16, 3, 21),
            createNegyzet(17, 1, 17, 3, 22),
            createNegyzet(18, 2, 18, 4, 23),
            createNegyzet(19, 3, 19, 5, 24),
            createNegyzet(20, 4, 20, 6, 25),
            createNegyzet(21, 5, 21, 7, 26),
            createNegyzet(20, 6, 22, 6, 27),
            createNegyzet(20, 7, 22, 7, 28),
            createNegyzet(20, 8, 22, 8, 29),
            createNegyzet(20, 9, 22, 9, 30),
            createNegyzet(20, 10, 22, 10, 31),
            createNegyzet(20, 11, 22, 11, 31),
            createNegyzet(20, 12, 22, 12, 33),
            createNegyzet(20, 13, 22, 13, 34),
            createNegyzet(21, 14, 23, 14, 35),
            createNegyzet(22, 15, 24, 15, 36),
            createNegyzet(23, 16, 25, 16, 41),
            createNegyzet(24, 17, 26, 17, 42),
            createNegyzet(24, 18, 26, 18, 43),
            createNegyzet(24, 19, 26, 19, 44),
            createNegyzet(24, 20, 26, 20, 45),
            createNegyzet(24, 21, 26, 21, 46),
            createNegyzet(24, 22, 26, 22, 47),
            createNegyzet(24, 23, 26, 23, 48),
            createNegyzet(23, 24, 25, 24, 49),
            createNegyzet(23, 25, 25, 25, 50),
            createNegyzet(22, 26, 24, 26, 51),
            createNegyzet(22, 27, 24, 27, 52),
            createNegyzet(21, 28, 23, 28, 53),
            createNegyzet(21, 29, 23, 29, 54),
            createNegyzet(20, 30, 22, 30, 55),
            createNegyzet(20, 31, 22, 31, 56),
            createNegyzet(15, 32, 21, 32, 57),
            createNegyzet(16, 33, 20, 33, 58),
            createNegyzet(17, 34, 19, 34, 58),
            createNegyzet(18, 32, 18, 34, 59),
            createNegyzet(17, 32, 17, 34, 60),
            createNegyzet(15, 32, 16, 32, 61),
            createNegyzet(16, 33, 16, 33, 61),
            createNegyzet(14, 31, 17, 31, 62),
            createNegyzet(14, 30, 16, 30, 63),
            createNegyzet(14, 29, 16, 29, 64),
            createNegyzet(14, 28, 16, 28, 65),
            createNegyzet(14, 27, 16, 27, 77),
            createNegyzet(14, 26, 16, 26, 78),
            createNegyzet(14, 25, 16, 25, 79),
            createNegyzet(14, 24, 16, 24, 80),
            createNegyzet(13, 23, 15, 23, 81),
            createNegyzet(12, 22, 14, 22, 82),
            createNegyzet(11, 21, 13, 21, 83),
            createNegyzet(10, 20, 12, 20, 84),
            createNegyzet(11, 19, 11, 21, 85),
            createNegyzet(10, 19, 10, 21, 86),
            createNegyzet(9, 19, 9, 21, 87),
            createNegyzet(8, 19, 8, 21, 88),
            createNegyzet(7, 19, 7, 21, 89),
            createNegyzet(6, 19, 6, 21, 90),
            createNegyzet(5, 18, 5, 20, 91),
            createNegyzet(4, 17, 4, 19, 92),
            createNegyzet(3, 16, 3, 18, 93),
            createNegyzet(2, 15, 2, 17, 94),
            createNegyzet(1, 16, 3, 16, 95),
            createNegyzet(1, 15, 3, 15, 96),
            createNegyzet(1, 14, 3, 14, 97),
            createNegyzet(1, 13, 3, 13, 98),
            createNegyzet(1, 12, 3, 12, 99)};

    for (int x = 0; x < 30; x++)
    {
        for (int y = 0; y < 36; y++)
        {
            a[y][x] = 0;
        }
    }

    for (int i = 0; i < sizeof(filler) / sizeof(Negyzet); i++)
    {
        for (int x = filler[i].x1; x <= filler[i].x2; x++)
        {
            for (int y = filler[i].y1; y <= filler[i].y2; y++)
            {
                a[y][x] = filler[i].num;
            }
        }
    }

    int maxsteps = 40;
    int s2min = 40;
    int s3min = 40;

    Coord speed[40];
    Coord speedD[40];
    Coord coords[40];

    tblprint(a, coords, 0, 0);

    int tIndex = 1;

    int sx = 2;
    int sy = 11;

    speedD[0].x = 0;
    speedD[0].y = 0;
    speed[0].x = 0;
    speed[0].y = 0;
    coords[0].x = sx;
    coords[0].y = sy;
    speedD[1].x = 0;
    speedD[1].y = -1;
    speed[1].x = 0;
    speed[1].y = -1;
    coords[1].x = sx;
    coords[1].y = sy - 1;

    int o = 0;
    int dbr = 0;
    int num = 0;
    bool step = false;
    int sols = 0;

    while (true)
    {
        if (coords[tIndex].y < 0 || coords[tIndex].x < 0)
        {
            step = true;
            dbr = 0;
        }
        else if (coords[tIndex].y >= 36 || coords[tIndex].x >= 30)
        {
            step = true;
            dbr = 1;
        }
        else if (a[coords[tIndex].y][coords[tIndex].x] == 0)
        {
            step = true;
            dbr = 2;
        }
        else if (tIndex == s2min && a[coords[tIndex].y][coords[tIndex].x] < 40)
        {
            step = true;
        }
        else if (tIndex == s3min && a[coords[tIndex].y][coords[tIndex].x] < 70)
        {
            step = true;
        }
        else if (a[coords[tIndex].y][coords[tIndex].x] > 70 && a[coords[tIndex - 1].y][coords[tIndex - 1].x] < 20)
        {
            step = true;
        }
        else if (speed[tIndex].x == 0 && speed[tIndex].y == 0)
        {
            step = true;
        }
        else if (tIndex + 1 >= maxsteps)
            step = true;
        else if (a[coords[tIndex].y][coords[tIndex].x] < 20 && a[coords[tIndex - 1].y][coords[tIndex - 1].x] > 70) // a[coords[tIndex].y, coords[tIndex].x] >70)//
        {
            // console_reset();
            if (maxsteps != tIndex + 2)
            {
                sols = 0;
            }
            tblprint(a, coords, 0, tIndex - 1);
            maxsteps = tIndex + 2;
            printf("maxsteps: %d\n", maxsteps - 2);
            step = true;
            for (int i = 0; i < tIndex + 1; i++)
            {
                if (a[coords[i].y][coords[i].x] > 40)
                {
                    s2min = i + 3;
                    break;
                }
            }
            for (int i = 0; i < tIndex + 1; i++)
            {
                if (a[coords[i].y][coords[i].x] > 70)
                {
                    s3min = i + 3;
                    break;
                }
            }
            printf("s2: %d\n", s2min);
            printf("s3: %d\n", s3min);
            sols = sols + 1;
            printf("sols: %d               \n", sols);
            if(maxsteps -2 == 32)
                crossPlatformSleep(500);
        }
        else if (a[coords[tIndex].y][coords[tIndex].x] < a[coords[tIndex - 1].y][coords[tIndex - 1].x])
        {
            step = true;
        }
        else if (tIndex != 1 && a[coords[tIndex].y][coords[tIndex].x] == a[coords[tIndex - 2].y][coords[tIndex - 2].x])
        {
            step = true;
        }
        else
        {
            tIndex++;
            speedD[tIndex].x = 0;
            speedD[tIndex].y = -1;
            speed[tIndex].x = speed[tIndex - 1].x + speedD[tIndex].x;
            speed[tIndex].y = speed[tIndex - 1].y + speedD[tIndex].y;
            coords[tIndex].x = coords[tIndex - 1].x + speed[tIndex].x;
            coords[tIndex].y = coords[tIndex - 1].y + speed[tIndex].y;
        }

        while (step)
        {
            step = false;
            // var lst = speedD[tIndex];
            // speedD.RemoveLast();
            // speed.RemoveLast();
            // coords.RemoveLast();

            if (speedD[tIndex].x == 0 && speedD[tIndex].y == -1) // == new Coord(0, -1))
            {
                speedD[tIndex].x = 1; // = new(1, 0);
                speedD[tIndex].y = 0; // = new(1, 0);
                speed[tIndex].x = speed[tIndex - 1].x + speedD[tIndex].x;
                speed[tIndex].y = speed[tIndex - 1].y + speedD[tIndex].y;
                coords[tIndex].x = coords[tIndex - 1].x + speed[tIndex].x;
                coords[tIndex].y = coords[tIndex - 1].y + speed[tIndex].y;
            }
            else if (speedD[tIndex].x == 1 && speedD[tIndex].y == 0) // == new Coord(1, 0))
            {
                speedD[tIndex].x = 0; // = new(0, 1);
                speedD[tIndex].y = 1; // = new(0, 1);
                speed[tIndex].x = speed[tIndex - 1].x + speedD[tIndex].x;
                speed[tIndex].y = speed[tIndex - 1].y + speedD[tIndex].y;
                coords[tIndex].x = coords[tIndex - 1].x + speed[tIndex].x;
                coords[tIndex].y = coords[tIndex - 1].y + speed[tIndex].y;
            }
            else if (speedD[tIndex].x == 0 && speedD[tIndex].y == 1) // == new Coord(0, 1))
            {
                speedD[tIndex].x = -1; // = new(-1, 0);
                speedD[tIndex].y = 0;  // = new(-1, 0);
                speed[tIndex].x = speed[tIndex - 1].x + speedD[tIndex].x;
                speed[tIndex].y = speed[tIndex - 1].y + speedD[tIndex].y;
                coords[tIndex].x = coords[tIndex - 1].x + speed[tIndex].x;
                coords[tIndex].y = coords[tIndex - 1].y + speed[tIndex].y;
            }
            else if (speedD[tIndex].x == -1 && speedD[tIndex].y == 0) // == new Coord(-1, 0))
            {
                speedD[tIndex].x = 0; // = new(0, 0);
                speedD[tIndex].y = 0; // = new(0, 0);
                speed[tIndex].x = speed[tIndex - 1].x + speedD[tIndex].x;
                speed[tIndex].y = speed[tIndex - 1].y + speedD[tIndex].y;
                coords[tIndex].x = coords[tIndex - 1].x + speed[tIndex].x;
                coords[tIndex].y = coords[tIndex - 1].y + speed[tIndex].y;
            }
            else if (tIndex != 1)
            {
                tIndex--;
                step = true;
            }
            else
            {
                printf("\n\n\n\n\nend\n");
                return 0;
            }
        }

        if (++num > 30000000 && tIndex + 1 == maxsteps)
        {
            num = 0;
            // var ss = Kiir.Iro(a, coords[..(tIndex + 1)].ToList(), 70);
            // Console.WriteLine($ "maxsteps: {maxsteps}");
            tblprint(a, coords, 70, tIndex - 2);
            printf("maxsteps: %d", maxsteps - 2);
            /*StringBuilder stringBuilder = new StringBuilder();
            Console.WriteLine("---");
            foreach (var item in coords)
            {
                stringBuilder.AppendLine($"x: {item.x}, y: {item.y}");
            }
            Console.WriteLine(stringBuilder.ToString());*/
        }
    }

    return 0;
}
