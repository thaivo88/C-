#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
     srand(time(0));

     int arr[10], i, sum;
     bool found;
     char choice;

     for(i = 0; i < 10; i++){
          arr[i] = rand() % 40 + 60;
}

cout << "The Random Generated Array Is: ";

     for(i = 0; i < 10; i++){
          cout << arr[i] << " ";
}

     cout << "\n\n R[everse] \t [A]dd \t [S]earch \t E[xit] \n Select an option: ";
     cin >> choice;

     switch(choice){
          case 'R':
          case 'r':
          cout << "\nThe reversed array is: ";
     for(i = 9; i >= 0; i--) cout << arr[i] << " ";

     cout << endl << endl << "-----------------------------------------------------------------" << endl;

main();

     case 'A':
     case 'a':
          cout << "\nThe sum of the array elements is: ";
          sum = 0;
          for(i = 0; i < 10; i++) sum += arr[i];
     cout << sum << "\n";
     cout << endl << endl << "-----------------------------------------------------------------" << endl;

main();

     case 'S':
     case 's':
          cout << "\nPlease insert an element to find: ";
     
     int find;
     found = false;
     cin >> find;
     
     for(i = 0; i < 10; i++){
          if(arr[i] == find){

          if(i == 0) cout << "\nThe number " << find << " has been found at the 1st position" << endl;
               else if(i == 1) cout << "\nThe number " << find << " has been found at the 2nd position" << endl;
               else if(i == 2) cout << "\nThe number " << find << " has been found at the 3rd position" << endl;
               else cout << "\nThe number " << find << " has been found at the " << i + 1 << "-th position" << endl;
          found = true;
}
}

if(!found) cout << "\nElement not found\n";
cout << endl << endl << "-----------------------------------------------------------------" << endl;

main();



case 'E':

case 'e':

break;

}

return 0;

}
