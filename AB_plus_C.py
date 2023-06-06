t=int(input())
while(t):
    x=int(input())
    a=int(x**0.5)
    if(x==1):
        print(-1)
        
    
    elif(x-a*a!=0):
        print(a,a,x-a*a)
    elif(x-a*a==0):
        a-=1
        print(a,a,x-a*a)
    t-=1