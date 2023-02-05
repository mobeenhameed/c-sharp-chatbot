#pragma once
typedef struct {
	const char* keyword[5];
	const char* response;
}record;
record Knowledgebase[]{

	//starting questions
{{"IF ELSE","IF","ELSE","IF AND ELSE","IF ELSE"},
{
	"If else statements in C++ is used to control the program flow based on some condition,\n only the difference is:\n it's used to execute some statement code block if the expression is evaluated to true,\n otherwise executes else statement code block.\n",

}
},
{{ "SWITCH","WHAT IS SWITCH","SWITCHES","SWITCH STATEMENTS","SWITCH" },
{
	"C++ switch statement. Advertisements. A switch statement allows a variable to be tested for equality against a list of values.\n Each value is called a case, and the variable being switched on is checked for each case.\n",

}
},
{{"DIFFERENCE BETWEEN SWITCH AND IF ELSE","DIFFERENCE","DIFFERENCE","DIFFERENCE","DIFFERENCE"},
{"NO DIFFERENCE",

}
},
//end of start questions
//start of cctype
{{"ISALPHA","WHAT IS ISALPHA","HOW TO USE ISALPHA","WHAT IS THE PURPOSE OF ISALPHA","WHAT IS THE PURPOSE OF ISALPHA"},
{
	"The function isalpha() is used to check that a character is an alphabet or not. This function is declared in “ctype.h” header file. It returns an integer value, if the argument is an alphabet otherwise, it returns zero.",

}
},

{{"ISALNUM","WHAT IS ISALNUM","HOW TO USE ISALNUM","WHAT IS THE PURPOSE OF ISALNUM","WHAT IS THE PURPOSE OF ISALNUM"},
{
	"isalnum checks whether c is either a decimal digit or an uppercase or lowercase letter. The result is true if either isalpha or isdigit would also return true.",

}
},

{{"ISBLANK","WHAT IS ISBLANK","HOW TO USE ISBLANK","WHAT IS THE PURPOSE OF ISBLANK","WHAT IS THE PURPOSE OF ISBLANK"},
{
	"The function isblank() is used to check that the passed character is blank or not. It is basically a space character and it also considers tab character(\t). This function is declared in “ctype.h” header file in C language and “cctype”” header file in C++ language.",

}
},
{{"ISCNTRL","WHAT IS ISCNTRL","HOW TO USE ISCNTRL","WHAT IS THE PURPOSE OF ISCNTRL","WHAT IS THE PURPOSE OF ISCNTRL"},
{
	"In C++, iscntrl() is a predefined function used for string and character handling. cstring is the header file required for string functions and cctype is the header file required for character functions.",

}
},

{{"ISDIGIT","WHAT IS ISDIGIT","HOW TO USE ISDIGIT","WHAT IS THE PURPOSE OF ISDIGIT","WHAT IS THE PURPOSE OF ISDIGIT"},
{
	"The function isdigit() is used to check that character is a numeric character or not. This function is declared in “ctype.h” header file. It returns an integer value, if the argument is a digit otherwise, it returns zero.",

}
},

{{"ISGRAPH","WHAT IS ISGRAPH","HOW TO USE ISGRAPH","WHAT IS THE PURPOSE OF ISGRAPH ","WHAT IS THE PURPOSE OF ISGRAPH "},
{
	"The C library function isgraph() checks whether a character is a graphic character or not. Characters that have graphical representation are known are graphic characters. For example: ':' ';' '?' '@' etc.",

}
},
{{"ISLOWER","WHAT IS ISLOWER","HOW TO USE ISLOWER","WHAT IS THE PURPOSE OF ISLOWER ","WHAT IS THE PURPOSE OF ISLOWER "},
{
"The islower() function checks if ch is in lowercase as classified by the current C locale. By default, the characters from a to z (ascii value 97 to 122) are lowercase characters. The behaviour of islower() is undefined if the value of ch is not representable as unsigned char or is not equal to EOF.",


}
},

{{"ISPRINT","WHAT IS ISPRINT","HOW TO USE ISPRINT","WHAT IS THE PURPOSE OF ISPRINT ","WHAT IS THE PURPOSE OF ISPRINT "},
{
"In C++, isprint() is a predefined function used for string and character handling. cstring is the header file required for string functions and cctype is the headerfile required for character functions. This function is used to check if the argument contains any printable characters.",


}
},

{{"ISPUNCT","WHAT IS ISPUNCT","HOW TO USE ISPUNCT","WHAT IS THE PURPOSE OF  ISPUNCT","WHAT IS THE PURPOSE OF  ISPUNCT"},
{
"The ispunct() function checks whether a character is a punctuation character or not. The term “punctuation” as defined by this function includes all printable characters that are neither alphanumeric nor a space. For example '@', '$', etc. This function is defined in ctype.h header file.",

}
},

{{"ISSPACE","WHAT IS ISSPACE","HOW TO USE ISSPACE","WHAT IS THE PURPOSE OF  ISSPACE","WHAT IS THE PURPOSE OF  ISSPACE"},
{
"In C++, isspace is a predefined function used for string and character handling.cstring is the header file required for string functions and cctype is the headerfile required for character functions. This function is used to check if the argument contains any whitespace characters.",

}
},

{{"ISUPPER","WHAT IS ISUPPER","HOW TO USE ISUPPER","WHAT IS THE PURPOSE OF ISUPPER ","WHAT IS THE PURPOSE OF ISUPPER "},
{
"The isupper() function checks if ch is in uppercase as classified by the current C locale. By default, the characters from A to Z (ascii value 65 to 90) are uppercase characters. The behaviour of isupper() is undefined if the value of ch is not representable as unsigned char or is not equal to EOF.",

}
},

{{"ISXDIGIT","WHAT IS ISXDIGIT","HOW TO USE ISXDIGIT","WHAT IS THE PURPOSE OF ISXDIGIT ","WHAT IS THE PURPOSE OF ISXDIGIT "},
{
"isxdigit is used to check if the first character in str is a valid hexadecimal digit and therefore a valid candidate to be converted by strtol into an integral value. Output: The hexadecimal number ffff is 65535.",

}
},

{{"TOLOWER","WHAT IS TOLOWER","HOW TO USE TOLOWER","WHAT IS THE PURPOSE OF  TOLOWER","WHAT IS THE PURPOSE OF ISXDIGIT "},
{
"The tolower() function converts ch to its lowercase version if it exists. If the lowercase version of a character does not exist, it remains unmodified. The uppercase letters from A to Z is converted to lowercase letters from a to z respectively.",

}
},


{{"TOUPPER","WHAT IS TOUPPER","HOW TO USE TOUPPER ","WHAT IS THE PURPOSE OF TOUPPER","WHAT IS THE PURPOSE OF TOUPPER"},
{
"The toupper() function converts ch to its uppercase version if it exists. ... The lowercase letters from a to z is converted to uppercase letters from A to Z respectively. The behaviour of toupper() is undefined if the value of ch is not representable as unsigned char or is not equal to EOF.",

}
},

{{"CCTYPE","WHAT IS <CCTYPE> HEADERFILE","EXPLAIN THE SIGNIFICANCE OF USING CCTYPE LIBRARY IN C++  ","WHAT IS THE PURPOSE OF CCTYPE LIBRARY","WHAT ARE SOME COMMON FUNCTIONS INCLUDED IN CCTYPE LIBRARY"},

{
"C++ cctype library is one of the oldest and most useful C++ libraries is the Character Type library inherited from ANSI C.The <cctype> header file declares a set of functions to classify(and transform) individual characters.For example, isupper() checks whether a character is uppercase or not.You use these functions to classify characters by their type and they work on even weird character sets like EBCDIC.On the other hand they don't work on strings or arrays of characters. Other examples of functions included in cctype library are:/n isalnum(), isalpha(), isblank() , iscntrl(), isdigit(), isgraph(), islower(), ispunct(), isspace(), isupper(), isxdigit(), tolower(),toupper().",

}
},



