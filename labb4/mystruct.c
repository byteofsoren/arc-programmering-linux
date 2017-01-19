#include "mystruct.h"
#include <stdlib.h>
#include <stdio.h>

mytags* createTag(int age, char *name){
    mytags *tag;
    tag = (mytags*)calloc(sizeof(mytags), 1);
    tag->age = age;
    tag->name = name;
    return tag;
}
void printTag(const mytags *tag){
    printf("Name %s\tAge: %d", tag->name, tag->age);
}
void freeTag( mytags *tag){
    tag->name = NULL;
    free(tag);
}
