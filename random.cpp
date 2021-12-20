#include "Double_list.h"
#include "Movie.h"
#include <iostream>
#include <iomanip>   // for setw
#include <fstream>   // for reading input from text file
#include <algorithm> // for transforming whole string to small letter

using namespace std;

// Function to create list by reading from txt file
void create(Double_list<Movie> &mvlist, string file_name)
{
    // Open text file
    ifstream indata(file_name);

    // Check if file exists
    while (indata.fail() && !indata)
    {
        cout << "Fail to open this file!" << endl;
        cout << "Please enter filename again: ";
        cin >> file_name;
        indata.open(file_name);
    }

    // Read data in
    int i = 0;
    while (!indata.eof())
    {
        // Read 3 data fields per movie
        string temp_title, temp_director, temp_genre;
        getline(indata, temp_title, ',');
        getline(indata, temp_director, ',');
        getline(indata, temp_genre, ',');

        // Create temporary object using read-in data
        Movie *temp_movie = new Movie(temp_title, temp_director, temp_genre);

        // Add the movie into the list
        mvlist.push_back(*temp_movie);

        i++;
    }

    // Close text file after reading
    indata.close();
    cout << "successfully read" << endl;
}

// Function to add song information
void add(Double_list<Movie> &mvlist)
{
    string temp_title, temp_director, temp_genre;

    // Ask user to input data fields of a movie
    cout << "Input the movie title: ";
    getline(cin, temp_title);
    cout << "Input the director name: ";
    getline(cin, temp_director);
    cout << "Input the genre of the movie: ";
    getline(cin, temp_genre);

    // Create temporary object using read-in data
    Movie *temp_movie = new Movie(temp_title, temp_director, temp_genre);

    // Add the movie into the list
    mvlist.push_back(*temp_movie);
    print_menu(mvlist);
}

// Function to remove a movie by title
// void remove(Double_list<Movie>, int title){

// }

// Function to find title of movie in the list
void find(Double_list<Movie> &mvlist, string key)
{

    // Loop through the list to find the matching title
    Double_node<Movie> *curr = mvlist.head();
    while (curr != NULL)
    {
        string temp_title = curr->data.getTitle();
        cout << temp_title.size();

        // need the conversion of whole string to small letter, so that it's easy to compare!!!!!!!!!

        // for_each(temp_title.begin(), temp_title.end(), [](char & c){
        //     c = toupper(c);
        // });
        // if (curr->data.getTitle() == key)
        if (temp_title == key)
        {
            // function print_submenu isnt working yet
            // print_submenu(curr);
            cout << setw(30) << left << curr->data.getTitle() << setw(27) << curr->data.getDirector() << setw(20) << curr->data.getGenre() << endl;
            break;
        }
        else
        {
            cout << curr->data.getTitle() << endl;
            curr = curr->next;
        }
    }
}

// Function to print list
void print_menu(Double_list<Movie> &mvlist)
{
    // what if code is empty???????

    // Print menu header
    cout << "\n===============================================================================" << endl;
    cout << setw(30) << left << "title";
    cout << setw(27) << left << "Director";
    cout << setw(20) << left << "Genre";
    cout << "\n===============================================================================" << endl;

    // Print menu data
    Double_node<Movie> *curr = mvlist.head();
    while (curr != NULL)
    {
        cout << setw(30) << left << curr->data.getTitle() << setw(27) << curr->data.getDirector() << setw(20) << curr->data.getGenre() << endl;
        curr = curr->next;
    }
    cout << endl;
}