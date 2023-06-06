t=int(input())
while t>0:
    x,y=map(int,input().split())
    if(0.9*x==y):
        print("EITHER")
    elif(0.9*x>y):
        print("DINING")
    else:
        print("ONLINE")
    t-=1