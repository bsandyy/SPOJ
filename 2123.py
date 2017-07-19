def counter(arr):
    count = 0
    avg = sum(arr) // len(arr)
    if sum(arr) % len(arr):
        print("-1")
    else:
        for elem in arr:
            if elem < avg:
                count += avg - elem
        print(count)


def main():
    arr = []
    while(True):
        n = int(input())
        if(n == -1):
            break
        else:
            while(n):
                arr.append(int(input()))
                n -= 1
            counter(arr)


if __name__ == '__main__':
    main()
