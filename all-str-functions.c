#include <stdio.h>
#include <string.h>

// User-defined of strcpy() function in string.h file.
void ustrcopy(char source[], char dest[]);

int ustrcompare(char string1[], char string2[]);

int ustringlen(char string[]);

void ustringlower(char string[]);

// Entry point of a C program.
int main()
{
    // char a[] = "AbC", b[]="AbC";
    // ustrcopy(a, b);

    // char a[] = "cat", b[]="zebra";
    // printf("%d",strcmp(a, b)); 
    // printf("%d", ustrcompare(a, b));

    // char a[] = "cat";
    // printf("%d\n", strlen(a));
    // printf("%d\n", ustringlen(a));

    char a[100] = "CAT", b[100]="APple";
    printf("%s\n",strlwr(a));
    ustringlower(b);
    printf("%s", b);
    return 0;
}

// <----------------User defined functions-------------------->
void ustrcopy(char source[], char dest[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }
}

int ustrcompare(char string1[], char string2[])
{
    int i = 0, comp_result;
    while (string1[i] != '\0' || string2[i] != '\0')
    {
        comp_result = string1[i] - string2[i];

        i++;
    }
    return comp_result;
}

int ustringlen(char string[])
{
    int count = 0, i = 0;
    while (string[i] != '\0')
    {
        count++;
        ++i;
    }
    return count;
}

void ustringlower(char string[]){
    int i =0;
    while (string[i] != '\0'){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] += ('a'-'A');
        }
        i++;
    }
}