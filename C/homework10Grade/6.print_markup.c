#include <stdio.h>
#include <string.h>
typedef struct tag_t tag_t;
struct tag_t{
	char name[15];
	int is_self_closing;
	tag_t *child;
};
void add_chilld(tag_t *,char[15],int);
void print_markup(tag_t);
int main(int argc, char **argv){
	tag_t parent,children;
	strcpy(parent.name,"html");
	parent.is_self_closing = 0;
	parent.child = &children;
	print_markup(parent);
	add_chilld(&parent,"body",0);
	
	add_chilld(&children,"p",1);
	print_markup(parent);
	print_markup(children);
	return 0;
}
void add_chilld(tag_t *parent,char name[15],int is_self_closing){
	if(parent->is_self_closing == 0){
		strcpy(parent->child->name,name);
		parent->child->is_self_closing = is_self_closing;
	}else{
		parent->child = NULL;
	}

}
void print_markup(tag_t markup){
	if(markup.is_self_closing == 0){
		
		if(markup.child->is_self_closing == 0){
			printf("<%s><%s></%s></%s>\n", markup.name,markup.child->name,markup.child->name,markup.name);
		}else{
			printf("<%s><%s/></%s>\n", markup.name,markup.child->name,markup.name);
		}
	}else if (markup.is_self_closing == 1){
			printf("<%s/>\n",markup.name);
	}

}