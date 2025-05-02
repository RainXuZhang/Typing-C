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
 
 // Generic character printing function with configurable delay
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
 definechar(a, 'a', 300000)
 definechar(b, 'b', 500000)
 definechar(c, 'c', 500000)
 definechar(d, 'd', 300000)
 definechar(e, 'e', 400000)
 definechar(f, 'f', 200000)
 definechar(g, 'g', 300000)
 definechar(h, 'h', 300000)
 definechar(i, 'i', 400000)
 definechar(j, 'j', 200000)
 definechar(k, 'k', 300000)
 definechar(l, 'l', 300000)
 definechar(m, 'm', 500000)
 definechar(n, 'n', 500000)
 definechar(o, 'o', 400000)
 definechar(p, 'p', 400000)
 definechar(q, 'q', 400000)
 definechar(r, 'r', 400000)
 definechar(s, 's', 300000)
 definechar(t, 't', 400000)
 definechar(u, 'u', 400000)
 definechar(v, 'v', 500000)
 definechar(w, 'w', 400000)
 definechar(x, 'x', 500000)
 definechar(y, 'y', 400000)
 definechar(z, 'z', 500000)
 
 // Define uppercase alphabet functions
 definechar(A, 'A', 300000)
 definechar(B, 'B', 500000)
 definechar(C, 'C', 500000)
 definechar(D, 'D', 300000)
 definechar(E, 'E', 400000)
 definechar(F, 'F', 200000)
 definechar(G, 'G', 300000)
 definechar(H, 'H', 300000)
 definechar(I, 'I', 400000)
 definechar(J, 'J', 200000)
 definechar(K, 'K', 300000)
 definechar(L, 'L', 300000)
 definechar(M, 'M', 500000)
 definechar(N, 'N', 500000)
 definechar(O, 'O', 400000)
 definechar(P, 'P', 400000)
 definechar(Q, 'Q', 400000)
 definechar(R, 'R', 400000)
 definechar(S, 'S', 300000)
 definechar(T, 'T', 400000)
 definechar(U, 'U', 400000)
 definechar(V, 'V', 500000)
 definechar(W, 'W', 400000)
 definechar(X, 'X', 500000)
 definechar(Y, 'Y', 400000)
 definechar(Z, 'Z', 500000)
 
 // Define number functions
 definechar(zero, '0', 300000)
 definechar(one, '1', 300000)
 definechar(two, '2', 300000)
 definechar(three, '3', 300000)
 definechar(four, '4', 300000)
 definechar(five, '5', 300000)
 definechar(six, '6', 300000)
 definechar(seven, '7', 300000)
 definechar(eight, '8', 300000)
 definechar(nine, '9', 300000)
 
 // Define symbol functions
 definechar(bang, '!', 300000)
 definechar(at, '@', 300000)
 definechar(hash, '#', 300000)
 definechar(dollar, '$', 300000)
 definechar(percent, '%', 300000)
 definechar(caret, '^', 300000)
 definechar(ampersand, '&', 300000)
 definechar(asterisk, '*', 300000)
 definechar(leftparen, '(', 300000)
 definechar(rightparen, ')', 300000)
 definechar(dash, '-', 300000)
 definechar(underscore, '_', 300000)
 definechar(plus, '+', 300000)
 definechar(equals, '=', 300000)
 definechar(leftbrace, '{', 300000)
 definechar(rightbrace, '}', 300000)
 definechar(leftbracket, '[', 300000)
 definechar(rightbracket, ']', 300000)
 definechar(bar, '|', 300000)
 definechar(backslash, '\\', 300000)
 definechar(semicolon, ';', 300000)
 definechar(colon, ':', 300000)
 definechar(singlequote, '\'', 300000)
 definechar(doublequote, '"', 300000)
 definechar(comma, ',', 300000)
 definechar(period, '.', 300000)
 definechar(slash, '/', 300000)
 definechar(question, '?', 300000)
 definechar(tilde, '~', 300000)
 definechar(leftangle, '<', 300000)
 definechar(rightangle, '>', 300000)
 definechar(backtick, '`', 300000)
 
 // Define special characters
 static inline void space(void) {
     print(' ', 300000);
 }
 
 static inline void newline(void) {
     print('\n', 300000);
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
 
 // Convenient command for typing a string with a delay
 #define typestring(str, delay) typestring(str, delay);
 
 #endif