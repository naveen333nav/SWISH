

x,y = input("").split(" ")
x,y = int(x),int(y)

sum = 0
while x>=1:
    sum = sum+x
    x =  x-x*y/100
    print(x)

print(int(sum))
