#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
# define MAX_SIZE 2000 
# define sleeptime_starttime 5000 
# define sleeptime_newline 1500 
# define sleeptime_oneline 50 

void LoadInfo(char* str, const int max_size);

int GetVirtualKeyBoardNumber(char* string, const int max_size);

void VirtualOutput(char* string, const int max_size);

int main()
{
    char str[MAX_SIZE] = { 0 };
    LoadInfo(str, MAX_SIZE);
    Sleep(sleeptime_starttime);
    VirtualOutput(str, MAX_SIZE);
    return 0;
}


//dfsdfsfsdfsdfsdf

void LoadInfo(char* str, const int max_size)
{
    const char filename[] = "data.txt";
    FILE* fp = NULL;
    fp = fopen(filename, "r");
    int i = 0;
    if (fp != NULL)
    {
        while (fscanf(fp, "%c", &str[i]) != EOF)
            i++;
        fclose(fp);

    }
    else
        printf("Failed to open file!\n");
    fp = NULL;
    return;
}

int GetVirtualKeyBoardNumber(char* string, const int max_size)
{

    int i, virtualkb_number = 0;
    for (i = 0; i < max_size && string[i] != '\0'; i++)
    {
        switch (string[i])
        {
        case '\n':
            virtualkb_number = 13;
            break;
        case ' ':
            virtualkb_number = 32;
            break;
        case ')':
            virtualkb_number = 48;
            break;
        case '!':
            virtualkb_number = 49;
            break;
        case '@':
            virtualkb_number = 50;
            break;
        case '#':
            virtualkb_number = 51;
            break;
        case '$':
            virtualkb_number = 52;
            break;
        case '%':
            virtualkb_number = 53;
            break;
        case '^':
            virtualkb_number = 54;
            break;
        case '&':
            virtualkb_number = 55;
            break;
        case '*':
            virtualkb_number = 56;
            break;
        case '(':
            virtualkb_number = 57;
            break;
        case 'A':case 'a':
            virtualkb_number = 65;
            break;
        case 'B':case 'b':
            virtualkb_number = 66;
            break;
        case 'C':case 'c':
            virtualkb_number = 67;
            break;
        case 'D':case 'd':
            virtualkb_number = 68;
            break;
        case 'E':case 'e':
            virtualkb_number = 69;
            break;
        case 'F':case 'f':
            virtualkb_number = 70;
            break;
        case 'G':case 'g':
            virtualkb_number = 71;
            break;
        case 'H':case 'h':
            virtualkb_number = 72;
            break;
        case 'I':case 'i':
            virtualkb_number = 73;
            break;
        case 'J':case 'j':
            virtualkb_number = 74;
            break;
        case 'K':case 'k':
            virtualkb_number = 75;
            break;
        case 'L':case 'l':
            virtualkb_number = 76;
            break;
        case 'M':case 'm':
            virtualkb_number = 77;
            break;
        case 'N':case 'n':
            virtualkb_number = 78;
            break;
        case 'O':case 'o':
            virtualkb_number = 79;
            break;
        case 'P':case 'p':
            virtualkb_number = 80;
            break;
        case 'Q':case 'q':
            virtualkb_number = 81;
            break;
        case 'R':case 'r':
            virtualkb_number = 82;
            break;
        case 'S':case 's':
            virtualkb_number = 83;
            break;
        case 'T':case 't':
            virtualkb_number = 84;
            break;
        case 'U':case 'u':
            virtualkb_number = 85;
            break;
        case 'V':case 'v':
            virtualkb_number = 86;
            break;
        case 'W':case 'w':
            virtualkb_number = 87;
            break;
        case 'X':case 'x':
            virtualkb_number = 88;
            break;
        case 'Y':case 'y':
            virtualkb_number = 89;
            break;
        case 'Z':case 'z':
            virtualkb_number = 90;
            break;

        case '0':
            virtualkb_number = 96;
            break;
        case '1':
            virtualkb_number = 97;
            break;
        case '2':
            virtualkb_number = 98;
            break;
        case '3':
            virtualkb_number = 99;
            break;
        case '4':
            virtualkb_number = 100;
            break;
        case '5':
            virtualkb_number = 101;
            break;
        case '6':
            virtualkb_number = 102;
            break;
        case '7':
            virtualkb_number = 103;
            break;
        case '8':
            virtualkb_number = 104;
            break;
        case '9':
            virtualkb_number = 105;
            break;
        case '.':
            virtualkb_number = 110;
            break;
        case ';':case ':':
            virtualkb_number = 186;
            break;
        case '=':case '+':
            virtualkb_number = 187;
            break;
        case ',':
            virtualkb_number = 188;
            break;
        case '-':case '_':
            virtualkb_number = 189;
            break;
        case '/':case '?':
            virtualkb_number = 191;
            break;
        case '`':case '~':
            virtualkb_number = 192;
            break;
        case '[':case '{':
            virtualkb_number = 219;
            break;
        case '\\': case '|':
            virtualkb_number = 220;
            break;
        case ']':case '}':
            virtualkb_number = 221;
            break;
        case '\'':case '"':
            virtualkb_number = 222;
            break;
        }

    }

    return virtualkb_number;
}

void VirtualOutput(char* string, const int max_size)
{
    int virtualkb_number, asc_number, i, num;
    char virtualkb_symbol;
    Sleep(sleeptime_newline);
    for (i = 0; i < max_size && string[i] != '\0'; i++)
    {
        asc_number = string[i];
        virtualkb_number = GetVirtualKeyBoardNumber(&string[i], 1);
        printf("%c", string[i]);
        //printf("%d\n", virtualkb_number);

        if ((asc_number >= 33 && asc_number <= 38) || (asc_number >= 40 && asc_number <= 43) ||
            (asc_number == 58) || (asc_number >= 62 && asc_number <= 90) ||
            (asc_number >= 123 && asc_number <= 126) || (asc_number == 60)
            || (asc_number == 94) || (asc_number == 95))
        {
            keybd_event(16, 0, 0, 0);//push Shift key
            keybd_event(virtualkb_number, 0, 0, 0);//push a key such as 'a' to get 'A'
            keybd_event(virtualkb_number, 0, KEYEVENTF_KEYUP, 0);//loose 'a' key
            keybd_event(16, 0, KEYEVENTF_KEYUP, 0);//loose Shift key
            //make a combination to get an 'A' at last.
        }
        else
        {
            keybd_event(virtualkb_number, 0, 0, 0);
            keybd_event(virtualkb_number, 0, KEYEVENTF_KEYUP, 0);
        }

        if (string[i] == '\n')
            Sleep(sleeptime_newline);
        else
            Sleep(sleeptime_oneline);
    }
}
