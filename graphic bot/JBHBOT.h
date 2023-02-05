#pragma once
#include <iostream>
#include <string>
//#include "strings.h"
#include<fstream>
#include <algorithm>
#include<vector>

using namespace std;



class JBHBOT
{
public:
	JBHBOT();
public:
	//variables
	string	response;
	string	input;
	vector	<string> response_list;
	//vector	<string> new_responses;
	//vector <string> new_keywords;

	vector	<int> index_vector;
	string	bestKeyWord;



	//functions
protected:

	string capitalizer(string& a) {
		transform(a.begin(), a.end(), a.begin(), ::toupper);
		return a;
	}
	int get_line_num(ifstream& file)
	{
		int number_of_lines = 0;
		string line;

		while (getline(file, line))
			++number_of_lines;
		return number_of_lines;
	}

	ifstream& goto_line(ifstream& myfile, int line_num)
	{
		string s;
		myfile.seekg(ios::beg);
		for (int i = 1; i < line_num; ++i)
			getline(myfile, s);

		return myfile;
	}





	public:

	void getInput();
	void find_match_1();
	virtual void find_match_2();
	void find_match_3();
	void respond();
	int wrong_language_check_and_response();
	void  enhance_knowledge();
	

};