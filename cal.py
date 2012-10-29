''' Basic Calculator in C 

Operations supported:
1. Addition
'''

if __name__=='__main__':
    a,b = raw_input('Input two numbers:: ').split()
    
    a = float(a)
    b = float(b)
    
    print 'The addition of {0} and {1} is {2}'.format(a,b,a+b)
