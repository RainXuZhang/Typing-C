# Typing-C (2nd Edition)

# User guide (Linux):
# Step 1:
Download the typing.h file.

# Step 2:
Open your terminal. Go to the file's folder and do `sudo mv typing.c /usr/include`.

# Step 3:
Create a .c file. At the top, add `#include <typing.h>`.
Then type as follows:
`int main()
{
  H();i();exclamation();endline();
  return(0);
}`
Save.

# Step 4:
Compile it using `gcc typing.c -o typing`.

# Step 5:
Run the file. Voila! It types out `Hi!`, and then adds a new line.

# Character Guide:

Available words:
Lowercase alphabet:
a (a); b (b); c (c); d (d); e (e);
f (f); g (g); h (h); i (i); j (j);
k (k); l (l); m (m); n (n); o (o);
p (p); q (q); r (r); s (s); t (t);
u (u); v (v); w (w); x (x); y (y);
z (z);

Uppercase alphabet:
A (A); B (B); C (C); D (D); E (E);
F (F); G (G); H (H); I (I); J (J);
K (K); L (L); M (M); N (N); O (O);
P (P); Q (Q); R (R); S (S); T (T);
U (U); V (V); W (W); X (X); Y (Y);
Z (Z);

Numbers:
zero (0); one (1); two (2);
three (3); four (4); five (5);
six (6); seven (7);  eight (8);
nine (9);

Symbols:
bang (!); at (@); hash (#);
dollar ($); percent (%); caret (^);
ampersand (&); asterisk (*);
leftparen (() ; rightparen ());
dash (-); underscore (_);
plus (+); equals (=);
leftbrace ({); rightbrace (});
leftbracket ([); rightbracket (]);
bar (|); backslash (\);
semicolon (;); colon (:);
doublequote ("); comma (,);
period (.); slash (/);
leftangle (<); rightangle (>);
backtick (`); tilde (~);
question (?);

Other:
space ( ); newline (\n);
