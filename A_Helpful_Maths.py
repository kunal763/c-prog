str=input()
a=str.split("+")
a.sort()

for i in range(0,len(a)):
    if i==(len(a)-1):
        print(a[i],end='')
    else:    
        print(a[i],end='+')