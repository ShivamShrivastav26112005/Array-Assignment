/*

// WAP to find the product of two no.s using pointer.
// using function :-
#include<iostream>
using namespace std;
void product(int* a, int* b)
{
   
   cout<<*a * *b;
}
int main()
{
    int a;
    cout<<"Enter the number ";
    cin>>a;

    int b;
    cout<<"Enter the number ";
    cin>>b;
    product(&a,&b);
}
// Enter the number 6
// Enter the number 9
// 54

*/



// using simple program :-


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter the number ";
//     cin>>a;

//     int b;
//     cout<<"Enter the number ";
//     cin>>b;

//     int *ptr1=&a;
//     int *ptr2=&b;
//     cout<<(*ptr1 * *ptr2);
// }

// Enter the number 6
// Enter the number 5
// 30












// #include<iostream>
// using namespace std;
// int main()
// {

// int a= 10, b=20;
// int* ptr = &a;
// b=*ptr+1;
// ptr=&b;
// cout<<*ptr<<" "<<a<<" "<<b;
// }
// // 11 10 11



#include<iostream>
using namespace std;
int main()
{

int a=15, b=20;
int *ptr=&a;
int *ptr2 = &b;
cout<<a<<" "<<b<<endl; //15 20
*ptr = *ptr2; // a = b 
cout<<a<<" "<<b; // 20 20
}
// a gets value of b


