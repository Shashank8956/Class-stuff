num = []
bodmas = ['/','*','+','-']
op = None
flag=0
res = 0

string  = input("Enter the expression: ").split()
newString = ''

res = 0

for item in string[:-2]:
    if item.isnumeric():
        nextNum = string[string.index(item)+2]
        #print("Num: %s; Num2: %s" %(item, nextNum))
        if nextNum.isnumeric():
            if string[string.index(item)+1] in bodmas:
                op = string[string.index(item)+1]
            if bodmas.index(op)==0:
                res = int(item) / int(string[string.index(item)+2])
            elif bodmas.index(op)==1:
                res = int(item) * int(string[string.index(item)+2])
            elif bodmas.index(op)==2:
                res = int(item) + int(string[string.index(item)+2])
            elif bodmas.index(op)==3:
                res = int(item) - int(string[string.index(item)+2])\

            if string.index(item)==0:
                ind = string.index(item)
                del string[ind+1]
                del string[ind]
                string.insert(0, res)
            else:
                ind = string.index(nextNum)
                string.remove(nextNum)
                del string[ind-1]
                del string[ind-2]
                string.insert(ind, res)

if string[1].isnumeric():                
    del string[1]

for item in string:
    print(item, end="")