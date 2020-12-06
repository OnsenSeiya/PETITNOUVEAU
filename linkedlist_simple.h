
typedef struct List_ List;
struct List_ {
	int data;
	struct List_ *next;
};

List *list_init();
void list_destroy(List *l);