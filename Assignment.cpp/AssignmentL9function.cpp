// Ques.1-> WA fun to print squares of given natural numbers,
// taking n as argument to the fun.

// #include<iostream>
// using namespace std;
// int square(int n)
// {
//     cout<<n*n;
//     return n;
// }
// int main()
// {
//     int n ;
//     cout<<"Enter n ";
//     cin>>n;
//    square(n);

// }

// only print square of given no.
// Enter n 15
// 225

// Ques.1.1-> WA fun to print squares of first n natural numbers,
// taking n as argument to the fun.

// use for loop for that q. becoz ques. says that sq. of first n natural no.
// means when you entered n=5 -> N.N-> sq. of thiese no.s 1,2,3,4,5

// #include<iostream>
// using namespace std;
// int square(int n)
// {
//     for(int i=1; i<=n;i++)
//     {
//            cout<<i*i<<" ";
//     }
// }
// int main()
// {
//     int n ;
//     cout<<"Enter n ";
//     cin>>n;
//    square(n);

// }

// Enter n 5
// 1 4 9 16 2

// Enter n 20
// 1 4 9 16 25 36 49 64 81 100 121 144 169 196 225 256 289 324 361 400

// Ques.2.1-> WA fun that takes the radius of a circle as an argument
// and return its area.

// #include<iostream>
// using namespace std;
// int area(int r)
// {
//     cout<<3.14*r*r;

// }
// int main()
// {
//     // area of the circle = pi*r*r.
//     int r ;
//     cout<<"Enter radius ";
//     cin>>r;
//     area(r);
// }

// Enter radius 5
// 78.5

// Enter radius 6
// 113.04

// OR WE CANCODE IN LESS NO. OF LINES

// Ques.2.1-> WA fun that takes the radius of a circle as an argument
// and return its area.

// #include<iostream>
// using namespace std;
// float areaOfCircle(float rad)
// {
//    float area=3.14*rad*rad;
//    return area;

// }
// int main()
// {
//     // area of the circle = pi*r*r.
//     float r ;
//     cout<<"Enter radius ";
//     cin>>r;

//     cout<<areaOfCircle(r);
// }

// Enter radius 5
// 78.5

// Ques.3->first -: Give to numbers a and b, write a function to print all odd numbers
// between them.

// first we print 1 to 100
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=100; i++)
//     {
//         cout<<i<<" ";
//     }
// }

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
// 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50
// 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74
// 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100

// second we print a to b.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a ;
//     cout<<"Enter first number  ";
//     cin>>a;
//     int b ;
//     cout<<"Enter second number  ";
//     cin>>b;
//     for(int i=a; i<=b; i++)
//     {
//         cout<<i<<" ";
//     }
// }

// Enter first number  6
// Enter second number  15
// 6 7 8 9 10 11 12 13 14 15

// third we make a fun and print b/w a and b.
// one mistake is that it is run only when a>b
// when b>a it is not return any value

// #include<iostream>
// using namespace std;
// void print(int a, int b)
// {
//     for(int i=a; i<=b; i++)
//     {
//         cout<<i<<" ";
//     }

// }
// int main()
// {
//     int a ;
//     cout<<"Enter first number  ";
//     cin>>a;
//     int b ;
//     cout<<"Enter second number  ";
//     cin>>b;

//     print(a,b);
// }

// Enter first number  6
// Enter second number  12
// 6 7 8 9 10 11 12

// Enter first number  60
// Enter second number  12
// space only not return a value

// forth same code but some changes when a>b then work
// and also when b>a the work properly.
// but it is not give properly output when the value of a and b is same.
// it gives two values.
// then in that situation we use if else statements..

// #include<iostream>
// using namespace std;
// void print(int a, int b)
// {
//     for(int i=a; i<=b; i++)
//     {
//         cout<<i<<" ";
//     }

//     for(int i=b; i<=a; i++)
//     {
//         cout<<i<<" ";
//     }

// }
// int main()
// {
//     int a ;
//     cout<<"Enter first number  ";
//     cin>>a;
//     int b ;
//     cout<<"Enter second number  ";
//     cin>>b;

//     print(a,b);
// }

// a>b
// Enter first number  10
// Enter second number  6
// 6 7 8 9 10

// b>a
// Enter first number  6
// Enter second number  10
// 6 7 8 9 10

// a==b give- two value which is wrong use if-else
// Enter first number  3
// Enter second number  3
// 3 3

// fifth and final code when a<b ,b<a and a==b it gives correct output.
// and gives the values between a and b.

// #include <iostream>
// using namespace std;
// void print(int a, int b)
// {
//     if (a < b)
//     {
//         for (int i = a; i <= b; i++)

//         {
//             cout << i << " ";
//         }
//     }
//     else
//     {
//         for (int i = b; i <= a; i++)
//         {
//             cout << i << " ";
//         }
//     }
// }
// int main()
// {
//     int a;
//     cout << "Enter first number  ";
//     cin >> a;
//     int b;
//     cout << "Enter second number  ";
//     cin >> b;

