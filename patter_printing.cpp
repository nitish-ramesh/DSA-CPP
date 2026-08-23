//
// Created by 91914 on 17-08-2026.
//

#include <iostream>
using namespace std;

// void pattern1(int n) {
// //
// //     n = 4
// //
// // 1 2 3 4
// // 1 2 3
// // 1 2
// // 1
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 1; j <= n-i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }



// void print2(int n) {
//     int k = 2*n - 1;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) {
//             cout << " ";
//             k--;
//         }
//         cout << "*";
//         cout << endl;
//     }
// }



// void dimond(int n) {
//
// //     n=4
// //
// // *
// // * *
// // * * *
// // * * * *
// // * * *
// // * *
// // *
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i+1; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-1-i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }



// void pattern11(int n) {
//
// // n=4
// //
// // 1
// // 0 1
// // 1 0 1
// // 0 1 0 1
//
//
//     int start = 1;
//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0){
//             start = 1;
//         } else start = 0;
//
//         for(int j = 0; j <= i; j++) {
//             cout << start << " ";
//             start = 1 - start;
//         }
//         cout << endl;
//     }
//
// }



// void pattern13(int n) {
//
// //     n = 4
// //
// // 1
// // 2 3
// // 4 5 6
// // 7 8 9 10
//
//
//     int p = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             p++;
//             cout << p << " ";
//         }
//         cout << endl;
//     }
// }



// void pattern14(int n) {
//
// //     n=4
// //
// // A
// // A B
// // A B C
// // A B C D
// // A B C D
// // A B C
// // A B
// // A
//
//     for (int i = 0; i < n; i++) {
//         for (char ch = 'A'; ch <= 'A' + i; ch++) {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
//
//     for (int i = 0; i < n; i++) {
//         for (char ch = 'A'; ch < n - i + 'A'; ch++) {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }



// void pattern15(int n) {
//
// //    n = 4
// //
// // A
// // B B
// // C C C
// // D D D D
//
//     for (int i = 0; i < n; i++) {
//         char ch = 'A' + i;
//         for (int j = 0; j <=i; j++) {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }



//     void pattern16(int n) {
//
// //         n = 4
// //
// // A
// // A B A
// // A B C B A ? > =
// // A B C D C B A ? > = < : 9 8 7 6
//
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n - i - 1; j++) {
//                 cout << " ";
//             }
//             char ch = 'A';
//             for (int k = 0; k <= 2*i; k++) {
//                 if (k <= i) {
//
//                     cout << ch << " ";
//                     ch++;
//                 }
//                 else {
//                     ch--;
//                     for (int p = 1; p <= k-1; p++) {
//                         ch--;
//
//                         cout << ch << " ";
//                     }
//                 }
//
//             }
//             cout << endl;
//         }
//     }




//     void pattern16Better(int n) {
//
// //        n=4
// //
// // A
// // ABA
// // ABCBA
// // ABCDCBA
//
//         for (int i = 0; i < n; i++) {
//
//
//             //spaces
//             for (int j = 0; j < n-1-i; j++) {
//                 cout << " ";
//             }
//
//             //character
//             char ch = 'A';
//             int breakpoint = (2*i+1)/2;
//             for (int j = 1; j <= 2*i + 1; j++) {
//                 cout << ch;
//                 if (j <= breakpoint) ch++;
//                 else ch--;
//             }
//
//
//             //spaces
//             for (int j = 0; j < n-1-i; j++) {
//                 cout << " ";
//             }
//             cout << endl;
//
//         }
//     }




// void pattern17(int n) {
//
// //     n=4
// //
// // D
// // C D
// // B C D
// // A B C D
//
//     for (int i = 0; i < n; i++) {
//         char ch = 'A'+n-1-i;
//         for (int j = 0; j <= i; j++) {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }




// void pattern19(int n) {
//
// //     n=4
// //
// // ********
// // ***  ***
// // **    **
// // *      *
// // *      *
// // **    **
// // ***  ***
// // ********
//
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n-i; j++) {
//             cout << "*";
//         }
//         for (int j = 0; j < 2*i; j++) {
//             cout << " ";
//         }
//         for (int j = 0; j < n-i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             cout << "*";
//         }
//         for (int j = 0; j < (2*n - 2) - 2*i; j++) {
//             cout << " ";
//         }
//         for (int j = 0; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }




// void butterflyPattern(int n) {
//     // n = 5
//     // *        *
//     // **      **
//     // ***    ***
//     // ****  ****
//     // **********
//     // ****  ****
//     // ***    ***
//     // **      **
//     // *        *
//     for (int i = 0; i < n; i++) {
//             for (int j = 0; j <= i; j++) {
//                 cout << "*";
//             }
//             for (int j = 0; j < (2*n - 2) - 2*i; j++) {
//                 cout << " ";
//             }
//             for (int j = 0; j <= i; j++) {
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             cout << "*";
//         }
//         for (int j = 0; j < (2*i)+2; j++) {
//             cout << " ";
//         }
//         for (int j = 0; j < n-i-1; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }




// void pattern21(int n) {
//     // n = 5
//
//     // *****
//     // *   *
//     // *   *
//     // *   *
//     // *****
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == 0 || i == n - 1) {
//                 cout << "*";
//             }
//             else if (j == 0 || j == n-1) {
//                 cout << "*" ;
//             }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//
// }




// void pattern22(int n) {
//
//     // n = 4;
//
//     // 4444444
//     // 4333334
//     // 4322234
//     // 4321234
//     // 4322234
//     // 4333334
//     // 4444444
//
//
//     for (int i = 0; i < 2*n - 1; i++) {
//         for (int j = 0; j < 2*n-1; j++) {
//
//             int top = i;
//             int left = j;
//             int right = 2*n - 2 - j;
//             int bottom = 2*n - 2 - i;
//
//             cout << n - min(min(top, left), min(right, bottom));
//
//         }
//         cout << endl;
//
//     }
//
// }


int main() {

    // pattern19(4);
// dimond(4);
        // pattern16Better(4);
    return 0;
}
