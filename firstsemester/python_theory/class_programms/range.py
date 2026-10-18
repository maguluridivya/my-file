n=int(input("enter n:"))
sumeven=0
print("even numbers")
for i in range(1,n+1):
    if i%2==0:
        print(i)
        sumeven+=i
print("sum of even numbers is:",sumeven)
n=int(input("enter n:"))
division=0
for i in range(1,n+1):
    if i%3==0 and i%5==0:
        division=division+1
print("count of numbers divisible by both 3 and 5 are:",division)