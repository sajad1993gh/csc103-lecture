/* strings.cpp
 * More examples working with strings...
 * */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

const string teststring = "lolololol";

/* TODO:  write a function that takes a string and a character
 * and returns the number of occurences of the character in the string.
 * */
size_t countChars(const string& s, char c)
{
 int count=0;
 for(int i= 0;i<s.length() ; i++){
   if(s[i]== c){
    count++;
   }
  }
  return count;
	/* TODO: see what happens if you try to modify s in this function. */
  //We CANNOT change const value
	/* TODO: remove the const modifier and try to call this function
	 * on teststring above.  Take note of the compiler error in case
	 * you see it again later (the message from g++ might not be all
	 * that easy to read/understand). */
  //We have to keep CONST string& s, else error
  //Whenever we wanna change string, dont use const, only use string&

}

/* TODO: write the following function which converts all lower
 * case letters to upper case.  NOTE: there are library functions
 * that will convert a single character (see 'man 3 toupper'),
 * but it might be more instructive to do it without using those.
 * If doing it without the help of toupper, note that the offset
 * between lower/upper cases is simply 'A' - 'a' (remember, this
 * is a number...).  See the ascii-test.cpp as well.
 * */
void YELL(string& s) {
	/* make all lower case chars upper case. */
 for(int i=0; i<s.length(); i++){
   int lower= (int)s[i];
   int upper= lower-32;
   char up= (char)upper;
   s[i]= up;
 }
}

/* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */
bool isPalindrome(const string& s)
{
 int l=s.length()/2 ;
 bool b=true;
 for(int i=0; i<l; i++){
  if(s[i] !=s[s.length() - i -1]){
   b=false;
   break;
  }
 }
 return b;

}

/* TODO: write a function that takes a string by reference and reverses it.
 * */
void reverse(string& s)
{
 size_t l=s.length();
 for(int i=0; i<l/2 ; i++){
  char temp=s[i];
  s[i]=s[s.length()- i- 1];
  s[l -i -1]= temp;
 }
}



/* TODO: write a function that takes two strings and returns an integer value
 * indicating whether or not the first was a substring of the second.  Remember
 * that the return value should be the index at which the string was found, or
 * -1 to indicate that the string was not found.  NOTE: this might be a little
 * tough.  Maybe do it last.
 * */
//s2 might be a substring of s1:::
size_t isSubstring(const string& s1, const string& s2) {
  size_t l1= s1.length();
  size_t l2=s2.length();
  for(size_t i=0; i<= l1-l2; i++){
   size_t j;
   for(j=0; j<l2 ; j++){
    if(s2[j] != s1[i+j])
     break;
   }
   if(j==l2) return i;
  }
	return -1;
}

/* NOTE: there is a built-in string function for this (find(str,pos)).
 * TODO: try it out (but don't use it to solve the above, of course!).
 * */

int main() {
	/* TODO: write test code for all of the functions you wrote above */
 char r='l' ;
 cout<< countChars(teststring, r) << endl;
 string test="sajad" ;
 YELL(test);
 cout<< test <<endl;
 cout<< isPalindrome(teststring) << endl;
 string b="Iran";
 reverse(b);
 for(int i=0; i<b.length() ; i++){
  cout<< b[i] ;
 }
 cout<< endl;
 string s1="abcdef ghi" ;
 string s2="gh" ;
 cout<< isSubstring(s1,s2)<< endl;
 int pos= s1.find(s2);
 cout<< pos << endl;


	return 0;
}

