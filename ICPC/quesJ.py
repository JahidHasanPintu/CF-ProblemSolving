def main():
    t = int(input().strip())
    for i in range(t):
        n, k = map(int, input().strip().split())
        times = list(map(int, input().strip().split()))
        res = 0
        for j in range(k):
            res = max(res, sum(times[:n]))
            times[0] += times[n - 1]
            times = sorted(times[:-1])
        print("Case {}: {}".format(i + 1, res))

if __name__ == '__main__':
    main()
