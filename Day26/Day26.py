real_d, real_m, real_y = [int(x) for x in input().split(' ')]
expected_d, expected_m, expected_y = [int(x) for x in input().split(' ')]

if (real_y, real_m, real_d) <= (expected_y, expected_m, expected_d):
    print(0)
elif (real_y, real_m) == (expected_y, expected_m):
    print(15 * (real_d - expected_d))
elif real_y == expected_y:
    print(500 * (real_m - expected_m))
else:
    print(10000)
