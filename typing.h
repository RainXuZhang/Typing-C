/**************************************
 * Typing-C                           *
 * File: typing.h                     *
 * --------                           *
 *                                    *
 * This file is the header file,      *
 * which contains the functions. Do   *
 * not edit this file unless you      *
 * know what you are doing. Make sure *
 * to #include this file.             *
 *************************************/

#ifndef TYPING_H
 #define TYPING_H
 #include <stdio.h>
 #include <unistd.h>
 #define default 50000
 
 // Character printing function with configurable delay
 static inline void print(char c, unsigned int delay_us) {
     usleep(delay_us);
     putchar(c);
     fflush(stdout);
 }
 
 // Character printing functions with specific delays
 #define defchar(name, character, delay) \
     static inline void name(void) { \
         print(character, delay); \
     }
 
 // Define lowercase alphabet functions with specific delays
 defchar(a, 'a', 300000)
 defchar(b, 'b', 500000)
 defchar(c, 'c', 500000)
 defchar(d, 'd', 300000)
 defchar(e, 'e', 400000)
 defchar(f, 'f', 200000)
 defchar(g, 'g', 300000)
 defchar(h, 'h', 300000)
 defchar(i, 'i', 400000)
 defchar(j, 'j', 200000)
 defchar(k, 'k', 300000)
 defchar(l, 'l', 300000)
 defchar(m, 'm', 500000)
 defchar(n, 'n', 500000)
 defchar(o, 'o', 400000)
 defchar(p, 'p', 400000)
 defchar(q, 'q', 400000)
 defchar(r, 'r', 400000)
 defchar(s, 's', 300000)
 defchar(t, 't', 400000)
 defchar(u, 'u', 400000)
 defchar(v, 'v', 500000)
 defchar(w, 'w', 400000)
 defchar(x, 'x', 500000)
 defchar(y, 'y', 400000)
 defchar(z, 'z', 500000)
 
 // Define uppercase alphabet functions
 defchar(A, 'A', 300000)
 defchar(B, 'B', 500000)
 defchar(C, 'C', 500000)
 defchar(D, 'D', 300000)
 defchar(E, 'E', 400000)
 defchar(F, 'F', 200000)
 defchar(G, 'G', 300000)
 defchar(H, 'H', 300000)
 defchar(I, 'I', 400000)
 defchar(J, 'J', 200000)
 defchar(K, 'K', 300000)
 defchar(L, 'L', 300000)
 defchar(M, 'M', 500000)
 defchar(N, 'N', 500000)
 defchar(O, 'O', 400000)
 defchar(P, 'P', 400000)
 defchar(Q, 'Q', 400000)
 defchar(R, 'R', 400000)
 defchar(S, 'S', 300000)
 defchar(T, 'T', 400000)
 defchar(U, 'U', 400000)
 defchar(V, 'V', 500000)
 defchar(W, 'W', 400000)
 defchar(X, 'X', 500000)
 defchar(Y, 'Y', 400000)
 defchar(Z, 'Z', 500000)
 
 // Define number functions
 defchar(zero, '0', 300000)
 defchar(one, '1', 300000)
 defchar(two, '2', 300000)
 defchar(three, '3', 300000)
 defchar(four, '4', 300000)
 defchar(five, '5', 300000)
 defchar(six, '6', 300000)
 defchar(seven, '7', 300000)
 defchar(eight, '8', 300000)
 defchar(nine, '9', 300000)
 
 // Define symbol functions
 defchar(bang, '!', 300000)
 defchar(at, '@', 300000)
 defchar(hash, '#', 300000)
 defchar(dollar, '$', 300000)
 defchar(percent, '%', 300000)
 defchar(caret, '^', 300000)
 defchar(ampersand, '&', 300000)
 defchar(asterisk, '*', 300000)
 defchar(leftparen, '(', 300000)
 defchar(rightparen, ')', 300000)
 defchar(dash, '-', 300000)
 defchar(underscore, '_', 300000)
 defchar(plus, '+', 300000)
 defchar(equals, '=', 300000)
 defchar(leftbrace, '{', 300000)
 defchar(rightbrace, '}', 300000)
 defchar(leftbracket, '[', 300000)
 defchar(rightbracket, ']', 300000)
 defchar(bar, '|', 300000)
 defchar(backslash, '\\', 300000)
 defchar(semicolon, ';', 300000)
 defchar(colon, ':', 300000)
 defchar(singlequote, '\'', 300000)
 defchar(doublequote, '"', 300000)
 defchar(comma, ',', 300000)
 defchar(period, '.', 300000)
 defchar(slash, '/', 300000)
 defchar(question, '?', 300000)
 defchar(tilde, '~', 300000)
 defchar(leftangle, '<', 300000)
 defchar(rightangle, '>', 300000)
 defchar(backtick, '`', 300000)
 
 // Define special characters
 static inline void space(void) {
     print(' ', 300000);
 }
 
 static inline void newline(void) {
     print('\n', 300000);
 }

 static inline void creturn(void) {
     print('\r', 300000);
 }
 
 // Function to print a string with typing effect
 void typestring(const char *str, unsigned int delay_us) {
     while (*str) {
         print(*str++, delay_us);
     }
 }
 
 // Define lowercase alphabet
 #define a a();
 #define b b();
 #define c c();
 #define d d();
 #define e e();
 #define f f();
 #define g g();
 #define h h();
 #define i i();
 #define j j();
 #define k k();
 #define l l();
 #define m m();
 #define n n();
 #define o o();
 #define p p();
 #define q q();
 #define r r();
 #define s s();
 #define t t();
 #define u u();
 #define v v();
 #define w w();
 #define x x();
 #define y y();
 #define z z();
 
 // Define uppercase alphabet
 #define A A();
 #define B B();
 #define C C();
 #define D D();
 #define E E();
 #define F F();
 #define G G();
 #define H H();
 #define I I();
 #define J J();
 #define K K();
 #define L L();
 #define M M();
 #define N N();
 #define O O();
 #define P P();
 #define Q Q();
 #define R R();
 #define S S();
 #define T T();
 #define U U();
 #define V V();
 #define W W();
 #define X X();
 #define Y Y();
 #define Z Z();
 
 // Define numbers
 #define zero zero();
 #define one one();
 #define two two();
 #define three three();
 #define four four();
 #define five five();
 #define six six();
 #define seven seven();
 #define eight eight();
 #define nine nine();
 
 // Define symbol
 #define bang bang();
 #define at at();
 #define hash hash();
 #define dollar dollar();
 #define percent percent();
 #define caret caret();
 #define ampersand ampersand();
 #define asterisk asterisk();
 #define leftparen leftparen();
 #define rightparen rightparen();
 #define dash dash();
 #define underscore underscore();
 #define plus plus();
 #define equals equals();
 #define leftbrace leftbrace();
 #define rightbrace rightbrace();
 #define leftbracket leftbracket();
 #define rightbracket rightbracket();
 #define bar bar();
 #define backslash backslash();
 #define semicolon semicolon();
 #define colon colon();
 #define doublequote doublequote();
 #define comma comma();
 #define period period();
 #define slash slash();
 #define question question();
 #define tilde tilde();
 #define leftangle leftangle();
 #define rightangle rightangle();
 #define backtick backtick();
 
 // Define other characters
 #define space space();
 #define newline newline();
 #define creturn creturn();
 
 // Convenient command for typing a string with delay
 #define typestring(str, delay) typestring(str, delay);
 
 #endif