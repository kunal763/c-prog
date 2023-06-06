
testcases=int(input())
while testcases>0:
    x=int(input())
    arr_raw=input()
    arr=arr_raw.split()
    y=int(input())
    arr2_raw=input()
    arr2=arr2_raw.split()
    print(arr)
    print(arr2)
    num=100
    for i in range(0,y):
        for j in arr:
            if int(j) % int(arr2[i])==0:
                
                if num%int(j)==0 and num>int(j):
                    num=int(j)
                elif num%int(j)!=0:
                    num=int(j)
        print(num,sep="")
        arr.remove(str(num))
        print(arr)
    testcases-=1