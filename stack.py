stack = []
bodmas = ['/','*','+','-']
operators = []
string = [char for char in input("Enter the string: ")]

for item in string:
    if item in bodmas:
        operators.insert(bodmas.index(item), item)

if '/' in operators:
    operators.sort()
    operators.pop(len(operators)-1)
    operators.sort()
    operators.insert(0, '/')
else:
    operators.sort()

i=0    
for op in operators:
    print()
    if i==0:
        stack.append(string[(string.index(op))-1])
        stack.append(string[(string.index(op))])
        stack.append(string[(string.index(op))+1])
        stack.reverse()

        print("Exp %s= " %i, stack.pop(), end="")
        print(stack.pop(), end="")
        print(stack.pop(), end="")
    elif i<(len(operators)-1):
        stack.append(string[(string.index(op))])
        stack.append(string[(string.index(op))+1])
        stack.reverse()

        print("Exp %s= " %i,"Exp%s"%(i-1) ,stack.pop(), end="")
        print(stack.pop(), end="")
        #a+b/c*b
    else:
        #stack.append(string[(string.index(op))-1])
        stack.append(string[(string.index(op))-1])
        stack.append(string[(string.index(op))])

        print("Exp %s= " %i,"Exp%s"%(i-1) ,stack.pop(), end="")
        print(stack.pop(), end="")
        #a+b/c*b
    i+=1
