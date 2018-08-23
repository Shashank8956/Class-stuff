table = []

def add():
    word = input("\nEnter an operator: ")
    if word in table:
        return None
    else:
        return word

    
def notMain():
    while True:
        ch = input("Enter a choice:\n1. Add new\n2. Delete\n3. Search\n4. Exit\n")
        if ch=='1':
            
            temp = add()
            if temp!= None:
                table.append(temp)
            else:
                print("Item already exist\n")
                
        elif ch=='2':
            
            temp = input("\nEnter the Symbol to delete: ")
            if temp in table:
                table.remove(temp)
                print("Item removed\n")
            else:
                print("Item doesn't exist\n")
            
        elif ch=='3':

            temp = input("\nEnter the Symbol to be searched: ")
            if temp in table:
                print("\nItem exists at position: ", table.index(item)+1)
            else:
                print("\nItem not found\n")
            continue
        
        elif ch=='4':    
            break
            
        if len(table)==0:
            print("Table is empty!\n\n")
        else:    
            print("Symbol Table:")
            for index, item in enumerate(table):
                print("Index: ", index+1, "  Value: ", item, "  Address: ", hex(id(item)))
            print("\n\n")


notMain()
