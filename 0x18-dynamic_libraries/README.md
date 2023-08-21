# Description 
In this directory, we are going to study dynamic library.
Generally, we are going to define what a dynamic library, how does it work,
how to create one and how to use it.

## What is dynamic library?
  A dynamic library is a type of library that consist of a collection of
object codes that is not linked directly to the program executable upon
program compilation, but instead loaded into the memory for usage, at runtime.

## How does it work?
  When a program is compile, when a function or other resources is countered
during this process, the function or resource is replace by a reference.
At runtime, dynamic libraries are loaded and linked to the program by the 
operating system's dynamic linker/loader when that reference is encounter.

## How to create a dynamic library?
**Step1: Generate object code**
  >gcc -c -fPIC file1.c, file2.c, ... 
 
  Using the above command, generate object code of the c files/codes you want
  to include in your library.

  * -c: This flag tells gcc to generate object files of file1.c, file2.c, ...
  * -fPIC: This flag ensures that the resulting object file can be loaded
         at any memory address and still function correctly.

**step1: Create dynamic library with object code**
  >gcc -shared -o libdynamiclibraryname.so file1.o, file2.o, ...

  * -shared: Tells the gcc we are going to create a dynamic library
  * -o: allows us to specify the name of dynamic library that we are creating.

## How to use dynamic library?
**step1: Make sure the runtime linker/loader knows where to find your shared library
  Add the location of your shared library into the environment variable.
  >export LD_LIBRARY_PATH=/path/to/library:$LD_LIBRARY_PATH

**step2: Link program with shared library
  >gcc -o executablename program_name.c -L/path/to/library/ -llibrary_name
