#ifndef MYSTRUCT_h
#define MYSTRUCT_h
typedef struct tags {
    int age;
    char *name;
} mytags;
mytags* createTag(int age, char *name);
void printTag(const mytags *tag);
void freeTag( mytags *tag);
#endif
