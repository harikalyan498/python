l=[]
key=int(input("enter key"))
x=int(input("enter size"))
for i in range(0,x):
   n=int(input())
   l.append(n)
   for i in range(0,x):
       if (key==l[i]):
             print("element found")
             
       else:
             print("element not found")