 {{"EXP","WHAT IS EXP","HOW TO USE EXP","WHAT IS THE PURPOSE OF EXP","WHAT IS THE PURPOSE OF EXP"},
{
	" The exp() function in C++ returns the exponential (Euler's number) e raised to the given argument. This function is defined in <cmath> header file.",

}
},

{{"FREXP","WHAT IS FREXP","HOW TO USE FREXP","WHAT IS THE PURPOSE OF FREXP","WHAT IS THE PURPOSE OF FREXP"},
{
	" The frexp() function in C++ breaks a floating point number into its binary significand. The binary significand is a floating point whose absolute value (mantissa) lies in the interval [0.5, 1) .",

}
},

{{"IDEXP","WHAT IS IDEXP","HOW TO USE IDEXP","WHAT IS THE PURPOSE OF IDEXP","WHAT IS THE PURPOSE OF IDEXP"},
{
	" idexp returns the result of multiplying x (the significand) by 2 raised to the power of exp (the exponent)./n lexpr(x,exp) = x * 2 exp.",

}
},
{{"LOG","WHAT IS LOG","HOW TO USE LOG","WHAT IS THE PURPOSE OF LOG","WHAT IS THE PURPOSE OF LOG"},
{
	" Log() function in C++ : The log() function in C++ returns the natural logarithm (base-e logarithm) of the argument passed in the parameter. Syntax for returning natural logarithm: result = log(x) ",

}
},

{{"LOG10","WHAT IS LOG10","HOW TO USE LOG10","WHAT IS THE PURPOSE OF LOG10","WHAT IS THE PURPOSE OF LOG10"},
{
	" The log10() function in C++ returns the common logarithm (base 10 logarithm) of the argument. This function is defined in <cmath> header file. ",

}
},

{{"MODF","WHAT IS MODF","HOW TO USE MODF","WHAT IS THE PURPOSE OF MODF ","WHAT IS THE PURPOSE OF MODF "},
{
	" modf() function breaks the given argument into two parts, one is integer and the other one is fractional. Integer part is stored in the memory address pointed by the pointer which is passed as second argument in the function and the fractional part is returned by the function.",

}
},
{{"EXP2","WHAT IS EXP2","HOW TO USE EXP2","WHAT IS THE PURPOSE OF EXP2","WHAT IS THE PURPOSE OF EXP2"},
{
" The exp2() is a builtin function in C++ STL that computes the base-2 exponential function of a given number. It can also be written as 2num. Syntax: exp2(data_type num) Parameter:The function accepts a single mandatory parameter num which specifies the value of the exponent. It can be positive, negative or 0. ",


}
},

{{"EXPM1","WHAT IS EXPM1","HOW TO USE EXPM1","WHAT IS THE PURPOSE OF EXPM1 ","WHAT IS THE PURPOSE OF EXPM1 "},
{
" expm1 computes exponential minus one.Returns e raised to the power x minus one: ex-1.For small magnitude values of x, expm1 may be more accurate than exp(x)-1.",


}
},

{{"ILOGB","WHAT IS ILOGB","HOW TO USE ILOGB","WHAT IS THE PURPOSE OF  ILOGB","WHAT IS THE PURPOSE OF  ILOGB"},
{
" The ilogb(x) function in C++ STL returns the integral part of the logarithm of |x|, by using the FLT_RADIX as base for the logarithm. In general, the value of FLT_RADIX is 2, so ilogb() is equivalent to ilog2()(for positive values only). ",

}
},

{{"LOG1P","WHAT IS LOG1P","HOW TO USE LOG1P","WHAT IS THE PURPOSE OF  LOG1P","WHAT IS THE PURPOSE OF  LOG1P"},
{
" The log1p() function takes an argument x and returns the natural logarithm of the base-e logarithm of x+1. Here e is a mathematical constant with value equal to 2.71828. ",

}
},

{{"LOG2","WHAT IS LOG2","HOW TO USE LOG2","WHAT IS THE PURPOSE OF LOG2 ","WHAT IS THE PURPOSE OF LOG2 "},
{
" The log2() function in C++ returns the base-2 logarithm of the argument. The function is defined in <cmath> header file..",

}
},

{{"LOGB","WHAT IS LOGB","HOW TO USE LOGB","WHAT IS THE PURPOSE OF LOGB","WHAT IS THE PURPOSE OF LOGB"},
{
" The logb() is a builtin function in C++ STL which returns the logarithm of |x|, using FLT_RADIX as base for the logarithm. In general, the value of FLT_RADIX is 2, so logb() is equivalent to log2()(for positive values only). ",

}
},

{{"SCALBN","WHAT IS SCALBN","HOW TO USE SCALBN","WHAT IS THE PURPOSE OF SCALBN","WHAT IS THE PURPOSE OF SCALBN"},
{
" The scalbn() function is defined in the cmath header file. This function is used to calculate the product of given number x and FLT_RADIX raised to the power n. ... n: This represents the value of the exponent.",

}
},


{{"SCALBLN","WHAT IS SCALBLN","HOW TO USE SCALBLN ","WHAT IS THE PURPOSE OF SCALBLN","WHAT IS THE PURPOSE OF SCALBLN"},
{
" scalbln scales significand using floating-point base exponent (long). Scales x by FLT_RADIX raised to the power of n, returning the result of computing:/n scalbn(x,n) = x * FLT_RADIXn ",

}
},

{{"CMATH","WHAT IS <CMATH> HEADERFILE","EXPLAIN THE SIGNIFICANCE OF USING CMATH LIBRARY IN C++  ","WHAT IS THE PURPOSE OF CMATH LIBRARY","WHAT ARE SOME COMMON FUNCTIONS INCLUDED IN CMATH LIBRARY"},

{
"The <cmath> header file declares a set of functions to perform mathematical operations such as: sqrt() to calculate square root, log() to find natural logarithm of a number etc. Some of the other functions used in C++ library are as follows:/n • fmin(), fmax(), fdim() /n • round(), ceil(), floor(), and trunc() .../n • abs() and signbit() .../n• sin(), cos(), tan() .../n• acos(), asin(), atan() ... /n• pow() and sqrt() .../n• exp(), log(), log10() ...",

}
},

{{"POW","WHAT IS POW","HOW TO USE POW ","WHAT IS THE PURPOSE OF POW ","WHAT IS THE PURPOSE OF POW "},
{
"C++ pow() The pow() function computes a base number raised to the power of exponent number. This function is defined in <cmath> header file. [Mathematics] baseexponent = pow(base, exponent) [C++ Programming].",
}
},

{{"SQRT ","WHAT IS SQRT","HOW TO USE SQRT ","WHAT IS THE PURPOSE OF SQRT ","WHAT IS THE PURPOSE OF SQRT "},

{
" C++ sqrt() function. sqrt() function is a library function of cmath header (<math.h> in earlier versions), it is used to find the square root of a given number, it accepts a number and returns the square root. Note: If we provide a negative value, sqrt() function returns a domain error",

}
},

{{"HYPOT","WHAT IS HYPOT","HOW TO USE HYPOT ","WHAT IS THE PURPOSE OF HYPOT","WHAT IS THE PURPOSE OF HYPOT"},

{
" The hypot() function in C++ returns the square root of sum of square of arguments passed. It finds the hypotenuse, hypotenuse is the longest side of a right angled triangle.",

}
},

{{" ERF","WHAT IS ERF","HOW TO USE ERF ","WHAT IS THE PURPOSE OF ERF ","WHAT IS THE PURPOSE OF ERF "},

{
" It return a double which is erf(x). erfc(x) : This inbuilt function calculate the complementary of error function for input value of x. Parameter x which can be int or float or double. It return a double which is 1 – erf(x).",

}
},
{{" ERFC","WHAT IS ERFC","HOW TO USE ERFC","WHAT IS THE PURPOSE OF ERFC ","WHAT IS THE PURPOSE OF ERFC "},

{
" erfc()  Returns the complementary error function value for x. The complementary error function is equivalent to:/n erfc(x) = 1-erf(x)",

}
},

{{" TGAMMA","WHAT IS TGAMMA","HOW TO USE TGAMMA ","WHAT IS THE PURPOSE OF TGAMMA","WHAT IS THE PURPOSE OF TGAMMA"},

{
" tgamma. (C++11) performs  Nearest integer floating point operations. ceil.",

}
},

{{"LGAMMA","WHAT IS LGAMMA","HOW TO USE LGAMMA ","WHAT IS THE PURPOSE OF LGAMMA","WHAT IS THE PURPOSE OF LGAMMA"},

{
" lgamma() computes log-gamma function. Returns the natural logarithm of the absolute value of the gamma function of x . C99.",

}
},
{{"CEIL","WHAT IS CEIL","HOW TO USE CEIL","WHAT IS THE PURPOSE OF CEIL ","WHAT IS THE PURPOSE OF CEIL "},

{
" The ceil() function in C++ returns the smallest possible integer value which is greater than or equal to the given argument. The ceil() function in C++ returns the smallest possible integer value which is greater than or equal to the given argument.",

}
},

{{"FLOOR","WHAT IS FLOOR","HOW TO USE FLOOR ","WHAT IS THE PURPOSE OF FLOOR ","WHAT IS THE PURPOSE OF FLOOR "},

{
" The floor() function in C++ returns the largest possible integer value which is less than or equal to the given argument. The floor() function in C++ returns the largest possible integer value which is less than or equal to the given argument.",

}
},

{{"FMOD","WHAT IS FMOD","HOW TO USE FMOD","WHAT IS THE PURPOSE OF FMOD","WHAT IS THE PURPOSE OF FMOD"},

{
" The fmod() function in C++ computes the floating point remainder of numerator/denominator (rounded towards zero) The fmod() function in C++ computes the floating point remainder of numerator/denominator (rounded towards zero).",

}
},
{{"TRUNC","WHAT IS TRUNC","HOW TO USE TRUNC","WHAT IS THE PURPOSE OF TRUNC ","WHAT IS THE PURPOSE OF TRUNC "},

{
" The trunc() function in C++ rounds the argument towards zero and returns the nearest integral value that is not larger in magnitude than the argument. The trunc() function in C++ rounds the argument towards zero and returns the nearest integral value that is not larger in magnitude than the argument.",

}
},

{{"ROUND","WHAT IS ROUND","HOW TO USE ROUND ","WHAT IS THE PURPOSE OF ROUND","WHAT IS THE PURPOSE OF ROUND"},

{
" The round() function in C++ returns the integral value that is nearest to the argument, with halfway cases rounded away from zero. The round() function in C++ returns the integral value that is nearest to the argument, with halfway cases rounded away from zero.",

}
},

{{"LROUND","WHAT IS LROUND","HOW TO USE LROUND ","WHAT IS THE PURPOSE LROUND","WHAT IS THE PURPOSE LROUND"},

{
" lround() rounds to nearest and casts to long integer.Returns the integer value that is nearest in value to x, with halfway cases rounded away from zero. The rounded value is returned as a value of type long int.",

}
},
{{"LLROUND","WHAT IS LLROUND","HOW TO USE LLROUND","WHAT IS THE PURPOSE OF LLROUND ","WHAT IS THE PURPOSE OF LLROUND "},

{
"llround  rounds to nearest and casts to long long integer.Returns the integer value that is nearest in value to x, with halfway cases rounded away from zero. The rounded value is returned as a value of type long long int.",

}
},

{{"RINT","WHAT IS RINT","HOW TO USE RINT ","WHAT IS THE PURPOSE OF RINT ","WHAT IS THE PURPOSE OF RINT "},

{
" rint() is used to round of the floating-point argument to an integer value (in floating-point format). You can also determine the current rounding mode using a function fesetround() according to which the rint function returns the rounded integer value.",

}
},

{{"LRINT","WHAT IS LRINT","HOW TO USE LRINT","WHAT IS THE PURPOSE OF LRINT","WHAT IS THE PURPOSE OF LRINT"},

{
" lrint rounds and casts to long integer.Rounds x to an integral value, using the rounding direction specified by fegetround, and returns it as a value of type long int.",

}
},
{{"LLRINT","WHAT IS LLRINT","HOW TO USE LLRINT","WHAT IS THE PURPOSE OF LLRINT ","WHAT IS THE PURPOSE OF LLRINT "},

{
" llrint rounds and casts to long long integer.Rounds x to an integral value, using the rounding direction specified by fegetround, and returns it as a value of type long long int.",

}
},

{{"NEARBYINT","WHAT IS NEARBYINT","HOW TO USE NEARBYINT","WHAT IS THE PURPOSE OF NEARBYINT","WHAT IS THE PURPOSE OF NEARBYINT"},

{
"The nearbyint() function in C++ rounds the argument to an integral value using the current rounding mode. ... An FE_INEXACT exception is a floating point exception that occurs when the result of an operation is not represented exactly due to rounding or gradual underflow.",

}
},

{{"REMAINDER","WHAT IS REMAINDER","HOW TO USE REMAINDER ","WHAT IS THE PURPOSE OF REMAINDER","WHAT IS THE PURPOSE OF REMAINDER"},

{
"The remainder() function in C++ computes the floating point remainder of numerator/denominator (rounded to nearest). The remainder() function in C++ computes the floating point remainder of numerator/denominator (rounded to nearest).",

}
},
{{"REMQUO","WHAT IS REMQUO","HOW TO USE REMQUO","WHAT IS THE PURPOSE OF REMQUO ","WHAT IS THE PURPOSE OF REMQUO "},

{
" This function is used to return the remainder(modulus) of 2 floating point numbers mentioned in its arguments and also stores the quotient to the pointer passed to it. The quotient computed is rounded.",

}
},
//end of cmath
//start of general specifications
{ {"WHAT IS C++","WHO DEVELOP C++?", "DEFINE C++?", "WHAT DO YOU MEAN BY PROGRAMMING LANGUAGE C++?"},
{
"C++ is a high-level programming language developed by Bjarne Stroustrup at Bell Labs. C++ adds object-oriented features to its predecessor, C. C++ is one of the most popular programming language for graphical applications, such as those that run in Windows and Macintosh environments. "
}
},
{ {"FUNCTION", "WHAT ARE FUNCTIONS? ", "WHAT IS FUNCTION?", "WHAT IS PURPOSE OF FUNCTION" "FUNCTIONS"},
{
"A function is a group of statements that together perform a task. ... A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function. The C++ standard library provides numerous built-in functions that your program can call. "
}
},
{ {"USES OF FUNCTION", "HOW CAN WE USE OF FUNCTIONS IN C++?","HOW CAN WE USE FUNCTIONS IN C++?","HOW CAN WE USE FUNCTIONS IN C++?""USES OF FUNCTIONS" },
{
"C++ Functions. A function is a block of code which only runs when it is called. You can pass data, known as parameters, into a function. Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times. "
}
},
{ {"TYPE OF FUNCTION", "WHAT ARE BASIC TYPES OF FUNCTION? "," WHAT ARE FUNCTION TYPES?" "TYPES OF FUNCTION", "TYPES OF FUNCTIONS"},
{
"Depending on whether a function is predefined or created by programmer; there are two types of function: \n Library Function. \n User-defined Function. "
}
},
{ {"FUNCTION PROTOTYPES", "WHAT ARE PROTOTYPES", "WHAT ARE FUNCTION PROTOTYPES?" "PROTOTYPES", "FUNCTIONS PROTOTYPES"},
{
"A function prototype is a declaration of the function that tells the program about the type of the value returned by the function and the number and type of arguments. Function prototyping is one very useful feature of C++ function. "
}
},
{ {"NECESSITY OF PROTOTYPES", "IS PROTOTYPE ARE NECESSARY?", "NECESSITY OF PROTOTYPES", "NECESSITY OF PROTOTYPE", "WHY PROTOTYPES ARE NECESSARY?"},
{
"If the function definition appears before the function call, then prototype is not mandatory. Otherwise function prototype is necessary to let compiler know how to respond to a function when it is called. "
}
},
{ {"VIRTUAL FUNCTIONS", "WHAT ARE VIRTUAL FUNCTIONS?","VIRTUAL FUNCTIONS", "VIRTUAL FUNCTIONS", "VIRTUAL FUNCTION"},
{
"A virtual function is a member function that you expect to be redefined in derived classes. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the function. "
}
},
{ {"POINTERS", "WHAT ARE POINTERS?", "POINTERS", "POINTERS", "POINTER"},
{
"A pointer is a variable that holds a memory address where a value lives. A pointer is declared using the * operator before an identifier. As C++ is a statically typed language, the type is required to declare a pointer. "
}
},
{ {"TYPES OF POINTER", "WHAT ARE TYPES OF POINTER?", "TYPES OF POINTER", " TYPE OF POINTER ", "TYPE OF POINTERS"},
{
"Dangling, Void , Null and Wild Pointers \n Dangling pointer.\n Void pointer.\n Void pointer is a specific pointer type – void * – a pointer that points to some data location in storage, which doesn't have any specific type. Void refers to the type. Basically the type of data that it points to is can be any. ...\n Example:\n NULL Pointer.\n Important Points.\n  Wild pointer. "
}
},
{ {"REFERENCE","WHAT IS REFERENCE", "REFERENCES ","REFERENCE", "WHAT DO YOU MEAN BY REFERENCE"},
{
"A reference variable is an alias, that is, another name for an already existing variable. Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the variable. "
}
},
{ {"DEFERENCE BETWEEN POINTER AND REFERENCE", "WHAT ARE DIFFERENCE BETWEEN POINTERS AND REFERENCE?", " DEFERENCE BETWEEN POINTERS AND REFERENCES ", " DEFERENCE BETWEEN POINTER AND REFERENCES","DIFFERENCE BETWEEN POINTERS AND REFERENCES"},
{
"A reference, like a pointer, is an object that you can use to refer indirectly to another object. A reference declaration has essentially the same syntactic structure as a pointer declaration. The difference is that while a pointer declaration uses the * operator, a reference declaration uses the & operator. "
}
},
{ {"VTABLE AND VPTR", "WHAT ARE VTABLE AND VPTR?", "VTABLE AND VPTR", "VTABLE AND VPTR", "VTABLE AND VPTR"},
{
"Vtable is a table of pointers to functions, used by a class instance for run-time method overrides. This is made possible by making methods virtual, using the virtual keyword. Vptr is the pointer within the class instance to the vtable. "
}
},
{ {"CLASSES","CLASS"," WHAT ARE CLASSES IN C++? "," HOW DO DEFINE CLASS IN C++", "WHAT DO YOU KNOW ABOUT C++"},
{
"A class in C++ is a user-defined type or data structure declared with keyword class that has data and functions as its members whose access is governed by the three access specifiers private, protected or public. By default, access to members of a C++ class is private. "
}
},
{ {"USES OF CLASSES", "WHAT ARE USE OF CLASSES IN C++", "HOW CLASSES ARE USE IN C++?","USES OF CLASS", "USE OF CLASS"},
{
"A class is a mechanism of binding data members and associating methods in a single unit. If you want to define an object in your code, you can use classes to make an object more readable (and make that defined object reusable) ",
}
},
{ {"APPLICATION OF C++", "WHAT IS APPLICATION OF C++?", "USE OF C++?","USES OF C++?","USES OF C++?"},
{
"Uses of C++ allows procedural programming for intensive functions of CPU and to provide control over hardware, and this language is very fast because of which it is widely used in developing different games or in gaming engines. C++ mainly used in developing the suites of a game tool. "
}
},
{ {"DIFFERENT FEATURES OF C++", "WHAT ARE DIFFERENT FEATURES OF C++","DIFFERENT FEATURE OF C++", "FEATURES OF C++", "DIFFERENT FEATURES OF C++"},
{
"This main advantage of C++ is, it is object-oriented programming language. It follows concept of oops like polymorphism, inheritance, encapsulation, abstraction.Some important features of C++ are; \n Simple. \n Portability. \n Powerful. \n Platform dependent. \nObject oriented oriented. \n Case sensitive. \n Compiler based.\n Syntax based language. "
}
},
{ {"OBJECTS","OBJECT", "OBJECTS", " WHAT ARE OBJECTS","WHAT ARE OBJECTS IN C++"},
{
"Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects. Each object has different data variables. Objects are initialised using special class functions called Constructors. "
}
},
{ {"DIFFERENCE BETWEEN CLASSES AND OBJECTS", "WHAT ARE OBJECTS AND CLASSES"," DIFFERENCE BETWEEN CLASS AND OBJECTS ","WHAT ARE OBJECT AND CLASSES? "," DIFFERENCE BETWEEN CLASS AND OBJECT"},
{
"A class is an extended concept similar to that of structure in C programming language; this class describes the data properties alone. In C++ programming language, a class describes both the properties (data) and behaviours (functions) of objects. Classes are not objects, but they are used to instantiate objects. "
}
},
{ {"DIFFERENT FROM OTHER LANGUAGES", "HOW C++ IS DIFFERENT FROM OTHER LANGUAGES? ","HOW C++ IS DIFFERENT FROM OTHER LANGUAGES? ","HOW C++ IS DIFFERENT FROM OTHER LANGUAGES? ","HOW C++ IS DIFFERENT FROM OTHER LANGUAGES?"},
{
"C++ is an object-oriented programming language and includes classes, inheritance, polymorphism, data abstraction and encapsulation. C++ allows exception handling, and function overloading which are not possible in C. C++ is a powerful, efficient and fast language. "
}
},
{ {"DIFFERENT FROM OTHER HIGH LEVEL LANGAGUES", "HOW C++ IS DIFFERENT FROM OTHER HIGH-LEVEL LANGUAGES? ","HOW C++ IS DIFFERENT FROM OTHER HIGH-LEVEL LANGUAGE? ","HOW C++ IS DIFFERENT FROM OTHER HIGH LEVEL LANGUAGE? ","HOW C++ IS DIFFERENT FROM OTHER HIGH-LEVEL LANGUAGE? "},
{
"C++ is also called an intermediate-level programming language as it is developed using both low-level and high-level language features. C++ also supports object-oriented functionalities like the concept of classes, operator overloading, multiple inheritances, virtual functions, exception handling etc. "
}
},
{ {"C++ IS BEST LANGUAGE", "WHY C++ IS BEST LANGUAGE?","WHY C++ IS BEST LANGUAGE?","WHY C++ IS BEST LANGUAGE? ","WHY C++ IS BEST LANGUAGE? "},
{
"As a statically typed language, C++ is generally more performant than dynamically typed languages because the code is type-checked before it is executed. Java is gaining ground in terms of speed, but in the end, depending on how talented the C++ developer is, C++ can still be faster than Java. "
}
},
{ {"USED ANYMORE", "IS C++ USED ANYMORE? ","IS C++ USED ANYMORE? ","IS C++ USED ANYMORE? ","IS C++ USED ANYMORE? "},
{
"YES, A large part of why C++ is still relevant is because it allows the programmer control of intimate hardware details without dropping to the level of assembly language. C++ code is still being used everywhere and ostensibly not for legacy reasons because SpaceX uses C++ for its rockets. "
}
},
{ {"USAGE OF C++", "WHAT ARE USES OF C++?","WHAT ARE USAGE OF C++?","USE OF C++"," USES OF C++"},
{
"C++ allows procedural programming for intensive functions of CPU and to provide control over hardware, and this language is very fast because of which it is widely used in developing different games or in gaming engines. C++ mainly used in developing the suites of a game tool.\n Language paradigms: Object-oriented program.\n Language designers: Bjarne Stroustrup \n Software: Google Chrome, Symbian. "
}
},
{ {"TYPES OF USER-DEFINED FUNCTION","TYPE OF USER-DEFINED FUNCTION", "TYPES OF USER DEFINED FUNCTION", "TYPE OF USER DEFINED FUNCTIONS","WHAT ARE TYPES OF USER DEFINED FUNCTION"},
{
"Types of User-defined Functions in C++: \n Function with no argument and no return value. \n Function with no argument but return value. \n Function with argument but no return value. \n Function with argument and return value. "
}
},
{ {"USER DEFINED FUNCTION", "WHAT ARE USER-DEFINED FUNCTION?", "WHAT ARE USER DEFINED FUNCTION?", " USER DEFINED ", "USER DEFINED FUNCTIONS"},
{
"User-defined Function. C++ allows programmer to define their own function. A user-defined function groups code to perform a specific task and that group of code is given a name(identifier). When the function is invoked from any part of program, it all executes the codes defined in the body of function."
}
},
{ {"LIBRARY FUNCTION","LIBRARY FUNCTIONS","LIBRARY FUNCTION","LIBRARY FUNCTION","WHAT ARE LIBRARY FUNCTIONS?"},
{
"The C++ Standard Library provides a rich collection of functions for performing common mathematical calculations, string manipulations, character manipulations, input/output, error checking and many other useful operations."
}
},
{ {"VIRTUAL FUNCTION","WHAT IS VIRTUAL FUNCTION?","WHAT IS VIRTUAL FUNCTION? ","WHAT IS VIRTUAL FUNCTION?", "VIRTUAL FUNCTIONS"},
{
"A C++ virtual function is a member function in the base class that you redefine in a derived class. It is declared using the virtual keyword. It is used to tell the compiler to perform dynamic linkage or late binding on the function. "
}
},
{ {"USE OF VIRTUAL FUNCTION", "WHAT IS THE USE OF VIRTUAL FUNCTION? ","WHAT IS THE USE OF VIRTUAL FUNCTION? ","USE OF VIRTUAL FUNCTIONS"," USES OF VIRTUAL FUNCTION "},
{
"Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call. Functions are declared with a virtual keyword in base class. The resolving of function call is done at Run-time. "
}
},
{ {"TYPES OF USER DEFINED FUNCTION","WHAT ARE DIFFERENT TYPES OF USER DEFINED FUNCTION? ","TYPE OF USER DEFINED FUNCTION","TYPE OF USER DEFINED FUNCTIONS","WHAT ARE DIFFERENT TYPES OF USER DEFINED FUNCTIONS"},
{
"There can be 4 different types of user-defined functions, they are: Function with no arguments and no return value. Function with no arguments and a return value. Function with arguments and no return value. Function with arguments and a return value."
}
},
{ {"MODULARITY","MODULARITYS","WHAT IS MODULARITY? ","WHAT IS MODULARITY? ","WHAT IS MODULARITY?"},
{
"Modularity is the concept explained in oops concept, and it was introduced with class and objects. modularity means the written program can be splitted up in to modules by using classes and each class can be considered as a module. "
}
},
{ {"ABSTRACTION","ABSTRACTIONS","WHAT IS ABSTRACTION? ","WHAT IS ABSTRACTION? ","WHAT IS ABSTRACTION?"},
{
" Data Abstraction is a process of providing only the essential details to the outside world and hiding the internal details, i.e., representing only the essential details in the program. "
}
},
{ {"TYPE OF PASSING FUNCTION","WHAT ARE TYPES OF PASSING FUNCTION? ","WHAT ARE TYPES OF PASSING FUNCTION? ","WHAT ARE TYPES OF PASSING FUNCTION? ","WHAT ARE TYPES OF PASSING FUNCTION? "},
{
"C++ supports two forms of parameter passing: \n Pass by value \n Pass by reference "
}
},
{ {"PASS BY VALUE","WHAT IS PASS BY VALUE?","WHAT IS PASS BY VALUE? ","WHAT IS PASS BY VALUE? ","WHAT IS PASS BY VALUE? "},
{
"By default, non-pointer arguments in C++ are passed by value. When an argument is passed by value, the argument's value is copied into the value of the corresponding function parameter. In the first call to foo(), the argument is the literal 5 "
}
},
{ {"PASS BY REFERENCE","WHAT IS PASS BY REFERENCES? ", "WHAT IS PASS BY REFERENCE? ","WHAT IS PASS BY REFERENCES?","WHAT IS PASS BY REFERENCE? "},
{
"Pass-by-reference means to pass the reference of an argument in the calling function to the corresponding formal parameter of the called function. The called function can modify the value of the argument by using its reference passed in. "
}
},
{ {"STORAGE CLASS","WHAT IS STORAGE CLASS?", "WHAT IS STORAGE CLASS?", "WHAT IS STORAGE CLASS?", "WHAT IS STORAGE CLASS?"},
{
"Storage class specifiers supported in C++ are auto, register, static, extern and mutable. This is the default storage class we have been using so far. It applies to local variables only and the variable is visible only inside the function in which it is declared and it dies as soon as the function execution is over. "
}
},
{ {"SCOPE","WHAT IS SCOPE", "WHAT IS SCOPES?", "WHAT IS SCOPE?", "WHAT IS SCOPE?"},
{
"Scope of Variables in C++ in general, the scope is defined as the extent up to which something can be worked with. In programming also, the scope of a variable is defined as the extent of the program code within which the variable can we accessed or declared or worked with. "
}
},
{ {"LOCAL SCOPE","WHAT IS MENT BY LOCAL SCOPES?", "WHAT IS MENT BY LOCAL SCOPE?", "WHAT IS MENT BY LOCAL SCOPE?", "WHAT IS MENT BY LOCAL SCOPE?"},
{
" Variables that are declared inside a function or a block are called local variables and are said to have local scope. These local variables can only be used within the function or block in which these are declared. Now let's see an example where a local variable is declared in the function definition."
}
},
{ {"CLASS SCOPE","WHAT IS CLASSES SCOPES? ","WHAT IS CLASS SCOPE? ","WHAT IS CLASS SCOPE","WHAT IS CLASS SCOPE"},
{
"Class scope (C++ only) A name declared within a member function hides a declaration of the same name whose scope extends to or past the end of the member function's class."
}
},
{ {"GLOBAL SCOPE","WHAT IS GLOBAL SCOPES", "WHAT IS GLOBAL SCOPE?", "WHAT IS GLOBAL SCOPE?", "WHAT IS GLOBALS SCOPES?"},
{
" A global name is one that is declared outside of any class, function or namespace. However, in C++ even these names exist with an implicit global namespace. The scope of global names extends from the point of declaration to the end of the file in which they are declared."
}
},
{ {"CLASS DECLARATION","CLASSES DECLARATION", "WHAT IS CLASS DECLARATION?", "WHAT IS CLASS DECLARATION?", "WHAT IS CLASS DECLARATION?"},
{
"A class declaration must contain the class keyword and the name of the class that you are defining. Thus, the simplest class declaration that you can write looks like this: ... List the interfaces implemented by the class. Declare whether the class is public, abstract, or final."
}
},
{ {"CLASS METHOD"," CLASSES METHODS ", "WHAT ARE CLASS METHOD?", "WHAT ARE CLASS METHOD?", "WHAT ARE CLASS METHOD?"},
{
"Define the operations that can be performed on class objects \n A constructor is a special method that is executed when objects of the class type are created (instantiated). \n Constructors must have the same name as the class \n A class may define multiple constructors to allow greater flexibility \n in creating objects: \n The default constructor is the one that has no parameters \n Parameterized constructors provide initial values of data members."
}
},
{ {"CLASS USAGE","USES OF CLASS", " USE OF CLASS ", "WHAT IS THE USE OF CLASS?", "WHAT IS THE USE OF CLASS?"},
{
"A class is an extended concept similar to that of structure in C programming language; this class describes the data properties alone. In C++ programming language, a class describes both the properties (data) and behaviors (functions) of objects."
}
},
//end of general specifications
//start of Ahmed's topics
{ {"DATA TYPES","WHAT ARE DATA TYPES","HOW TO DATA TYPES","WHAT IS THE PURPOSE OF","DATA TYPES"},
{
	"When computer programs store data in variables, each variable must be assigned a specific data type.\n Some common data types include integers, floating point numbers, characters, strings, and arrays.\n They may also be more specific types, such as dates, timestamps, boolean values, and varchar (variable character) formats.",

}
},

{ {"INT","WHAT IS INTEGER DATA TYPE","HOW TO USE INTEGER DATA TYPE","WHAT IS THE PURPOSE OF INTEGER DATA TYPE","INTEGER"},
{
	" Keyword used for integer data types is int.\n Integers typically requires 4 bytes of memory space and ranges from -2147483648 to 2147483647.\n The integer data type is used to declare variables of integer type.",

}
},

{ {"CHAR","WHAT IS CHARACTER DAT TYPE","HOW TO USE CHARACTER DATA TYPE","WHAT IS THE PURPOSE OF CHARACTER DATA TYPE","CHARACTER"},
{
	"Character data type is used for storing characters.\n Keyword used for character data type is char.\n Characters typically requires 1 byte of memory space and ranges from -128 to 127 or 0 to 255.",

}
},
{ {"BOOL","WHAT IS BOOLEAN DATA TYPE","HOW TO USE BOOLEAN DATA TYPE","WHAT IS THE PURPOSE OF BOOLEAN DTA TYPE","BOOLEAN"},
{
	" Boolean data type is used for storing boolean or logical values.\n A boolean variable can store either true or false. Keyword used for boolean data type is bool. ",

}
},

{ {"FLOAT","WHAT IS FLOATING POINT DATA TYPE","HOW TO USE FLOATING POINT DATA TYPE","WHAT IS THE PURPOSE OF FLOATING POINT DATA TYPE","FLOATING POINT"},
{
	" Floating Point data type is used for storing single precision floating point values or decimal values.\n Keyword used for floating point data type is float. Float variables typically requires 4 byte of memory space. ",

}
},

{ {"DOUBLE","WHAT IS DOUBLE FLOATING POINT DATA TYPE","HOW TO USE DOUBLE FLOATING POINT DATA TYPE","WHAT IS THE PURPOSE OF DOUBLE FLOATING DATA TYPE","DOUBLE FLOATING POINT "},
{
	"Double Floating Point data type is used for storing double precision floating point values or decimal values. \n Keyword used for double floating point data type is double. Double variables typically requires 8 byte of memory space.",

}
},
{ {"VOID","WHAT IS VOID","HOW TO VOID","WHAT IS THE PURPOSE OF VOID","VOID"},
{
" Void means without any value. Void datatype represents a valueless entity. \n Void data type is used for those function which does not returns a value. ",


}
},

{ {"WCHAR_T","WHAT IS WIDE CHARACTER DATA TYPE","HOW TO USE WIDE CHARACTER DATA TYPE","WHAT IS THE PURPOSE OF WIDE CHARACTER DATA TYPE","WIDE CHARACTER"},
{
" Wide character data type is also a character data type but this data type has size greater than the normal 8-bit datatype.\n Represented by wchar_t. It is generally 2 or 4 bytes long.",


}
},

{ {"STRING","WHAT IS STRING DATA TYPE","HOW TO USE STRING DATA TYPE","WHAT IS THE PURPOSE OF  STRING DATA TYPE","STRING"},
{
" A string is a data type used in programming, such as an integer and floating point unit, but is used to represent text rather than numbers.\n It is comprised of a set of characters that can also contain spaces and numbers. For example, the word hamburger and the phrase I ate 3 hamburgers are both strings. \n Even 12345 could be considered a string, if specified correctly. \n Typically, programmers must enclose strings in quotation marks for the data to recognized as a string and not a number or variable name.",

}
},

{ {"DATA TYPE MODIFIER","WHAT IS DATA TYPE MODIFIER","HOW TO USE DATA TYPE MODIFIER","MODIFIER","DATA TYPE MODIFIER"},
{
" As the name implies, datatype modifiers are used with the built-in data types to modify the length of data that a particular data type can hold.\nData type modifiers available in C++ are:\nSigned\nUnsigned\nShort\nLong",

}
},

{ {"SIGNED","WHAT IS SIGNED DATA TYPE MODIFIER","HOW TO USE SIGNED DATAT TYPE MODIFIER","WHAT IS THE PURPOSE OF SIGNED DATA TYPE MODIFIER","SIGNED DATA TYPE MODIFIER"},
{
"Signed types includes both positive and negative numbers and is the default type.",

}
},

{ {"UNSIGNED","WHAT IS UNSIGNED DATA TYPE MODIFIER","HOW TO USE UNSIGNED DATA TYPE MODIFIER","WHAT IS THE PURPOSE OF UNSIGNED DATA TYPE MODIFIER","UNSIGNED"},
{
" Unsigned, numbers are always without any sign, that is always positive.",

}
},

{ {"LONG","WHAT IS LONG DATA TYPE MODIFIER","HOW TO USE LONG DATA TYPE MODIFIER","WHAT IS THE PURPOSE OF LONG DATA TYPE MODIFIER","LONG"},
{
"Long modify the maximum values that a data type will hold.",

}
},


{ {"SHORT","WHAT IS SHORT DATA TYPE MODIFIER","HOW TO USE SHORT DATA TYPE MODIFIER ","WHAT IS THE PURPOSE OF SHORT DATA TYPE MODIFIER","SHORT"},
{
" Short modify the minimum values that a data type will hold.",

}
},

{ {"DERIVED","WHAT IS DERIVED DATA TYPE","WHAT IS THE PURPOSE OF DERIVED DATA TYPE","WHAT ARE SOME COMMON DATA TYPES INCLUDED IN DERIVED DATA TYPE","DERIVED DATA TYPE"},

{
" The data-types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. \nThese can be of four types namely:\nFunction\nArray\nPointer\nReference",

}
},

{ {"FUNCTION","WHAT IS FUNCTION","HOW TO USE FUNCTION ","WHAT IS THE PURPOSE OF FUNCTION ","FUNCTION"},
{
"A function is a group of statements that together perform a task. Every C++ program has at least one function, which is main(), and all the most trivial programs can define additional functions.\nYou can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division usually is such that each function performs a specific task.\nA function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.\nThe C++ standard library provides numerous built-in functions that your program can call. For example, function strcat() to concatenate two strings, function memcpy() to copy one memory location to another location and many more functions.",
}
},

{ {"ARRAY","WHAT IS ARRAY","HOW TO USE ARRAY ","WHAT IS THE PURPOSE OF ARRAY","ARRAY "},

{
" C++ provides a data structure, the array, which stores a fixed-size sequential collection of elements of the same type. \n An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.\n Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. \n A specific element in an array is accessed by an index.\n All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element",

}
},

{ {"POINTER","WHAT IS POINTER","HOW TO USE POINTER ","WHAT IS THE PURPOSE OF POINTER","POINTER"},

{
" A pointer is a variable that holds a memory address where a value lives. A pointer is declared using the * operator before an identifier. \n A function can be written to perform the same task but instead accept a pointer as the argument. \n This lowers the memory footprint of the program. Unnecessary duplicate variables aren't created. \n The function can modify the variable's value directly. Any modifications to the variable in the function affect the variable here in this scope too.",

}
},

{ {"REFERENCE","WHAT IS REFERENCE","HOW TO USE REFERENCE","WHAT IS THE PURPOSE OF REFERENCE","REFERENCE"},

{
" A reference variable is an alias, that is, another name for an already existing variable. Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the variable.",

}
},
{ {"USER DEFINED DATA TYPE","WHAT IS USER DEFINED DATA TYPE","HOW TO USE USER DEFINED DATA TYPE","WHAT IS THE PURPOSE OF USER DEFINED DATA TYPE ","USER DEFINED DATA TYPE"},

{
"  These data types are defined by user itself. Like, defining a class in C++ or a structure. C++ provides the following user-defined datatypes:  \n Class \n Structure \n Union \n Enumeration \n Typedef defined DataType",

}
},

{ {"ARTHIMETIC OPERATOR","WHAT IS ARTHIMETIC OPERATORS","HOW TO USE ARTHIMETIC OPERATORS","WHAT IS THE PURPOSE OF ARTHIMETIC OPERATORS","ARTHIMETIC OPERATORS"},

{
" Arithmetic Operators: These are the operators used to perform arithmetic/mathematical operations on operands. Examples: (+, -, *, /, %,++,–). \n Arithmetic operator are of two types:  \n Unary Operators: Operators that operates or works with a single operand are unary operators. For example: (++ , –)\n Binary Operators: Operators that operates or works with two operands are binary operators. For example: (+ , – , * , /)",

}
},

{ {"+","WHAT IS + OPERATOR","HOW TO USE + OPERATOR ","WHAT IS  +","+ OPERATOR"},

{
" The ‘+’ operator adds two operands. For example, x+y.",

}
},
{ {"-","WHAT IS - OPERATOR","HOW TO USE - OPERATOR","WHAT IS -  ","-OPERATOR"},

{
" The ‘-‘ operator subtracts two operands. For example, x-y.",

}
},

{ {"*","WHAT IS * OPERATOR","HOW TO USE * OPERATOR ","WHAT IS *"," OPERATOR"},

{
"  The ‘*’ operator multiplies two operands. For example, x*y.",

}
},

{ {"/","WHAT IS / OPERATOR","HOW TO USE / OPERATOR","WHAT IS / ","/ OPERATOR"},

{
" The ‘/’ operator divides the first operand by the second. For example, x/y.",

}
},
{ {"%","WHAT IS % OPERATOR","HOW TO USE % OPERATOR","WHAT IS % ","% OPERATOR"},

{
" The ‘%’ operator returns the remainder when first operand is divided by the second. For example, x%y.",

}
},

{ {" ++ ","WHAT IS INCREMENT OPERATOR","++ OPERATOR","WHAT IS ++","++ INCREMENT"},

{
" The ‘++’ operator is used to increment the value of an integer. When placed before the variable name (also called pre-increment operator), its value is incremented instantly. For example, ++x.\n And when it is placed after the variable name (also called post-increment operator), its value is preserved temporarily until the execution of this statement and it gets updated before the execution of the next statement. For example, x++.",

}
},

{ {"--DECREMENT","WHAT IS DECREMENT OPERATOR","HOW TO USE DECREMENT OPERATOR ","WHAT IS --","--DECREMENT"},

{
" The ‘ – – ‘ operator is used to decrement the value of an integer. When placed before the variable name (also called pre-decrement operator), its value is decremented instantly. For example, – – x.\n And when it is placed after the variable name (also called post-decrement operator), its value is preserved temporarily until the execution of this statement and it gets updated before the execution of the next statement. For example, x – –.",

}
},
{ {"RELATIONAL OPERATORS","WHAT IS RELATIONAL OPERATOR","HOW TO USE RELATIONAL OPERATOR","WHAT IS THE PURPOSE OF RELATIONAL OPERATOR","RELATIONAL OPERATOR"},

{
"These are used for comparison of the values of two operands. For example, checking if one operand is equal to the other operand or not, an operand is greater than the other operand or not etc. \n Some of the relational operators are (==, >= , <= ).",

}
},

{ {"==","WHAT IS EQUAL TO OPERATOR","HOW TO USE EQUAL TO OPERATOR ","WHAT IS ==","== EQUAL TO"},

{
" Represented as ‘==’, the equal to operator checks whether the two given operands are equal or not. If so, it returns true. Otherwise it returns false. For example, 5==5 will return true.",

}
},

{ {"!=","WHAT IS NOT EQUAL TO OPERATOR","HOW TO USE NOT EQUAL TO OPERATOR","WHAT IS !=","!= NOT EQUAL TO"},

{
"  Represented as ‘!=’, the not equal to operator checks whether the two given operands are equal or not. If not, it returns true. Otherwise it returns false. \n It is the exact boolean complement of the ‘==’ operator. For example, 5!=5 will return false.",

}
},
{ {">","WHAT IS GREATER THAN OPERATOR","HOW TO USE GREATER THAN OPERATOR","WHAT IS > ","> GREATER THAN"},

{
" Represented as ‘>’, the greater than operator checks whether the first operand is greater than the second operand or not. If so, it returns true. Otherwise it returns false. For example, 6>5 will return true.",

}
},

{ {"<","WHAT IS LESS THAN OPERATOR","HOW TO USE LESS THAN OPERATOR","WHAT IS  <","< LESS THAN"},

{
"  Represented as ‘<‘, the less than operator checks whether the first operand is lesser than the second operand. If so, it returns true. Otherwise it returns false. For example, 6<5 will return false.",

}
},

{ {">=","WHAT IS GREATER THAN EQUAL TO OPERATOR","HOW TO USE GREATER THAN EQUAL TO OPERATOR ","WHAT IS >=",">= GREATER THAN EQUAL TO"},

{
" Represented as ‘>=’, the greater than or equal to operator checks whether the first operand is greater than or equal to the second operand. If so, it returns true else it returns false. For example, 5>=5 will return true.",

}
},
{ {"<=","WHAT IS LESS THAN EQUAL TO OPERATOR","HOW TO USE LESS THAN EQUAL TO OPERATOR","WHAT IS <= ","<=LESS THAN EQUAL TO"},

{
"  Represented as ‘<=’, the less than or equal tooperator checks whether the first operand is less than or equal to the second operand. If so, it returns true else false. For example, 5<=5 will also return true.",

}
},
{ {"LOGICAL OPERATOR","WHAT ARE LOGICAL OPERATORS","HOW TO USE LOGICAL OPERATORS","WHAT IS THE PURPOSE OF LOGICAL OPERATORS", "LOGICAL OPERATORS"},
{
	" Logical Operators are used to combine two or more conditions/constraints or to complement the evaluation of the original condition in consideration.\n The result of the operation of a logical operator is a boolean value either true or false. \n For example, the logical AND represented as ‘&&’ operator in C or C++ returns true when both the conditions under consideration are satisfied.\n Otherwise it returns false. Therfore, a && b returns true when both a and b are true (i.e. non-zero)",

}
},

{{"&&","WHAT IS AND OPERATOR","HOW TO USE AND OPERATOR","WHAT IS &&","&& AND"},
{
	"The ‘&&’ operator returns true when both the conditions under consideration are satisfied. Otherwise it returns false. For example, a && b returns true when both a and b are true (i.e. non-zero).",

}
},

{{"||","WHAT IS OR OPERATOR","HOW TO USE OR OPERATOR","WHAT IS ||","|| OR"},
{
	"The ‘||’ operator returns true even if one (or both) of the conditions under consideration is satisfied. Otherwise it returns false.\n  For example, a || b returns true if one of a or b or both are true (i.e. non-zero). \n Of course, it returns true when both a and b are true.",

}
},
{{"!","WHAT IS NOT OPERATOR","HOW TO USE NOT OPERATOR","NOT OPERATOR","!NOT"},
{
	" The ‘!’ operator returns true the condition in consideration is not satisfied. Otherwise it returns false. For example, !a returns true if a is false, i.e. when a=0.",

}
},

{{"SHORT CIRCUITING","WHAT IS SHORT CIRCUITING","PROCESS OF SHORT CIRCCUITING","CONDITIONS WHEN SHORT CIRCUIT OCCURS","SHORT CIRCUITING"},
{
	" In case of logical AND, the second operand is not evaluated if first operand is false. In case of logical OR, the second operand is not evaluated if first operand is true.",

}
},

{{"=","WHAT IS ASSIGNMENT OPERATOR","HOW TO USE ASSIGNMENT OPERATOR","WHAT IS = ","ASSIGNMENT OPERATOR "},
{
	"Assignment operators are used to assign value to a variable. The left side operand of the assignment operator is a variable and right side operand of the assignment operator is a value. \n  The value on the right side must be of the same data-type of variable on the left side otherwise the compiler will raise an error.",

}
},
{{"OPERATORS","WHAT ARE OPERATORS","HOW TO USE OPERATOR","WHAT IS THE PURPOSE OF OPERATORS", "DIFFERENT TYPES OF OPERATORS"},
{
"Operators are the basic concept of any programming language, used to build a foundation in programming for freshers. Operators can be defined as basic symbols that help us work on logical and mathematical operations. Operators in C and C++, are tools or symbols that are used to perform mathematical operations concerning arithmetic, logical, conditional and, bitwise operations.\nDifferent types of Operators:\n1.Arthimetic \n2.Relational \n3.Logical\n4.Assignment\n5.Bitwise\n6.Miscellaneous",


}
},

{{"+=","WHAT IS += OPERATOR","HOW TO USE += OPERATOR","WHAT IS += ","+= OPERATOR"},
{
" This operator is combination of ‘+’ and ‘=’ operators. This operator first adds the current value of the variable on left to the value on right and then assigns the result to the variable on the left.",


}
},

{{"-=","WHAT IS -= OPERATOR","HOW TO USE -= OPERATOR","WHAT IS -= ","-= OPERATOR"},
{
"This operator is combination of ‘-‘ and ‘=’ operators. This operator first subtracts the value on right from the current value of the variable on left and then assigns the result to the variable on the left.",

}
},

{{"= ","WHAT IS *= OPERATOR","HOW TO USE *= OPERATOR","WHAT IS *=","= OPERATOR"},
{
" This operator is combination of ‘*’ and ‘=’ operators. This operator first multiplies the current value of the variable on left to the value on right and then assigns the result to the variable on the left.",

}
},

{{"/=","WHAT IS /= OPERATOR ","HOW TO USE /= OPERATOR","WHAT IS  /=","/= OPERATOR"},
{
"This operator is combination of ‘/’ and ‘=’ operators. This operator first divides the current value of the variable on left by the value on right and then assigns the result to the variable on the left.",

}
},

{{"()","WHAT IS () OPERATOR","HOW TO USE () OPERATOR","WHAT IS () ","() OPERATOR"},
{
"Parentheses (function call)",

}
},

{{"[]","WHAT IS [] OPERATOR","HOW TO USE [] OPERATOR","WHAT IS []","[] OPERATOR"},
{
" 	Brackets (array subscript).",

}
},


{{". ","WHAT IS DOT OPERATOR","HOW TO USE DOT OPERATOR","WHAT IS THE PURPOSE OF DOT OPERATOR","DOT OPERATOR"},
{
" Member selection via object name.",

}
},

{{"->","WHAT IS -> OPERATOR","EXPLAIN THE SIGNIFICANCE OF -> OPERATOR ","WHAT IS ->","-> OPERATOR"},

{
" Member selection via pointer.",

}
},

{{"SIZEOF","WHAT IS SIZEOF OPERATOR","HOW TO USE SIZEOF OPERATOR ","WHAT IS THE PURPOSE OF SIZEOF OPERATOR","SIZEOF OPERATOR"},
{
"Determine size in bytes on this implementation",
}
},

{{"?:","WHAT IS ?: OPERATOR","HOW TO USE ?: OPERATOR ","WHAT IS ?:","?: OPERATOR "},

{
"  	Ternary conditional. Programmers use ternary operators in C for decision making inplace of conditional statements if and else. \n The ternary operator is an operator that takes three arguments. The first argument is a comparison argument, the second is the result upon a true comparison, and the third is the result upon a false comparison.",

}
},

{{"LOOPS","WHAT ARE LOOPS","HOW TO USE LOOPS ","WHAT IS THE PURPOSE OF LOOPS","LOOP"},

{
" In computer programming, a loop is a sequence of instructions that is repeated until a certain condition is reached. \n An operation is done, such as getting an item of data and changing it, and then some condition is checked such as whether a counter has reached a prescribed number.\n Counter not Reached: If the counter has not reached the desired number, the next instruction in the sequence returns to the first instruction in the sequence and repeat it.\n Counter reached: If the condition has been reached, the next instruction “falls through” to the next sequential instruction or branches outside the loop.\n There are mainly two types of loops:\n Entry Controlled loops: In this type of loops the test condition is tested before entering the loop body. For Loop and While Loop are entry controlled loops.\n Exit Controlled Loops: In this type of loops the test condition is tested or evaluated at the end of loop body. Therefore, the loop body will execute atleast once, irrespective of whether the test condition is true or false. do – while loop is exit controlled loop",

}
},

{{"CONTROL STRUCTURES","WHAT IS CONTROL STRUCTURE","HOW TO USE CONTROL STRUCTURE","WHAT IS THE PURPOSE OF CONTROL STRUCTURE","CONTROL STRUCTURE"},

{
" Control structures are the statements that control the flow of the source code. There are three categories of flow controls:\n 1- Branching statements\n These are the decision making statements. There are three of them:\n *if statements(simple if, if else, nested if, and if ladder )\n *switch statement\n *conditional statement\n 2- Looping statements\n These statements are used when there is a need to repeat a particular block of code a finite number of times. They are also called iterating statements. There are three of them:\n *for loop\n *while loop\n *do while loop\n 3- Jumping statements\n As the name suggests, these allow the cursor to jump to another block of code, on reaching them in the program. These are further three :\n *break statement\n *continue statement\n *goto statement",

}
},
{{"FOR LOOP","WHAT IS FOR LOOP","HOW TO USE FOR LOOP","WHAT IS THE PURPOSE OF FOR LOOP","FOR"},

{
"  A for loop is a repetition control structure which allows us to write a loop that is executed a specific number of times. \n The loop enables us to perform n number of steps together in one line. In for loop, a loop variable is used to control the loop. \n First initialize this loop variable to some value, then check whether this variable is less than or greater than counter value.\n  If statement is true, then loop body is executed and loop variable gets updated . Steps are repeated till exit condition comes.\nSyntax:\n for (initialization expr; test expr; update expr)\n { \n// body of the loop \n // statements we want to execute\n} \n Initialization Expression: In this expression we have to initialize the loop counter to some value. for example: int i=1; \n Test Expression: In this expression we have to test the condition. If the condition evaluates to true then we will execute the body of loop and go to update expression otherwise we will exit from the for loop. For example: i <= 10;\n Update Expression: After executing loop body this expression increments/decrements the loop variable by some value. for example: i++;",

}
},

{{"WHILE LOOP","WHAT IS WHILE LOOP","HOW TO USE WHILE LOOP","WHAT IS THE PURPOSE OF WHILE LOOP","WHILE"},

{
" While studying for loop we have seen that the number of iterations is known beforehand, i.e. the number of times the loop body is needed to be executed is known to us. while loops are used in situations where we do not know the exact number of iterations of loop beforehand. \n The loop execution is terminated on the basis of test condition.\n initialization expression;\n while (test_expression)\n {\n // statements\n update_expression;\n }",

}
},

{{"DO WHILE LOOP","WHAT IS DO WHILE LOOP","HOW TO USE DO WHILE LOOP ","WHAT IS THE PURPOSE OF DO WHILE LOOP","DO WHILE"},

{
" In do while loops also the loop execution is terminated on the basis of test condition. The main difference between do while loop and while loop is in do while loop the condition is tested at the end of loop body, i.e do while loop is exit controlled whereas the other two loops are entry controlled loops.\n initialization expression;\n do\n {\n // statements\n update_expression;\n } while (test_expression);",

}
},
{{"INFINITE LOOP","WHAT IS INFINITE LOOP","HOW TO USE INFINITE LOOP","WHAT IS THE PURPOSE OF INFINITE LOOP","INFINITE LOOP"},

{
" An infinite loop (sometimes called an endless loop ) is a piece of coding that lacks a functional exit so that it repeats indefinitely. An infinite loop occurs when a condition always evaluates to true. Usually, this is an error.",

}
},
// END OF AHMED'S WORKD
{ {"STRINGS","WHAT ARE STRINGS","WHAT IS THE PURPOSE OF STRINGS","HOW TO USE STRINGS","STRING CLASS"
},
{"typedef basic_string<char> string; \n Strings are objects that represent sequences of characters. \n The standard string class provides support for such objects with an interface similar to that of a standard container of bytes, but adding features specifically designed to operate with strings of single-byte characters.",
} },
{ {"HOW TO CONSTRUCT STRING","CONSTRUCT STRING","CONSTRUCT STRINGS","STRINGS TYPEFACE","STRING CONSTRUCTION"},
{"string();\n Construct string object \n Constructs a string object, initializing its value depending on the constructor version used:\n (1) empty string constructor (default constructor) \n (2) copy constructor \n (3) substring constructor \n (4) from c-string \n(5) from buffer \n (6) initializer list \n",
} },
{ {"STRING DESTRUCTOR","WHAT IS STRING DISTRUCTO","HOW TO DISTRUCT STRING","STRING DESTRUCTION","STRING DESTRUCTOR"},
{"Destroys the string object. This deallocates all the storage capacity allocated by the string using its allocator.",
}
},
{ {"BEGIN IN STRING","WHAT IS BEGIN IN STRING","WHAT IS THE PURPOSE OF BEGIN IN STRING","HOW TO USE BEGIN IN STRING","HOW TO USE BEGIN IN STRING"},
{"const_iterator begin() const noexcept; \n iterator begin() noexcept; \n Return iterator to beginning \n Returns an iterator pointing to the first character of the string.",
}
},
{ {"END IN STRING","WHAT IS END IN STRING","WHAT IS THE PURPOSE OF END IN STRING","HOW TO USE END IN STRING","HOW TO USE END IN STRING"},
{"iterator end() noexcept; \n const_iterator end() const noexcept; \n Return iterator to end \n Returns an iterator pointing to the past-the-end character of the string.",
}
},
{ {"RBEGIN IN STRING","WHAT IS RBEGIN IN STRING","WHAT IS THE PURPOSE OF RBEGIN IN STRING","HOW TO USE RBEGIN IN STRING","HOW TO USE RBEGIN I STRING"},
{"reverse_iterator rbegin() noexcept; \n const_reverse_iterator rbegin() const noexcept; \n Return reverse iterator to reverse beginning \n Returns a reverse iterator pointing to the last character of the string (i.e., its reverse beginning)." ,
}
},
{ {"REND IN STRING","WHAT IS REND IN STRING","WHAT IS THE PURPOSE OF REND IN STRING","HOW TO USE REND IN STRING","USES OF REND IN STRING"},
{"reverse_iterator rend() noexcept; \n const_reverse_iterator rend() const noexcept; \n Return reverse iterator to reverse end \n Returns a reverse iterator pointing to the theoretical element preceding the first character of the string (which is considered its reverse end).",
}
},
{ {"CBEGIN","WHAT IS CBEGIN","WHAT IS THE PURPOSE OF CBEGIN","HOW TO USE CBEGIN","EXPLAIN CBEGIN"},
{"const_iterator cbegin() const noexcept; \n Return const_iterator to beginning \n Returns a const_iterator pointing to the first character of the string.",
}
},
{ {"CEND","WHAT IS THE PURPOSE OF CEND","HOW TO USE CEND","WHAT IS CEND","WHAT IS CEND IN STRINGS"},
{"const_iterator cend() const noexcept; \n Return const_iterator to end \n Returns a const_iterator pointing to the past-the-end character of the string.",
}
},
{ {"CRBEGIN IN STRING","WHAT IS CRBEGIN IN STRING","WHAT IS THE PURPOSE OF CRBEGIN IN STRING","HOW TO USE CRBEGIN IN STRING","WHAT IS CRBEGIN IN STRINGS"},
{"const_reverse_iterator crbegin() const noexcept; \n Return const_reverse_iterator to reverse beginning \n Returns a const_reverse_iterator pointing to the last character of the string (i.e., its reverse beginning).",
}
},
{ {"CREND IN STRING","WHAT IS CREND IN STRING","WHAT IS THE PURPOSE OF CREND IN STRING","HOW TO USE CREND IN STRING","WHAT IS CREND IN STRINGS"},
{"const_reverse_iterator crend() const noexcept; \n Return const_reverse_iterator to reverse end \n Returns a const_reverse_iterator pointing to the theoretical character preceding the first character of the string (which is considered its reverse end).",
}
},
{ {"SIZE IN STRING","SIZE OF STRING","WHAT IS SIZE IN STRING","SIZE() IN STRING","WHAT IS SIZE IN STRINGS"},
{"size_t size() const noexcept; \n Return length of string \n Returns the length of the string, in terms of bytes. \n This is the number of actual bytes that conform the contents of the string, which is not necessarily equal to its storage capacity.",
}
},
{ {"LENGTH","LENGTH OF STRING","WHAT IS LENGTH IN STRINGS","WHAT IS LENGTH IN STRING","LENGTH()"},
{"size_t length() const noexcept; \n Return length of string \n Returns the length of the string, in terms of bytes. \n This is the number of actual bytes that conform the contents of the string, which is not necessarily equal to its storage capacity.",
}
},
{ {"MAX SIZE IN STRING","WHAT IS MAXIMUM SIZE IN STRINGS","MAX_SIZE IN STRINGS","MAX SIZE IN STRINGS","MAX_SIZE() IN STRING"
},
{"size_t max_size() const noexcept; \n Return maximum size of string \n Returns the maximum length the string can reach.",
}
},
{ {"RESIZE IN STRING","WHAT IS RESIZE IN STRINGS","WHAT IS RESIZE IN STRING","WHAT IS RESIZE IN STRING","REIZE() IN STRING"},
{"void resize (size_t n); \n void resize (size_t n, char c); \n Resize string \n Resizes the string to a length of n characters. \n If n is smaller than the current string length, the current value is shortened to its first n character, removing the characters beyond the nth.",
}
},
{ {"CAPACITY IN STRING","CAPACITY IN STRINGS","WHAT IS CAPACITY IN STRINGS","WHAT IS CAPACITY IN STRING","CAPACITY()"},
{"size_t capacity() const noexcept; \n Return size of allocated storage \n Returns the size of the storage space currently allocated for the string, expressed in terms of bytes. \n This capacity is not necessarily equal to the string length. It can be equal or greater, with the extra space allowing the object to optimize its operations when new characters are added to the string.",
}
},
{ {"RESERVE IN STRING","WHAT IS RESERVE IN STRING","WHAT IS RESERVE IN STRING","WHAT IS RESERVE IN STRINGS","RESERVE()IN STRING"},
{"void reserve (size_t n = 0); \n Request a change in capacity \n Requests that the string capacity be adapted to a planned change in size to a length of up to n characters. \n If n is greater than the current string capacity, the function causes the container to increase its capacity to n characters (or greater).",
}
},
{ {"CLEAR IN STRINGS","WHAT IS CLEAR IN STRINGS","WHAT IS CLEAR()","WHAT IS CLEAR IN STRING","CLEAR()"},
{"void clear() noexcept; \n Clear string \n Erases the contents of the string, which becomes an empty string(with a length of 0 characters).",
}
},
{ {"EMPTY","WHAT IS EMPTY IN STRINGS","WHAT IS EMPTY","WHAT IS THE PURPOSE OF EMPTY","EMPTY()"},
{"bool empty() const noexcept; \n Test if string is empty \n Returns whether the string is empty (i.e. whether its length is 0). \n This function does not modify the value of the string in any way.",
}
},
{ {"SHRINK_TO_FIT","WHAT IS PURPOSE OF SHRINK TO FIT","WHAT IS SHRINK TO FIT","WHAT IS SHRINK TO FIT IN STRINGS","WHAT IS SHRINK_TO_FIT IN STRINGS"},
{"void shrink_to_fit(); \n Shrink to fit \n Requests the string to reduce its capacity to fit its size. \n The request is non-binding, and the container implementation is free to optimize otherwise and leave the string with a capacity greater than its size.",
}
},
{ {"OPERATOR[]","WHAT IS OPERATOR[] IN STRINGS","WHAT IS []","WHAT IS PURPOSE OF []","[]"
},
{"char& operator[] (size_t pos); \n const char& operator[] (size_t pos) const; \n Get character of string \n Returns a reference to the character at position pos in the string.",
}
},
{ {"AT IN STRINGS","WHAT IS AT","WHAT IS AT IN STRINGS","WHAT IS THE PURPOSE OF AT","HOW TO USE AT"},
{"char& at (size_t pos); \n const char& at (size_t pos) const; \n Get character in string \n Returns a reference to the character at position pos in the string.",
}
},
{ {"BACK IN STRING","WHAT IS BACK IN STRING","WHAT IS BACK IN STRINGS","WHAT IS THE PURPOSE OF BACK IN STRINGS","WHAT IS THE PURPOSE OF BACK IN STRING"},
{" char& back(); \n const char& back() const; \n Access last character \n Returns a reference to the last character of the string. \n This function shall not be called on empty strings.",
}
},
{ {"FRONT IN STRING","WHAT IS THE PURPOSE OF FRONT IN STRING","HOW TO USE FRONT IN STRING","WHAT IS FRONT IN STRINGS","WHAT IS THE PURPOSE OF FRONT IN STRINGS"},
{" char& front(); \n const char& front() const; \n Access first character \n Returns a reference to the first character of the string.",
}
},
{ {"OPERATOR+=","WHAT IS OPERATOR+= IN STRINGS","WHAT IS += IN STRINGS","WHAT IS +=","WHAT IS OPERATOR+="},
{"string& operator+= (const string& str);\n Append to string \n Extends the string by appending additional characters at the end of its current value A string object, whose value is copied at the end.",
}
},
{ {"APPEND","WHAT IS APPEND","WHAT IS THE PURPOSE OF APPEND","WHAT IS APPEND IN STRINGS","HOW TO USE APPEND IN STRINGS"},
{"string& append (const string& str); \n Append to string \n Extends the string by appending additional characters at the end of its current value",
}
},
{ {"PUSH BACK IN STRING","PUSH BACK IN STRINGS","PUSH_BACK IN STRING","PUSH_BACK()IN STRING","PUSH BACK IN STRING"},
{"void push_back (char c); \n Append character to string \n Appends character c to the end of the string, increasing its length by one.",
}
},
{ {"ASSIGN IN STRINGS","WHAT IS ASSIGN IN STRINGS","WHAT IS PURPOSE OF ASSIGN IN STRINGS","HOW TO USE ASSIGN IN STRINGS","WHAT IS ASSIGN IN STRINGS"},
{"string& assign (const string& str); \n Assign content to string \n Assigns a new value to the string, replacing its current contents.",
}
},
{ {"INSERT IN STRING","WHAT IS INSERT IN STRING","WHAT IS THE PURPOSE OF INSERT IN STRING","HOW TO USE INSERT IN STRING","WHAT IS INSERT IN STRINGS"},
{"string& insert (size_t pos, const string& str); \n Insert into string \n Inserts additional characters into the string right before the character indicated by pos (or p).",
}
},
{ {"ERASE","WHAT IS ERASE","WHAT IS ERASE IN STRINGS","WHAT IS PURPOSE OF ERASE","HOW TO USE ERASE"},
{"string& erase (size_t pos = 0, size_t len = npos); \n Erase characters from string \n Erases part of the string, reducing its length",
}
},
{ {"REPLACE","WHAT IS REPLACE","WHAT IS THE PURPOSE OF REPLACE","HOW TO USE REPLACE","WHAT IS REPLACE IN STRINGS"},
{"string& replace (size_t pos, size_t len, const string& str); \n Replace portion of string \n Replaces the portion of the string that begins at character pos and spans len characters (or the part of the string in the range between [i1,i2)) by new contents",
}
},
{ {"SWAP IN STRING","WHAT IS SWAP IN STRING","WHAT IS SWAP IN STRINGS","WHAT IS THE PURPOSE OF SWAP IN STRING","HOW TO USE SWAP IN STRING"},
{"void swap (string& str); \n Swap string values \n Exchanges the content of the container by the content of str, which is another string object. Lengths may differ. \n After the call to this member function, the value of this object is the value str had before the call, and the value of str is the value this object had before the call.",
}
},
{ {"POP BACK IN STRING","WHAT IS POP BACK IN STRINGS","WHAT IS POP_BACK() IN STRING","POP_BACK() IN STRING","POP_BACK IN STRING"},
{"void pop_back(); \n Delete last character \n Erases the last character of the string, effectively reducing its length by one.",
}
},
{ {"C STR","C_STR","WHAT IS C STR IN STRINGS","C TYPE STRING","C_STR()"},
{"const char* c_str() const noexcept; \n Get C string equivalent \n Returns a pointer to an array that contains a null-terminated sequence of characters (i.e., a C-string) representing the current value of the string object. \n This array includes the same sequence of characters that make up the value of the string object plus an additional terminating null-character ('\0') at the end.",
}
},
{ {"DATAIN STRINGS","WHAT IS DATA IN STRINGS","WHAT IS THE PURPOSE OF DATA IN STRINGS","WHAT IS DATA","DATA()"
},
{"const char* data() const noexcept; \n Get string data \n Returns a pointer to an array that contains a null-terminated sequence of characters (i.e., a C-string) representing the current value of the string object.",
}
},
{ {"GET ALLOCATOR IN STRING","GET_ALLOCATOR IN STRING","GET_ALLOCATOR() IN STRING","WHAT IS GET_ALLOCATOR() IN STRINGS","WHAT IS GET ALLOCATOR IN STRINGS"},
{"allocator_type get_allocator() const noexcept; \n Get allocator \n Returns a copy of the allocator object associated with the string.",
}
},
{ {"COPY","WHAT IS COPY","WHAT IS COPY IN STRINGS","HOW TO USE COPY","WHAT IS THE PURPOSE OF COPY"},
{"size_t copy (char* s, size_t len, size_t pos = 0) const; \n Copy sequence of characters from string \n Copies a substring of the current value of the string object into the array pointed by s. This substring contains the len characters that start at position pos.",
}
},
{ {"FIND","WHAT IS FIND","WHAT IS THE PURPOSE OF FIND","HOW TO USE FIND","WHAT IS FIND IN STRINGS"},
{"size_t find (const string& str, size_t pos = 0) const noexcept; \n Find content in string \n Searches the string for the first occurrence of the sequence specified by its arguments. \n When pos is specified, the search only includes characters at or after position pos, ignoring any possible occurrences that include characters before pos.",
}
},
{ {"RFIND","WHAT IS RFIND","WHAT IS RFIND IN STINGS","WHAT IS THE PURPOSE OF RFIND","HOW TO USE RFING"},
{"size_t rfind (const string& str, size_t pos = npos) const noexcept; \n Find last occurrence of content in string \n Searches the string for the last occurrence of the sequence specified by its arguments. \n When pos is specified, the search only includes sequences of characters that begin at or before position pos, ignoring any possible match beginning after pos.",
}
},
{ {"FIND_FIRST_OF","WHAT IS FIND_FIRST_OF","WHAT IS THE PURPOSE OF FIND_FIRST_OF","FIND FIRST OF IN STRINGS","FIND FIRST OF"},
{"size_t find_first_of (const string& str, size_t pos = 0) const noexcept; \n Find character in string \n Searches the string for the first character that matches any of the characters specified in its arguments. \n When pos is specified, the search only includes characters at or after position pos, ignoring any possible occurrences before pos.",
}
},
{ {"FIND_LAST_OF","FIND LAST OF","FIND LAST OF IN STRINGS","WHAT IS FIND_LAST_OF","WHAT IS THE PURPOSE OF FIND_LAST_OF()"},
{"size_t find_last_of (const string& str, size_t pos = npos) const noexcept; \n Find character in string from the end \n Searches the string for the last character that matches any of the characters specified in its arguments. \n When pos is specified, the search only includes characters at or before position pos, ignoring any possible occurrences after pos.",
}
},
{ {"FIND FIRST NOT OF","FIND_FIRST_NOT_OF()","FIND FIRST NOT OF IN STRINGS","FIND_FIRST_NOT_OF","FIND FIRST NOT OF IN STRINGS"},
{"size_t find_first_not_of (const string& str, size_t pos = 0) const noexcept; \n Find absence of character in string \n Searches the string for the first character that does not match any of the characters specified in its arguments. \n When pos is specified, the search only includes characters at or after position pos, ignoring any possible occurrences before that character.",
}
},
{ {"FIND LAST NOT OF","FIND LAST NOT OF IN STRINGS","FIND_LAST_NOT_OF()","FIND_LAST_NOT_OF","WHAT IS FIND_LAST_NOT_OF"},
{"size_t find_last_not_of (const string& str, size_t pos = npos) const noexcept; \n Find non-matching character in string from the end \n Searches the string for the last character that does not match any of the characters specified in its arguments. \n When pos is specified, the search only includes characters at or before position pos, ignoring any possible occurrences after pos.",
}
},
{ {"SUBSTR","WHAT IS SUBSTR","WHAT IS THE PORPOSE OF SUBSTR()","WHAT IS SUBSTR IN STRINGS","SUBSTR()"},
{"string substr (size_t pos = 0, size_t len = npos) const; \n Generate substring \n Returns a newly constructed string object with its value initialized to a copy of a substring of this object.\n The substring is the portion of the object that starts at character position pos and spans len characters (or until the end of the string, whichever comes first).",
}
},
{ {"COMPARE","WHAT IS COMPARE IN STRINGS","WHAT IS COMAPRE","WHAT IS PURPOSE OF COMAPRE","HOW TO USE COMPARE"},
{"int compare (const string& str) const noexcept; \n Compare strings \n Compares the value of the string object (or a substring) to the sequence of characters specified by its arguments. \n The compared string is the value of the string object or -if the signature used has a pos and a len parameters- the substring that begins at its character in position pos and spans len characters.",
}
},
{ {"NPOS","WHAT IS NPOS","WHAT IS NPOS IN STRINGS","WHAT IS THE PURPOSE OF NPOS","HOW TO USE NPOS"},
{"static const size_t npos = -1; \n Maximum value for size_t \n npos is a static member constant value with the greatest possible value for an element of type size_t. \n This value, when used as the value for a len (or sublen) parameter in string's member functions, means (until the end of the string).",
}
},
{ {"OPERATOR+","+ IN STRING","WHAT IS + IN STRINGS","ADDITIONAL OPERATOR IN STRINGS","WHAT IS OPERATOR+"},
{"string operator+ (const string& lhs, const string& rhs); \n Concatenate strings \n Returns a newly constructed string object with its value being the concatenation of the characters in lhs followed by those of rhs. \n In the signatures taking at least one rvalue reference as argument, the returned object is move-constructed by passing this argument, which is left in an unspecified but valid state. If both arguments are rvalue references, only one of them is moved (it is unspecified which), with the other one preserving its value.",
}
},
{ {"RELATIONAL OPERATORS IN STRING","== IN STRING","!= IN STRING","< IN STRING",">IN STRING"},
{"bool operator== (const string& lhs, const string& rhs); \n bool operator!= (const string& lhs, const string& rhs); \n bool operator<  (const string& lhs, const string& rhs); \n bool operator<= (const string& lhs, const string& rhs); \n bool operator>  (const string& lhs, const string& rhs); \n bool operator>= (const string& lhs, const string& rhs); \n Relational operators for string \n Performs the appropriate comparison operation between the string objects lhs and rhs.",
}
},
{ {"GETLINE IN STRING","GETLINE FOR STRING","WHAT IS GETLINE IN STRINGS","WHAT IS THE PURPOSE OF GETLINE IN STRINGS","WHAT IS GETLINE() IN STRINGS"},
{"istream & getline(istream & is, string & str, char delim); \n istream& getline(istream& is, string& str); \n Get line from stream into string \n Extracts characters from isand stores them into str until the delimitation character delim is found(or the newline character, '\ n', for (2)). \n The extraction also stops if the end of file is reached in is or if some other error occurs during the input operation.",
}
},
//END OF STRING
//START OF FSTREAM
{ {"FSTREAM","WHAT IS FSTREAM","HOW TO USE FSTREAM", "WHAT IS THE PURPOSE OF FSTREAM","FSTREAM CLASS"},
{"Input/output stream class to operate on files. \n Objects of this class maintain a filebuf object as their internal stream buffer, which performs input/output operations on the file they are associated with (if any).\n File streams are associated with files either on construction, or by calling member open.",
}
},
{ {"FORMAT FLAGS","WHAT ARE FORAMT FLAGS","WHAT IS THE PURPOSE OF FORMATE FLAGS IN FTREAM","HOW TO USE FORMATE FLAGS","WHAT ARE FORMATE FLAGS IN FSTREAM"},
{"A set of internal flags that affect how certain input/output operations are interpreted or generated.",
}
},
{ {"FLAGS","WHAT ARE FLAGS","HOW TO USE FLAGS","WHAT IS THE PURPOSE OF FSTREAM"},
{"Get/set format flags \n The first form (1) returns the format flags currently selected in the stream.\n The second form (2) sets new format flags for the stream, returning its former value. \n The format flags of a stream affect the way data is interpreted in certain input functions and how these are written by certain output functions. Syntax:\n fmtflags flags() const; \n fmtflags flags (fmtflags fmtfl); \n",
}
},
{ {"SETF","WHAT IS SETF","SETF()","WHAT IS THE PURPOSE OF SETF","WHAT IS SETF IN FSTREAM"},
{"Syntax:\n  fmtflags setf (fmtflags fmtfl); \n fmtflags setf (fmtflags fmtfl, fmtflags mask); \n Set specific format flags \n The first form (1) sets the stream's format flags whose bits are set in fmtfl, leaving unchanged the rest, as if a call to flags(fmtfl|flags()).\n The second form (2) sets the stream's format flags whose bits are set in both fmtfl and mask, and clears the format flags whose bits are set in mask but not in fmtfl, as if a call to flags((fmtfl&mask)|(flags()&~mask)). \n Both return the value of the stream's format flags before the call.",
}
},
{ {"UNSETF","WHAT IS UNSETF","UNSETF()","WHAT IS THEPURPOSE OF UNSETF","WHAT IS UNSETF IN FSTREAM"},
{"Syntax: \n void unsetf (fmtflags mask); \n Clear specific format flags \n Clears the format flags selected in mask. \n The parameterized manipulator resetiosflags behaves in a similar way as this member function.",
}
},
{ {"FIELD WIDTH","WHAT IS FIELD WIDTH","WHAT IS THE PURPOSE OF FIELD WIDTH","WHAT IS FIELD WIDTH IN FSTREAM","FIELD WIDTH"},
{"Width of the next formatted element to insert.",
}
},
{ {"WIDTH","WHAT IS WIDTH","WHAT IS THE PURPOSE OF WIDTH","WIDTH()","WHAT IS WIDTH IN FSTREAM"},
{"Syntax: \n streamsize width() const; \n streamsize width (streamsize wide); \n Get/set field width \n The first form (1) returns the current value of the field width. \n The second form (2) also sets a new field width for the stream.",
}
},
{ {"DISPLAY PRECISION","WHAT IS DISPLAY PRECISION","WHAT IS THE PURPOSE OF DISPLAY PRECISION","WHAT IS DISPLAY PRECISION IN FSTREAM","DISPLAY PRECISION"},
{ "Decimal precision for the next floating-point value inserted.",
}
},
{ {"PRECISION","PRECISION()","WHAT IS THE PURPOSE OF PRECISION","WHAT IS PRECISION","WHAT IS PRECISION IN FSTREAM"},
{"Syntax: \n streamsize precision() const; \n streamsize precision (streamsize prec); \n Get/Set floating-point decimal precision \n The first form (1) returns the value of the current floating-point precision field for the stream. \n The second form (2) also sets it to a new value.",
}
},
{ {"LOCALE","WHAT IS LOCALE","HOW TO USE LOCALE","WHAT IS PURPOSE OF LOCALE","WHAT IS LOCALE IN FSTREAM"},
{"The locale object used by the function for formatted input/output operations affected by localization properties.",
}
},
{ {"GETLOC","GETLOC()","WHAT IS GETLOC IN FSTREAM","WHAT IS PURPOSE OF GETLOC","WHAT IS GETLOC()"},
{"Syntax: \n locale getloc() const; \n Get current locale \n Returns the locale object currently associated with the stream.",
}
},
{ {"IMBUE","WHAT IS IMBUE","WHAT IS PURPOSE OF IMBUE","HOW TO USE IMBUE","WHAT IS IMBUE IN FSTREAM"},
{"Syntax: \n locale imbue (const locale& loc); \n Imbue locale \n Associates loc to the stream as the new locale object to be used with locale-sensitive operations. \n Before that, the function calls all functions registered through member register_callback with imbue_event as first argument. \n Standard stream classes do not inherit this member, but inherit basic_ios::imbue instead, which calls this function, but also imbues the locale to the associated stream buffer, if any.",
}
},
{ {"FILL CHARACTER","WHAT IS FILL CHARACTER","WHAT IS THE PURPOSE OF FILL CHARACTER","HOW TO USE FILL CHARACTER","WHAT IS FILLCHARACTER IN FSTREAM"},
{"Character to pad a formatted field up to the field width (width).",
}
},
{ {"FILL","WHAT IS FILL IN FSTREAM","HOW TO USE FILL","WHAT IS PURPOSE OF FILL","FILL()"},
{"Syntax: \n char fill() const; \n char fill (char fillch); \n Get/set fill character \n It returns the fill character also sets fillch as the new fill character and returns the fill character used before the call. \n The fill character is the character used by output insertion functions to fill spaces when padding results to the field width \n The parametric manipulator setfill can also be used to set the fill character.",
}
},
{ {"ERROR STATE","WHAT IS ERROR STATE","WHAT IS THE PURPOSE OF ERROR STATE","HOW TO USE ERROR STATE","WHAT IS ERROR STATE IN FSTREAM"},
{"The current error state of the stream. \n Individual values may be obtained by calling good, eof, fail and bad.",
}
},
{ {"RDSTATE","WHAT IS RDSTATE IN FSTREAM","WHAT IS THE PURPOSE OF RDSTATE","HOW TO USE RDSTATE","RDSTATE()"},
{"Syntax: \n iostate rdstate() const; \n Get error state flags \n Returns the current internal error state flags of the stream. \n The internal error state flags are automatically set by calls to input/output functions on the stream to signal certain errors.",
}
},
{ {"SETSTATE","WHAT IS SETSTATE IN FSTREAM","WHAT IS PURPOSE OF SETSTATE","SET STATE","SETSTATE()"},
{"Syntax: \n void setstate (iostate state); \n Set error state flag \n Modifies the current internal error state flags by combining the current flags with those in argument state (as if performing a bitwise OR operation).",
}
},
{ {"CLEAR IN FSTREAM","WHAT IS CLEAR IN FSTREAM","WHAT IS PURPOSE OF CLEAR","HOW TO USE CLEAR","CLEAR()"},
{"Syntax: \n void clear (iostate state = goodbit); \n Set error state flags \n Sets a new value for the stream's internal error state flags. \n The current value of the flags is overwritten: All bits are replaced by those in state; If state is goodbit (which is zero) all error flags are cleared.",
}
},
{ {"EXCEPTION MARK","WHAT IS EXCEPTION MARK","WHAT IS PURPOSE OF EXCEPTION MARK","HOW TO USE EXCEPTION","WHAT IS EXCEPTION MARK IN FSTREAM"},
{"The state flags for which a failure exception is thrown.",
}
},
{ {"EXCEPTIONS","EXCEPTION","WHAT ARE EXCEPTIONS IN FSTREAM","WHAT IS EXCEPTION IN FSTREAM","EXCEPTIONS()"},
{"Syntax:  \n iostate exceptions() const; \n void exceptions (iostate except); \n Get/set exceptions mask \n The first form (1) returns the current exception mask for the stream. \n The second form (2) sets a new exception mask for the stream and clears the stream's error state flags (as if member clear() was called). \n The exception mask is an internal value kept by all stream objects specifying for which state flags an exception of member type failure (or some derived type) is thrown when set. This mask is an object of member type iostate, which is a value formed by any combination of the following member constants",
}
},
{ {"CALLBACK STACK","WHAT IS CALLBACK STACK","WHAT IS THE PURPOSE OF CALLBACK STACK","HOW TO USE CALLBACK STACK","WHAT IS CALLBACK STACK IN FSTREAM"},
{"Stack of pointers to functions that are called when certain events occur.",
}
},
{ {"REGISTER CALLBACK","WHAT IS REGISTER CALLBACK IN FSTREAM","WHAT IS THE PURPOSE OF REGISTER_CALLBACK","REGISTER_CALLBACK","REGISTER_CALLBACK()"},
{"Syntax: \n void register_callback (event_callback fn, int index); \n Register event callback function \n Registers fn as a callback function to be called automatically with index as argument when a stream event occurs. \n If more than one callback function is registered, they are all called, in the inverse order of registration. \n The callback function shall be of a type convertible to event_callback. And it is called by an expression equivalent to: \n (*fn)(ev,stream,index)",
}
},
{ {"EXTENSIBLE ARRAYS","WHAT IS EXTENSIBLE ARRAY","WHAT IS PURPOSE OF EXTENSIBLE ARRAY","HOW TO USE EXTENSIBLE ARRAY","WHAT IS EXTENSIBLE ARRAY IN FSTREAM"},
{"Internal arrays to store objects of type long and void*.",
}
},
{ {"IWORD","WHAT IS IWORD IN FSTREAM","WHAT IS THE PURPOSE OF IWORD","HOW TO USE IWORD","IWORD()"
},
{"Syntax:  \n long& iword (int idx); \n Get integer element of extensible array \n Returns a reference to the object of type long which corresponds to index idx in the internal extensible array. \n If idx is an index to a new element and the internal extensible array is not long enough (or is not yet allocated), the function extends it (or allocates it) with as many zero-initialized elements as necessary.",
}
},
{ {"PWORD","WHAT IS PWORD IN FSTREAM","WHAT IS PURPOSE OF PWORD","HOW TO USE PWORD","WHAT IS PWORD"},
{"Syntax: \n void*& pword (int idx); \n Get pointer element of extensible array \n Returns a reference to the object of type void* which corresponds to index idx in the internal extensible array. \n If idx is an index to a new element and the internal extensible array is not long enough (or is not yet allocated), the function extends it (or allocates it) with as many elements initialized to null pointers as necessary.",
}
},
{ {"XALLOC","WHAT IS XALOC","WHAT IS THE PURPOSE OF XALLOC","XALLOC()","WHAT IS XLLOC IN FSTREAM"
},
{"Syntax: \n static int xalloc(); \n Get new index for extensible array [static] \n Returns a new index value to be used with member functions in the internal extensible array. \n The internal extensible array is a general-purpose array of objects of type long (if accessed with member iword) or void* (if accessed with member pword). \n This is a static member function.",
}
},
{ {"TIED STREAM","WHAT IS TIED STREAM","WHAT IS THE PURPOSE OF TIED STREAM","HOW TO USE TIED STREAM","WHAT IS THE PURPOSE OF TIED STREAM IN FSTREAM"
},
{"Pointer to output stream that is flushed before each i/o operation on this stream.",
}
},
{ {"TIE","WHAT IS TIE","WHAT IS THE PURPOSE OF TIE","TIE()","WHAT IS TIE IN FSTREAM"
},
{"Syntax: \n get (1) ostream* tie() const; \n set (2) ostream* tie (ostream* tiestr); \n Get/set tied stream \n The first form (1) returns a pointer to the tied output stream. \n The second form (2) ties the object to tiestr and returns a pointer to the stream tied before the call, if any. \n The tied stream is an output stream object which is flushed before each i/o operation in this stream object.",
}
},
{ {"STREAM BUFFER","WHAT IS STREAM BUFFER","WHAT IS THE PURPOSE OF STREAM BUFFER","HOW TO USE STREAM BUFFER","WHAT IS BUFFER IN FSTREAM"
},
{"Pointer to the associated streambuf object, which is charge of all input/output operations.",
}
},
{ {"RDBUF","WHAT IS RDBUF IN FSTREAM","WHAT IS THE PURPOSE OF RDBUF","RDBUF()","WHAT IS RDBUF"
},
{"Syntax: \n streambuf* rdbuf() const; \n streambuf* rdbuf (streambuf* sb); \n Get/set stream buffer \n The first form (1) returns a pointer to the stream buffer object currently associated with the stream. \n The second form (2) also sets the object pointed by sb as the stream buffer associated with the stream and clears the error state flags.",
}
},
{ {"CHARACTER COUNT","WHAT IS CHARACTER COUNT","WHAT IS PURPOSE OF CHARACTER COUNT","HOW TO USE CHARACTER COUNT"
},
{"Count of characters read by last unformatted input operation.",
}
},
{ {"GCOUNT","WHAT IS GCOUNT()","WHAT IS PURPOSE OF GCOUNT","GCOUNT()","WHAT IS GCOUNT IN FSTREAM"
},
{"Syntax: \n streamsize gcount() const; \n Get character count \n Returns the number of characters extracted by the last unformatted input operation performed on the object. \n The unformatted input operations that modify the value returned by this function are: get, getline, ignore, peek, read, readsome, putback and unget.",
}
},
{ {"STREAMPOS","WHAT IS STREAMPOS","WHAT IS PURPOSE OF STREAMPOS","HOW TO USE STREAMPOS","WHAT IS STREAMPOS IN FSTREAM"
},
{"Syntax: \n typedef fpos<mbstate_t> streampos; \n Stream position type \n Instantiation of fpos used to represent positions in narrow-oriented streams.",
}
},
{ {"STREAMOFF","WHAT IS STREAMOFF","WHAT IS PURPOSE OF STREAMOFF","HOW TO USE STREAMOFF","WHAT IS STREAMOFF IN FSTREAM"
},
{"Stream offset type \n Type to represent position offsets in a stream. \n It is the type returned by subtracting two stream position of an fpos type, and can be converted to and from this type.",
}
},
{ {"EVENT","WHAT IS EVENT","WHAT IS PURPOSE OF EVENT","HOW TO USE VENT","WHAT IS EVENT IN FSTREAM"
},
{"Syntax: \n enum event; \n Type to indicate event type \n Enum type used as the first parameter in functions registered with ios_base::register_callback. This argument identifies the type of event that triggered the function call.",
}
},
{ {"EVENT CALLBACK","WHAT IS EVENT_CALLBACK()","EVENT_CALLBACK","EVENT_CALLBACK()","WHAT IS EVENT CALLBACK IN FSTREAM"
},
{"Event callback function type \n Type for callback functions registered with member register_callback. \n It is defined as a member type of ios_base as: \n typedef void (*event_callback) (event ev, ios_base& obj, int index);",
}
},
{ {"FAILURE","WHAT IS FAILURE","WHAT IS PURPOSE OF FAILURE","FAILURE CLASS","WHAT IS FAILURE IN FSTREAM"
},
{"Syntax: \n class failure; \n Base class for stream exceptions \n This embedded class inherits from exception and serves as the base class for the exceptions thrown by the elements of the standard input/output library.",
}
},
{ {"FMTFLAGS","WHAT ARE FMTFLAGS","WHAT IS THE PURPOSE OF FMTFLAGS","HOW TO USE FMTFLAGS","WHAT ARE FMTFLAGS IN FSTREAM"
},
{"Type for stream format flags \n Bitmask type to represent stream format flags. \n This type is used as its parameter and/or return value by the member functions flags, setf and unsetf.",
}
},
{ {"INIT","WHAT IS PURPOSE OF INIT","WHAT IS INIT","HOW TO USE INIT","WHAT IS INIT IN FSTTEAM"
},
{"Syntax: \n class Init; \n Initialize standard stream objects \n The construction of an object of this member type, ensures that the standard stream objects (cin, cout, cerr, clog, wcin, wcout, wcerr and wclog) are constructed and properly initialized.",
}
},
{ {"IOSTATE","WHAT IS THE PURPOSE OF IOSTATE","HOW TO USE IOSTATE","WHAT IS IOSTATE","WHAT IS IOSTATE IN FSTREAM"
},
{"Type for stream state flags \n Bitmask type to represent stream error state flags. \n All stream objects keep information on the state of the object internally. This information can be retrieved as an element of this type by calling member function basic_ios::rdstate or set by calling basic_ios::setstate.",
}
},
{ {"OPENMODE","WHAT IS OPENMODE","WHAT IS PURPOSE OF OPENMODE","OPEN MODE","WHAT IS OPENMODE IN FSTREAM"
},
{"Type for stream opening mode flags \n Bitmask type to represent stream opening mode flags.",
}
},
{ {"SEEKDIR","WHAT IS SEEKDIR","WHAT IS PURPOSE OF SEEKDIR","HOW TO USE SEEKDIR","WHAT IS SEEKDIR IN FSTREAM"
},
{"Type for stream seeking direction flag \n Enumerated type to represent the seeking direction of a stream seeking operation",
}
},
{ {"SENTRY","WHAT IS SENTRY","WHAT IS PURPOSE OF SENTRY","HOW YO USE SENTRY","WHAT IS SENTRY IN FSTREAM"
},
{"Syntax: \n class sentry; \n Prepare stream for input and output \n Member class that performs a series of operations before and after each input and output operations.",
}
},
{ {"OPEN","WHAT IS OPEN() IN FSTREAM","WHAT IS PURPOSE OF OPEN","OPEN()","WHAT IS OPEN IN FSTREAM"
},
{"Syntax: \n void open (const char* filename, \n ios_base::openmode mode = ios_base::in | ios_base::out); \n Open file \n Opens the file identified by argument filename, associating it with the stream object, so that input/output operations are performed on its content. Argument mode specifies the opening mode.",
}
},
{ {"IS OPEN","IS_OPEN","WHAT IS IS_OPEN() IN FSTREAM","WHAT IS IS OPEN IN FSTREAM","IS_OPEN()"
},
{"Syntax: \n bool is_open() const; \n Check if a file is open \n Returns whether the stream is currently associated to a file.",
}
},
{ {"CLOSE","WHAT IS PURPOSE OF CLOSE","WHAT IS CLOSE","CLOSE()","WHAT IS CLSOE() IN FSTREAM"
},
{"Syntax: \n void close(); \n Close file \n Closes the file currently associated with the object, disassociating it from the stream.",
}
},
{ {"OPERATOR=","=","WHAT IS ASSIGNMENT OPERATOR IN FSTREAM","EQUALITY OPERATOR IN FSTREAM","WHAT IS = IN FSTREAM"
},
{"Syntax: \n fstream& operator= (const fstream&) = delete; \n fstream& operator= (fstream&& rhs); \n Move assignment \n Acquires the contents of rhs, by move-assigning its members and base classes.",
}
},
{ {"SWAP IN FSTREAM","WHAT IS SWAP IN FSTREAM","WHAT IS PURPOSE OF SWAP IN FSTREAM","HOW TO USE SWAP IN FSTREAM","WHAT IS SWAP IN FSTREAM"
},
{"Syntax: \n void swap (fstream& x); \n Swap internals \n Exchanges all internal data between x and *this.",
}
},
{ {"OPERATOR>>",">>","OPERATOR >>","INPUT OPERATORS IN FSTREAM","INPUT OPERATOR IN FSTREAM"
},
{"Extract formatted input \n This operator (>>) applied to an input stream is known as extraction operator",
}
},
{ {"GET","WHAT IS GET","WHAT IS THE PURPOSE OF GET","GET()","WHAT IS GET() IN FSTREAM"
},
{"Syntax: \n int get(); \n Get characters \n Extracts characters from the stream, as unformatted input: \n single character \n c-string \n stream buffer",
}
},
{ {"GETLINE IN FSTREAM","WHAT IS GETLINE() IN FSTREAM","WHAT IS THE PURPOSE OF GETLINE IN FSTREAM","GETLINE() IN FSTREAM","WHAT IS GETLINE() IN FSTREAM"
},
{"Syntax: \n istream& getline (char* s, streamsize n ); \n istream& getline (char* s, streamsize n, char delim ); \n Get line \n Extracts characters from the stream as unformatted input and stores them into s as a c-string, until either the extracted character is the delimiting character, or n characters have been written to s (including the terminating null character).",
}
},
{ {"IGNORE","WHAT IS IGNORE","WHAT IS PURPOSE OF IGNORE","HOW TO USE IGNORE","WHAT IS IGNORE IN FSTREAM"},
{"Syntax: \n istream & ignore(streamsize n = 1, int delim = EOF); \n Extractand discard characters \n Extracts characters from the input sequenceand discards them, until either n characters have been extracted, or one compares equal to delim.",
}
},
{ {"PEEK","PEEK()","WHAT IS PEEK()","WHAT IS PURPOSE OF PEEK","WHAT IS PEEK() IN FSTREAM"
},
{"Syntax: \n int peek(); \n Peek next character \n Returns the next character in the input sequence, without extracting it: The character is left as the next character to be extracted from the stream.",
}
},
{ {"READ","WHAT IS READ","WHAT IS PURPOSE OF READ","HOW TO USE READ","WHAT IS READ IN FSTREAM"
},
{"Syntax: \n istream& read (char* s, streamsize n); \n Read block of data \n Extracts n characters from the stream and stores them in the array pointed to by s. \n This function simply copies a block of data, without checking its contents nor appending a null character at the end.",
}
},
{ {"READSOME","WHAT IS PURPOSE OF REAMSOME","HOW TO USE READSOME","WHAT IS READSOME","WHAT IS READSOME IN FSTREAM"
},
{"Syntax: \n streamsize readsome (char* s, streamsize n); \n Read data available in buffer \n Extracts up to n characters from the stream and stores them in the array pointed by s, stopping as soon as the internal buffer kept by the associated stream buffer object (if any) runs out of characters, even if the end-of-file has not yet been reached.",
}
},
{ {"PUTBACK","WHAT IS PUTBACK()","WHAT IS PURPOSE OF PUTBACK","PUTBACK()","WHAT IS PUTBACK() IN FSTREAM"
},
{"Syntax: \n istream& putback (char c); \n Put character back \n Attempts to decrease the current location in the stream by one character, making the last character extracted from the stream once again available to be extracted by input operations.",
}
},
{ {"UNGET","WHAT IS UNGET()","WHAT IS THE PURPOSE OF UNGET","UNGET()","WHAT IS UNGET() IN FSTREAM"
},
{"Syntax: \n istream& unget(); \n Unget character \n Attempts to decrease the current location in the stream by one character, making the last character extracted from the stream once again available to be extracted by input operations.",
}
},
{ {"TELLG","WHAT IS TELLG()","WHAT IS THE PURPOSE OF TELLG","TELLG()","WHAT IS TELLG() IN FSTREAM"
},
{"Syntax: \n streampos tellg(); \n Get position in input sequence \n Returns the position of the current character in the input stream. \n Internally, the function accesses the input sequence by first constructing a sentry object (with noskipws set to true) without evaluating it. Then, if member fail returns true, the function returns -1. \n Otherwise, returns rdbuf()->pubseekoff(0,cur,in). Finally, it destroys the sentry object before returning.",
}
},
{ {"SEEKG","WHAT IS SEEKG","WHAT IS THE PURPOSE OF SEEKG","HOW TO USE SEEKG","WHAT IS SEEKG IN FSTREAM"
},
{"Syntax: \n istream& seekg (streampos pos); \n istream& seekg (streamoff off, ios_base::seekdir way); \n Set position in input sequence \n Sets the position of the next character to be extracted from the input stream. \n Internally, the function accesses the input sequence by first constructing a sentry object (with noskipws set to true). Then (if good), it calls either pubseekpos (1) or pubseekoff (2) on its associated stream buffer object (if any). Finally, it destroys the sentry object before returning.",
}
},
{ {"SYNC","WHAT IS SYNC()","WHAT IS THE PURPOSE OF SYNC","SYNC()","WHAT IS SYNC() IN FSTREAM"
},
{"Syntax: \n int sync(); \n Synchronize input buffer \n Synchronizes the associated stream buffer with its controlled input sequence. \n Specifics of the operation depend on the particular implementation of the stream buffer object associated to the stream.",
}
},
{ {"OPERATOR<<","<<","WHAT IS OPERATOR<< IN FSTREAM","OUTPUT OPERAOTOR IN FSTREAM","WHAT IS << IN FSTREAM"
},
{"Insert formatted output \n This operator (<<) applied to an output stream is known as insertion operator. It is overloaded as a member function for: \n arithmetic types \n stream buffers \n manipulators",
}
},
{ {"PUT","WHAT IS PUT()","WHAT IS THE PURPOSE OF PUT","PUT()","WHAT IS PUT() IN FSTREAM"
},
{"Syntax: \n ostream& put (char c); \n Put character \n Inserts character c into the stream. \n Internally, the function accesses the output sequence by first constructing a sentry object. Then (if good), it inserts c into its associated stream buffer object as if calling its member function sputc, and finally destroys the sentry object before returning.",
}
},
{ {"WRITE","WHAT IS WRITE","WHAT IS THE PURPOSE OF WRITE","HOW TO USE WRITE","WHAT IS WRITE IN FSTREAM"
},
{"Syntax: \n ostream& write (const char* s, streamsize n); \n Write block of data \n Inserts the first n characters of the array pointed by s into the stream. \n This function simply copies a block of data, without checking its contents: The array may contain null characters, which are also copied without stopping the copying process.",
}
},
{ {"TELLP","WHAT IS TELLP()","WHAT IS PURPOSE OF TELLP","TELLP()","WHAT IS TELLP() IN FSTREAM"
},
{"Syntax: \n streampos tellp(); \n Get position in output sequence \n Returns the position of the current character in the output stream.",
}
},
{ {"SEEKP","WHAT IS THE PURPOSE OF SEEKP","HOW TO USE SEEKP","WHAT IS SEEKP","WHAT IS SEEKP IN FSTREAM"
},
{"Syntax: \n ostream& seekp (streampos pos); \n ostream& seekp (streamoff off, ios_base::seekdir way); \n Set position in output sequence \n Sets the position where the next character is to be inserted into the output stream.",
}
},
{ {"FLUSH","WHAT IS FLUSH()","FLUSH()","WHAT IS THE PURPOSE OF FLUSH","WHAT IS FLUSH() IN FSTREAM"
},
{"Syntax: \n ostream& flush(); \n Flush output stream buffer \n Synchronizes the associated stream buffer with its controlled output sequence. \n For stream buffer objects that implement intermediate buffers, this function requests all characters to be written to the controlled sequence.",
}
},
{ {"GOOD","WHAT IS GOOD()","WHAT IS THE PURPOSE OF GOOD","GOOD()","WHAT IS GOOD() IN FSTREAM"
},
{"Syntax: \n bool good() const; \n Check whether state of stream is good \n Returns true if none of the stream's error state flags (eofbit, failbit and badbit) is set.",
}
},
{ {"BAD","WHAT IS BAD()","WHAT IS PTHE PURPOSE OF BAD","BAD()","WHAT IS BAD() IN FSTREAM"
},
{"Syntax: \n bool bad() const; \n Check whether badbit is set \n Returns true if the badbit error state flag is set for the stream. \n This flag is set by operations performed on the stream when an error occurs while read or writing data, generally causing the loss of integrity of the stream.",
}
},
{ {"EOF","WHAT IS EOF()","END OF FILE","EOF()","EOF IN FSTREAM"
},
{"Syntax: \n bool eof() const; \n Check whether eofbit is set \n Returns true if the eofbit error state flag is set for the stream. \n This flag is set by all standard input operations when the End-of-File is reached in the sequence associated with the stream.",
}
},
{ {"FAIL","WHAT IS FAIL()","WHAT IS THE PURPOSE OF FAIL","FAIL()","WHAT IS FAIL() IN FSTREAM"
},
{"Syntax: \n bool fail() const; \n Check whether either failbit or badbit is set \n Returns true if either (or both) the failbit or the badbit error state flags is set for the stream. \n At least one of these flags is set when an error occurs during an input operation. \n failbit is generally set by an operation when the error is related to the internal logic of the operation itself; further operations on the stream may be possible.",
}
},
{ {"OPERATOR!","!","WHAT IS OPERATOR! IN FSTREAM","WHAT IS ! IN FSTREAM","WHAT IS OPERATOR !"
},
{"Syntax: \n bool operator!() const; \n Evaluate stream (not) \n Returns true if either failbit or badbit is set, and false otherwise. \n This is equivalent to calling member fail.",
}
},
{ {"OPERATOR BOOL","WHAT IS OPERATOR BOOL()","WHAT IS THE PURPOSE OF OPEARTOR BOOL()","OPERATOR BOOL()","WHAT IS OPERATOR BOOL() IN FSTREAM"},
{"Syntax: \n explicit operator bool() const; \n Evaluate stream \n Returns whether an error flag is set (either failbit or badbit). \n Notice that this function does not return the same as member good, but the opposite of member fail.",
}
},
{ {"NARROW","WHAT IS NARROW","WHAT IS THE PURPOSE OF NARROW","HOW TO USE NARROW","WHAT IS NARROW IN FSTREAM"
},
{"Syntax: \n char narrow (char c, char dfault) const; \n Narrow character \n Returns the transformation of c to its equivalent using the ctype::narrow facet of the locale object currently imbued in the stream, if such an equivalence exists, or dfault otherwise.",
}
},
{ {"WIDEN","WHAT IS WIDEN","WHAT IS PURPOSE OF WIDEN","WIDEN()","WHAT IS WIDEN IN FSTREAM"
},
{"Syntax: \n char widen(char c) const; \n Widen character \n Returns the transformation of c to its equivalent using the ctype::widen facet of the locale object currently imbued in the stream.",
}
},
{ {"COPYFMT","WHAT IS PURPOSE OF COPYFMT","COPYFMT()","WHAT IS COPYFMT","WHAT IS COPYFMT IN FSTREAM"
},
{"Syntax: \n ios& copyfmt (const ios& rhs); \n Copy formatting information \n Copies the values of all the internal members of rhs (except the state flags and the associated stream buffer) to the corresponding members of *this.",
}
},
{ {"SYNC WITH STDIO","WHAT IS SYNC_WITH_STDIO","WHAT IS THE PURPOSE OF SYNC_WITH_STDIO","SYNC_WITH_STDIO()","WHAT IS SYNC_WITH_STDIO IN FSTREAM"
},
{"Syntax: \n bool sync_with_stdio (bool sync = true); \n Toggle synchronization with cstdio streams [static] \n Toggles on or off synchronization of all the iostream standard streams with their corresponding standard C streams if it is called before the program performs its first input or output operation. \n If called once an input or output operation has occurred, its effects are implementation-defined.",
}
},
//iostream and iomanip
{ {"IOSTREAM", "WHAT IS IOSTREAM ? ", "WHAT IS THE FUNCTION OF IOSTREAM ? ", "DEFINE IOSTREAM ? ", "WHAT DO YOU MEAN BY HEADER IOSTREAM ? " },
{
"It is the predefined library function used for input and output also called as header files.iostream is the header file which contains all the functions of program like cout, cin etc. and #include tells the preprocessor to include these header file in the program.include <iostream.h>"
}
},
{ {"OBJECTS OF IOSTREAM"," WHAT ARE LIBRARY DEFINED FUNCTIONS OF IOSTREAM"," WHAT ARE OBJECTS OF IOSTREAM ? ", "WHAT ARE FUNCTION IN IOSTREAM ? ", "WHAT IS A LIST OF OBJECTS OF IOSTREAM ? "},
{
"Objects of Iostream are declared in header file <iostream>.\nNarrow Headers(char)\n1.Cin\n2.Cout\n3.Cerr\n4.Clog\nWide Characters(wchar_t)\n1.Wcin\n2.Wcout\n3.Wcerr\n4.Wclog\n"
}
},
{ {"HEADERS INCLUDED IN IOSTREAM" , "WHAT ARE THE HEADERS INCLUDED IN IOSTREAM ? " , "WHAT DO YOU MEAN BY IOSTREAM HEADERS", "WRITE A FEW IOSTREAM HEADERS", "NAME SOME HEADERS  ALREADY INCLUDED IN IOSTREAM" },
{
"Including this header i.e < iostream may automatically include other headers, such as <ios>, <streambuf>, <istream>, <ostream> and /or <iosfwd>."
}
},
{ {"CIN", "WHAT IS CIN ? " , "WHAT DO YOU MEAN BY CIN", " WHAT DOES CIN DO ? " , "WHAT IS THE FUNCTION OF CIN"},
{
" cin is a Standard input stream(object), which enables user to give input."
}
},
{ {"COUT", "WHAT IS COUT" , " WHAT DOES COUT DO ?" , "WHAT IS THE FUNCTION OF COUT" , "WHAT DO YOU MEAN BY CIN" },
{
" cout is a Standard output stream(object), which enables user to see the output."
}
},
{ {"DIFFERNCE BETWEEN CIN AND COUT", "WHAT IS THE DIFFERENCE BETWEEN CIN AND COUT ? " , "WHAT DO YOU MEAN BY DIFFERNCE BETWEEN CIN AND COUT", "WRITE A FEW DIFFERNCES BETWEEN CIN AND COUT", "HOW WILL YOU DIFFERENCIATE BETWEEN CIN AND COUT ? " },
{
" cin is a Standard input stream(object), which enables user to give input whereas cout is a Standard output stream(object), which enables user to see the output."
}
},

{ {"CERR", "WHAT IS CERR ? " , "WHAT DO YOU MEAN BY CERR", " WHAT DOES CERR DO ? " , "WHAT IS THE FUNCTION OF CERR"},
{
" cerr is a Standard output stream for errors(object).It is not buffered stream."

}
},
{ {"CLOG", "WHAT IS CLOG ? " , "WHAT DO YOU MEAN BY CLOG" , " WHAT DOES CLOG DO ? " , "WHAT IS THE FUNCTION OF CLOG"},
{
" clog is a Standard output stream for logging(object).It is buffered stream."
}
},
{ {"DIFFERENCE BETWEEN CERR AND CLOG" , "DIFFERENCIATE BETWEEN CERR AND CLOG" , "WHAT DO YOU MEAN BY DIFFERNCE BETWEEN CERR AND CLOG", "WRITE A FEW DIFFERNCES BETWEEN CERR AND CLOG", "WHAT IS DIFFERENCE BETWEEN CERR AND CLOG ? " },
{
" clog is a Standard output stream for logging(object).It is buffered stream whereas  cerr is a Standard output stream for errors(object).It is not buffered stream."
}
},
{ {"DIFFERENCE BETWEEN CIN AND WCIN", "WHAT IS DIFFERENCE BETWEEN CIN AND WCIN ? ", "DIFFERENCIATE BETWEEN CIN AND WCIN" , "WHAT DO YOU MEAN BY DIFFERNCE BETWEEN CIN AND WCIN", "WRITE A FEW DIFFERNCES BETWEEN CIN AND WCIN"},
{
" cin is a Standard input stream(object), which enables user to give input whereas wcin is a Standard input stream(wide) (object), which enables user to give input.."
}
},

{ {"WCIN", "WHAT IS WCIN ? " , "WHAT DO YOU MEAN BY WCIN", "WHAT DOES WCIN DO ? " , "WHAT IS THE FUNCTION OF WCIN"},
{
" wcin is a Standard input stream(wide) (object), which enables user to give input."
}
},
{ {"WCOUT", "WHAT IS WCOUT" , "WHAT DO YOU MEAN BY WCOUT", " WHAT DOES WCOUT DO ? " , "WHAT IS THE FUNCTION OF WCOUT"},
{
" wcout is a Standard output stream(wide) (object), which enables user to see the output."
}
},
{ {"DIFFERENCE BETWEEN WCIN AND WCOUT", "WHAT IS THE DIFFERENCE BETWEEN WCIN AND WCOUT" , "DIFFERENCIATE BETWEEN WCIN AND WCOUT" , "WHAT DO YOU MEAN BY DIFFERNCE BETWEEN WCIN AND WCOUT", "WRITE A FEW DIFFERNCES BETWEEN WCIN AND WCOUT" },
{
" wcin is a Standard input stream(wide) (object), which enables user to give input whereas wcout is a Standard output stream(wide) (object), which enables user to see the output."
}
},

{ {"WCERR", "WHAT IS WCERR ? ", "WHAT DO YOU MEAN BY WCERR ? ", "WHAT DOES WCERR DO ? " , "WHAT IS THE FUNCTION OF WCERR"},
{
" wcerr is a Standard output stream for errors(wide) (object).It is not buffered stream."

}
},
{ {"WCLOG", "WHAT IS WCLOG ? ", "WHAT DO YOU MEAN BY WCLOG" , " WHAT DOES WCLOG DO ? " , "WHAT IS THE FUNCTION OF WCLOG"},
{
" wclog is a Standard output stream for logging(wide) (object).It is buffered stream."
}
},
{ {"DIFFERENCE BETWEEN WCERR AND WCLOG", "WHAT IS THE DIFFERENCE BETWEEN WCERR AND WCLOG", "DIFFERENCIATE BETWEEN WCERR AND WCLOG" , "WHAT DO YOU MEAN BY DIFFERNCE BETWEEN WCERR AND WCLOG", "WRITE A FEW DIFFERNCES BETWEEN WCERR AND WCLOG" },
{
"wcerr is a Standard output stream for errors(wide) (object).It is not buffered stream whereas wclog is a Standard output stream for logging(wide) (object).It is buffered stream."
}
},

{{"INPUT STREAM", "WHAT IS INPUT STREAM ? ", "WHAT DOES INPUT STREAM DO", "WHAT DO YOU MEAN BY INPUT STREAM" , "WHAT IS THE FUNCTION OF INPUT STREAM ? " },
{
"Input Stream : If the direction of flow of bytes is from the device(for example, Keyboard) to the main memory then this process is called input."
}
},
{{"OUTPUT STREAM", "WHAT IS OUTPUT STREAM ? ", " WHAT DOES OUTPUT STREAM DO" , "WHAT DO YOU MEAN BY OUTPUT STREAM", "WHAT IS THE FUNCTION OF OUTPUT STREAM ? " },
{
"Output Stream : If the direction of flow of bytes is opposite, i.e.from main memory to device(display screen) then this process is called output."
}
},
{{"IOMANIP", "WHAT IS IOMANIP ? ", "WHAT DO YOU MEAN BY IOMANIP", " WHAT DOES IOMANIP DO" , "WHAT IS THE FUNCTION OF HEADER FILE IOMANIP ? " },
{
"iomanip: iomanip stands for input output manipulators.The methods declared in this files are used for manipulating streams.This file contains definitions of setw, setprecision etc."
}
},
{{"OBJECTS OF IOMANIP"," WHAT ARE LIBRARY DEFINED FUNCTIONS OF IOMANIP"," WHAT ARE OBJECTS OF IOMANIP", "WHAT ARE FUNCTION IN IOIOMANIP ? ", "WHAT IS A LIST OF OBJECTS OF IOMANIP ? "},
{
"Objects of Iomanip are declared in header file <iomanip>.\n1. setiosflags \n2. resetiosflags\n3. setbase\n4. setfill\n5. setprecision\n6. setw\n7. get_money\n8. put_money\n9. get_time\n10.put_time\n"
}
},

{{"SETIOSFALGS"," WHAT ARE SETIOSFALGS" ," WHAT DOES SETIOSFALGS DO", "WHAT IS SETIOSFLAGS", "WHAT DO YOU MEAN BY SETIOSFLAGS"},
{
"Sets the format flags specified by parameter mask.Behaves as if member setf were called with mask as argument on the stream on which it is inserted / extracted as a manipulator(it can be inserted / extracted on input streams or output streams).This manipulator is declared in header <iomanip>.."
}
},
{{"MANIPULATORS"," WHAT ARE MANIPULATORS", "WHAT DO YOU MEAN BY MANIPULATORS", "WHAT IS THE FUNCTION OF MANIPULATORS?", "WHAT DO MANIPULATORS DO"},
{
"Manipulators are functions specifically designed to be used in conjunction with the insertion(<< ) and extraction(>> ) operators on stream objects. The formatting of the output can be controlled with the use of manipulators."
}
},
{{"TYPES OF MANIPULATORS", "WHAT ARE A FEW TYPES OF MANIPULATORS", "WRITE A FEW TYPES OF MANIPULATORS", "WHAT ARE THE TYPES OF MANIPULATORS", "TYPES OF MANIPULATORS ARE" },
{
"Manipulators are functions specifically designed to be used in conjunction with the insertion(<< ) and extraction(>> ) operators on stream objects"
}
},

{{"PARAMETERIZED MANIPULATORS", "WRITE ABOUT PARAMETERIZED MANIPULATORS", "WHAT DO YOU MEAN BY PARAMETERIZED MANIPULATORS", "WHAT ARE PARAMETERIZED MANIPULATORS"," WHAT DO PARAMETERIZED MANIPULATORS DO"},
{
"These functions take parameters when used as manipulators.They require the explicit inclusion of the header file <iomanip>."
}
},

{{"RESETIOSFLAGS", "WHAT ARE RESETIOSFLAGS ? ", "WHAT DO YOU MEAN BY RESETIOSFLAGS", "WHAT IS RESETIOSFLAGS", "WHAT IS THE FUNCTION OF RESETIOSFLAGS ? "},
{
"Behaves as if member unsetf were called with mask as argument on the stream on which it is inserted / extracted as a manipulator(it can be inserted / extracted on input streams or output streams)."
}
},
{{"SETBASE", "WHAT IS SETBASE ? " , "WHAT DO YOU MEAN BY SETBASE", "WHAT DOES SETBASE DO ? ",  "WHAT DOES SETBASE DO ? "},
{
"Sets the basefield to one of its possible values : dec, hex or oct, according to argument base./nBehaves as if setf(which,ios_base::basefield) were called on the stream on which it is inserted / extracted as a manipulator,"
}
},
{{"SETFILL", "WHAT DO YOU MEAN BY SETFILL", "WHAT IS MEANT BY SETFILL", "WHAT IS SETFILL" , "WHAT DOES SETFILL DO"},
{
"Behaves as if member fill were called with c as argument on the stream on which it is inserted as a manipulator(it can be inserted on output streams).\nThis manipulator is declared in header <iomanip>."
}
},
{{"SETPRECISION", "WHAT DO YOU MEAN BY SETPRECISION ? " , "WHAT IS THE FUNCTION OF SETPRECISION ? ",  "WHAT IS SETPRECISION" , "WHAT DOES SETPRECISION DO"},
{
"Sets the decimal precision to be used to format floating - point values on output operations."
}
},
{{"SETW"," WHAT IS SETW ? ", "WRITE ABOUT SETW", "WHAT DOES SETW DO IN C++", "WHAT IS THE FUNCTION OF SETW"},
{
"Sets the field width to be used on output operations.\nBehaves as if member width were called with n as argument on the stream on which it is inserted / extracted as a manipulator"
}
},
{{"GET_MONEY", "WHAT IS GET_MONEY IN C++", "WHAT DO YOU MEAN BY GET_MONEY ? " , "WHAT IS THE FUNCTION OF GET_MONEY ? ", "WHAT IS THE FUNCTION OF GET_MONEY ? "},
{
"Extracts characters from the input stream it is applied to,and interprets them as a monetary expression, which is stored as the value of mon."
}
},
{{"PUT_MONEY", "WHAT DO YOU MEAN BY PUT_MONEY ? " , "WHAT IS THE FUNCTION OF PUT_MONEY", "WHAT IS PUT + MONEY ? ", "WHAT IS THE FUNCTION OF OUT_MONEY ? "},
{
"Inserts the representation of mon as a monetary value into the output stream it is applied to."
}
},
{{"GET_TIME", "WHAT IS GET_TIME" , "WHAT DO YOU MEAN BY GET_TIME" , "WHAT IS DOES GET_TIME DO" "WHAT IS THE FUNCTION OF GET_TIME"},
{
"Extracts characters from the input stream it is applied to,and interprets them as timeand date information as specified in argument fmt.The obtained data is stored at the struct tm object pointed by tmb."
}
},
{{"PUT_TIME", "WHAT DO YOU MEAN BY PUT_TIME", "WHAT IS PUT_TIME" , "WHAT IS THE FUNCTION OF PUT_TIME", "WHAT IS THE FUNCTION OF PUT_TIME ? "},
{
"Inserts the representation of the timeand date information pointed by tmb, formatting it as specified by argument fmt."
}
},
{{"IOS", "WHAT DO YOU MEAN BY IOS" , "WHAT IS THE FUNCTION OF IOS", "WHAT IS IOS", "WHAT IS THE FUNCTION OF IOS ? "},
{
"IOS is a Header providing base classesand types for the IOStream hierarchy of classes"
}
},
{{"PREPROCESSOR", "WHAT IS A PREPROCESSOR", "WHAT DO YOU MEAN BY PREPROCESSOR" , "WHAT IS THE FUNCTION OF A PREPROCESSOR", "WHAT IS THE FUNCTION OF A PREPROCESSOR ? "},
{
"The word 'pre' means 'before'and the word 'processor' means 'to make something'.Before the source code is compiled, it gets automatically processed due to the presence of preprocessor directives."
}
},
{{"HEADER FILE", "WHAT DO YOU MEAN BY A HEADER FILE" , "WHAT IS THE FUNCTION OF A HEADER FILE", " WHAT IS A HEADER FILE","WHAT IS A HEADER FILE IN C++"},
{
"In C++, all the header files may or may not end with the.h extension but in C, all the header files must necessarily begin with the.h extension."
}
},
{{"STANDARD LIBRARY HEADER FILE", "WHAT IS A STANDARD LIBRARY HEADER FILE", "WHAT DO YOU MEAN BY STANDARD LIBRARY HEADER FILE", "WHAT IS A STANDARD LIBRARY HEADER FILE", "WHAT IS THE FUNTION OF A STANDARD LIBRARY HEADER FILE"},
{
"These are the pre - existing header files already available in the C / C++ compiler"
}
},
{{"USER DEFINED HEADER FILES", "WHAT DO YOU MEAN BY A USER DEFINED HEADER FILE", "WHAT IS A USER DEFINED HEADER FILE", "WHAT IS THE FUNCTION OF USER DEFINED HEADER FILE" "WHAT IS A USER DEFINED HEADER FILE"},
{
"Header files starting #define can be designed by the user."
}
},
{{"LIBRARY", "WHAT DO YOU MEAN BY A LIBRARY IN C++", "WHAT IS A LIBRARY" , "WHAT IS THE FUNCTION OF A LIBRARY", "WHAT IS THE FUNCTION OF A LIBRARY ? "},
{
"Library is the place where the actual functionality is implemented i.e.they contain function body."
}
},
//vectors
{ {"VECTOR","WHAT IS VECTOR LIBRARY","WHAT IS THE PURPOSE OF VECTOR HEADER", "WHAT IS THE SIGNIFICANCE OF VECTOR HEADER" , "WHAT DO YOU KNOW ABOUT VECTOR LIBRARY" },
{
	" Vectors are sequence containers representing arrays that can change in size. Just like arrays, vectors use contiguous storage locations for their elements, which means that their elements can also be accessed using offsets on regular pointers to its elements, and just as efficiently as in arrays.",

}
},

{{"ASSIGN IN VECTOR","WHAT IS ASSIGN FUNCTION IN VECTORS","HOW TO USE ASSIGN FUNCTION IN VECTORS ","WHAT IS THE PURPOSE OF ASSIGN FUNCTION IN VECTORS"," ASSIGN FUNCTION "},
{
	"vector:: assign() is an STL in C++ which assigns new values to the vector elements by replacing old ones. It can also modify the size of the vector if necessary. size - number of elements from the beginning which has to be assigned. ",

}
},

{{"AT IN VECTOR","WHAT IS AT FUNCTION IN VECTORS","HOW TO USE AT IN VECTORS","WHAT IS THE PURPOSE OF AT FUNCTION IN VECTORS", " AT FUNCTION"},
{
	"std::vector::at /n The function automatically checks whether n is within the bounds of valid elements in the vector, throwing an out_of_range exception if it is not (i.e., if n is greater than, or equal to, its size). This is in contrast with member operator[], that does not check against bounds.",
}
},


{{"CLEAR IN VECTOR "," CLEAR FUNCTION IN VECTOR","HOW TO USE CLEAR FUNCTION IN VECTOR ","WHAT IS THE PURPOSE OF CLEAR FUNCTION IN VECTOR ","WHAT IS THE PURPOSE OF CLEAR FUNCTION IN VECTOR "},
{
	" C++ vector::clear() function..vector::clear() is a library function of (vector) header, it is used to remove/clear all elements of the vector, it makes the 0 sized vector after removing all elements. Note: To use vector, include <vector> header. vector::clear(); Parameter(s): none – ",

}
},

{{"CRBEGIN IN VECTOR","WHAT IS CRBEGIN FUNCTION IN VECTOR","HOW TO USE CRBEGIN FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF CRBEGIN FUNCTION IN VECTOR","CRBEGIN IN VECTOR"},
{
	" Using vector::crbegin().It returns a const_reverse_iterator pointing to the last element in the container (i.e., its reverse beginning)..",

}
},
{ {"CREND IN VECTOR","WHAT IS CREND FUNCTION IN VECTOR","HOW TO USE CREND FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF CREND FUNCTION IN VECTOR","CREND IN VECTOR"},
{
" std::vector::crend..Returns a const_reverse_iterator pointing to the theoretical element preceding the first element in the container (which is considered its reverse end). ",
}
},

{{"BEGIN IN VECTOR","WHAT IS BEGIN FUNCTION IN VETORS","HOW TO USE BEGIN FUNCTION IN VECTORS","WHAT IS THE PURPOSE OF BEGIN FUNCTION IN VECTORS "," BEGIN FUNCTION IN VECTOR"},
{
" Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container./n vector::begin()  /nbegin() function is used to return an iterator pointing to the first element of the vector container.begin() function returns a bidirectional iterator to the first element of the container. / n Syntax : vectorname.begin()",
}
},

{{"END IN VECTOR ","WHAT IS END FUNCTION IN VECTORS","HOW TO USE END FUNCTION IN VECTORS","WHAT IS THE PURPOSE OF  END FUNCTION IN VECORS","WHAT IS THE PURPOSE OF END FUNCTION IN VECTORS "},
{
" vector::end() /nend() function is used to return an iterator pointing to next to last element of the vector container. end() function returns a bidirectional iterator./n Syntax :vectorname.end()",


}
},

{{"FRONT IN VACTOR","WHAT IS FRONT FUNCTION IN VECTORS","HOW TO USE FRONT FUNCTION IN VECTORS","WHAT IS THE PURPOSE OF  FRONT FUNCTION IN VECTORS ","WHAT IS THE PURPOSE OF  FRONT FUNCTION IN VECTORS "},
{
" Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container /n vector::front() /n This function can be used to fetch the first element of a vector container./n Syntax : vectorname.front()",
}
},

{{"BACK IN VECTOR","WHAT IS BACK FUNCTION IN VECTORS","HOW TO USE BACK FUNCTION IN VECROS","WHAT IS THE PURPOSE OF BACK FUNCTION IN VECTORS ","WHAT IS THE PURPOSE OF BACK FUNCTION IN VECTORS "},
{
"vector::back()/nThis function can be used to fetch the last element of a vector container./nSyntax :vectorname.back()",
}
},

{{"SWAP IN VECTORS","WHAT IS SWAP FUNCTION IN VECTOR","HOW TO USE SWAP FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF SWAP FUNCTION IN VECTOR"},
{
" The std::swap() is a built-in function in C++ STL which swaps the value of any two variables passed to it as parameters. The std::vector::swap() function is used to swap the entire contents of one vector with another vector of same type and size. ",

}
},

{{"SIZE IN VECTORS","WHAT IS SIZE FUNCTION OF VECTORS ","HOW TO USE SIZE FUNCTION","WHAT IS THE PURPOSE OF SIZE FUNCTION IN VECTORS","WHAT IS THE PURPOSE OF SIZE FUNCTION IN VECTORS"},
{
" size() – Returns the number of elements in the vector. max_size() – Returns the maximum number of elements that the vector can hold. capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements. resize(n) – Resizes the container so that it contains 'n' elements. ",

}
},


{{"SHRINK_TO_FIT","WHAT IS SHRINK_TO_FIT FUNCTION","HOW TO USE SHRINK_TO_FIT FUNCTION ","WHAT IS THE PURPOSE OF SHRINK_TO_FIT FUNCTION ","WHAT IS THE PURPOSE OF SHRINK_TO_FIT FUNCTION "},
{
" The vector::shrink_to_fit() is a built-in function in C++ STL which reduces the capacity of the container to fit its size and destroys all elements beyond the capacity. ... Return value: The function does not returns anything. ",

}
},

{{"RESIZE IN VECTOR","WHAT IS RESIZE FUNCTION IN VECTOR ","EXPLAIN THE SIGNIFICANCE OF USING RESIZE FUNCTION IN VECTOR  ","WHAT IS THE PURPOSE OF RESIZE FUNCTION IN VECTOR","HOW TO USE RESIZE FUNCTION IN VECTOR "},

{
" The C++ function std::vector::resize() changes the size of vector. If n is smaller than current size then extra elements are destroyed. If n is greater than current container size then new elements are inserted at the end of vector. If val is specified then new elements are initialed with val. ",

}
},

{{"RESERVE IN VECTOR","WHAT IS RESERVE FUNCTION IN VECTOR","HOW TO USE RESERVE FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF RESERVE FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF RESERVE FUNCTION IN VECTOR"},
{
" std::vector::reserve..Requests that the vector capacity be at least enough to contain n elements. If n is greater than the current vector capacity, the function causes the container to reallocate its storage increasing its capacity to n (or greater). ",
}
},

{{"REND IN VECTOR","WHAT IS REND FUNCTION IN VECTOR ","HOW TO USE REND FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF REND FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF REND FUNCTION IN VECTOR"},

{
" vector::rend() is a built-in function in C++ STL which returns a reverse iterator pointing to the theoretical element right before the first element in the array container. ... Return value: The function returns a reverse iterator pointing to the theoretical element right before the first element in the array container. ",

}
},

{{"CAPACITY IN VECTOR","WHAT IS CAPACITY FUNCTION IN VECTORS","HOW TO USE CAPACITY FUNCTION IN VECTORS","WHAT IS THE PURPOSE OF CAPACITY FUNCTION IN VECTORS","WHAT IS THE PURPOSE OF CAPACITY FUNCTION IN VECTORS"},

{
" The C++ function std::vector::capacity() returns the size of allocate storage, expressed in terms of elements. This capacity is not necessarily equal to the size of vector. It can be equal or greater than vector size. The theoretical limit on vector size is given by member max_size. ",

}
},

{{"DATA FUNCTION","WHAT IS DATA FUNCTION IN VECTORS","HOW TO USE FUNCTION ","WHAT IS THE PURPOSE OF FUNCTION ","DATA IN VECTORS"},

{
" The std::vector::data() is an STL in C++ which returns a direct pointer to the memory array used internally by the vector to store its owned elements. ... Return value: The function returns a pointer to the first element in the array which is used internally by the vector. ",

}
},
{{"EMPLACE","WHAT IS EMPLACE FUNCTION ","HOW TO USE EMPLACE FUNCTION ","WHAT IS THE PURPOSE OF EMPLACE FUNCTION ","WHAT IS THE PURPOSE OF EMPLACE FUNCTION IN VECTORS"},

{
" The vector::emplace() is an STL in C++ which extends container by inserting new element at position. Reallocation happens only if there is a need of more space. Here the container size increases by one. ",

}
},

{{"EMPLACE_BACK","WHAT IS EMPLACE_BACK FUNCTION ","HOW TO USE EMPLACE_BACK FUNCTION ","WHAT IS THE PURPOSE OF EMPLACE_BACK FUNCTION ","WHAT IS THE PURPOSE OF EMPLACE_BACK FUNCTION IN VECTORS"},

{
" Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container..vector::emplace_back().This function is used to insert a new element into the vector container, the new element is added to the end of the vector./nSyntax : vectorname.emplace_back(value)",

}
},

{{" EMPTY ","WHAT IS EMPTY FUNCTION ","HOW TO USE EMPTY FUNCTION ","WHAT IS THE PURPOSE OF EMPTY FUNCTION ","WHAT IS THE PURPOSE OF EMPTY FUNCTION IN VECTORS"},

{
" std::vector::empty.Returns whether the vector is empty (i.e. whether its size is 0). This function does not modify the container in any way. To clear the content of a vector, see vector::clear. ",

}
},
{{"PUSH_BACK IN VECTORS ","PUSH BACK IN VECTORS ","HOW TO USE PUSH_BACK FUNCTION IN VECTORS ","WHAT IS THE PURPOSE OF PUSH_BACK FUNCTION IN VECTORS","WHAT IS THE PURPOSE OF PUSH_BACK FUNCTION IN VECTORS"},

{
" vector::push_back() is a library function of (vector) header, it is used to insert/add an element at the end of the vector, it accepts an element of the same type and adds the given element at the end of the vector and increases the size of the vector. ",

}
},

{{"GET ALLOCATOR IN VECTOR","GET_ALLOCATOR IN VECTOR","HOW TO USE GET_ALLOCATOR FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF GET_ALLOCATOR FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF GET_ALLOCATOR FUNCTION IN VECTORS"},

{
"  Allocator is an object that is responsible for dynamic memory allocation/deallocation. get_allocator() is used to allocate memory chunks of memory. It returns a copy of the allocator object associated with the container. It is defined in vector, map, list, set libraries./nSyntax:allocator_type get_allocator() const; ",

}
},

{{"INSERT IN VECTOR","WHAT IS INSERT FUNCTION IN VECTOR ","HOW TO USE INSERT FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF INSERT FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF INSERT FUNCTION IN VECTORS"},

{
" std::vector::insert() is a built-in function in C++ STL which inserts new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted. ",

}
},
{{"MAX SIZE IN VECTORS","MAXIMUM SIZE OF VECTOR ","MAX_SIZE IN VECTOR","WHAT IS THE PURPOSE OF MAX_SIZE FUNCTION IN VECTORS","WHAT IS THE PURPOSE OF MAX_SIZE FUNCTION IN VECTORS"},

{
" Returns the maximum number of elements that the vector can hold. This is the maximum potential size the container can reach due to known system or library implementation limitations, but the container is by no means guaranteed to be able to reach that size: it can still fail to allocate storage at any point before that size is reached. ",

}
},

{{"OPERATOR=","WHAT IS OPERATOR=FUNCTION ","HOW TO USE OPERATOR= FUNCTION ","WHAT IS THE PURPOSE OF OPERATOR=  FUNCTION ","WHAT IS THE PURPOSE OF OPERATOR= FUNCTION IN VECTORS "},

{
" std::vector::operator=   Assigns new contents to the container, replacing its current contents, and modifying its size accordingly. Copies all the elements from x into the container. The container preserves its current allocator, which is used to allocate storage in case of reallocation. ",

}
},

{{" OPERATOR[]","WHAT IS OPERATOR[] FUNCTION","HOW TO USE OPERATOR[] FUNCTION ","WHAT IS THE PURPOSE OF OPERATOR[] FUNCTION ","WHAT IS THE PURPOSE OF OPERATOR[] FUNCTION IN VECTORS "},

{
" std::vector::operator[].Returns a reference to the element at position n in the vector container. A similar member function, vector::at, has the same behavior as this operator function, except that vector::at is bound-checked and signals if the requested position is out of range by throwing an out_of_range exception. ",

}
},
{{"POP BACK IN VECTOR","POP_BACK IN VECTOR","HOW TO USE POP_BACK FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF POP_BACK FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF POP_BACK FUNCTION IN VECTORS "},

{
" vector::pop_back() is a library function of (vector) header, it is used to deletes an element from the end of the vector, it deletes the element from the back and returns void.  ",

}
},

{{"RBEGIN IN VECTOR","WHAT IS RBEGIN FUNCTION IN VECTOR","HOW TO USE RBEGIN FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF RBEGIN FUNCTION IN VECTOR","WHAT IS THE PURPOSE OF RBEGIN FUNCTION IN VECTORS "},

{
" vector::rbegin() is a built-in function in C++ STL which returns a reverse iterator pointing to the last element in the container. Parameters: The function does not accept any parameter. Return value: The function returns a reverse iterator pointing to the last element in the container. ",

}
},
//c++ definitions
{ {"SIZE","SIZE()","SIZE","WHAT IS SIZE","WHAT IS SIZE IN C++"},
{"Size is generally reffered as length of an object in number of elements or bytes. \n Please specify which size you are reffering to: \n Size of vector \n Size of strings \n Size of array \n Size of list \n Size of map",
}
},
{{ "VECTOR SIZE()","SIZE OF VECTOR","VECTOR SIZE","WHAT IS SIZE IN VECTORS","SIZE OF VECTORS" },
{ "size_type size() const noexcept; \n Return size \n Returns the number of elements in the vector.\nThis is the number of actual objects held in the vector, which is not necessarily equal to its storage capacity.",
}
},
{ {"SIZE OF STRINGS","SIZE OF STRING","STRING SIZE","SIZE IN STRINGS","SRTINGS SIZE"},
{"size_t size() const noexcept; \nReturn length of string \nReturns the length of the string, in terms of bytes.\nThis is the number of actual bytes that conform the contents of the string, which is not necessarily equal to its storage capacity."
}
},
{ {"SIZE OF ARRAY","SIZE OF ARRAYS","ARRAY SIZE","ARRAYS SIZE","SIZE IN ARRAY"},
{"constexpr size_type size() noexcept; \n Return size \n Returns the number of elements in the array container. \n The size of an array object is always equal to the second template parameter used to instantiate the array template class (N)."
}
},
{{ "MAP SIZE","SIZE OF MAP","SIZE OF MAPS","MAPS SIZE","SIZE IN MAPS" },
{ "size_type size() const noexcept; \n Return container size \n Returns the number of elements in the map container."
}
},
{ {"SIZE OF LIST","SIZE IN LIST","SIZE OF LISTS","LIST SIZE","LISTS SIZE"},
{"size_type size() const noexcept; \n Return size \n Returns the number of elements in the list container."
}
},
{ {"INTERFACE","WHAT IS INTERFACE","INTERFACES","INTERFACE CLASS","INTERFACE IN C++"},
{"Interface \n An interface has no implementation. \n An interface class contains only a virtual destructor and pure virtual functions.\n An interface class is a class that specifies the polymorphic interface i.e. pure virtual function declarations into a base class. The programmer using a class hierarchy can then do so via a base class that communicates only the interface of classes in the hierarchy."
}
},
{ {"SCOPE RESOLUTION OPERATOR","RESOLUTION OPERATOR","::","SCOPE RESOLUTION","OPERATOR ::"},
{"The scope resolution operator :: is used for accessing things that has been declared inside namespaces and classes. \n std::list<int>."
}
},
{ {"STRUCTURE","STRUCTURE OF PROGRAM","STRUCTURED PROGRAMMING","PROGRAM STRUCTURE","STRUCTURED PROGRAM"},
{"Structure of program is reffered to as the components of the program coupled together to make a whole. Structured programming is the best way to learn c++. Structured programming may also reffer to declerations and statements and control structures."
}
},
{ {"DOT","DOT OPERATOR",".","OPERATOR.","OPERATOR DOT"},
{"A special operator called the dot operator (.) is used when an object calls one of its member function. \n std::<type>object.member_function"
}
},
{ {"LENGTH","STRING LENGTH","LENGTH OF STRING","LENGTH OF STRINGS","LENGTH()"},
{"size_t length() const noexcept; \n Return length of string \n Returns the length of the string, in terms of bytes. \n This is the number of actual bytes that conform the contents of the string, which is not necessarily equal to its storage capacity."
}
},
{ {"INHERITANCE","CLASS INHERITANCE","INHERITANCE","INHERITANCE","MULTIPLE INHERITANCE"},
{"Inheritance is the process of adopting functions, memberfuntions, objects and datatypes from one class or library. If a class inherits from more than one class it is called multiple inheritance.\n  ios inherits from ios_base. Both istream and ostream inherit from ios, and ifstream and ofstream are derived from istream and ostream respectively.\n iostream inherits from both istream and ostream. This is an example of multiple inheritance."
}
},
{ {"SEEKG","WHAT IS SEEKG","BEG","HOW TO USE SEEKG","WHAT IS SEEKG IN FSTREAM"
},
{"Syntax: \n istream& seekg (streampos pos); \n istream& seekg (streamoff off, ios_base::seekdir way); \n Set position in input sequence \n Sets the position of the next character to be extracted from the input stream. \n Internally, the function accesses the input sequence by first constructing a sentry object (with noskipws set to true). Then (if good), it calls either pubseekpos (1) or pubseekoff (2) on its associated stream buffer object (if any). Finally, it destroys the sentry object before returning.",
}
},
{ {"MAIN","VOID MAIN","MAIN FUNCTION","MAIN IN C++","INT MAIN"},
{"Every C++ program contains exactly one function named main, deﬁned by a block of code. In C++, a block of code is deﬁned by a set of braces, {}. The keyword int indicates that the function returns an integer value to the operating system. The parentheses following main are required because main is a function. The main function contains two types of commands: declarations and statements. \n int main()."
}
},
{ {"ARGUMENTS","ARGUMENT","FUNCTION ARGUMENT","FUNCTIONS ARGUMENT","ARGUMENT()"},
{"Argument is reffered to as the input value of a function which is commonly enclosed in paranthesis. The input value maybe some numerical, string or empty depending on the function.\n sin(60) ; clear() ; char name('a')."
}
},
{ {"PARENTHESIS","PARENTHESIS","FUNCTION PARENTHESIS","()","PARENTHESIS IN C++"},
{"Parenthesis () are used to enclose an argument of a function. The argument maybe be empty, numerical, cahr or string."
}
},
{ {"ENCAPSULATION","ENCAPSULATION IN C++","ENCAPSULATIONS","ENCAPSULATION","ENCAPSULATION DESIGN"},
{"Encapsulation means to protect sensitive information in an object by making members protected or private in a class. The user then has to use functions to change the state of the object, rather than [possibly incorrectly] modifying the object directly. This helps assure than an object is always stable and can't be corrupted. It also makes classes much harder to misuse and less likely to cause serious problems in a program."
}
},
{ {"NUMBERS","NUMBERS IN C++","NUMBER","NUMBERALS","NUMBERIC"},
{"Numbers are the form of data entered as a value in c++, numbers can be used to specify many things, and are mostly used in arguments of functions."
}
},
{ {"NESTED LOOP","NESTED LOOPS","LOOP INSIDE LOOP","NEST LOOP","INDUCED LOOP"},
{"Nested loop is defined as the structure in which a loop has a single or multiple loops inside it."
}
},
{ {"LOOP","LOOPS","REPETITION LOOP","REPETITION STRUCTURES","LOOP"},
{"Loops are the repetition structure in which the statemnets inside the loop/structure are repeated to a specific number of time if the loop is finite or to infinite number of times if the loop is infinite.\n For more imformation, please specifiy whcih type of loop you are asking."
}
},
{ {"OPERAND","OPERANDS","OPERATOR OPERANDS","OPERATOR OPERAND","FUNCTION OPERANDS"},
{"Operands are the variables, objects or values on which an operation performs its function/ which it manipulates and process. A function can be uniary operand or Bi-operand"
}
},
{ {"OVERLOADING","OVERLOADING","OVERLOADING","OVERLOADING","OVERLOADING",},
{"Please specify which overloading you are talking about. There are two types of overloading. These are :\n1.Operator Overloading\n2.Function Overloading."
}
},
{ {"OPERATORS OVERLOADING","OPERATOR OVERLOADING","OPERATORS OVERLOADING","OVERLOADING OPERATORS","OVERLOADINGS"},
{"Operators are not available for user-defined datatype except the assignmemnt operator(=), so to use the operator for userdefined datatype, one has to overload the operation/function of an operator. This process of redefining operator for a datatype is called overloading."
}
},
{ {"CASES","CASE","SWITCH CASES","SWITCH CASE","CASE ARGUMENT"},
{"Case is the argument defined in switch decision statment. Each case is associated with a block of statemnt which is executed if it is called in argument of switch command. The block of statements must end with a break keyword else all the other cases will also be executed. \n switch(case)."
}
},
{ {"COMMENTS","COMMENT","REMARKS","//","COMMENTs IN C++"},
{"Comments are used to add information to the program so that it is easily readable and understandable by others. \n Comments may begin with the characters /* and end with the characters / or, for single-line comments, may begin with the characters // and terminate at the end of the current line. A comment can be on a line by itself, or it can be on the same line as a command; a comment beginning with the characters / can extend over several lines. "
}
},
{ {"PARAMETERS","PARAMETER","FUNCTION PARAMETERS","FUNCTIONS PARAMETER","ARGUMENT()"},
{"Parameter is reffered to as the input value of a function which is commonly enclosed in paranthesis. The input value maybe some numerical, string or empty depending on the function.\n sin(60) ; clear() ; char name('a')."
}
},
{ {"SOURCE FILE","SOURCE FILES","SOURCES FILE","WHAT DO YOU MEAN BY SOURCE FILE","WHAT IS SOURCE FILE"},
{
"Each C++ source file needs to be compiled into an object file. The object files resulting from the compilation of multiple source files are then linked into an executable, a shared library, or a static library (the last of these being just an archive of object files). C++ source files generally have the. cpp, "
}
},
{ {"RESOURCE FILES","RESOURCE FILE","RESOURCE SCRIPT FILE","WHAT IS RESOURCE SCRIPT FILE","RESOURCES FILES"},
{
"Resource Files (C++) \n Bitmaps, icons, toolbars, and cursors are all resources. ... The resource script file for the project. The resource script file contains the following, depending on the type of project, and the support selected for the project (for example, toolbars, dialog boxes, or HTML)"
}
},
{ {"ALGORITHM","ALGORITHMS","<ALGORITHM>","WHAT IS ALGORITHM LIBRARY","ALGORITHM LIBRARY"},
{
"Algorithms. The header <algorithm> defines a collection of functions especially designed to be used on ranges of elements. A range is any sequence of objects that can be accessed through iterators or pointers, such as an array or an instance of some of the STL containers."
}
},
{ {"STL ALGORITHM","STL ALGORITHMS","STL ALGORITHM LIBRARY","WHAT IS STL ALGORITHM","STL ALGORITHM?"},
{
"The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized."
}
},
{ {"CODING ALGORITHMS","CODING ALGORITHM","WHAT IS CODING ALGORITHM","WHAT DO YOU MEAN BY CODING ALGORITHM","CODING ALGORITHM"},
{
"A programming algorithm is a computer procedure that is a lot like a recipe (called a procedure) and tells your computer precisely what steps to take to solve a problem or reach a goal. ... We looked at a simple example of an algorithm that does some preparation, asks a user for an email address, and decides what to do."
}
},
{ {"FUNCTION OF ALGORITHM IN C++","FUNCTION OF ALGORITHMS","FUNCTIONS OF ALGORITHM","FUNCTIONS OF ALGORITHMS","INTRODUCTION OF ALGORITHM"},
{
"The algorithm library provides several functions that can be used for a variety of purposes, for instance searching, sorting, counting, manipulating and so on. These functions operate on ranges of elements and the range is defined as [first, last)."
}
},
{ {"NON-MODIFYING SEQUENCE OPERATION","NON MODIFYING SEQUENCE OPERATION IN ALGORITHM","NON-MODIFYING SEQUENCE OPERATION IN ALGORITHMS","NON MODIFYING SEQUENCE OPERATION "," NON MODIFYING SEQUENCE OPERATION "},
{
"Non-modifying sequence operations: \n all_of \n Test condition on all elements in range (function template ) \n any_of \n Test if any element in range fulfills condition (function template ) \n none_of \n Test if no elements fulfill condition (function template ) \n for_each \n Apply function to range (function template ) \n find \n Find value in range (function template ) \nfind_if \n Find element in range(function template) \n find_if_not \n Find element in range(negative condition) (function template) \n find_end \n Find last subsequence in range(function template) \n find_first_of \n Find element from set in range(function template) \n adjacent_find \n Find equal adjacent elements in range(function template) \n count \n Count appearances of value in range(function template) \n count_if \n Return number of elements in range satisfying condition(function template) \n mismatch \n Return first position where two ranges differ(function template) \n equal \n Test whether the elements in two ranges are equal(function template) \n is_permutation \n Test whether range is permutation of another(function template) \n search \n Search range for subsequence(function template) \nsearch_n \n Search range for elements(function template)"
}
},
{ {"PARTITION IN ALGORITHM","PARTITIONS IN ALGORITHM","PARTIONS IN ALGORITHMS","PARTION FUNCTION IN ALGORITHM","PARTITION FUNCTIONS IN ALGORITHM"},
{
"Partitions: \n is_partitioned \n Test whether range is partitioned (function template ) \n partition \n Partition range in two (function template ) \n stable_partition \n Partition range in two - stable ordering (function template ) \n partition_copy \n  Partition range into two (function template ) \n partition_point \n Get partition point (function template )"
}
},
{ {"BINARY SEARCH IN ALGORITHM","BINARY SEARCH FUNCTION","BINARY SEARCH FUNCTION IN ALGORITHM","BINARY FUNCTION IN ALGORITHM","BINARY SEARCH IN ALGORITHM"},
{
"Binary search (operating on partitioned/sorted ranges): \n lower_bound \n Return iterator to lower bound (function template ) \n upper_bound \n Return iterator to upper bound (function template ) \n equal_range \n Get subrange of equal elements (function template ) \n binary_search \n Test if value exists in sorted sequence (function template ) "
}
},
{ {"HEAP FUNCTION IN ALGORITHM"," HEAP FUNCTION IN ALGORITHM "," HEAP FUNCTION IN ALGORITHM "," HEAP FUNCTION IN ALGORITHM "," HEAP FUNCTION IN ALGORITHM"},
{
"Heap: \n push_heap \n Push element into heap range (function template ) \n pop_heap \n Pop element from heap range (function template ) \n make_heap \n Make heap from range (function template ) \n sort_heap \n Sort elements of heap (function template ) \n is_heap \n Test if range is heap (function template ) \n is_heap_until \n Find first element not in heap order (function template )"
}
},
{ {"OPERATORS","OPERATOR","WHAT ARE OPERATORS","OPERATORS IN C++","WHAT DO YO MEAN BY OPERATORS"},
{
" Operators are special type of functions, that takes one or more arguments and produces a new value. For example : addition (+), substraction (-), multiplication (*) etc, are all operators. Operators are used to perform various operations on variables and constants."
}
},
{ {"TYPES OF OPERATORS","TYPE OF OPERATORS","TYPE OF OPERATOR","OPERATOR TYPES","OPERATORS TYPE"},
{
"Types of operators are as under: \n Assignment Operator \n Mathematical Operators \n Relational Operators \n Logical Operators \n Bitwise Operators \n Shift Operators \n Unary Operators \n Ternary Operator \n Comma Operator"
}
},
{ {"ASSIGNMENT OPERATORS","ASSIGNMENT OPERATOR","WHAT IS ASSIGNMENT OPERATOR","ASSIGNMENT OPERATOR","= OPERATOR"},
{
" Operates '=' is used for assignment, it takes the right-hand side (called rvalue) and copy it into the left-hand side (called lvalue). Assignment operator is the only operator which can be overloaded but cannot be inherited."
}
},
{ {"MATHEMATICAL OPERATIONS","MATHEMATICAL OPERATION","MATHEMATICAL OPERATOR","WHAT IS MATHEMATICAL OPERATION","MATHEMATICALS OPERATORS"},
{
" There are operators used to perform basic mathematical operations. Addition (+) , subtraction (-) , diversion (/) multiplication (*) and modulus (%) are the basic mathematical operators. Modulus operator cannot be used with floating-point numbers. \n C++ and C also use a shorthand notation to perform an operation and assignment at same type. Example, \n int x=10 \n ; += 4 // will add 4 to 10, and hence assign 14 to X. \n x -= 5 // will subtract 5 from 10 and assign 5 to x."
}
},
{ {"RELATIONAL OPERATIONS","RELATIONAL OPERATION","WHAT IS RELATIONAL OPERATION","RELATIONAL OPERATIONS","RELATIONAL OPERATORS"},
{
"These operators establish a relationship between operands. The relational operators are : less than (<) , grater thatn (>) , less than or equal to (<=), greater than equal to (>=), equivalent (==) and not equivalent (!=). \n You must notice that assignment operator is (=) and there is a relational operator, for equivalent (==). These two are different from each other, the assignment operator assigns the value to any variable, whereas equivalent operator is used to compare values, like in if-else conditions"
}
},
{ {"LOGICAL OPERATION","LOGICAL OPERATIONS","AND OR OPERATIONS","&& || OPERATIONS","LOGICAL OPERATORS"},
{
"The logical operators are AND (&&) and OR (||). They are used to combine two different expressions together. \n If two statement are connected using AND operator, the validity of both statements will be considered, but if they are connected using OR operator, then either one of them must be valid. These operators are mostly used in loops (especially while loop) and in Decision making."
}
},
{ {"BITWISE OPERATION","BITWISE OPERATIONS","WHAT IS BITWISE OPERATION","BITWISE OPERATORS","BITWISE OPERATOR"},
{
"There are used to change individual bits into a number. They work with only integral data types like char, int and long and not with floating point values.\n Bitwise AND operators & \n Bitwise OR operator | \n And bitwise XOR operator ^ \n And, bitwise NOT operator ~ \n They can be used as shorthand notation too, & = , |= , ^= , ~= etc."
}
},
{ {"SHIFT OPERATORS","SHIFT OPERATOR","SHIFT OPERATION","SHIFT OPERATIONS","WHAT IS SHIFT OPERATORS"},
{
"Shift Operators are used to shift Bits of any variable. It is of three types, \n Left Shift Operator << \n Right Shift Operator >> \n Unsigned Right Shift Operator >>>"
}
},
{ {"UNARY OPERATORS","UNARY OPERATOR","UNARYOPERATION","UNARY OPERATIONS","UNARY OPERATORS"},
{
"These are the operators which work on only one operand. There are many unary operators, but increment ++ and decrement -- operators are most used. \n Other Unary Operators : address of &, dereference *, new and delete, bitwise not ~, logical not !, unary minus - and unary plus +."
}
},
{ {"TERNARY OPERATOR","TERNARY OPERATION","TERNARY OPERATORS","TERNARY OPERATIONS","TERNARY IF ELSE"},
{
"The ternary if-else ? : is an operator which has three operands.\n int a = 10; \n a > 5 ? cout << “true” : cout << “false”"
}
},
{ {"COMMA OPERATION","COMMA OPERATOR","COMMA OPERATORS","COMMA","COMMA OPERATORS"},
{
"This is used to separate variable names and to separate expressions. In case of expressions, the value of last expression is produced and used. \n Example : \n int a,b,c; // variables declaration using comma operator \n a=b++, c++; // a = c++ will be done."
}
},
{{"POLYMORPHISM","POLYMORPHISM IN C++","WHAT IS POLYMORPHISM","DEFINE POLYMORPHISM","USE OF POLYMORPHISM"},
{"C++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function."}
},
{ {"CONSTANT","LITERAL","LITERAL CONSTANT","DEFINE LITERAL","USE OF CONSTANTS"},
{"Literal constants are objects that store specific data values that can not be modified \n10 is an integer constant \n4.5 is a floating point constant \nThe distance between the two points is a string constant \na is a character constant"}
},
{ {"NAMESPACE","NAMESPACE IN C++","WHAT IS A NAMESPACE","DEFINE NAMESPACE","USE OF NAMESPACE"},
{"A namespace is designed to differentiate similar functions, classes, variables etc. with the same name available in different libraries."}
},
{ {"FILING","CONCEPT OF FILING","FILING IN C++","DEFINE FILING","WHAT IS FILING"},
{"The use of fstream to process files and the data in them is called filing."}
},
{ {"SOURCE PROGRAM","WHAT IS SOURCE PROGRAM","FEATURES OF SOURCE PROGRAM","SOURCE PROGRAM","EXTENSION OF SOURCE PROGRAM"},
{
" printable/readable program file, in C++ language, with extension .cpp",

}
},

{ {"OBJECT PROGRAM","WHAT IS OBJECT PROGRAM","FEATURES OF OBJECT PROGRAM","OBJECT PROGRAM","EXTENSION OF OBJECT PROGRAM"},
{
" non-printable machine readable file, in C++ language, with extension .o ",

}
},

{ {"EXECUTABLE PROGRAM","WHAT IS EXECUTABLE PROGRAM","FEATURES OF EXECUTABLE PROGRAM","EXECUTABLE PROGRAM","EXTENSION OF EXECUTABLE PROGRAM"},
{
" non-printable executable code, in C++ language with, extension .exe ",

}
},
{ {"DATA REPRESENTATION","WHAT IS DATA REPRESENTATION","DATA REPRESENTATION IN DIGITAL PROGRAMS","DATA REPRESENTATION","DATA REPRESENTATION"},
{
" Digital computers store information as a sequence of bits (binary digits) \nThe value or state of a bit at any given time can be 0 or 1 (off or on) \nData is stored as a sequence of bytes \nA byte is a sequence of 8 bits ",

}
},
{ {"SYMBOLIC CONSTANTS","WHAT ARE SYMBOLIC CONSTANTS","HOW TO USE SYMBOLIC CONSTANT","WHAT IS THE PURPOSE OF SYMBOLIC CONSTANT","SYMBOLIC CONSTANT"},

{
" A symbolic constant is defined with a preprocessor directive that assigns an identifier to the constant \nThe directive can appear anywhere in a C++ program, but is strictly advisable to put all of them on top of your program \nEach occurrence of the identifier is replaced with the constant value in all statements that follow the directive",

}
},
{ {"CASTING","WHAT IS CASTING","HOW TO USE CAST OPERATOR","WHAT IS THE PURPOSE OF CAST OPERATOR ","CAST OPERATOR"},

{
"  The cast operator is a unary operator that requests that the value of the operand be cast, or changed, to a new type for the next computation. The type of the operand is not affected",

}
},
{ {"CLEAR","CLEAR FUNCTION","CLEAR","CLEAR","CLEAR"},
 {"Clear is used to clear a variable/object. Please specidy what you want.\n1.Clear in vectors.\n2.Clear in strings.\n3.Clear in fstream"
}
},
{ {"CAPACITY","CAPACITY FUNCTION","CAPACTITY","CAPACITY","CAPACITY"},
 {"Capacity is used to show the size in bytesof a variable/object. Please specidy what you want.\n1.Capacity in vectors.\n2.Capacity in strings.\n"
}
},
{ {"PUSH BACK","PUSH_BACK","PUSH_BACK","PUSH BACK","PUSH BACK"},
 {"Capacity is used to to add a new entry in a variable/object. Please specidy what you want.\n1.Push back in vectors.\n2.Push back in strings.\n"
}
},
{ {"RESIZE","RESIZE","WHAT IS RESIZE","RESIZE IN C++","RESIZE"},
{"It is used to resize the objects. resize is used in vectors and strings.\n Specify: \n Resize in string \n Resize in vector."
}
},
{ {"CRBEGIN","WHAT IS CRBEGIN","CRBEGIN IN C++","CRBEGIN","CRBEGIN"},
{"Returns a const_reverse_iterator pointing to the last element.\n Specify: \n CRBEGIN 	in strings. \n CRBEGIN in vector."
}
},
{ {"CREND","CREND","WHAT IS CREND","CREND IN C++","CREND"},
{"Returns a const_reverse_iterator pointing to the theoretical element preceding the first element. \ Specify \n CREND in string. \n CREND in vector."
}
},
{ {"BEGIN","BEGINNING","BEGIN","BEGIN IN C++","BEGIN"},
{"Returns an iterator pointing to the first element. \n Specify: \n BEGIN in string. \n BEGIN in vector."
}
},
{ {"END","END IN C++","END","END","END"},
{"Returns an iterator pointing to the past-the-end element. \n Specify: \n END in string. \n END in vector."
}
},
{ {"SIZE","SIZE","SIZE IN C++","WHAT IS SIZE","SIZE"},
{"Returns the length of object in terms of number of elements. \n Specify: \n SIZE in string. \n Size in vector."
}
},
{ {"REND","REND","WHAT IS REND","REND IN C++","REND"},
{"Return reverse iterator to reverse end. \n Specify: \n REND in string. \n REND in vector."
}
},
{ {"MAX_SIZE","MAX SIZE","MAX_SIZE()","MAXIMUM SIZE","MAX SIZE IN C++"},
{"Returns the maximum length the object can reach. \n Specify: \n MAX SIZE in string. \n MAX SIZE in vector."
}
},
{ {"RESERVE","RESERVE","RESERVE IN C++","RESERVE","RESERVE"},
{"Requests that the object capacity be adapted to a planned change in size to a length of up to n elements. \n Specify: \n RESERVE in string. \n RESERVE in vector."
}
},
{ {"FRONT","FRONT","FRONT","FRONT in C++","FRONT"},
{"Returns a reference to the first element of the object. \n Specify: \n FRONT in string. \n FRONT in vector."
}
},
{ {"BACK","BACK","BACK","BACK IN C++","BACK"},
{"Returns a reference to the last element of the object. \n Specify: \n BACK in string. \n BACK in vector."
}
},
{ {"INSERT","INSERT","INSERT","INSERT","INSERT IN C++"},
{"Inserts additional data/elements into the objects. \n Specify: \n INSERT in string. \n INSERT in vector."
}
},
{ {"RBEGIN","RBEGIN","RBEGINNING","RBEGIN IN C++","RBEGIN"},
{"Returns a reverse iterator pointing to the last element of the object. \n Specify: \n RBEGIN in string. \n REBIGN in vector."
}
},
{ {"SWAP","SWAP","SWAP","SWAP","SWAP IN C++"},
{"Exchanges the values of two objects/elements. \n Specify: \n SWAP in string. \n SWAP in vector. \n SWAP in fstream."
}
},
{ {"GET ALLOCATOR","GET ALLOCATOR IN C++","GET_ALLOCATOR()","GET_ALLOCATOR","GET ALLOCATOR"},
{"Returns a copy of the allocator object associated with the object. \n Specify: \n GET ALLOCATOR in strings. \n GET ALLOCATOR in vector."
}
},
{ {"POP BACK","POP_BACK","POP_BACK()","POP BACK IN C++","POP BACK"},
{"Erases the last element. \n Specify: \n POP BACK in strings. \n POP BACK in vector."
}
},
{ {"ASSIGN","ASSIGN","ASSIGNMNET","ASSIGN IN C++","ASSIGN"},
{"Assigns a new value to the object, replacing its current contents. \n Specify: \n ASSIGN in string. \n ASSIGN in vector."
}
},
{ {"GET LINE","GET_LINE","GET_LINE()","GET LINE IN C++","GET LINE"},
{"Get line from stream into object. \n Specify: \n GET LINE in string. \n GET LINE in fstream."
}
},
{ {"STD","STD NAMESPACE","WHAT DOES STD MEANS","STD","USING NAMESPACE STD"},
{
"Class template std::function is a general-purpose polymorphic function wrapper. Instances of std::function can store, copy, and invoke any Callable target -- functions, lambda expressions, bind expressions, or other function objects, as well as pointers to member functions and pointers to data members.",
}
},
{ {"SEQUENCE","WHAT IS SEQUENCE","SEQUENCE IN C++","SEQUENCES","SEQUENCE"},
{
"In computing, sequence containers refer to a group of container class templates in the standard library of the C++ programming language that implement storage of data elements. Being templates, they can be used to store arbitrary elements, such as integers or custom classes.",
}
},
{ {"USE OF SEQUENCE","WHY SEQUENCE IS USED IN C++","USES OF SEQUENCE","WHAT ARE USES OF SEQUENCE","SEQUENCE USES"},
{
"The C++ Sequence class is used together with the generated C API classname_fieldname_*() functions in C++ applications to manage database fields of type sequence. As sequences are effectively vectors of values, they are accessed through iterators.",
}
},
{ {"EXIT","EXIT FUNCTION","WHAT IS EXIT FUNCTION","WHAT IS EXIT","EXIT IN C++"},
{
"The exit function, declared in the standard include file <stdlib. h>, terminates a C++ program. The value supplied as an argument to exit is returned to the operating system as the program's return code or exit code. By convention, a return code of zero means that the program completed successfully.",
}
},
{ {"TEMPLATE","TEMPLATE C++","WHAT IS TEMPLATE","TEMPLATE","TEMPLATES"},
{
"A C++ template is a powerful feature added to C++. It allows you to define the generic classes and generic functions and thus provides support for generic programming. Generic programming is a technique where generic types are used as parameters in algorithms so that they can work for a variety of data types.",
}
},
{ {"PRIVATE","PRIVATE CLASS","PRIVATE CLASS FUNCTION","WHAT IS PRIVATE CLASS","WHAT IS PRIVATE"},
{
"By default access to members of a C++ class is private. The private members are not accessible outside the class; they can be accessed only through methods of the class. The public members form an interface to the class and are accessible outside the class.",
}
},
{ {"PUBLIC","PUBLIC IN C++","WHAT IS PUBLIC CLASS","PUBLIC CLASS","PUBLIC ACCESS MODIFIER"},
{
" Public: All the class members declared under public will be available to everyone. The data members and member functions declared public can be accessed by other classes too.",
}
},
{ {"DIFFERENCE BETWEEN PRIVATE AND PUBLIC","PRIVATE AND PUBLIC","WHAT IS DIFFERENCE BETWEEN PRIVATE AND PUBLIC ACCESS MODIFIER","PRIVATE AND PUBLIC","PRIVATE AND PUBLIC"},
{
"The default access for members and classes is private..A public member is accessible from anywhere outside the class but within a program. You can set and get the value of public variables without any member. A private member variable or function cannot be accessed, or even viewed from outside the class.",
}
},
{ {"PROTECTED IN C++","PROTECTED"," PROTECTED KEYWORD SPECIFIES ACCESS"," PROTECTED "," PROTECTED"},
{
" The protected keyword specifies access to class members in the member-list up to the next access specifier (public or private) or the end of the class definition. Class members declared as protected can be used only by the following: Member functions of the class that originally declared these members.",
}
},
{ {"USE OF PROTECTED DATA MEMBER","USE OF PROTECTED","USE OF PROTECTED FUNCTION","WHERE PROTECTED FUNCTION IS USED","USE OF PROTECTED DATA MEMBER"},
{
" PROTECTED data members or PROTECTED functions means data members and functions are allowed to use by the classes which are derived by the class where they are declared. A private member variable or function cannot be accessed, or even viewed from outside the class.",
}
},
{ {"DIFFERENCE BETWEEN PUBLIC PRIVATE AND PROTECTED"," DIFFERENCE BETWEEN PUBLIC PRIVATE AND PROTECTED IN C++ WITH EXAMPLE","DIFFERENCE BETWEEN PUBLIC PRIVATE AND PROTECTED IN C++","PROTECTED PRIVATE PUBLIC"," DIFFERENCE BETWEEN PUBLIC PRIVATE AND PROTECTED"},
{
" We can access public data members and functions of one class from another class. Private data members cannot be accessed outside the class. the scope of Private data members remains within the class. Protected data members can be only accessed by friend functions within the class.",
}
},
{ {"PROGRAMMING ERROR","WHAT IS MEANT BY PROGRAMMING ERROR","PROGRAMMING ERRORS","ERROR","ERRORS"},
{
" In computer programming, a logic error is a bug in a program that causes it to operate incorrectly, but not to terminate abnormally (or crash). ... Unlike a program with a syntax error, a program with a logic error is a valid program in the language, though it does not behave as intended.",
}
},
{ {"TYPE OF ERROR","TYPE OF PROGRAMMING ERROR","WHAT ARE TYPES OF PROGRAMMING ERROR","ERROR TYPES",""},
{
"The 3 Basic Types of Programming Errors \n Logical Errors. We will divide our errors into three classes: logical, syntax, and semantic. \n Syntax Errors. Syntax errors in computer programming differ from logical errors in that they don't follow a correct sequence in the computer language. \n Semantic Errors. Semantic errors are improper uses of “program statements.",
}
},
{ {"LOGICAL ERROR","WHAT IS LOGICAL ERROR","LOGIC ERROR","WHAT IS LOGIC ERROR","LOGIC ERRORS"},
{
" A logic error (or logical error) is a mistake in a program's source code that results in incorrect or unexpected behavior. It is a type of runtime error that may simply produce the wrong output or may cause a program to crash while running. Many different types of programming mistakes can cause logic errors.",
}
},
{ {"RESOLVING LOGICAL ERROR","RESOLVING LOGIC ERROR","HOW TO FIX LOGIC ERROR","HOW CAN WE FIX LOGICAL ERROR","FIX LOGICAL ERROR"},
{
" To resolve a logic error, there's a few steps: \n Understand what you're trying to accomplish. \n Understand what your code did. \n Form a hypothesis or two before looking at code. \n Resolve syntax errors. \n Start the debugger. \n Identify key variables or conditions. \n Step to your suspicious code. \n Look at the relevant variables.",
}
},
{ {"SYNTAX ERROR","WHAT IS SYNTAX ERROR","SYNTAX","SYNTAX ERRORS","ERROR SYNTAX"},
{
"Syntax errors are small grammatical mistakes, sometimes limited to a single character. For example, a missing semicolon at the end of a line or an extra bracket at the end of a function may produce a syntax error. \n A syntax error is an error in the source code of a program. Since computer programs must follow strict syntax to compile correctly, any aspects of the code that do not conform to the syntax of the programming language will produce a syntax error.",
}
},
{ {"SEMANTIC ERROR","SEMANTIC ERROR IN C++","WHAT IS SEMANTIC ERROR","WHAT DO YOU MEAN BY SEMANTIC ERROR","ERROR SEMANTIC"},
{
"When there are semantic errors in a C++ program, the compiler does translate the program into executable code. Most of the time, semantic errors do NOT generate compiler warnings. When the program is run, however, it does not work correctly. \n Semantic error. Writing invalid program logic that produces incorrect results when the instructions are executed. The syntax of the source code may be valid, but the algorithm being employed is not.",
}
},
{ {"RUNTIME ERROR","RUNTIME ERRORS","WHAT DO YOU MEAN BY RUNTIME ERROR","RUNTIME ERROR WITH EXAMPLE","ERROR RUNTIME"},
{
"A runtime error is a program error that occurs while the program is running. The term is often used in contrast to other types of program errors, such as syntax errors and compile time errors. There are many different types of runtime errors. \n One example is a logic error, which produces the wrong output.",
}
},
{ {"LINKER ERROR","LINKER ERRORS","LINKING ERROR","WHAT DO YOU MEAN BY LINKER ERROR","ERROR LINKER"},
{
"Linker errors occur when g++ tries to combine all of your .o files into an executable file. Linker errors CANNOT be fixed by guarding header files or by changing which header files are included in your .cpp file. non-aggregate type -- classes and structs are generically called aggregate types.",
}
},
{ {"FUNCTION OVERLOADING","WHAT IS  FUNCTION OVERLOADING IN C++","HOW TO USE  FUNCTION OVERLOADING IN C++","WHAT IS THE PURPOSE OF FUNCTION OVERLOADING","WHAT IS THE PURPOSE OF  FUNCTION OVERLOADING IN C++ "},
 
{
" Function overloading is a feature in C++ where two or more functions can have the same name but different parameters. Function overloading can be considered as an example of polymorphism feature in C++.",

}
},

{ { "ITERATOR IN C++", "WHAT IS ITERATOR IN C++ ", "HOW TO USE ITERATOR IN C++ ", "WHAT IS THE PURPOSE OF ITERATOR IN C++ ", "WHY DO WE USE ITERATOR IN C++ "},
{
"An iterator is any object that, pointing to some element in a range of elements (such as an array or a container), has the ability to iterate through the elements of that range using a set of operators (with at least the increment ( ++ ) and dereference ( * ) operators).",
}
},

{ {"OBJECT ORIENTED PROGRAMMMING IN C++", "WHAT DO YOU MEAN BY OBJECT ORIENTED PROGRAMMMING IN C++", "WHAT DOES IT MEAN THAT C++ IS OBJECT ORIENTED", "WHAT IS OOP IN C++", "HOW C++ IS OBJECT ORIENTED LANGUAGE"},
{
"Object-oriented programming (OOP) refers to a type of computer programming (software design) in which programmers define the data type of a data structure, and also the types of operations (functions) that can be applied to the data structure. ",
}
},
};


int nKnowledgeBaseSize = sizeof(Knowledgebase) / sizeof(Knowledgebase[0]);


