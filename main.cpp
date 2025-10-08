#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
// void deposit(int& bal, int dep) {
//
//             bal+=dep;
//             cout<<"$"<<dep<<" Deposited to your bank account"<<endl;
// }
// void withdraw(int& bal, int wit) {
//     if(bal<wit) {
//         cout <<"you have only "<<"$"<<bal<<" so you cannot witdraw";
//     }
//     bal-=wit;
//     cout<<"$"<<wit<<" Withdrawn"<<endl;
//
// }
//
// int main() {
// int balance = 500;
//   int click;
//     do {
//
//     cout<<"1. Deposit \n2. Withdraw\n 3. Check Balance\n 4. To stop the transaction"<<endl;
//     cin>>click;
//     switch (click) {
//         case 1: int deposit1 ;
//              cout<<"Enter the amount to withdraw : ";
//             cin>>deposit1;
//             deposit(balance, deposit1);
//             break;
//         case 2: int withdraw1;
//             cout<<"Enter the amount to withdraw : ";
//             cin>>withdraw1;
//             withdraw(balance, withdraw1);
//             if(balance<0) cout<<"Transaction aborted dute to infuccient amount check your card"<<endl;
//             break;
//         case 3: cout<<"Your balance is: $"<<balance<<endl; break;
//         case 4: cout<<"Thanks for transaction!!!"; break;
//         default: cout<<"Invalid input"<<endl;
//     }
//
//     }
//
//     while ( click!=4);
//   }


//Problem2
//  void TotalPrice(int movieprice, int total) {
//      int fullprice = movieprice * total;
//      cout <<"Total Price = "<<"$" << fullprice << endl;
//  }
// int main() {
//           int click;
//             do {
//                 cout << "1. Enter to movies tickets slide \n2. Stop the Booking"<<endl;
//                 cin >> click;
//             switch (click) {
//                 case 1:{ int options;
//                         cout<<"1. Avangers: The FINALS: \n1. Titanic Redemption: \n3. Pamidori qomagan kelin: \n 4. Stop"<<endl;
//                     cin>>options;
//                     switch (options) {
//                         case 1: {
//                             int priceA=12;
//                             cout<<"The price: "<<"$"<<priceA<<endl;
//                             int sumA;
//                             cout<<"How many tickets:";
//                             cin>>sumA;
//                             TotalPrice(priceA,sumA);
//                             break;
//                         }
//                         case 2: {
//                             int priceB=12;
//                             cout<<"The price: "<<"$"<<priceB<<endl;
//                             int sumB;
//                             cout<<"How many tickets:";
//                             cin>>sumB;
//                             TotalPrice(priceB,sumB);
//                             break;
//                         }
//                         case 3: {
//                             int priceC=12;
//                             cout<<"The price: "<<"$"<<priceC<<endl;
//                             int sumC;
//                             cout<<"How many tickets:";
//                             cin>>sumC;
//                             TotalPrice(priceC,sumC);
//                             break;
//                         }
//                         case 4: {
//                             cout<<"Thanks for booking";
//                             break;
//                         }
//                     }
//                     break;
//
//                     }
//                 case 2: {
//                     cout<<"huh can book at least one pls!!";
//                     break;
//                 }
//             }
//
//             }
//
//             while ( click!=2);
//           }

//Problem 3



// int calculateFee(int hours) {
//     int fee = 0;
//     if (hours <= 2) {
//         fee = 0;
//     } else if (hours <= 5) {
//         fee = (hours - 2) * 2;
//     } else {
//         fee = (3 * 2) + (hours - 5) * 5;
//     }
//     return fee;
// }
//
// int main() {
//     int hours;
//     char choice;
//
//
//     do {
//         cout << "Enter number of hours parked: ";
//         cin >> hours;
//
//         cout << "Fee: $" << calculateFee(hours) << endl;
//
//         cout << "Do you want to calculate another? (y/n): ";
//         cin >> choice;
//     } while (choice == 'y' || choice == 'Y');
//
//     return 0;
//
//     }


//Problem 4



// double calculateBill(int choice, int quantity) {
//     double price = 0;
//     switch (choice) {
//         case 1: price = 10; break;
//         case 2: price = 8; break;
//         case 3: price = 5; break;
//         default: cout << "Invalid choice!\n"; return 0;
//     }
//     return price * quantity;
// }
//
// int main() {
//     int choice, quantity;
//     double total = 0;
//     char again;
//
//     do {
//         cout << "Menu:\n";
//         cout << "1. Pizza - $10\n";
//         cout << "2. Burger - $8\n";
//         cout << "3. Salad - $5\n";
//         cout << "Enter your choice (1-3): ";
//         cin >> choice;
//
//         cout << "Enter quantity: ";
//         cin >> quantity;
//
//         double bill = calculateBill(choice, quantity);
//         total += bill;
//
//         cout << "Current total bill: $" << total << endl;
//
//         cout << "Do you want to order more? (y/n): ";
//         cin >> again;
//     } while (again == 'y' || again == 'Y');
//
//     cout << "Final Total Bill: $" << total << endl;
//
//     return 0;
//
//
//     }

//Problem 5 



bool minimumcheck(string pass) {
  if (pass.length() >= 8) {
      return true;
  }
  else {
        return false;
    }
}
bool uppercaasecheck(string pass) {
    for (int i = 0; i < pass.length(); i++) {
        if (isupper(pass[i])) {
            return true;
        }
    }
    return false;
}
bool lowercaasecheck(string pass) {
    for (int i = 0; i < pass.length(); i++) {
        if (islower(pass[i])) {
            return true;
        }
    }
    return false;
}
bool digitcheck(string pass) {
    for (int i = 0; i < pass.length(); i++) {
        if (isdigit(pass[i])) {
            return true;
        }
    }
    return false;
}
bool symbolcheck(string pass) {
    string sym ="!@#$%^&*()_+";
    for (int i = 0; i < pass.length(); i++) {
        for (int j = 0; j < sym.length(); j++) {
            if (pass[i] == sym[j]) {
                return true;
            }
        }
    }
    return false;

}

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;
    if (minimumcheck(password)& uppercaasecheck(password)& lowercaasecheck(password)&digitcheck(password)& symbolcheck(password)) {
        cout <<"Your password is strong";
    }
    else {
        bool comma = true;
        cout <<"Weak password: (";
        if (!minimumcheck(password)) {
            cout <<(comma ? "":", ");
            cout <<"the lenght is too short";
            comma = false;
        }
        if (!uppercaasecheck(password)) {
            cout <<(comma ? "":", ");
            cout <<"You need one Uppercase letter";
            comma = false;
        }
        if (!lowercaasecheck(password)) {
            cout <<(comma ? "":", ");
            cout <<"You need one Lowercase letter";
            comma = false;
        }
        if (!symbolcheck(password)) {
            cout <<(comma ? "":", ");
            cout <<"You need  at least one symbol";
            comma = false;
        }
        if (!digitcheck(password)) {
            cout <<(comma ? "":", ");
            cout <<"You need at least one digit";
            comma = false;
        }
    }
