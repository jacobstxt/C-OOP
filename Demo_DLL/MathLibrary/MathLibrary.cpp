// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" 
#include <utility>
#include <limits.h>
#include "MathLibrary.h"

// DLL internal state variables:
static unsigned long long previous;  // Previous value, if any
static unsigned long long current;   // Current sequence value
static unsigned index;               // Current seq. position

// Initialize a Fibonacci relation sequence
// such that F(0) = a, F(1) = b.
// This function must be called before any other function.
void fibonacci_init(const unsigned long long a, const unsigned long long b)
{
    index = 0;
    current = a;
    previous = b; // see special case when initialized
}

// Produce the next value in the sequence.
// Returns true on success, false on overflow.
bool fibonacci_next()
{
    // check to see if we'd overflow result or position
    if ((ULLONG_MAX - previous < current) ||
        (UINT_MAX == index))
    {
        return false;
    }

    // Special case when index == 0, just return b value
    if (index > 0)
    {
        // otherwise, calculate next sequence value
        previous += current;
    }
    std::swap(current, previous);
    ++index;
    return true;
}

// Get the current value in the sequence.
unsigned long long fibonacci_current()
{
    return current;
}

// Get the current index position in the sequence.
unsigned fibonacci_index()
{
    return index;
}
