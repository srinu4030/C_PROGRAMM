/*mplement a file management system that allows users to create, read, update, and delete 
files using C functions.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile();
void readFile();
void updateFile();
void deleteFile();

int main() {
    int choice;

    while (1) {
        printf("\n===== File Management System =====\n");
        printf("1. Create File\n");
        printf("2. Read File\n");
        printf("3. Update File\n");
        printf("4. Delete File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline left by scanf

        switch (choice) {
            case 1: createFile(); break;
            case 2: readFile(); break;
            case 3: updateFile(); break;
            case 4: deleteFile(); break;
            case 5: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

// ================= Create File =================
void createFile() {
    char filename[100];
    char text[1000];
    FILE *fp;

    printf("Enter file name to create: ");
    scanf("%s", filename);
    getchar(); // consume newline

    fp = fopen(filename, "w"); // create file for writing
    if (fp == NULL) {
        printf("Error creating file!\n");
        return;
    }

    printf("Enter text to write to the file (type 'END' on a new line to finish):\n");
    while (1) {
        fgets(text, sizeof(text), stdin);
        if (strncmp(text, "END", 3) == 0) break;
        fputs(text, fp);
    }

    fclose(fp);
    printf("File '%s' created successfully.\n", filename);
}

// ================= Read File =================
void readFile() {
    char filename[100];
    char ch;
    FILE *fp;

    printf("Enter file name to read: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    printf("\n--- File Content ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n------------------\n");

    fclose(fp);
}

// ================= Update File =================
void updateFile() {
    char filename[100];
    char text[1000];
    FILE *fp;

    printf("Enter file name to update: ");
    scanf("%s", filename);
    getchar(); // consume newline

    fp = fopen(filename, "a"); // append mode
    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    printf("Enter text to append to the file (type 'END' on a new line to finish):\n");
    while (1) {
        fgets(text, sizeof(text), stdin);
        if (strncmp(text, "END", 3) == 0) break;
        fputs(text, fp);
    }

    fclose(fp);
    printf("File '%s' updated successfully.\n", filename);
}

// ================= Delete File =================
void deleteFile() {
    char filename[100];

    printf("Enter file name to delete: ");
    scanf("%s", filename);

    if (remove(filename) == 0) {
        printf("File '%s' deleted successfully.\n", filename);
    } else {
        printf("Error: File not found or cannot delete.\n");
    }
}
