							JBHBOT
JBHBOT is a Windows Forms chatbot for getting answers related to C++. It has been written and implemented in C# using Microsoft Visual Studio 2019.The chatbot
uses standard libraries and the class JBHBOT. 
With its user friendly input it is able to take input as free form text from the user and provides an appropriate response related to the query.

							Using the chatbot
The chatbot is extremely user friendly and very easy to use. Just build all the files in the my own chatbot project and the command line interface will pop up.
It will first of all ask the user which mode it wants to enter. Reply to this question by "self" or "simple". For information about modes see modules class.
Simple mode: In the simple mode, ask brief and to the point questions. Do not try to ask more than one question as this can cause the chatbot to malfunction.
Self learning mode: Only use this mode for testing and improvements. If the chatbot encounters a question that it has no response for, it will ask you if you want
to add a definition for the keyword. Reply by "yes" or "no". In case of "yes", the chatbot will prompt you to enter a definition. The next input will be stored as
the response to the query.


							knowledgebase.h
Contains structured keywords and responses. It can store five keywords for every response. It also defines the size of the knowledge base.
	
							JBHBOT class
JBHBOT.h provides the modules used to perform the basic functions of the JBHBOT. These modules may be used in other programs for other purposes.
The header file provides the following modules:
1. getInput(): 		Clears the variables, takes input from the user and stores it in string variable input, capitalizes input string.
2. find_match_1(): 	Finds matches of keywords from input and that of knowledgebase. Only stores one response even if more than one matching keywords are 
			found. Works on the concept of bestkeyword by considering the length of the keyword matched. Stores the response corresponding to 
			bestkeyword in the vector responselist.
3. find_match_2(): 	Finds matches of keywords from new keywords stored in newkeywords.txt using the enhanceknowledge module. If a match is found, it 
			stores the corresponding response saved in newresponses.txt in the vector responselist.
4. find_match_3(): 	Finds matches of keywords from input and that of knowledgebase. Stores all the responses corresoponding to all the keywords that have
			been matched. Stores the responses corresponding to all the keywords in the vector responselist. 
5. respond(): 	   	Displays all the entries stored in the vector response list. If the response list is empty it stores the input in the the file 
			noresponse.txt.
6. wrong_language	Checks the input for the different languages other than c++. If a match is found, it tells the user to ask questions related to c++.
_check_and_response():
7. enhance_knowledge():	If the responselist is empty, the function asks the user if he/she wants to add a definition. If the user replies with "yes", it takes
			a definition from the user and stores it in newresponses.txt. It also stores the input in newkeywords.txt.

							modules class
Modules class inherits the JBHBOT class privately. Modules provides the modules for the two modes of operations of the chatbot. These modes are:
1. self learning mode:	bot learns definitions from the user of the keywords that it does not know.
2. simple mode:       	bot simply answers the queries that it understandsand responds. Otherwise it answers that it does not understand.
The class also contains an overriding definition of the function find_match_2().

							Source
The source asks the user which mode it wants to enter. 

							TEST CASES
The project provides a mechanism for testing the accurate running of the JBHBOT base class. It displays the values of all the variables after the execution of 
every function of JBHBOT class. 
