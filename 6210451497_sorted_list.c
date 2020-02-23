/*6210451497 Weerapat punyatreera*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct Node 
{
    int nu;
    struct Node *i;
};

void sort(struct Node **nn, struct Node *mm) {
    struct Node *a;
    if (*nn == NULL || (*nn)->nu >= mm->nu) {
        mm->i = *nn;
        *nn = mm;
    }
    else {
        a = *nn;
        while (a->i != NULL && a->i->nu < mm->nu) 
        {
            a = a->i;
        }
        mm->i = a->i;
        a->i = mm;
    }
}

int main() {
    struct Node *f = NULL;
    struct Node *s = NULL;
    int x;

    while (scanf("%d", &x),x != -1) {
        struct Node *s = (struct Node *)malloc(sizeof(struct Node));

        s->nu = x;
        s->i = NULL;

        sort(&f, s);
    }
    for(;f;f=f->i){
        printf("%d\n", f->nu);
    }  
}