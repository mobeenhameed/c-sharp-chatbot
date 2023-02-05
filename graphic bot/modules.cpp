#include "modules.h"
#include "JBHBOT.h"

using namespace std;

void modules::self_learning_mode() {
	cout << "WELCOME TO SELF LEARNING MODE" << endl;
	cout << "In this mode, the chatbot will try to gain information from the user regarding topics which it does not understand and will save the input" << endl;
	cout << "Please ask questions related to c++." << endl;
	modules b;
	while (1) {

		b.getInput();
		if (b.wrong_language_check_and_response() == 1) {
			b.find_match_1();
			b.find_match_2();
			b.respond();
			b.enhance_knowledge();
			
		}
	}
}

void modules::simple() {
	cout << "WELCOME TO SIMPLE MODE" << endl;
	cout << "In this mode, the chatbot will try to answer all your queries with respect to C++" << endl;
	cout << "Please ask questions related to c++." << endl;
	modules b;
	while (1) {

		b.getInput();
		if (b.wrong_language_check_and_response() == 1) {
			b.find_match_1();
			b.find_match_2();
			b.respond();
			
		}
	}
}


void modules::find_match_2() {
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
		if (input.find(a) != string::npos && !response.eof()) {
			string b;
			goto_line(response, i);
			getline(response, b);
			response_list.push_back(b);

		}
	}

}