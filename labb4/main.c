#include <stdio.h>
#include <stdlib.h>
#include "mystruct.h"
#define listlength 1000
#define freemem 1

int main(void){
    mytags *tag;
    char *name = "arc";
    tag = createTag(4, name);
    printTag(tag);
    freeTag(tag);
    int n;
    mytags **taglist;
    taglist = (mytags**)calloc(sizeof(mytags*),listlength);
    for (n = 0; n < listlength; ++n) {
        taglist[n] = createTag(n,name);
    }
    for (int i = 0; i < listlength; ++i) {
        printTag(taglist[i]);
    }
    if(freemem == 1){
        for (int j = 0; j < listlength; ++j) {
            freeTag(taglist[j]);
        }
    }
    return 1;
}
