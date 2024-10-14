// Ques. WAP to count the minimum no. of notes in a given amt
// using the switch statement. input 510 , output notes os "500"=1 and notes of "10"=1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the amt";
//     cin >> n;
//     int n1 = 0, n2 = 0, n5 = 0, n10 = 0, n20 = 0, n50 = 0, n100 = 0, n200 = 0;
//     int n500 = 0, n2000 = 0;
//     if (n >= 2000)
//     {
//         n2000 = n / 2000;
//         n -= (2000 * n2000);
//     }
//     if (n >= 500)
//     {
//         n500 = n / 500;
//         n -= (500 * n500);
//     }
//     if (n >= 200){
//         n200 = n / 200;
//         n -= (200 * n200);
//     }
//     if (n >= 100)
//     {
//         n100 = n / 100;
//                 n -= (100 * n100);
        
//         if (n >= 50)
//     {
//         n50 = n / 50;
//         n -= (50 * n50);
//     }
//     if (n >= 20)
//     {
//         n20 = n / 20;
//         n -= (20 * n20);
//     }
//     if (n >= 10)
//     {
//         n10 = n / 10;
//         n -= (10 * n10);
//     }
//     if (n >= 5)
//     {
//         n5 = n / 5;
//         n -= (5 * n5);
//     }
//     if (n >= 2)
//     {
//         n2 = n / 2;
//         n -= (2 * n2);
//     }
//      if (n >= 1)
//     {
//         n1 = n / 1;
//         n -= (1* n1);
//     }
//     int totalNotes=n1+n2+n5+n10+n20+n50+n100+n200+n500+n2000;

// cout<<totalNotes;
// }
// }




// switch case 







#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the amt";
    cin >> n;
    int n1 = 0, n2 = 0, n5 = 0, n10 = 0, n20 = 0, n50 = 0, n100 = 0, n200 = 0;
    int n500 = 0, n2000 = 0;
   switch(1)
    { case 1:
        n2000 = n / 2000;
        n -= (2000 * n2000);
   case 2:
        n500 = n / 500;
        n -= (500 * n500);
    case 3:
        n200 = n / 200;
        n -= (200 * n200);
  case 4:
        n100 = n / 100;
                n -= (100 * n100);
    case 5:
        n50 = n / 50;
        n -= (50 * n50);
   case 6:
        n20 = n / 20;
        n -= (20 * n20);
   case 7:
        n10 = n / 10;
        n -= (10 * n10);
   case 8:
        n5 = n / 5;
        n -= (5 * n5);
   case 9:
        n2 = n / 2;
        n -= (2 * n2);
    case 10: 
       n1 = n / 1;
        n -= (1* n1);
    }
    int totalNotes=n1+n2+n5+n10+n20+n50+n100+n200+n500+n2000;

cout<<totalNotes;
}



























// Ques. Predict the output.

//    {
//            int a=5,b,c;
//            b=a=15;  // a=15 , b=15
//            c=a<15; // c=15<15 -> false output = 0
//            cout<<"a="<<a<<",b="<<b<<",c="<<c;
//            return 0;
//    }

// output.
// a=15,b=15,c=0

// Ques. Predict the output.

// {
//     int x=3; // we also write x=3 or x=3.0
//     float y=3.0;
//     if(x==y)
//     cout<<"x and y are equal";
//     else
//     cout<<"x and y are not equa";
//     return 0;

// }

//  output.
// x and y are equal