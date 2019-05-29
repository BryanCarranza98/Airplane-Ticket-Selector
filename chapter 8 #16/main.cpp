
//  chapter 8 #19
//  Created by Bryan Carranza on 8/27/18.


/*This program will let the user promped their ticket(first class, business class or economy class). the program will let the user choose their seating from a seating plan that will direct them of which seats are taken and the ones available. If the user chooses a taken seat the program will tell them and if they choose empty seat the program will successfully congratulate them.*/

#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    
    
    string ticket;
    int row;
    int column;
    
    
    // letting the user know what rows are which class.
    cout << "                                                               "<<endl;
    cout << "FC : first two rows  BC : 3 - 7th row  EC : 8 - 13th row" << endl;
    cout << "                                                               "<<endl;
    
    
    // letting the user know what seats are available.
    cout << "NOTICE: 'X' are seats TAKEN" << " '*' are seats available"  <<endl;
    cout << "                                                               "<<endl;
    const char seating [13][6] ={
        {'*','*','x','*','x','x'},
        {'*','x','*','x','*','x'},
        {'x','*','x' ,'*','x','x'},
        {'*','x','*' ,'x','*','*'},
        {'*','x','*' ,'*','*','x'},
        {'x','*','*' ,'*','x','x'},
        {'*','x','*' ,'x','x','*'},
        {'x','*','x' ,'x','*','x'},
        {'*','x','*' ,'x','x','x'},
        {'*','*','x' ,'*','x','*'},
        {'*','*','x' ,'x','*','x'},
        {'*','*','*' ,'*','x','*'},
        { '*','*','x' ,'x','*','x'}
    };
    
  
    cout << setw(10) << right << "A " << "B " << "C " << "D " << "E " << "F " << endl; // creating the table of open seat
    for (int row=0;row <13; row ++)
    {
        cout <<"row " << setw(3) << left <<  row +1 << " " ;
        
        for(int column=0; column < 6; column++)
            
        {
            
            cout << seating[row][column] << " ";
        }
        cout << endl;
    }
  
    
    
   // letting the user know how to choose their class
    cout << " First Class= 'FC'" << " Business Class= 'BC'" << " Economic Class= 'EC'" <<" : ";
     cout<<"Enter Ticket Type:  ";
    cin >> ticket;
    
    cout<<"Desired Row: "; // what row you want depending on your class
    cin>>row;
    
    cout<<"Desired seat (A,B,C,D,E or F): ";
    cin >> column;
    
 
    // the program that lets the user know if they chose an available seat
   
    if (seating[row][column] == 'x')
  {
      cout << " seat not available";
  }

   else if(seating[row][column] == '*')
   {
       cout << " !!!!!!!Congrats you booked your ticket!!!!!!!!!"<< seating << endl;
   }
    
   
    

    return 0;
    
}







