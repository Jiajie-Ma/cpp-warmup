// Name: Jason(Jiajie) Ma
// Date: Feb. 21, 2021

// fizzbuzz.cpp implements the FizzBuzz game,
// i.e. given 3 positive integers X, Y, N (1 <= X < Y <= N <= 100), the program prints the integers from 1 to N,
// replacing those divisible by X with Fizz, those divisible by Y with Buzz, and those divisible by X and y by FizzBuzz

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   // take 3 integers (parameters) from the console. Type conversion is automatically done by C++
   int X, Y, N;
   cin >> X;
   cin >> Y;
   cin >> N;

   // check the input legality
   try{
      if (X < 1 || X > 100){
         throw "ERROR: X is not in range [1,100]!";
      }
      else if (Y < 1 || Y > 100){
         throw "ERROR: Y is not in range [1,100]!";
      }
      else if (N < 1 || N > 100){
         throw "ERROR: N is not in range [1,100]!";
      }
      else if (Y <= X){
         throw "ERROR: X is supposed to be smaller than Y!";
      }
      else if (N < Y){
         throw "ERROR: Y is supposed to be smaller than or equal to N!";
      } 
   } catch (const char* msg) {
      cout << msg << endl;
      return 1;
   }

   // print the list of integers by for loop
   for(int i = 1; i < N+1; i++){
      if (i % X == 0 && i % Y == 0){
         cout << "FizzBuzz" << endl;
      }
      else if (i % X == 0){
         cout << "Fizz" << endl;
      }
      else if (i % Y == 0){
         cout << "Buzz" << endl;
      }
      else{
         cout << i << endl;
      }
   }

   return 0;
}

