#-------------------------------------------------------------------------------
# Name:        problem5.py
#
# Author:      Andrei Pislaras
#
# Created:     16/03/2019
#-------------------------------------------------------------------------------

def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair

def car(f):
    def left(a, b):
        return a
    return f(left)

def cdr(f):
    def right(a, b):
        return b
    return f(right)

def main():
    print(car(cons(3, 4)))
    print(cdr(cons(3, 4)))


if __name__ == '__main__':
    main()
