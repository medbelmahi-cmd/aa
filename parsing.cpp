#include "parsing.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <vector>
#include "student.h"
#include <string>
using namespace std;


vector<string> split(string str, char del){
    vector<string> res;
    // declaring temp string to store the curr "word" upto del
    string temp = "";
   
    for(int i=0; i<(int)str.size(); i++){
        // If cur char is not del, then append it to the cur "word", otherwise
          // you have completed the word, print it, and start a new word.
         if(str[i] != del){
            temp += str[i];
            if ((i+1) == (int)str.size()){
                res.push_back(temp);
            }
        }
       

        else{
            res.push_back(temp);
            temp = "";
        }
    }
    return res;
} 

bool parse_update(string query){
    vector<string> y = split(query,' ');
    if ((int)y.size() == 4 && y[0] == "update"){
        if (y[1].find("=") != string::npos ){
            vector<string> y1 = split(y[1],'=');
            if ((int)y1.size() == 2){
                if (y[2].find("set") != string::npos ){
                    if (y[3].find("=") != string::npos ){
                        vector<string> y2 = split(y[3],'=');
                        if ((int)y2.size() == 2){
                            return true;
                        }

                    }
                }
            }

        }
    }
return false;
}


bool parse_insert(string query){
    vector<string> y = split(query,' ');
    if ((int)y.size() == 6 && y[0] == "insert"){
        return true;
    }
return false;
}

bool parse_selectors(string query){
    vector<string> y = split(query,' ');
    if ((int)y.size() == 2 && y[0] == "select" && y[1].find("=") != string::npos){
        return true;
    }
return false;
}