// UCLA CS 111 Lab 1 command reading

#include "command.h"
#include "command-internals.h"

#include <error.h>

/* FIXME: You may need to add #include directives, macro definitions,
   static function definitions, etc.  */
#include <stdlib.h>
#include <stdio.h>

struct Node
{
  command_t data;
  struct Node *next;
};

struct Node * pop (struct Node * head, command_t * data)
{
  if (head == NULL) 
  {
      *data = NULL;
      return NULL;
  }
  else
  {
      struct Node * temp = head;
      *data = head->data;
      head = head->next;
      free(temp);
      return head;
  }
}

struct Node * push (struct Node * head, command_t data)
{
  struct Node * temp;
  temp = ( struct Node *)malloc(sizeof (struct Node));
  
  if (temp == NULL)
  {
      exit(0);
  }

  temp -> data = data;
  temp -> next = head;
  head = temp;
  return head;
}

/* FIXME: Define the type 'struct command_stream' here.  This should
   complete the incomplete type declaration in command.h.  */
struct command_stream
{
  
};

command_stream_t
make_command_stream (int (*get_next_byte) (void *),
		     void *get_next_byte_argument)
{
  /* FIXME: Replace this with your implementation.  You may need to
     add auxiliary functions and otherwise modify the source code.
     You can also use external functions defined in the GNU C Library.  */
  struct Node * stack;
  stack = NULL;
  int input;
  char c; 

  input = get_next_byte (get_next_byte_argument);
  while ( input != EOF )
  {
      c = (char)input;
      printf("%c", c);
      input = get_next_byte (get_next_byte_argument);
  }  
 
  error (1, 0, "command reading not yet implemented");
  return 0;
}

command_t
read_command_stream (command_stream_t s)
{
  /* FIXME: Replace this with your implementation too.  */
  error (1, 0, "command reading not yet implemented");
  return 0;
}
