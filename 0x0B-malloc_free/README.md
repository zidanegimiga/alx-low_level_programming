# Memory Allocation in C Using malloc()
---------------------------------------------------
The ``malloc()`` allocates a piece of memory as big as you ask it. It returns a pointer to the start of that memory, which could be treated similar to an array. If you write beyond the size of that memory, the result is undefined behavior. This means everything could work alright, or your computer may explode. Most likely though you'd get a segmentation fault error
