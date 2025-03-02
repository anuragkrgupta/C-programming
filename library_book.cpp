/*define a class to represent a book in a library. incude the following member.
Data member:
1. book number
2. book name
3. Authar
4. publisher
5. price
6. number of copies
7. number of copies issued

Member function
1. to assign initial values
2. to issue a book checking for its availability
3. to return a book
4. to display book information

sol: */
class book
{
    private:
    int book_number;
    char book_name[20];
    char author[20];
    char publisher[20];
    float price;
    int no_of_copies;
    int no_of_copies_issued;
    public:
    void assign_intial_values();
    void issue_a_book();
    int return_a_book();
    void display_book_information();
};

//no output