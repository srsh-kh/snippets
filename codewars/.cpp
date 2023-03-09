#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears){
  std::vector<int> v;
  int h=humanYears;
  if(h<2){
    v={1,15,15};
  }
  else{
    int x=h-3;
    v={h,28+4*x,29+5*x};
  }
  return v;
}

#include <string>
#include <vector>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string s;
  for(int i=0; i<repeat; i++){
   s+=str; 
  }
  return s;
}

#include <vector>

std::vector<int> between(int start, int end) {
  std::vector<int> v;
  for(int i=start; i<=end; i++){
    v.push_back(i);
  }
    return v;
}

std::string DNAtoRNA(std::string dna){
  std::replace(dna.begin(), dna.end(), 'T', 'U');
  return dna;
}

#include <vector>

std::vector<int> between(int start, int end) {
  std::vector<int> v;
  for(int i=start; i<=end; i++){
    v.push_back(i);
  }
    return v;
}  

#include <string>
#include <vector>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string s;
  for(int i=0; i<repeat; i++){
   s+=str; 
  }
  return s;
}

using namespace std;

string replace(string s) {
  string vowels = "aeiouAEIOU";
  for (auto& c : s) if (vowels.find(c) != string::npos) c = '!';
  return move(s);
}

#include <string>
#include <regex>

using namespace std;

string replace(const string &w)
{
  return regex_replace(w, regex("[aeiouAEIOU]"), "!");
}

#include <iostream>
#include <vector>
#include <cmath>

