# Terminal Layer
## Purpose  
The Terminal Layer provides low-level communication with the Linux terminal.  
It hides ANSI escape sequences from the rest of the engine.  

## Responsibilities
The terminal system manages:  

* Screen clearing
* Cursor positioning
* Cursor visibility
* Terminal colors  

## Example
Instead of writing ANSI commands evrywhere:  

```c
  printf("\033[31m");
  printf("Enemy");
  printf("\033[0m");
```

The engine will provide higher-level functions:  

```c
    terminal_set_color(RED);
    terminal_write("Enemy");
    terminal_reset_color();
```

## Design Goal
The game should never need to know how the terminal works internally.  
This will make future platform support easier.