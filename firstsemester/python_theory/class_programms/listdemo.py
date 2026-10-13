marks=[ "sachin",50,55,78,98,54]#declares to store marks of sachin:
mymarks=[]#dynaamically  intitaliztion[intialized during execution]
for i in range(1,6):
    newmark=int(input("enter the marks:"))

    mymarks.append(newmark) #newmark value will be added to mymarks through the appendbuilt in list metho
print("the list elements are")
for i in range(len(mymarks)):
    print(mymarks[i])