#include <stdio.h>
#include "Set.h"
#include "node1.h"
using namespace std;
#include <iostream>

int main(int argc, char **argv)
{
    node::value_type x =10;
    Set test = Set();
    test.Insertion(10);
    test.Insertion(12);
    test.Insertion(10);
    test.Insertion(15);
    test.Display();
    
  //  test.Deletion(8);
 //   test.Deletion(10);
    // test.Display();
    Set test1 = Set();
    test1.Insertion(20);
    test1.Insertion(22);
    test1.Insertion(20);
    test1.Insertion(25);
  //  test.Display();
  Set test2 = Set();
     test2.Union(test,test1);
     test2.Display();
    
    printf("hello world\n");
    int ha;
    cin>>ha;
	return 0;
}
