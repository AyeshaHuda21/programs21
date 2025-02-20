#include<stdio.>
struct Fiction_t{
    char title[250];
    char author[125];
    float price;
};

typedef struct Fiction_t Fiction;

struct NonFiction_t{
    char title[250];
    char author[125];
    float price;
};
typedef struct NonFiction_t NonFiction;

union Booktype_t{
    Fiction  fiction;
    NonFiction nonfiction;
};

typedef union Booktype_t Booktype;

struct Book_t{
    int type;
    BookType booktype;
};

typedef struct Book_t Book;

Book books[1000];
int bookcount;

void addBooks();
void displayBooks();

 int main(){
     addBooks();
     displayBooks();
     return 0;
 }
 
 void addBooks(){
     printf("Enter number of books:");
     scanf("%d",&bookCount);
 
 for(int i=0;i< bookCount;i++){
     printf("Type of books (1-Fiction, 2-Non fiction):");
     scanf("%d",&books[i].type)
     
     switch (books[i],type){
         case 1:{
         printf("Enter Fiction Book Details(Title, Author, Price):");
         scanf("%s%s%f",books[i].booktype.fiction.title,books[i].booktype.fiction.author,&books[i].booktype.fiction.price);
         }break;
         
         case 2:{
             printf("Enter Non fiction book details(Title,Subject,Price):");
             scanf("%s%s%f",books[i].booktype.nonfiction.title,books[i].booktype.nonfiction.subject,&books[i].booktype.nonfiction.price);
         }break;
             
         }
         }
     }
 
 void displayBooks(){
     for(int i=0;i<bookcount;i++){
         printf("")
     }
