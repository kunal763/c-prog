def main():
    t = int(input())
    for _ in range(t):
        n=int(input())
        arr = list(map(int, input().split()))
        arr.sort()
        ans=0
        arr_set=set(arr)
        # print(arr_set)
        if len(arr_set)==n:
            for b in range(2,(arr[n-2]//arr[0])+1):
                for i in arr:
                    if i*b in arr and i*b*b in arr:
                        ans+=1

        print(ans)
    

if __name__ == '__main__':
    main()
