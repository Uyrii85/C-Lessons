

#include <iostream>
using namespace std;
struct Book
{
    int id;
    char name[100];
    char Author[100];
    char pyblishing[100];
    char genre[50];
    int year;
    int price;
};

void show(Book &book)
{
        cout << "Id: " << book.id << endl;
        cout << "Name: " << book.name << endl;
        cout << "Author: " << book.Author << endl;
        cout << "Publishing: " << book.pyblishing<< endl;
        cout << "Genre: " << book.genre << endl;
        cout << "Year: " << book.year << endl;
        cout << "Price: " << book.price << endl;
}

void search_name(Book book[], int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(book[i].name, name) == 0)
        {
            show(book[i]);
        }
    }
    cout << endl;
}

void search_author(Book book[], int size, char author[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(book[i].Author, author) == 0)
        {
            show(book[i]);
        }
    }
}


void search_publ(Book book[], int size, char publ[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(book[i].pyblishing, publ) == 0)
        {
            show(book[i]);
        }
      }
}

void search_genre(Book book[], int size, char genre[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(book[i].genre, genre) == 0)
        {
            show(book[i]);
        }
    }
}


int main()
{
    const int size = 10;
    Book books[size] =
    {
    {0, "Kobzar", "Taras Shevchenko","Fisher", "Fiction", 1840, 2000 },
    {1, "The Adventures of Sherlock Holmes", "Arthur Conan Doyle", "George Newnes Ltd", "Detective", 1892, 1700 },
    {2, "A Captain at Fifteen", "Jules Verne", "Andronum", "Adventures", 1878, 1200 },
    {3, "Murder on the Orient Express", "Agatha Christie", "Collins Crime Club", "Detective", 1934, 1100 },
    {4, "Karlsson on the Roof ", "Astrid Lindgren", "Rabén & Sjögren", "Tale", 1955, 700 },
    {5, "White Fang", "Jack London", "Macmillan and Company", "Adventure", 1835, 1300 },
    {6, "Zakhar Berkut", "Ivan Franko","Taras Shevchenko publishing house", "Epos", 1883, 700 },
    {7, "Thumbelina", "Hans Christian Andersen", "Pegas", "Tale", 1835, 800 },
    {8, "The Forest Song", "Lesya Ukrainka", "Literary and scientific bulletin","Drama", 1911, 1400 },
    {9, "Hamlet", "William Shakespeare", "BritishBook","Tragedy", 1893, 1600 }
    };

    int number;
    char author[100];
    char name[100];
    char publ[100];
    char genre[50];
    
    do
    {
        cout << "1 - show all books\n2 - find by author\n3 - find by name\n4 - find by publishing\n5 - find by genre\n0 - Exit\nEnter number:";
        cin >> number;
        cin.ignore();

        switch (number)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                show(books[i]);
                cout << endl;
            }
            break;
        case 2:
            cout << "Enter Author:";
            cin.getline(author, 100);
            search_author(books, size, author);
            break;
        case 3:
            cout << "Enter Name book:";
            cin.getline(name, 100);
            search_name(books, size, name);
            break;
        case 4:
            cout << "Enter publishing:";
            cin.getline(publ, 100);
            search_publ(books, size, publ);
            break;
        case 5:
            cout << "Enter genre:";
            cin.getline(genre, 100);
            search_genre(books, size, genre);
            break;
        case 0:
            break;
        default:
            cout << "Incorrect\n";
            break;
        }

    } 
    while (number!=0);  
}

