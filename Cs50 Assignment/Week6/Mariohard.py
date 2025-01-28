userValue=int(input("Enter a value"))

for i in range(userValue+1):
    print(' '*(userValue-i)+ '*'*i+'  '+'*'*i+' '*userValue)
