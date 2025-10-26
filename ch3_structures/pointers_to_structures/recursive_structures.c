struct rec{
    int i;
    struct rec r; // this is not allowed
};

struct rec2{
    int i;
    struct rec2 *r; //correct
};


// Note
typedef struct t{
    int a,b;
}*u;
// u is declared as an alias name for struct t*
// i.e u is a pointer of type struct t