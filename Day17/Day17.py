#Write your code here

class Calculator:
    def power(self, num, po):
        if num < 0 or po < 0:
            raise ValueError('n and p should be non-negative')
        return num ** po

myCalculator=Calculator()
T=int(input())
for i in range(T):
    n,p = map(int, input().split())
    try:
        ans=myCalculator.power(n,p)
        print(ans)
    except Exception as e:
        print(e)   
