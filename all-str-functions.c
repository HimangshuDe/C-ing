#include <stdio.h>
#include <string.h>

// User-defined of strcpy() function in string.h file.
void ustrcopy(char source[], char dest[]);

int ustrcompare(char string1[], char string2[]);

int ustrlen(char string[]);

void ustrlower(char string[]);

void ustrreverse(char string[]);

// Entry point of a C program.
int main()
{
    char source1[] = "AbC", dest1[]="";

    ustrcopy(source1, dest1);
    printf("Using custom function of strcpy():\n");
    printf("---------------------------\n");
    printf("Value of A:%s\nValue of B:%s\n", source1, dest1);

    printf("\n");

    char str[] = "cat", str2[] ="zebra";
    printf("strcmp() vs ustrcompare():\n");
    printf("---------------------------\n");
    printf("Comparison(strcmp): %d\n",strcmp(str, str2)); 
    printf("Comparison(custom): %d\n", ustrcompare(str, str2));

    printf("\n");

    char word[] = "cat";
    printf("strlen() vs ustrlen():\n");
    printf("---------------------------\n");
    printf("Length(strlen):%d\n", strlen(word));
    printf("Length(custom):%d\n", ustrlen(word));
    
    printf("\n");

    char new_word[100] = "tIgER";
    printf("strlwr() vs ustrlower():\n");
    printf("---------------------------\n");
    printf("Word:%s\n", new_word);
    printf("Using in built strlwr: %s\n",strlwr(new_word));
    ustrlower(new_word);
    printf("Lowered using custom func: %s\n",new_word);

    printf("\n");

    char a[100] = "APple";
    
    printf("strrev() vs ustrreverse():\n");
    printf("---------------------------\n");
    printf("Original text: %s\n", a);
    printf("Reversed(strrev): %s\n", strrev(a));
    ustrreverse(a);
    printf("Reversed(custom): %s\n", a);

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

int ustrlen(char string[])
{
    int count = 0, i = 0;
    while (string[i] != '\0')
    {
        count++;
        ++i;
    }
    return count;
}

void ustrlower(char string[]){
    int i =0;
    while (string[i] != '\0'){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] += ('a'-'A');
        }
        i++;
    }
}

void ustrreverse(char string[]){
    int i=0, count = ustrlen(string);
    char temp_str[100];
    i=0;
    for (int j=count-1; j>=0; j--){
        temp_str[i] = string[j];
        i++;
    }
    i = 0;
    while(i<=count){
        // printf("In while");
        string[i] = temp_str[i];
        i++;
    }

}