int index(const std::vector<int> &vector, int n) {
    try {
        return std::pow(vector.at(n), n);
    } catch (std::out_of_range const& exc)
    {};
    return -1;

using namespace std;

string replace(string s) {
  string vowels = "aeiouAEIOU";
  for (auto& c : s) if (vowels.find(c) != string::npos) c = '!';
  return move(s);
}

#include <string>
#include <iostream>
using namespace std;
std::string replace(const std::string &s)
{
	string answer;
	int string_length = s.length();
	for (int x = 0; x < string_length; x++){
		char temp = s.at(x);
		
		if (temp == 'a' || temp == 'A' || temp == 'e' || temp == 'E' || temp == 'i' || temp == 'I' || temp == 'o' || temp == 'O' || temp == 'u' || temp == 'U'){
			answer += '!';
		} else {
			answer += temp;
		}
	}
    return answer; //coding and coding....
}

using namespace std;

string replace(const string &s)
{
  std::string result = s;
  std::replace( result.begin(), result.end(), 'a', '!');
  return result; //coding and coding....
}

#include <string.h>
using namespace std;

string replace(const string &s) {
  string res = s;
  for (char &c:res) {
    if (strchr("aiueoAIUEO", c) != NULL) c = '!';
  }
  return res;
}

std::string replace(std::string s) {                                               
  std::string st = "aeiouAEIOU";
  for (auto& c: s)
    if (st.find(c) != std::string::npos)
      c = '!';
  return s; 
}

using namespace std;

string replace(const string &s)
{
    string vowels = "aeiouAEIOU";
    string ss=s;

    while (ss.find_first_of(vowels) != string::npos) {
        ss[ss.find_first_of(vowels)] = '!'; 
    }
    return ss;
}

#include <utility>
#include <cmath>

using point = const std::pair<double, double>;
std::pair<double, double> barTriang(point p1, point p2, point p3) {
  double x0,y0;
  x0 = round((p1.first+p2.first+p3.first)/3*10000)/10000;
  y0 = round((p1.second+p2.second+p3.second)/3*10000)/10000;
  return {x0, y0};
}

#include <string>

std::string removeExclamationMarks(std::string str){
  str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
  return str;
}

#include <string>
#include <regex>

std::string removeExclamationMarks(std::string str){
  return std::regex_replace(str, std::regex ("!"), "");
}

std::string removeExclamationMarks(const std::string &str)
{
  std::string r{ str };
  for (int i { 0 }; i < r.size(); i++)
  { 
  if (r[i] == '!') 
      { 
          r.erase(i,1);
          i--;
      }
  }
  return r;
}

#include <regex>

using namespace std;

string removeExclamationMarks(const string &s)
{
    regex e("!");
    return regex_replace(s, e, "");
}

#include <string>

std::string removeExclamationMarks(std::string str){
  std::string res;
  std::remove_copy(str.begin(), str.end(),
                   std::back_inserter(res), '!');
  return res;
}

#include <vector>
#include <cmath>
int index(const std::vector<int> &vector, int n) {
  return n >= (int)vector.size() ? -1 : std::pow(vector[n], n);
}

std::vector<std::string> solution(const std::string &s) {
    std::vector <std::string> res;
    for (int i = 0; i < s.length(); i += 2) res.push_back(s.substr(i, 2));
    if (s.length() % 2) res[res.size() - 1] += "_";
    return res;
}

int hexToDec(std::string hexString)
{
  int x = std::stoi(hexString, 0, 16);
  std::cin >> std::hex >> x;
  return x;
}

#include <string>

int hexToDec(const std::string& hexString)
{
    return std::stoi(hexString, nullptr, 16);
}

#include <ios>

int hexToDec(std::string hexString)
{
  int n;
  std::istringstream(hexString) >> std::hex >> n;
  
  return n;
}

int hexToDec(std::string hexString)
{
    return (int)strtol(hexString.c_str(), 0, 16);
}

#include<algorithm>
#include<math.h>

int hexToDec(std::string hexString)
{
    int index = 0, result = 0, inDec = 0;
    reverse(hexString.begin(), hexString.end());
    for (char c : hexString){
        switch(c){
            case '0' ... '9': inDec = int(c) - 48; break;
            case 'a' ... 'f': inDec = int(c) - 87; break;
            case 'A' ... 'F': inDec = int(c) - 55; break;
            case '-' : result *= -1; break;
            default: break;
        }
            result += inDec * pow(16, index);
            index ++;
            inDec = 0;
    }
    return result;
}

#include <math.h>

int hexToDec(std::string hexString)
{  
  int const hexStringLength = hexString.length();
  int decimalTotal = 0;
  bool isNegative = false;
  
  for(int index = 0; index < hexStringLength; index++) {
    
    int decimal = 0;
    int const power = hexStringLength - index - 1;
    char c = hexString[index];
    
    switch(c) {
        case '-': isNegative = true; continue;
        case '0': decimal = 0; break;
        case '1': decimal = 1; break;
        case '2': decimal = 2; break;
        case '3': decimal = 3; break;
        case '4': decimal = 4; break;
        case '5': decimal = 5; break;
        case '6': decimal = 6; break;
        case '7': decimal = 7; break;
        case '8': decimal = 8; break;
        case '9': decimal = 9; break;
        case 'A':
        case 'a': decimal = 10; break;
        case 'B':
        case 'b': decimal = 11; break;
        case 'C':
        case 'c': decimal = 12; break;
        case 'D':
        case 'd': decimal = 13; break;
        case 'E':
        case 'e': decimal = 14; break;
        case 'F':
        case 'f': decimal = 15; break;
        default: throw "Invalid hex number";
    }
        
    decimalTotal += decimal * pow(16, power);
  }
  
  if (isNegative) {
    decimalTotal = decimalTotal * -1;
  }
  
  return decimalTotal;
}

int hexToDec(std::string hexString)
{
  bool negative = false;
  int increment{1};
  int result{0};
  int cast{0};
  
  for(int i{0}; i < hexString.size(); i++)
    {
      cast = hexString.size() - 1 - i;
      if(hexString[cast] == '-') {negative = true;}
      else
        {
          result += increment * 
            (hexString[cast] - (hexString[cast] < 65 ? 48 : hexString[cast] < 97 ? 55 : 87));
          increment *= 16;
        }
    }
  
  return negative ? -result : result;

int hexToDec(std::string hexString) {
// Converts hex number (given as a string) to a decimal number.
  int razryad16 = 1;
  int ret_decimal = 0, sign = 1;
  for (int ptr = hexString.size()-1; ptr >= 0; ptr--) {
    char c = hexString[ptr];
    switch (c) {
        case '-' : sign *= -1; continue;
        case '1' ... '9' : ret_decimal += (c - '1' + 1 ) * razryad16; break;
        case 'A' ... 'F' : ret_decimal += (c - 'A' + 10) * razryad16; break;
        case 'a' ... 'f' : ret_decimal += (c - 'a' + 10) * razryad16; break;
    }
    razryad16 *= 16;
  }
  return ret_decimal * sign;
}

int hexToDec(std::string hexString)
{
  int d = 0;  
  int p = 1; 
  std::for_each(hexString.rbegin(), hexString.rend(), [&p,&d](char c) { 
    c == '-' ? d *= -1 : c > 96 ? d += (c - 87) * p : c > 64 ? d += (c - 55) * p : d += (c - 48) * p; p *= 16; });
  return d;
}

int hexToDec(std::string hexString)
{
  int dec = 0;
  int sum = 0;
  for (int i = 0; i < hexString.length(); ++i) {
    
    if (hexString[i] >= 'a' && hexString[i] <= 'f') sum = hexString[i] - 'a' + 10;
    if (hexString[i] >= 'A' && hexString[i] <= 'F') sum = hexString[i] - 'A' + 10;
    if (hexString[i] >= '0' && hexString[i] <= '9') sum = hexString[i] - '0';
    dec = dec * 16 + sum;
  }
  if (hexString[0] == '-')
    return -dec;
  else 
    return dec;
}

#include <string>
#include <vector>
#include <numeric>

std::string odd_or_even(const std::vector<int> &arr)
{
    return std::accumulate(arr.begin(),arr.end(),0)&1?"odd":"even";
} //bitwise

#include <string>
#include <vector>

std::string odd_or_even( const std::vector<int>& arr )
{
    int sum = 0;
    for( auto num : arr ) sum += num;
    return sum % 2 ? "odd" : "even";
}

#include <stdlib.h>

int twice_as_old(int dad, int son) {
  return abs(dad-son*2);
}