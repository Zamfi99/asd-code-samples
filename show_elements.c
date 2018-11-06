struct nod {
    int value;
    struct nod *next;
};

struct nod *first, *last;

void show_elements() {
    struct nod *element = first;

    while (element) {
        printf("%d ", element -> value);
        element = element -> next;
    }
}
