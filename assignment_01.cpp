//
//  main.cpp
//  Assignment 1 CS 2
//
//  Created by Aidan Vickers on 8/30/23.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct folder
{
    char folder_name[15];
    int num_files;
    double size;
};

void print(folder arr[])
{
    cout << left
         << setw(3) << "N"
         << setw(15) << "Name"
         << setw(10) << "Num files"
         << setw(10) << "Size(Mb)"
         << endl;
    for (int i=0;i < 10;i++)
    {
        cout << left
         << setw(3) << i+1
         << setw(15) << arr[i].folder_name
         << setw(10) << arr[i].num_files
         << setw(10) << arr[i].size
         << endl;
    };
};

void initialize(folder arr[])
{
    arr[0] = {"Documents",5,12.38};
    arr[1] = {"Downloads",11,17.22};
    arr[2] = {"Pictures",27,30.26};
    arr[3] = {"Videos",6,22.75};
    arr[4] = {"Projects",3,7.94};
    arr[5] = {"Labs",6,1.44};
    arr[6] = {"Music",45,102.73};
    arr[7] = {"Favorites",4,2.10};
    arr[8] = {"Contacts",35,3.51};
    arr[9] = {"Miscellaneous",1,2.23};
};

int main() {
    struct folder arr[10];
    initialize (arr);
    print(arr);
    return 0;
}