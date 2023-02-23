
//CS311 Yoshii FALL21
//INSTRUCTION:
//Look for ** to complete this program 
//The string output should match my hw1queueDemo.out 
// NEVER delete my comments!!!!
//=========================================================
//HW#: HW1P2 queue application (generate all strings)
//Your name: Simon Hausmaninger
//Complier:  g++
//File type: client program client2.cpp
//===========================================================

using namespace std;
#include <iostream>
#include <stdlib.h>
#include <string>
#include "queue.h"

//Purpose of the program: Display all possible combinations using a string of letters
//Algorithm: Input characters are stored in an array of strings. Strings are inputed in the queue after being printed. First A,B,C will be printed and stored, then the first char will print again with the other possible strings following, as in AA AB AC, then the third and final (which is the length) will be added as in AAA, AAB
int main()
{
  queue que;
  string input[3] = {"A","B","C"};
  string temp;
  string temp2;
  string out;
  
  int length = sizeof(input)/sizeof(input[0]);
 // cout << length << endl;
  int length2;
  int count = 0;
    
      try
	{   // do the steps noted in the notes 
//  while loop -- indefinitely while(true)
    while(count != length)
    {
      if(count == 0){
       //  place "A", "B", "C" in the queue
        for(int x = 0; x < length; x++)
        {
          temp = input[x];
          cout << temp << endl;
          que.add(temp);
        }
      } else{
        length2 = que.getSize();
        for(int x = 0; x < length2; x++)
        {
          que.remove(temp);
          for(int i = 0; i < length; i++)
          {
            temp2 = input[i];
            cout << temp + temp2 << endl;
            que.add(temp + temp2);
          }
        }
      }
      count++;
    }
	}
      catch(queue:: Overflow){
        cerr << "Error: Queue filled";
      }
      catch(queue:: Underflow){
        cerr << "Error: stack empty";
      }
      while(!que.isEmpty()){
        que.remove(out);
        cout << out << endl;
      }
    }// end of loop


