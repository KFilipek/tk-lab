#pragma once
using namespace std;

struct Attr {
    vector<string*>* code;
    string*          place;
    Type*            type;

    Attr();
    ~Attr();
};

Attr*   compute(Expression*, Memory*, Attr* = nullptr);
Attr*   compute(vector<Expression*>*, Memory*, Attr* = nullptr);

void    attr_set_error(Attr*);
string* attr_to_code(Attr*);

string* sym_to_place(Memory*,int);
string* sym_to_place(Memory*,string);
string* sym_to_place(Symbol*);

string* cast(Attr*, TypeEnum, Memory*);
string* lab_next();

string* asm_gen(string, Attr*, Attr* = nullptr, Attr* = nullptr);
void    asm_gen_app();

bool    startsWith(string&, string&);
