# B-SEC-200

## UNIT DESCRIPTION

Binary Security:

A study of the vulnerabilities associated with application development. A non-exhaustive list of areas covered:

* Reverse Engineering:
  * Anti-debugging techniques (Corrupted ELF format, stripped binaries, Packing, checksum on the binary itself, stack corruption, ptrace etc.)
  * Different Architectures/Formats: Elf, PE, x86, x64, ARM

* Exploitation
  * Vulnerabilities
    * Buffer Overflow
      * Stack Based
      * Heap Based
    * Integer Overflow
    * Use after free
    * Format string
  * Techniques
    * Debugging (r2 / GDB)
    * Ret-to-X (code, libc etc.), Stack pivot, ROP
    * Loading binaries (auxvv, GOT / PLT)
    * Bypassing protections (NX, ASLR, ASCII-Armor etc.)
    * Malloc Des-Maleficarum Houses


TIMELINE:

There is only one project for this unit. Over the course of the project's duration, the goal is to take advantage of the weaknesses and obtain the permissions or informations for the infrastructures that were set up for the project. It is a platform in which groups of students compete and try to obtain the highest score, sometimes at the cost of the other teams.

Before the project, some conference held by security experts will be accessible to help you enter into the world of binary security.

VALIDATION CRITERIA:

A broad knowledge of reverse and detecting and exploiting applicative vulnerabilities will be among the criteria needed to validate the unit.

## SKILLS TO BE ACQUIRED

Manipulating the reverse/debug tools: R2, GDB, Medusa etc.
Knowing the basics of taking control of a program's execution flux.
Understanding how a simple algorithm works by reading its assembler code.
Overruling the anti-debug techniques.
Overruling a system's protections.