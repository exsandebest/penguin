#include <string>

class TokenType {
public:
    int type,
        level;
    bool isFunction;
    std::vector<int> args;
    TokenType(int type, int level, bool isFunction = 0): type(type), level(level), isFunction(isFunction) {

    }
};


class PToken {
public:
    int type;
    string valueString = "";
    int valueInt = 0;
    double valueDouble = 0;
    bool valueBool = false;
    string special = "";
    int arg = 0;
    PToken(int a) : valueInt(a), type(TypeInt){}
    PToken(double a) : valueDouble(a), type(TypeDouble){}
    PToken(string a) : valueString(a), type(TypeString){}
    PToken(bool a) : valueBool(a), type(TypeBool){}
    PToken(string a, int arg) : special(a), type(TypeSpecial), arg(arg){}
}



class Token {
public:
    int type;
    std :: string value;
    int size;
    int line;
    bool isFunction;
    bool isSimpleVariable;
    Token(int type, std :: string value, int line): type(type), value(value), size(value.size()), line(line), isFunction(false), isSimpleVariable(false) {}
};

class expressionElement {
public:
    int type;
    bool isSimpleVariable;
    expressionElement(int tp): type(tp), isSimpleVariable(false) {}
};

enum { //Token's types
    integerNumber = 1,
    doubleNumber = 2,
    stringConstant = 3,
    name = 4,
    variableType = 5,
    functionType = 6,
    sOperator = 7,
    logicalOperator = 8,
    assignmentOperator = 9,
    comparsionOperator = 10,
    binaryMathOperator = 11,
    unaryMathOperator = 12,
    semicolon = 13,
    openingBracket = 14,
    closingBracket = 15,
    openingBrace = 16,
    closingBrace = 17,
    comma = 18,
    readwriteOperator = 19,
    openingSquareBracket = 20,
    closingSquareBracket = 21,
    importOperator = 22,
    logicalConstant = 23
};

enum { //States
    inCycle = 1,
    inFor1 = 3, //for (_________; i < n; ++i){}
    inFunction = 6
};

enum { //Types
    TypeBool = 1,
    TypeString = 2,
    TypeInt = 3,
    TypeDouble = 4,
    TypeNull = 5,
    TypeSpacial = 6
};
