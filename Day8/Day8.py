# Enter your code here. Read input from STDIN. Print output to STDOUT

test = int(input())
dict_var = {}
for i in range(0,test):
    lst = list(input().split(' '))
    dict_var[lst[0]] = int(lst[1])
for i in range(0,test):
    key = input()
    if key in dict_var:
        print("{}={}".format(key,dict_var[key]))
    else:
        print("Not found")
