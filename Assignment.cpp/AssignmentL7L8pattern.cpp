// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value n";
//     cin >> n;

//     for (int i = 1; i < n; i++){
//         for(int k=1; k<=n-i; k++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= 2* i-1; j++){

//                 cout<<j;

//         }
//     cout << endl;
// }
// }

// Enter the value n5
//     1
//    123
//   12345
//  1234567

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the n";
//     cin>>n;
// for no. of rows / cols
//     for(int i=1 ;i<n; i++)
//     {
// for spaces
//         for(int j=1; j<=n-i; j++)
//         {
//             cout<<" ";
//         }
// for numbers
//         for(int k=1;k<=2*i-1; k++)
//         {
//             cout<<k;
//         }

//     cout<<endl;
//     }
// }

// enter the n5
//     1
//    123
//   12345
//  1234567

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     // outer loop-> decide -> no. of rows and cols
//     for(int i=1; i<=n; i++)
//     {
//         // for spaces
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         // for A to Z
//         for(int k=1; k<=2*i-1; k++)
//         {
//             // k is number then we change into character
//             cout<<(char)(k+64);
//         }
//         cout<<endl;
//     }
// }

// Enter n 4
//    A
//   ABC
//  ABCDE
// ABCDEFG

// Convert integer into character.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=65;
//     cout<<(char)a;
// }

// A

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     for(int i=1; i<=n; i++)
// {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=i; j>=1; j--)
//         {

//             cout<<(char)(j+64);
//         }
//         for(int j=2; j<=i; j++)
//         {
//             cout<<(char)(j+64);
//         }
//         cout<<endl;
//     }
// }

// Enter n 4
//    A
//   BAB
//  CBABC
// DCBABCD

// #include<iostream>
// using namespace std;
// int main()
// {
//     // for outer loop
//     int n;
//      cout<<"Enter n ";
//      cin>>n;
// {
//     // for outer loop
//       for ( int i=1; i<=n; i++)  {
//     // for inner loop
//         for(int j=1; j<=n; j++)
//         {
//             cout<<i<<" ";
//         }
//       cout<<endl;
// }
// }
// }

// Enter n 4
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

// #include<iostream>
// using namespace std;
// int main()
// {
//     // for outer loop
//     int n;
//      cout<<"Enter n ";
//      cin>>n;
// {
//     // for outer loop
//       for ( int i=1; i<=n; i++)  {
//     // for inner loop
//         for(int j=1; j<=n+1-i; j++){
//             cout<<j;
//          }
//       cout<<endl;
// }
// }
// }

// Enter n 4
// 1234
// 123
// 12
// 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     // for outer loop
//     int n;
//      cout<<"Enter n ";
//      cin>>n;
// {
//     // for outer loop
//       for ( int i=1; i<=n; i++)  {
//     // for inner loop
//         for(int j=1; j<=i; j++){
//             cout<<i;
//          }
//       cout<<endl;
// }
// }
// }

// Enter n 4
// 1
// 22
// 333
// 4444

// #include<iostream>
// using namespace std;
// int main()
// {
//     // for outer loop
//     int n;
//      cout<<"Enter n ";
//      cin>>n;
// {
//     // for outer loop
//       for ( int i=1; i<=n; i++)  {
//     // for inner loop
//         for(int j=1; j<=i; j++){
//             cout<<j;
//          }
//       cout<<endl;
// }
// }
// }

// Enter n 4
// 1
// 12
// 123
// 1234

// #include<iostream>
// using namespace std;
// int main()
// {
//     // for outer loop
//     int n;
//      cout<<"Enter n ";
//      cin>>n;
// {
//     // for outer loop
//       for ( int i=1; i<=n; i++)  {
//     // for inner loop
//         for(int j=1; j<=i; j++){
//             cout<<(char)(j+64);
//          }
//       cout<<endl;
// }
// }
// }

// Enter n 4
// A
// AB
// ABC
// ABCD

// #include<iostream>
// using namespace std;
// int main()
// {

//     int n;
//      cout<<"Enter n ";
//      cin>>n;
// {

//       for ( int i=1; i<=n; i++)  {
//           if(i%2!=0)

//         for(int j=1; j<=i+1; j++){
//             cout<<(char)(j+64);
//         }
//         if(i%2==0)
//           for(int k=1; k<=i+1; k++){
//            cout<<k;
//           }
//       cout<<endl;
// }
// }
// }

// in this you will search only even and odd then print
// Enter n 4
// AB
// 123
// ABCD
// 12345

// #include<iostream>
// using namespace std;
// int main()
// {

//     int n;
//      cout<<"Enter n ";
//      cin>>n;
// {

//       for ( int i=1; i<=n; i++)  {
//           if(i%2==0)

//         for(int j=1; j<=i; j++){
//             cout<<(char)(j+64);
//         }
//         if(i%2!=0)
//           for(int k=1; k<=i; k++){
//            cout<<k;
//           }
//       cout<<endl;
// }
// }
// }

// Enter n 4
// 1
// AB
// 123
// ABCD

// OR WE CAN ALSO WRITE IN LESS NO. OF LINES
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "Enter n ";
//     cin >> n;
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= i; j++)
//                 if (i % 2 == 0)
//                     cout << (char)(j + 64) << " ";
//                 else
//                 {
//                     cout << j << " ";
//                 }
//             cout << endl;
//         }
//     }
// }

// Enter n 4
// 1
// A B
// 1 2 3
// A B C D

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n ";
//     cin >> n;
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << "*"
//                      << " ";
//             }
//             cout << endl;
//         }

//         int m = n - 1; // imp-: take a new varible m and print opposu=ite part

//         for (int i = 1; i <= m; i++)
//         {
//             for (int j = 1; j <= m - i + 1; j++)

//             {
//                 cout << "*"
//                      << " ";
//             }
//             cout << endl;
//         }
//     }
// }

// Enter n 4
// *
// * *
// * * *
// * * * *
// * * *
// * *
// *








// important 


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         // in place of n-1+i we write n-i becoz space is n-1 means
//         // when n=4 then space print n-1=3 (3 space print)
//         for (int j = 1; j <=n-i; j++)
//         {
//             cout << " ";
//         }
//         for(int k=1; k<=n; k++)
//         {
//             cout<<"*";
//         }
//         cout << endl;
//     }

// }





// inside one loop(decide no.of rows/cols).
// add another two loops one for space and other for stars.
// Enter n4
//    ****
//   ****
//  ****
// ****







// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n";
//     cin >> n;

//     int m;
//     cout << "Enter m";
//     cin >> m;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=m; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

// }

// Enter n4
// Enter m6
// ******
// ******
// ******
// ******








#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;

    int m;
    cout << "Enter m";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if((i==1) || (i==n) || (j==1)||(j==m))
            cout << "*";
            else
            cout<<" " ;
        }
        cout << endl;
    }

}


// Enter n4
// Enter m6
// ******
// *    *
// *    *
// ******