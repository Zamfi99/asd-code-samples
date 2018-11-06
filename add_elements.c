struct nod {
    int value;
    struct nod *next;
};

struct nod *first, *last;

void add_elements() {
    int no_of_elements, counter;
    struct nod *new_element, *previous;

    printf("Number of elements = ");
    scanf("%d", &no_of_elements);

    for (counter = 0; counter < no_of_elements; counter++) {

        new_element = (struct nod *) malloc(sizeof(struct nod *));

        printf("Value of #%d element = ", counter+1);
        scanf("%d", &new_element -> value);

            if (!first) {
                first = new_element;
            } else {
                previous -> next = new_element;
            }

        previous = new_element;
    }

    last = previous;
}
