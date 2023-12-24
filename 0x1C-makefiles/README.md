General

 * What are make, Makefiles

    Make is a build automation tool used to compile and build projects. It uses a file called a Makefile to specify how the project should be built. A Makefile contains rules and dependencies that describe     how source files should be compiled and linked to create executable programs or libraries.

    
    Makefiles are particularly useful in large projects with multiple source files. They help automate the build process by tracking dependencies and rebuilding only the necessary components when source cod    e changes. Makefiles are commonly used in C projects, but they can be employed for various programming languages and scenarios.

 * When, why and how to use Makefiles

    Make and Makefiles are tools used in software development to automate the build process of a program. The primary purpose of Make is to manage dependencies and efficiently rebuild parts of a program whe    n changes are made.

 * What are rules and how to set and use them
    
    In a Makefile, rules define how to build a target. Each rule consists of a target, prerequisites (dependencies), and commands. The target is the file or thing to be built, the prerequisites are the file    s that the target depends on, and the commands are the steps to build the target.

 * What are explicit and implicit rules

    Explicit Rule: This is a rule where the target and prerequisites are explicitly specified along with the commands. For example:
    ```bash
    target: prerequisite1 prerequisite2
	command1
	command2
    ```

    Implicit Rule: Implicit rules define a general recipe for how to build a certain type of target. For example, how to compile a C source file into an object file. Implicit rules are built into Make and a    re triggered when Make encounters a target it doesn't know how to build explicitly.



 * What are the most common / useful rules

    all: It's a common rule that builds the entire project.
    
    clean: Removes all built files, leaving only the source code.
    
    install: Installs the compiled program or library to a specified location.
    
    distclean: Cleans everything, including editor backup files, temporary files, etc.

 * What are variables and how to set and use them

    Variables in Makefiles are used to store values that can be reused throughout the file. They make it easy to modify the Makefile without changing the same value in multiple places. Variables are defined    with the syntax VARNAME = value and used with $(VARNAME).

    ```bash
    CC = gcc
    CFLAGS = -Wall -O2

    target: source.c
	    $(CC) $(CFLAGS) -o target source.c
    ```
    In this example, CC is a variable for the compiler, and CFLAGS is a variable for the compiler flags.

    How and When to Use Makefiles:

    Makefiles are used when a program consists of multiple source files, and changes to one file should trigger recompilation of only the affected files. They are especially useful in large projects to         automate the build process and manage dependencies. Makefiles help in organizing the project, making it easier to collaborate and maintain.

    To use a Makefile, you typically create one in the project directory and define the rules, dependencies, and variables according to your project structure. Then, running the make command will build the     specified target or the default target if none is specified.

    Makefiles are an integral part of many software development projects, and mastering them can significantly improve the efficiency of the development process.
