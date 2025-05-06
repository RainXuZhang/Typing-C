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

 #define top 400000
 #define middle 300000
 #define bottom 500000
 #define fast 200000
 
 // Character printing function with configurable delay
 static inline void print(char c, unsigned int delay_us) {
     usleep(delay_us);
     putchar(c);
     fflush(stdout);
 }
 
 // Character printing functions with specific delays
 #define definechar(name, character, delay) \
     static inline void name(void) { \
         print(character, delay); \
     }
 
 // Define lowercase alphabet functions with specific delays
 definechar(a, 'a', middle)
 definechar(b, 'b', bottom)
 definechar(c, 'c', bottom)
 definechar(d, 'd', middle)
 definechar(e, 'e', top)
 definechar(f, 'f', fast)
 definechar(g, 'g', middle)
 definechar(h, 'h', middle)
 definechar(i, 'i', top)
 definechar(j, 'j', fast)
 definechar(k, 'k', middle)
 definechar(l, 'l', middle)
 definechar(m, 'm', bottom)
 definechar(n, 'n', bottom)
 definechar(o, 'o', top)
 definechar(p, 'p', top)
 definechar(q, 'q', top)
 definechar(r, 'r', top)
 definechar(s, 's', middle)
 definechar(t, 't', top)
 definechar(u, 'u', top)
 definechar(v, 'v', bottom)
 definechar(w, 'w', top)
 definechar(x, 'x', bottom)
 definechar(y, 'y', top)
 definechar(z, 'z', bottom)
 
 // Define uppercase alphabet functions
 definechar(A, 'A', middle)
 definechar(B, 'B', bottom)
 definechar(C, 'C', bottom)
 definechar(D, 'D', middle)
 definechar(E, 'E', top)
 definechar(F, 'F', fast)
 definechar(G, 'G', middle)
 definechar(H, 'H', middle)
 definechar(I, 'I', top)
 definechar(J, 'J', fast)
 definechar(K, 'K', middle)
 definechar(L, 'L', middle)
 definechar(M, 'M', bottom)
 definechar(N, 'N', bottom)
 definechar(O, 'O', top)
 definechar(P, 'P', top)
 definechar(Q, 'Q', top)
 definechar(R, 'R', top)
 definechar(S, 'S', middle)
 definechar(T, 'T', top)
 definechar(U, 'U', top)
 definechar(V, 'V', bottom)
 definechar(W, 'W', top)
 definechar(X, 'X', bottom)
 definechar(Y, 'Y', top)
 definechar(Z, 'Z', bottom)
 
 // Define number functions
 definechar(zero, '0', middle)
 definechar(one, '1', middle)
 definechar(two, '2', middle)
 definechar(three, '3', middle)
 definechar(four, '4', middle)
 definechar(five, '5', middle)
 definechar(six, '6', middle)
 definechar(seven, '7', middle)
 definechar(eight, '8', middle)
 definechar(nine, '9', middle)
 
 // Define symbol functions
 definechar(bang, '!', middle)
 definechar(at, '@', middle)
 definechar(hash, '#', middle)
 definechar(dollar, '$', middle)
 definechar(percent, '%', middle)
 definechar(caret, '^', middle)
 definechar(ampersand, '&', middle)
 definechar(asterisk, '*', middle)
 definechar(leftparen, '(', middle)
 definechar(rightparen, ')', middle)
 definechar(dash, '-', middle)
 definechar(underscore, '_', middle)
 definechar(plus, '+', middle)
 definechar(equals, '=', middle)
 definechar(leftbrace, '{', middle)
 definechar(rightbrace, '}', middle)
 definechar(leftbracket, '[', middle)
 definechar(rightbracket, ']', middle)
 definechar(bar, '|', middle)
 definechar(backslash, '\\', middle)
 definechar(semicolon, ';', middle)
 definechar(colon, ':', middle)
 definechar(singlequote, '\'', middle)
 definechar(doublequote, '"', middle)
 definechar(comma, ',', middle)
 definechar(period, '.', middle)
 definechar(slash, '/', middle)
 definechar(question, '?', middle)
 definechar(tilde, '~', middle)
 definechar(leftangle, '<', middle)
 definechar(rightangle, '>', middle)
 definechar(backtick, '`', middle)
 
 // Define special characters
 static inline void space(void) {
     print(' ', middle);
 }
 
 static inline void newline(void) {
     print('\n', middle);
 }

 static inline void creturn(void) {
     print('\r', middle);
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