# Typing-C

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
