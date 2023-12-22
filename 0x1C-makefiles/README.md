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

 * What are variables and how to set and use them
