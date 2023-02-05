#include "JBHBOT.h"
#include "knowledgebase.h"
#include <iostream>
#include <string>
//#include "strings.h"
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

JBHBOT::JBHBOT() {};


void JBHBOT::getInput() {
	bestKeyWord.clear();
	index_vector.clear();
	response_list.clear();
	input += ' ';
	capitalizer(input);
}


 void JBHBOT::find_match_1() {
	
	for (int i = 0; i < nKnowledgeBaseSize; i++) {

/*		vector	<string> keyword_list;
	
		for (int j = 0; j < 4; j++)
		{
			keyword_list.push_back(Knowledgebase[i].keyword[j]);
		}*/
		for ( int j = 0; j < 4; j++) {
			string keyword(Knowledgebase[i].keyword[j]);
			if (input.find(keyword) != string::npos)
			{
				if (keyword.length() > bestKeyWord.length())
				{
					bestKeyWord = keyword;
					index_vector.clear();
					index_vector.push_back(i);

				}
				if (keyword.length() == bestKeyWord.length())
				{
					index_vector.push_back(i);
				}
			}

		}
	}
	if (index_vector.size() > 0) 
	{
		random_shuffle(index_vector.begin(), index_vector.end());
		response_list.push_back(Knowledgebase[index_vector[0]].response);
	}
}
void JBHBOT::find_match_2() {
	ifstream keyword;
	keyword.open("Newkeywords.txt");
	ifstream response;
	response.open("Newresponses.txt");
	int c = JBHBOT::get_line_num(keyword);
	for (int i = 1; i <= c; i++) {
		ifstream keywords;
		keywords.open("Newkeywords.txt");
		string a;
		goto_line(keywords, i);
		getline(keywords, a);
		if (input.find(a) != string::npos ) {
			string b;
			goto_line(response, i);
			getline(response, b);
			response_list.push_back(b);
			
		}
	}

}

void JBHBOT::find_match_3() {
	index_vector.clear();
	for (int i = 0; i < nKnowledgeBaseSize; i++) {

		/*vector	<string> keyword_list;

		for (int j = 0; j < 2; j++)
		{
			keyword_list.push_back(Knowledgebase[i].keyword[j]);
		}*/
		for (unsigned int j = 0; j < 4; j++) {
			string keyword(Knowledgebase[i].keyword[j]);
			if (input.find(keyword) != string::npos)
			{
				response_list.push_back(Knowledgebase[i].response);
			}
		}
	}
}

void JBHBOT::respond() {
	if(response_list.size()>0){
		for (unsigned int i = 0; i < response_list.size(); i++) {
			cout << response_list[i] << endl;
		}
	}
	else {
		ofstream file;
		file.open("Noresponse.txt", ios::app);
		file << input << "\n";
		cout << "I AM SORRY I CAN NOT ANSWER THAT. MAKE SURE YOUR QUESTION IS RELEVANT TO C++." << endl;
	}
}

int  JBHBOT::wrong_language_check_and_response() {
	if (input.find("PYTHON") != string::npos || input.find("JAVA") != string::npos || input.find("MATLAB") != string::npos || input.find("JAVASCRIPT") != string::npos || input.find("HTML") != string::npos || input.find("RUBY") != string::npos || input.find("C#") != string::npos || input.find("OBJECTIVE C") != string::npos || input.find("PHP") != string::npos || input.find("SQL") != string::npos || input.find("SWIFT") != string::npos || input.find("ADRUINO") != string::npos || input.find("QBASIC") != string::npos || input.find("AIML") != string::npos || input.find("GWBASIC") != string::npos || input.find("CSHARP") != string::npos) {
		response="THE CHATBOT IS DESIGNED TO ANSWER QUESTIONS RELATED TO C++ ONLY. MAKE SURE YOUR QUERY IS RELEVANT.\n";
		return 2;
	}
	else {
		return 1;
	}
}
void JBHBOT::enhance_knowledge() {

	if (response_list.size() == 0) {
		string b;
		cout << "If you want to add a definition type yes.\nIf not ask next question." << endl;
		string a;
		getline(cin, a);
		if (a == "yes"||a=="YES") {
			ofstream keyword;
			keyword.open("Newkeywords.txt", ios::app);
			keyword << input << "\n";
			cout << "Enter the definition" << endl;
			getline(cin,b);
			ofstream response;
			response.open("Newresponses.txt", ios::app);
			response << b << "\n";
			cout << "Your provided definition has been noted. now ask next question." << endl;
		}	
	}
}
