#include <stdio.h>
int main()
{
    FILE *file;
    int character = 0, word = 0, line = 0;
    char ch, prev_ch = ' ';

    file = fopen("task2test.txt", "r");
    if (file == NULL)
    {
        printf("Error! Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        character++;
        if (ch == '\n')
            line++;
        if ((ch == ' ' || ch == '\n' || ch == '\t') && prev_ch != ' ' && prev_ch != '\n' && prev_ch != '\t')
            word++;
        prev_ch = ch;
    }

    if (character > 0 && prev_ch != '\n')
        line++;
    if (prev_ch != ' ' && prev_ch != '\n' && prev_ch != '\t')
        word++;

    printf("Total characters = %d\n", character);
    printf("Total words = %d\n", word);
    printf("Total lines = %d\n", line);

    fclose(file);
    return 0;
}
