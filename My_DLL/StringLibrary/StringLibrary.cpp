#include "pch.h"
#include "StringLibrary.h"
#include <string.h>
#include <ctype.h>


void str_reverse(char* str)
{
    if (!str) return;
    int len = (int)strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
}


int str_word_count(const char* str)
{
    if (!str) return 0;
    int count = 0;
    bool inWord = false;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isspace((unsigned char)str[i]))
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }
    return count;
}


void str_trim(char* str)
{
    if (!str) return;
    int start = 0;
    while (isspace((unsigned char)str[start])) start++;

    int end = (int)strlen(str) - 1;
    while (end >= start && isspace((unsigned char)str[end])) end--;

    int j = 0;
    for (int i = start; i <= end; i++)
        str[j++] = str[i];
    str[j] = '\0';
}


void str_to_upper(char* str)
{
    if (!str) return;
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = (char)toupper((unsigned char)str[i]);
}