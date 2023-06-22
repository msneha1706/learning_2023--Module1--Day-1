#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void convertToUpper(FILE *sourceFile, FILE *destinationFile)
{
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, destinationFile);
    }
}
void convertToLower(FILE *sourceFile, FILE *destinationFile)
{
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        ch = tolower(ch);
        fputc(ch, destinationFile);
    }
}
void convertToSentence(FILE *sourceFile, FILE *destinationFile)
{
    char ch;
    int isFirstCharacter = 1;
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        if (isFirstCharacter)
        {
            ch = toupper(ch);
            isFirstCharacter = 0;
        }
        else
        {
            ch = tolower(ch);
        }
        fputc(ch, destinationFile);
        if (ch == '.' || ch == '!' || ch == '?')
        {
            isFirstCharacter = 1;
        }
    }
}

int main(int argc, char *argv[])
{
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char option;
    char ch;
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    printf("Enter the destination file name: ");
    scanf("%s", destinationFileName);

    if (argc > 1)
    {
        option = argv[1][1];
    }
    else
    {
        option = 'n';
    }

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL)
    {
        printf("Unable to open the source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL)
    {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy the contents from source file to destination file based on the option
    switch (option)
    {
    case 'u':
        convertToUpper(sourceFile, destinationFile);
        break;
    case 'l':
        convertToLower(sourceFile, destinationFile);
        break;
    case 's':
        convertToSentence(sourceFile, destinationFile);
        break;
    default:
        while ((ch = fgetc(sourceFile)) != EOF)
        {
            fputc(ch, destinationFile);
        }
        break;
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}