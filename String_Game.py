t=int(input())
while(t>0):
    len=int(input())
    str=input()
    count=0
    if len==1:
        print("Ramos")
    elif len>1:
        for i in range(0,len-1):
            if str[i+1]!=str[i]:
                count+=1
                a=str
        if count%2==0:
            print("Ramos")
        else:
            print("Zlatan")
    t=t-1
