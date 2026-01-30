#include "bprint.h"
#include <string.h>

typedef unsigned long ulong;

void pexpec_err(const char* str, ulong cline, ulong start, ulong end) {
    print(CS_FG_RED CS_BOLD CS_BOLD"syntax error:"CS_RESET" at line %ld expected \'(\' got \'{\' instead\n %ld | ", cline, cline);
    ulong lstr = strlen(str);
    for (ulong i=0; i < lstr; i++) {
        if (i == start)
            print(CS_FG_RED CS_BOLD CS_UNDERLINE"");
        if (i == end)
            print(CS_RESET);
        printc(str[i]);
    }
    print(CS_RESET"\n");
}

int main(int argc, char* const argv[]) {
    pexpec_err("function add { int a, int b) {", 1, 13, 14);
    return 0;
}