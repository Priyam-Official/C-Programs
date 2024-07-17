#include <stdio.h>
#include <stdlib.h>

void merge_files(const char *f1, const char *f2, const char *finalfile) {
    f1=fopen("d:\\fileofc\\pqr.txt","r");
    f2=fopen("d:\\fileofc\\ghi.txt","r");
    FILE *ff = fopen("d:\\fileofc\\finalfile.txt", "w");

    if (f1 == NULL || f2 == NULL || ff == NULL) {
        printf("Error opening files!\n");
        exit(1);
    }

    char ch;
    
    
    while ((ch = getc(f1)) != EOF) {
        putc(ch, ff);
    }
    
    
    putc('\n', ff);

    
    while ((ch = getc(f2)) != EOF) {
        putc(ch, ff);
    }

    printf("Content of %s and %s has been merged into %s.\n", f1, f2, finalfile);

    fclose(f1);
    fclose(f2);
    fclose(ff);
}

int main() {
    const char *f1 = "file1.txt";
    const char *f2 = "file2.txt";
    const char *finalfile = "output.txt";

    merge_files(f1, f2,finalfile);

    return 0;
}