//     print(a, b);
// }

// Enter first number  10
// Enter second number  2
// 2 3 4 5 6 7 8 9 10

// Enter first number  2
// Enter second number  9
// 2 3 4 5 6 7 8 9

// Enter first number  3
// Enter second number  3
// 3

// V.V.I.M -> FUNCTION SE FUNCTION KO CALL LAGANA
//  fifth ka second method jo always use karo.

// #include <iostream>
// using namespace std;
// void print(int a, int b) //in a we always give minimum no. and in b we always give maximum no.
// {
//     for (int i = a; i <= b; i++)
//         {
//             cout << i << " ";
//         }}
// int main()
// {
//     int a;
//     cout << "Enter first number  ";
//     cin >> a;
//     int b;
//     cout << "Enter second number  ";
//     cin >> b;
// // build in fun min(), max()
//     print(min(a,b) , max(a,b));
// }

// Enter first number  2
// Enter second number  9
// 2 3 4 5 6 7 8 9

// Enter first number  11
// Enter second number  2
// 2 3 4 5 6 7 8 9 10 11

// Enter first number  5
// Enter second number  5
// 5

// V.V.I.M -> FUNCTION SE FUNCTION KO CALL LAGANA
//  fifth ka third method jo always use karo.
//  best method

// #include <iostream>
// using namespace std;
// void print(int a, int b) {

//     if(a>b)  print(b,a); // change kar diye

//     for (int i = a; i <= b; i++)
//         {
//             cout << i << " ";
//         }}
// int main()
// {
//     int a;
//     cout << "Enter first number  ";
//     cin >> a;
//     int b;
//     cout << "Enter second number  ";
//     cin>>b;
//     print(a,b);
//  }

// Enter first number  20
// Enter second number  10
// 10 11 12 13 14 15 16 17 18 19 20

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<" Enter a number ";
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         cout<<i<<" ";
//             }
// }

//  Enter a number 5
// 1 2 3 4 5 print ho jayega

// count -> use always while loop.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << " Enter a number ";
//     cin >> n;
//     int count = 0;
//     while(n>0)
//     {
//         n/=10;

//         count++;
//     }
//     cout<<count;

// }

//  Enter a number 9670190292
// 10

// Ques.4:- WA fun to count no. of digits in a no. and then print the square of this no.
// we write a number and you told me how many no. of digits please count digits.

// #include <iostream>
// using namespace std;
// int count(int n)
// {
//     int count = 0;
//     while (n > 0) // while(n!=0) also write
//     {
//         n /= 10;
//         count++;
//     }
//     cout << count * count << " "
//          << "is square" << endl;
//     ; // it is write anywhere when program is run then it does't show any error
//     return count;
// }
// int main()
// {
//     int n;
//     cout << " Enter a number ";
//     cin >> n;

//     int a = count(n);
//     cout << a << " "
//          << "is count";
// }

//  Enter a number 123456
// 36 is square
// 6 is count

// Ques .5 -: Can same fun name be used for different funs without any conflict?
//answer - No it gives an error.


// only if no. of parameter in 2 funs with same name/retrun type are different
// then there is no conflict.otherwise conflict....





// 1. method.

// redefinition of 'void greet()
// error
// both have same name , same return type , same argument-error
// #include <iostream>
// using namespace std;
// void greet()
// {
//     cout<<"Hi";
// }
// void greet()
// {
//     cout<<"Hi";
// }
// int main()
// {
//     greet();
// }



// 2. method.

// #include <iostream>
// using namespace std;
// void greet()
// {
//     cout<<"Hi";
// }
// // void greet()
// // {
// //     cout<<"Hi";
// // }
// int main()
// {
//     greet();
// }
// // run- Hi print 


//3. method. 
//error

// #include <iostream>
// using namespace std;
// void sum(int a, int b)
// {
//     cout<<a+b;
// }
// void sum(int a, int b)
//  {
//      cout<<a+b;
//  }
// int main()
// {
//     sum(3+4);
// }

// 4.method.
// data type changed
// error
// #include <iostream>
// using namespace std;
// void sum(int a, int b)
// {
//     cout<<a+b;
// }
// void sum(float a,float b)
//  {
//      cout<<a+b;
//  }
// int main()
// {
//     sum(3.9,4.9);
// }


// 5.method- it is true it doesn't give an error
// return type same , fun name same, no. of argument different 
// no conflict.


#include <iostream>
using namespace std;
void sum(int a, int b)
{
    cout<<a+b; // R-(4,4)-> 8
}
void sum(int a, int b,int c) // no. of parameter is increased/different.
 {
     cout<<a+b+c; // R-(4,5,4)-> 13
 }
int main()
{
    sum(3,4,9);
}
