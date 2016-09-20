/*
 * _10.cpp
 *
 *  Created on: 2016Äê9ÔÂ19ÈÕ
 *      Author: Kyle
 */


/*  STACK
If the size of something is known when the program is compiled, then memory is set aside for it on the stack
	int x = 3;
	float y;
*/

/* HEAP
If the size of something is determined when the program is run, then there¡¯s something called the heap (still in memory, but in a different place)
that holds data.  Stuff that goes on the heap is ¡°dynamically allocated¡±.
-The operator new sets aside space in the heap.
-We often use pointers
-If we allocate it, we should free it up
*/


/*
 * Stack  (Memory)
-Temporary memory storage for variables associated with each function
-When a function is called ¨C its variables are pushed onto the top of the stack
-When the function ends ¨C all of its variables are popped from the top of the stack
-Stack grows and shrinks as function variables are pushed and popped
-No need to manage memory
-Stack has size limits
-Stack variables only exist while the function created is pushed on the stack
-Nice and fast
 */

/*
 * Heap (memory in a different location)
-not managed automatically
-Memory set aside for items you might not know the size of ahead of time
-Variables in heap can be accessed globally
-Slower to access
-Less efficient than the heap
-Manually allocate space for variables on the heap and then free them when their use is done
 */
