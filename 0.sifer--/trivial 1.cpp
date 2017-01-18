//  Sifer Aseph
//  More Trivial on Xcode

#include <iostream>

void infiniteLoop();

int main() {
    
    
    return 0;
}

void infiniteLoop() {
    for (;;);
}

// Apparently this kind of commenting does not exist in C89. Had to fix that on all of my old code.
// cc1 is GCC's C compiler.
// Use: gcc -Wall -Wextra -ansi -pedantic stuff.c
// Fun fact: GCC used to be GNU C Compiler. It's now GNU Compiler Collection. It was created shortly after I was born.

// shallow copy vs deep copy

// Solution to finding the n smallest / n largest: sort the array.

/*
 Quote of the Moment
 
 "I bought Gradshteyn & Ryzhik because I had to write an answer to some homework problem in some physics class that I took. The problem had contorted itself into a perverse elliptic integral and its recovery was beyond my means, so I went to the bookstore, looked for something fat and Soviet, and found this gem. I forked over the cash for it, figuring that it was a long-term investment.
 
 I took it home and dutifully plagiarized some of its lines to satisfy my physics professor. For the next few months, that was the mode in which I used this book: read physics problem, translate into elliptic or hypergeometric beast, look up answer in G&R, cover up my tracks, get 9 or 10 points on the problem. Occasionally, I would own up to having looked something up.
 
 The book served its purpose well. Subsequently, I studied some integrals of the spinning top that were more or less right out of Nikiforov's book on special functions (another excellent source for those of you that would like to "earn" a PhD), and G&R stood well by its side. Indeed, I discovered how much fun it was to look up an integral whose complicated solution had been derived elsewhere, and then to look for patterns by analyzing the immediate neighbors of the given integral on the preceding and subsequent lines in G&R.
 
 After I was done with answering questions from physics professors, the book sat on the shelf taking up more room than several of its neighbors put together. Nonetheless, its binding was good, its typesetting clear, and its terse and copious stream of forbidding integral forms was pleasing to the eye.
 
 Some time passed, and one day I asked myself just what would motivate anybody to write such a large collection, so I started rummaging through its pages looking for a pattern. I realized that its organization was excellent (which would explain why I was able to find the answers for my homework), and I also found some sections that were just plain fun. The very beginning lists some sums of infinite series that can be derived during lunch or while waiting for a friend at a cafe (e.g. sum of k^3 = [1/2(n)(n+1)]^2 ). Then one can read about numbers and functions named after Euler, Jacobi, Bernoulli, Catalan... each line, more or less, is cross-referenced, so after you have given up trying to derive that darned product representation of the gamma function, you can go to the book in the library and see how Whittaker did it.
 
 After about 15 years of owning this book, I am nowhere near done with it. If you like math, and you want insurance against being bored, this book just might do the trick. As a bonus, it puts cute matrix stuff in the back (e.g. the "circulant") which one can read when desiring a break from the integrals. I know the book seems expensive, but think of if as spending about two bucks a year on it.
 
 I see that one can now obtain a CDRom version of G&R. An intriguing option, specially because it outputs in TeX; but really, how can anyone resist the large, stubby charm of its paper version?
 
 G&R can help you to deal with members of the opposite sex. I once used it to scare away a girlfriend that was becoming much too annoying, by pretending to be thickly engrossed in the process of memorizing every single integral in the "special functions" chapters. As for my mother, she was particularly proud of me when I showed her that I could actually understand "randomly selected" pages from this book (I don't suppose that I am giving anything away by remarking that books open naturally on sections that have been previously examined).
 
 For those of you that are concerned about home security, G&R is also a weapon. Some people surround themselves with baseball bats or, if they are particularly reckless, a handgun or two... I prefer to keep a fully-loaded G&R by my pillow, which I can hurl at any prowler at a moment's notice. Its shape is surprisingly well adjusted to the hand for the purposes of hurling, and if the covers are bound by a rubber band, the book maintains its shape quite stably as it sails across the room. Sell your Smith & Wesson and buy yourself a Gradshteyn & Ryzhik. You won't regret it."
 Ariel Mazzarelli's review on Table of Integrals, Series, and Products, Sixth Edition
 http://www.amazon.com/review/R1URYC1PURAEZO/
 */
