//#include tells the preprocessor to include these header file in the program.
//iostream is the header file which contains all the functions of program 
#include<iostream>
//header define macros
#include<stdlib.h>
//header that declare the structure time
#include<time.h>

//all symbols in that namespace will become visible without adding the namespace prefix.
using namespace std;

int main(){ //main function
     
     //SRAND() gives the random function a new seed, a starting point
     //TIME(0) gives the time in seconds since
     //together the function statement generate a random number every second
     srand(time(0));
     
     //setting the array to have 10 element with the data type integer with the varable 'i'
     int arr[10], i, sum;
     bool found;    //setting boolean to found
     char choice;

     //The For loop statement: setting the varable 'i' to zero with 10 loop until 'i' add up to 10
     for(i = 0; i < 10; i++){
          arr[i] = rand() % 40 + 60; //for each new 'i' from the for statement above will save in each array element
          //rand() is to generate a random number. % 40 means the set range of number; example 0-39 thats 40 number ranger
          //+60 is the starting position. So starting at 60 with 40 number in between will yeild 60-100
          //the random generator will only pick numbera in those range of 60 to 100
}

cout << "The Random Generated Array Is: "; //console print out on the screen

     //The For loop statement: setting the varable 'i' with 10 loops and with each loop add to it itself
     for(i = 0; i < 10; i++){
          cout << arr[i] << " ";
}

     cout << "\n\n R[everse] \t [A]dd \t [S]earch \t E[xit] \n Select an option: "; //console print out message on the screen '\n' is for a new line '\t' is for tab spacing
     cin >> choice; //console input is asking user to input an option given above
     
     //Switch statement allowing user to use lower or upper case
     switch(choice){
          case 'R':
          case 'r':
          cout << "\nThe reversed array is: "; //console print out message
     for(i = 9; i >= 0; i--) cout << arr[i] << " "; //the for loop statement reverse the random generated number for above

     cout << endl << endl << "-----------------------------------------------------------------" << endl; //console print out message

main(); //another of main function
     
     //Switch statement allowing user to use lower or upper case
     case 'A':
     case 'a':
          cout << "\nThe sum of the array elements is: "; //console print out message
          //the sum varable is set to zero
          sum = 0;
          for(i = 0; i < 10; i++) sum += arr[i]; //the for loop statement run the loop 10 time with each loop adding the value to it self to get the total sum of all the generated numbers
     cout << sum << "\n"; //console print out message
     cout << endl << endl << "-----------------------------------------------------------------" << endl; //console print out message

main(); //another of main function
     
      //Switch statement allowing user to use lower or upper case
     case 'S':
     case 's':
          cout << "\nPlease insert an element to find: "; //console print out message
     
     //setting find and an integer data type          
     int find;
     found = false; //boolean is false because in line 21 bool is set to found
     cin >> find;   //console is asking for an input for you to find a number set
     
     //the for loop statement is looping and searching the array for the value you asked to find in the array element          
     for(i = 0; i < 10; i++){
          if(arr[i] == find){
               
          //the if, else statement will print a message if of the location of the value it has located in the position of the array element
          if(i == 0) cout << "\nThe number " << find << " has been found at the 1st position" << endl;
               else if(i == 1) cout << "\nThe number " << find << " has been found at the 2nd position" << endl;
               else if(i == 2) cout << "\nThe number " << find << " has been found at the 3rd position" << endl;
               else cout << "\nThe number " << find << " has been found at the " << i + 1 << "-th position" << endl;
          found = true;
}
}

          if(!found) cout << "\nElement not found\n"; //if searching of the value was not found (! meaning NOT) the console prints the message
          cout << endl << endl << "-----------------------------------------------------------------" << endl; //console prints message

main(); //another main function
          
          //Switch statement allowing user to use lower or upper case
          case 'E':
          case 'e':
          break;    
               
          //closing the switch statement or exiting
}

return 0;

}
